/**
 * @file kdtree.cpp
 * Implementation of KDTree class.
 */

#include <utility>
#include <algorithm>
#include <math.h>
#include "kdtree.h"

using namespace std;

template <int Dim>
bool KDTree<Dim>::smallerDimVal(const Point<Dim> &first,
                                const Point<Dim> &second, int curDim) const
{
  /**
   * @todo Implement this function!
   */
  if (first[curDim] < second[curDim])
  {
    return true;
  }
  else if (first[curDim] > second[curDim])
  {
    return false;
  }
  else
  {
    return first < second;
  }
}

template <int Dim>
bool KDTree<Dim>::shouldReplace(const Point<Dim> &target,
                                const Point<Dim> &currentBest,
                                const Point<Dim> &potential) const
{
  /**
   * @todo Implement this function!
   */
  double currentDistance = 0.0;
  double potentialDistance = 0.0;

  for (int i = 0; i < Dim; i++)
  {
    currentDistance += (currentBest[i] - target[i]) * (currentBest[i] - target[i]);
    potentialDistance += (potential[i] - target[i]) * (potential[i] - target[i]);
  }
  if (potentialDistance < currentDistance)
  {
    return true;
  }
  else if (potentialDistance > currentDistance)
  {
    return false;
  }
  else
  {
    return (potential < currentBest);
  }
}

template <int Dim>
KDTree<Dim>::KDTree(const vector<Point<Dim>> &newPoints)
{
  /**
   * @todo Implement this function!
   */
  if (newPoints.empty())
  {
    root = NULL;
  }
  for (unsigned int i = 0; i < newPoints.size(); i++)
  {
    points.push_back(newPoints[i]);
  }
  root = KDTreeHelper(0, newPoints.size() - 1, 0);
}

template <int Dim>
KDTree<Dim>::KDTree(const KDTree<Dim> &other)
{
  /**
   * @todo Implement this function!
   */
  this->root = copy(other.root);
}

template <int Dim>
typename KDTree<Dim>::KDTreeNode *KDTree<Dim>::KDTreeHelper(int left, int right, int dimension)
{
  if (left > right)
  {
    return NULL;
  }

  int k;
  int size = right - left + 1;
  if (size % 2 == 0)
  {
    k = (int)size / 2;
  }
  else
  {
    k = (int)size / 2 + 1;
  }

  int median = select(left, right, k, dimension);
  KDTreeNode *returnNode = new KDTreeNode(points[median]);
  returnNode->left = KDTreeHelper(left, median - 1, (dimension + 1) % Dim);
  returnNode->right = KDTreeHelper(median + 1, right, (dimension + 1) % Dim);

  return returnNode;
}

template <int Dim>
int KDTree<Dim>::select(int left, int right, int value, int dimension)
{
  if (left == right)
  {
    return left;
  }

  int pivot = partition(left, right, dimension);

  if (pivot - left == value - 1)
  {
    return pivot;
  }
  else if (pivot - left > value - 1)
  {
    return select(left, pivot - 1, value, dimension);
  }
  else
  {
    return select(pivot + 1, right, value - pivot + left - 1, dimension);
  }
}

template <int Dim>
int KDTree<Dim>::partition(int left, int right, int dimension)
{
  int i = left - 1;
  Point<Dim> pivot = points[right];

  for (int j = left; j <= right - 1; j++)
  {
    if (smallerDimVal(points[j], pivot, dimension))
    {
      i++;
      Point<Dim> temp = points[i];
      points[i] = points[j];
      points[j] = temp;
    }
  }

  Point<Dim> temp = points[i + 1];
  points[i + 1] = points[right];
  points[right] = temp;
  return i + 1;
}

template <int Dim>
typename KDTree<Dim>::KDTreeNode *KDTree<Dim>::copy(KDTreeNode *root)
{
  if (root == NULL)
  {
    return NULL;
  }

  KDTreeNode *new_root = new KDTreeNode(root->point);
  new_root->left = copy(root->left);
  new_root->right = copy(root->right);

  return new_root;
}

template <int Dim>
const KDTree<Dim> &KDTree<Dim>::operator=(const KDTree<Dim> &rhs)
{
  /**
   * @todo Implement this function!
   */

  if (this != &rhs)
  {
    delete *this;
    this = new KDTree(rhs);
  }
  return *this;
}

template <int Dim>
KDTree<Dim>::~KDTree()
{
  /**
   * @todo Implement this function!
   */
  remove(root);
}

template <int Dim>
void KDTree<Dim>::remove(KDTreeNode *subroot)
{
  if (!subroot)
    return;
  remove(subroot->left);
  remove(subroot->right);
  delete subroot;
}

template <int Dim>
Point<Dim> KDTree<Dim>::findNearestNeighbor(const Point<Dim> &query) const
{
  /**
   * @todo Implement this function!
   */

  if (root == NULL)
  {
    return Point<Dim>();
  }
  else
  {
    return findNearestNeighbor(query, root, 0);
  }
}
template <int Dim>
double KDTree<Dim>::radius(const Point<Dim> first, const Point<Dim> second) const
{
  double distanceSquared = 0;

  for (int i = 0; i < Dim; i++)
  {
    distanceSquared += (first[i] - second[i]) * (first[i] - second[i]);
  }

  return sqrt(distanceSquared);
}

template <int Dim>
Point<Dim> KDTree<Dim>::findNearestNeighbor(const Point<Dim> &query, KDTreeNode *root, int currDim) const
{
  if (root == NULL)
  {
    return Point<Dim>();
  }

  if (root->left == NULL && root->right == NULL)
  {
    return root->point;
  }

  Point<Dim> temp = root->point;
  Point<Dim> &currPoint = root->point;

  bool wentLeft;

  if (smallerDimVal(query, currPoint, currDim))
  {
    if (root->left != NULL)
    {
      temp = findNearestNeighbor(query, root->left, (currDim + 1) % Dim);
    }
    wentLeft = true;
  }
  else
  {
    if (root->right != NULL)
    {
      temp = findNearestNeighbor(query, root->right, (currDim + 1) % Dim);
    }
    wentLeft = false;
  }
  Point<Dim> best = temp;

  double currRadius = radius(query, temp);

  if (shouldReplace(query, best, root->point))
  {
    best = root->point;
    double currRadius = radius(query, best);
  }

  if (query[currDim] - currRadius <= root->point[currDim] && root->point[currDim] <= query[currDim] + currRadius)
  {
    Point<Dim> temp2;

    if (wentLeft && root->right != NULL)
    {
      temp2 = findNearestNeighbor(query, root->right, (currDim + 1) % Dim);
      if (shouldReplace(query, best, temp2))
      {
        best = temp2;
        currRadius = radius(query, temp2);
      }
    }

    if (!wentLeft && root->left != NULL)
    {
      temp2 = findNearestNeighbor(query, root->left, (currDim + 1) % Dim);
      if (shouldReplace(query, best, temp2))
      {
        best = temp2;
        currRadius = radius(query, temp2);
      }
    }
  }

  return best;
}