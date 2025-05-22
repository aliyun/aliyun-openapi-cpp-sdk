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

#include <alibabacloud/rds/model/DescribeRCDeploymentSetsRequest.h>

using AlibabaCloud::Rds::Model::DescribeRCDeploymentSetsRequest;

DescribeRCDeploymentSetsRequest::DescribeRCDeploymentSetsRequest()
    : RpcServiceRequest("rds", "2014-08-15", "DescribeRCDeploymentSets") {
  setMethod(HttpRequest::Method::Get);
}

DescribeRCDeploymentSetsRequest::~DescribeRCDeploymentSetsRequest() {}

std::string DescribeRCDeploymentSetsRequest::getDeploymentSetIds() const {
  return deploymentSetIds_;
}

void DescribeRCDeploymentSetsRequest::setDeploymentSetIds(const std::string &deploymentSetIds) {
  deploymentSetIds_ = deploymentSetIds;
  setParameter(std::string("DeploymentSetIds"), deploymentSetIds);
}

int DescribeRCDeploymentSetsRequest::getPageNumber() const {
  return pageNumber_;
}

void DescribeRCDeploymentSetsRequest::setPageNumber(int pageNumber) {
  pageNumber_ = pageNumber;
  setParameter(std::string("PageNumber"), std::to_string(pageNumber));
}

std::string DescribeRCDeploymentSetsRequest::getRegionId() const {
  return regionId_;
}

void DescribeRCDeploymentSetsRequest::setRegionId(const std::string &regionId) {
  regionId_ = regionId;
  setParameter(std::string("RegionId"), regionId);
}

int DescribeRCDeploymentSetsRequest::getPageSize() const {
  return pageSize_;
}

void DescribeRCDeploymentSetsRequest::setPageSize(int pageSize) {
  pageSize_ = pageSize;
  setParameter(std::string("PageSize"), std::to_string(pageSize));
}

std::string DescribeRCDeploymentSetsRequest::getTag() const {
  return tag_;
}

void DescribeRCDeploymentSetsRequest::setTag(const std::string &tag) {
  tag_ = tag;
  setParameter(std::string("Tag"), tag);
}

std::string DescribeRCDeploymentSetsRequest::getDeploymentSetName() const {
  return deploymentSetName_;
}

void DescribeRCDeploymentSetsRequest::setDeploymentSetName(const std::string &deploymentSetName) {
  deploymentSetName_ = deploymentSetName;
  setParameter(std::string("DeploymentSetName"), deploymentSetName);
}

std::string DescribeRCDeploymentSetsRequest::getStrategy() const {
  return strategy_;
}

void DescribeRCDeploymentSetsRequest::setStrategy(const std::string &strategy) {
  strategy_ = strategy;
  setParameter(std::string("Strategy"), strategy);
}

