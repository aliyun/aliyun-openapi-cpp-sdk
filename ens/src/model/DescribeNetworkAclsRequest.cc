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

#include <alibabacloud/ens/model/DescribeNetworkAclsRequest.h>

using AlibabaCloud::Ens::Model::DescribeNetworkAclsRequest;

DescribeNetworkAclsRequest::DescribeNetworkAclsRequest()
    : RpcServiceRequest("ens", "2017-11-10", "DescribeNetworkAcls") {
  setMethod(HttpRequest::Method::Get);
}

DescribeNetworkAclsRequest::~DescribeNetworkAclsRequest() {}

std::string DescribeNetworkAclsRequest::getPageNumber() const {
  return pageNumber_;
}

void DescribeNetworkAclsRequest::setPageNumber(const std::string &pageNumber) {
  pageNumber_ = pageNumber;
  setParameter(std::string("PageNumber"), pageNumber);
}

std::string DescribeNetworkAclsRequest::getPageSize() const {
  return pageSize_;
}

void DescribeNetworkAclsRequest::setPageSize(const std::string &pageSize) {
  pageSize_ = pageSize;
  setParameter(std::string("PageSize"), pageSize);
}

std::string DescribeNetworkAclsRequest::getNetworkAclId() const {
  return networkAclId_;
}

void DescribeNetworkAclsRequest::setNetworkAclId(const std::string &networkAclId) {
  networkAclId_ = networkAclId;
  setParameter(std::string("NetworkAclId"), networkAclId);
}

std::string DescribeNetworkAclsRequest::getResourceId() const {
  return resourceId_;
}

void DescribeNetworkAclsRequest::setResourceId(const std::string &resourceId) {
  resourceId_ = resourceId;
  setParameter(std::string("ResourceId"), resourceId);
}

std::string DescribeNetworkAclsRequest::getNetworkAclName() const {
  return networkAclName_;
}

void DescribeNetworkAclsRequest::setNetworkAclName(const std::string &networkAclName) {
  networkAclName_ = networkAclName;
  setParameter(std::string("NetworkAclName"), networkAclName);
}

