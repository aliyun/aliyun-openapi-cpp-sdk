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

#include <alibabacloud/eais/model/DescribeEaisRequest.h>

using AlibabaCloud::Eais::Model::DescribeEaisRequest;

DescribeEaisRequest::DescribeEaisRequest()
    : RpcServiceRequest("eais", "2019-06-24", "DescribeEais") {
  setMethod(HttpRequest::Method::Post);
}

DescribeEaisRequest::~DescribeEaisRequest() {}

std::string DescribeEaisRequest::getElasticAcceleratedInstanceIds() const {
  return elasticAcceleratedInstanceIds_;
}

void DescribeEaisRequest::setElasticAcceleratedInstanceIds(const std::string &elasticAcceleratedInstanceIds) {
  elasticAcceleratedInstanceIds_ = elasticAcceleratedInstanceIds;
  setParameter(std::string("ElasticAcceleratedInstanceIds"), elasticAcceleratedInstanceIds);
}

int DescribeEaisRequest::getPageNumber() const {
  return pageNumber_;
}

void DescribeEaisRequest::setPageNumber(int pageNumber) {
  pageNumber_ = pageNumber;
  setParameter(std::string("PageNumber"), std::to_string(pageNumber));
}

std::string DescribeEaisRequest::getResourceGroupId() const {
  return resourceGroupId_;
}

void DescribeEaisRequest::setResourceGroupId(const std::string &resourceGroupId) {
  resourceGroupId_ = resourceGroupId;
  setParameter(std::string("ResourceGroupId"), resourceGroupId);
}

std::string DescribeEaisRequest::getRegionId() const {
  return regionId_;
}

void DescribeEaisRequest::setRegionId(const std::string &regionId) {
  regionId_ = regionId;
  setParameter(std::string("RegionId"), regionId);
}

int DescribeEaisRequest::getPageSize() const {
  return pageSize_;
}

void DescribeEaisRequest::setPageSize(int pageSize) {
  pageSize_ = pageSize;
  setParameter(std::string("PageSize"), std::to_string(pageSize));
}

std::string DescribeEaisRequest::getInstanceType() const {
  return instanceType_;
}

void DescribeEaisRequest::setInstanceType(const std::string &instanceType) {
  instanceType_ = instanceType;
  setParameter(std::string("InstanceType"), instanceType);
}

std::vector<DescribeEaisRequest::Tag> DescribeEaisRequest::getTag() const {
  return tag_;
}

void DescribeEaisRequest::setTag(const std::vector<DescribeEaisRequest::Tag> &tag) {
  tag_ = tag;
  for(int dep1 = 0; dep1 != tag.size(); dep1++) {
  auto tagObj = tag.at(dep1);
  std::string tagObjStr = std::string("Tag") + "." + std::to_string(dep1 + 1);
    setParameter(tagObjStr + ".Value", tagObj.value);
    setParameter(tagObjStr + ".Key", tagObj.key);
  }
}

std::string DescribeEaisRequest::getClientInstanceId() const {
  return clientInstanceId_;
}

void DescribeEaisRequest::setClientInstanceId(const std::string &clientInstanceId) {
  clientInstanceId_ = clientInstanceId;
  setParameter(std::string("ClientInstanceId"), clientInstanceId);
}

std::string DescribeEaisRequest::getInstanceName() const {
  return instanceName_;
}

void DescribeEaisRequest::setInstanceName(const std::string &instanceName) {
  instanceName_ = instanceName;
  setParameter(std::string("InstanceName"), instanceName);
}

std::string DescribeEaisRequest::getStatus() const {
  return status_;
}

void DescribeEaisRequest::setStatus(const std::string &status) {
  status_ = status;
  setParameter(std::string("Status"), status);
}

