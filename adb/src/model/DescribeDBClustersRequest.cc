/*
 * Copyright 2009-2017 Alibaba Cloud All rights reserved.
 *
 * Licensed under the Apache License, Version 2.0 (the "License");
 * you may not use this file except in compliance with the License.
 * You may obtain a copy of the License at
 *
 *      http://www.apache.org/licenses/LICENSE-2.0
 *
 * Unless required by applicable law or agreed to in writing, software
 * distributed under the License is distributed on an "AS IS" BASIS,
 * WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 * See the License for the specific language governing permissions and
 * limitations under the License.
 */

#include <alibabacloud/adb/model/DescribeDBClustersRequest.h>

using AlibabaCloud::Adb::Model::DescribeDBClustersRequest;

DescribeDBClustersRequest::DescribeDBClustersRequest()
    : RpcServiceRequest("adb", "2021-12-01", "DescribeDBClusters") {
  setMethod(HttpRequest::Method::Post);
}

DescribeDBClustersRequest::~DescribeDBClustersRequest() {}

std::string DescribeDBClustersRequest::getDBClusterDescription() const {
  return dBClusterDescription_;
}

void DescribeDBClustersRequest::setDBClusterDescription(const std::string &dBClusterDescription) {
  dBClusterDescription_ = dBClusterDescription;
  setParameter(std::string("DBClusterDescription"), dBClusterDescription);
}

std::string DescribeDBClustersRequest::getDBClusterStatus() const {
  return dBClusterStatus_;
}

void DescribeDBClustersRequest::setDBClusterStatus(const std::string &dBClusterStatus) {
  dBClusterStatus_ = dBClusterStatus;
  setParameter(std::string("DBClusterStatus"), dBClusterStatus);
}

int DescribeDBClustersRequest::getPageNumber() const {
  return pageNumber_;
}

void DescribeDBClustersRequest::setPageNumber(int pageNumber) {
  pageNumber_ = pageNumber;
  setParameter(std::string("PageNumber"), std::to_string(pageNumber));
}

std::string DescribeDBClustersRequest::getAccessKeyId() const {
  return accessKeyId_;
}

void DescribeDBClustersRequest::setAccessKeyId(const std::string &accessKeyId) {
  accessKeyId_ = accessKeyId;
  setParameter(std::string("AccessKeyId"), accessKeyId);
}

std::string DescribeDBClustersRequest::getResourceGroupId() const {
  return resourceGroupId_;
}

void DescribeDBClustersRequest::setResourceGroupId(const std::string &resourceGroupId) {
  resourceGroupId_ = resourceGroupId;
  setParameter(std::string("ResourceGroupId"), resourceGroupId);
}

std::string DescribeDBClustersRequest::getRegionId() const {
  return regionId_;
}

void DescribeDBClustersRequest::setRegionId(const std::string &regionId) {
  regionId_ = regionId;
  setParameter(std::string("RegionId"), regionId);
}

int DescribeDBClustersRequest::getPageSize() const {
  return pageSize_;
}

void DescribeDBClustersRequest::setPageSize(int pageSize) {
  pageSize_ = pageSize;
  setParameter(std::string("PageSize"), std::to_string(pageSize));
}

std::string DescribeDBClustersRequest::getDBClusterIds() const {
  return dBClusterIds_;
}

void DescribeDBClustersRequest::setDBClusterIds(const std::string &dBClusterIds) {
  dBClusterIds_ = dBClusterIds;
  setParameter(std::string("DBClusterIds"), dBClusterIds);
}

