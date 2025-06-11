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

#include <alibabacloud/oceanbasepro/model/DescribeInstancesRequest.h>

using AlibabaCloud::OceanBasePro::Model::DescribeInstancesRequest;

DescribeInstancesRequest::DescribeInstancesRequest()
    : RpcServiceRequest("oceanbasepro", "2019-09-01", "DescribeInstances") {
  setMethod(HttpRequest::Method::Post);
}

DescribeInstancesRequest::~DescribeInstancesRequest() {}

std::string DescribeInstancesRequest::getSearchKey() const {
  return searchKey_;
}

void DescribeInstancesRequest::setSearchKey(const std::string &searchKey) {
  searchKey_ = searchKey;
  setBodyParameter(std::string("SearchKey"), searchKey);
}

int DescribeInstancesRequest::getPageNumber() const {
  return pageNumber_;
}

void DescribeInstancesRequest::setPageNumber(int pageNumber) {
  pageNumber_ = pageNumber;
  setBodyParameter(std::string("PageNumber"), std::to_string(pageNumber));
}

std::string DescribeInstancesRequest::getResourceGroupId() const {
  return resourceGroupId_;
}

void DescribeInstancesRequest::setResourceGroupId(const std::string &resourceGroupId) {
  resourceGroupId_ = resourceGroupId;
  setBodyParameter(std::string("ResourceGroupId"), resourceGroupId);
}

int DescribeInstancesRequest::getPageSize() const {
  return pageSize_;
}

void DescribeInstancesRequest::setPageSize(int pageSize) {
  pageSize_ = pageSize;
  setBodyParameter(std::string("PageSize"), std::to_string(pageSize));
}

std::string DescribeInstancesRequest::getInstanceId() const {
  return instanceId_;
}

void DescribeInstancesRequest::setInstanceId(const std::string &instanceId) {
  instanceId_ = instanceId;
  setBodyParameter(std::string("InstanceId"), instanceId);
}

std::string DescribeInstancesRequest::getInstanceName() const {
  return instanceName_;
}

void DescribeInstancesRequest::setInstanceName(const std::string &instanceName) {
  instanceName_ = instanceName;
  setBodyParameter(std::string("InstanceName"), instanceName);
}

bool DescribeInstancesRequest::getWithOBCloudInstances() const {
  return withOBCloudInstances_;
}

void DescribeInstancesRequest::setWithOBCloudInstances(bool withOBCloudInstances) {
  withOBCloudInstances_ = withOBCloudInstances;
  setBodyParameter(std::string("WithOBCloudInstances"), withOBCloudInstances ? "true" : "false");
}

