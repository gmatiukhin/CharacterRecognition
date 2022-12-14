#pragma once
#include <eigen3/Eigen/Dense>
#include <vector>
const uint32_t CELL_SIZE = 16;

/// Calculate Eucledian-Mahalanobis distance
double CalculateEMD(Eigen::VectorXd observation, Eigen::VectorXd kernel,
                    Eigen::MatrixXd covariance);

/// Calculate Eucledian-Mahalanobis covariance matrix
Eigen::MatrixXd CovarianceEucledianMahalanobis(
    std::vector<Eigen::VectorXd> objects, Eigen::VectorXd kernel);
