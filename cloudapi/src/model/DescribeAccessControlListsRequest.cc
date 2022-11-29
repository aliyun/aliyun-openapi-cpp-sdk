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

#include <alibabacloud/cloudapi/model/DescribeAccessControlListsRequest.h>

using AlibabaCloud::CloudAPI::Model::DescribeAccessControlListsRequest;

DescribeAccessControlListsRequest::DescribeAccessControlListsRequest()
    : RpcServiceRequest("cloudapi", "2016-07-14", "DescribeAccessControlLists") {
  setMethod(HttpRequest::Method::Post);
}

DescribeAccessControlListsRequest::~DescribeAccessControlListsRequest() {}

std::string DescribeAccessControlListsRequest::getAclName() const {
  return aclName_;
}

void DescribeAccessControlListsRequest::setAclName(const std::string &aclName) {
  aclName_ = aclName;
  setParameter(std::string("AclName"), aclName);
}

std::string DescribeAccessControlListsRequest::getAddressIPVersion() const {
  return addressIPVersion_;
}

void DescribeAccessControlListsRequest::setAddressIPVersion(const std::string &addressIPVersion) {
  addressIPVersion_ = addressIPVersion;
  setParameter(std::string("AddressIPVersion"), addressIPVersion);
}

int DescribeAccessControlListsRequest::getPageNumber() const {
  return pageNumber_;
}

void DescribeAccessControlListsRequest::setPageNumber(int pageNumber) {
  pageNumber_ = pageNumber;
  setParameter(std::string("PageNumber"), std::to_string(pageNumber));
}

std::string DescribeAccessControlListsRequest::getAccessKeyId() const {
  return accessKeyId_;
}

void DescribeAccessControlListsRequest::setAccessKeyId(const std::string &accessKeyId) {
  accessKeyId_ = accessKeyId;
  setParameter(std::string("AccessKeyId"), accessKeyId);
}

std::string DescribeAccessControlListsRequest::getSecurityToken() const {
  return securityToken_;
}

void DescribeAccessControlListsRequest::setSecurityToken(const std::string &securityToken) {
  securityToken_ = securityToken;
  setParameter(std::string("SecurityToken"), securityToken);
}

int DescribeAccessControlListsRequest::getPageSize() const {
  return pageSize_;
}

void DescribeAccessControlListsRequest::setPageSize(int pageSize) {
  pageSize_ = pageSize;
  setParameter(std::string("PageSize"), std::to_string(pageSize));
}

