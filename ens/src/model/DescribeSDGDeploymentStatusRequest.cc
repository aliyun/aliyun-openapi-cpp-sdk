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

#include <alibabacloud/ens/model/DescribeSDGDeploymentStatusRequest.h>

using AlibabaCloud::Ens::Model::DescribeSDGDeploymentStatusRequest;

DescribeSDGDeploymentStatusRequest::DescribeSDGDeploymentStatusRequest()
    : RpcServiceRequest("ens", "2017-11-10", "DescribeSDGDeploymentStatus") {
  setMethod(HttpRequest::Method::Post);
}

DescribeSDGDeploymentStatusRequest::~DescribeSDGDeploymentStatusRequest() {}

std::vector<DescribeSDGDeploymentStatusRequest::std::string> DescribeSDGDeploymentStatusRequest::getRegionIds() const {
  return regionIds_;
}

void DescribeSDGDeploymentStatusRequest::setRegionIds(const std::vector<DescribeSDGDeploymentStatusRequest::std::string> &regionIds) {
  regionIds_ = regionIds;
  for(int dep1 = 0; dep1 != regionIds.size(); dep1++) {
    setParameter(std::string("RegionIds") + "." + std::to_string(dep1 + 1), regionIds[dep1]);
  }
}

std::vector<DescribeSDGDeploymentStatusRequest::std::string> DescribeSDGDeploymentStatusRequest::getInstanceIds() const {
  return instanceIds_;
}

void DescribeSDGDeploymentStatusRequest::setInstanceIds(const std::vector<DescribeSDGDeploymentStatusRequest::std::string> &instanceIds) {
  instanceIds_ = instanceIds;
  for(int dep1 = 0; dep1 != instanceIds.size(); dep1++) {
    setParameter(std::string("InstanceIds") + "." + std::to_string(dep1 + 1), instanceIds[dep1]);
  }
}

std::string DescribeSDGDeploymentStatusRequest::getStatus() const {
  return status_;
}

void DescribeSDGDeploymentStatusRequest::setStatus(const std::string &status) {
  status_ = status;
  setParameter(std::string("Status"), status);
}

std::string DescribeSDGDeploymentStatusRequest::getDeploymentType() const {
  return deploymentType_;
}

void DescribeSDGDeploymentStatusRequest::setDeploymentType(const std::string &deploymentType) {
  deploymentType_ = deploymentType;
  setParameter(std::string("DeploymentType"), deploymentType);
}

int DescribeSDGDeploymentStatusRequest::getPageNumber() const {
  return pageNumber_;
}

void DescribeSDGDeploymentStatusRequest::setPageNumber(int pageNumber) {
  pageNumber_ = pageNumber;
  setParameter(std::string("PageNumber"), std::to_string(pageNumber));
}

std::string DescribeSDGDeploymentStatusRequest::getSDGId() const {
  return sDGId_;
}

void DescribeSDGDeploymentStatusRequest::setSDGId(const std::string &sDGId) {
  sDGId_ = sDGId;
  setParameter(std::string("SDGId"), sDGId);
}

int DescribeSDGDeploymentStatusRequest::getPageSize() const {
  return pageSize_;
}

void DescribeSDGDeploymentStatusRequest::setPageSize(int pageSize) {
  pageSize_ = pageSize;
  setParameter(std::string("PageSize"), std::to_string(pageSize));
}

