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

#include <alibabacloud/vpc/model/DescribeIPv6TranslatorAclListsRequest.h>

using AlibabaCloud::Vpc::Model::DescribeIPv6TranslatorAclListsRequest;

DescribeIPv6TranslatorAclListsRequest::DescribeIPv6TranslatorAclListsRequest()
    : RpcServiceRequest("vpc", "2016-04-28", "DescribeIPv6TranslatorAclLists") {
  setMethod(HttpRequest::Method::Post);
}

DescribeIPv6TranslatorAclListsRequest::~DescribeIPv6TranslatorAclListsRequest() {}

long DescribeIPv6TranslatorAclListsRequest::getResourceOwnerId() const {
  return resourceOwnerId_;
}

void DescribeIPv6TranslatorAclListsRequest::setResourceOwnerId(long resourceOwnerId) {
  resourceOwnerId_ = resourceOwnerId;
  setParameter(std::string("ResourceOwnerId"), std::to_string(resourceOwnerId));
}

std::string DescribeIPv6TranslatorAclListsRequest::getAclName() const {
  return aclName_;
}

void DescribeIPv6TranslatorAclListsRequest::setAclName(const std::string &aclName) {
  aclName_ = aclName;
  setParameter(std::string("AclName"), aclName);
}

int DescribeIPv6TranslatorAclListsRequest::getPageNumber() const {
  return pageNumber_;
}

void DescribeIPv6TranslatorAclListsRequest::setPageNumber(int pageNumber) {
  pageNumber_ = pageNumber;
  setParameter(std::string("PageNumber"), std::to_string(pageNumber));
}

std::string DescribeIPv6TranslatorAclListsRequest::getRegionId() const {
  return regionId_;
}

void DescribeIPv6TranslatorAclListsRequest::setRegionId(const std::string &regionId) {
  regionId_ = regionId;
  setParameter(std::string("RegionId"), regionId);
}

int DescribeIPv6TranslatorAclListsRequest::getPageSize() const {
  return pageSize_;
}

void DescribeIPv6TranslatorAclListsRequest::setPageSize(int pageSize) {
  pageSize_ = pageSize;
  setParameter(std::string("PageSize"), std::to_string(pageSize));
}

std::string DescribeIPv6TranslatorAclListsRequest::getAclId() const {
  return aclId_;
}

void DescribeIPv6TranslatorAclListsRequest::setAclId(const std::string &aclId) {
  aclId_ = aclId;
  setParameter(std::string("AclId"), aclId);
}

std::string DescribeIPv6TranslatorAclListsRequest::getResourceOwnerAccount() const {
  return resourceOwnerAccount_;
}

void DescribeIPv6TranslatorAclListsRequest::setResourceOwnerAccount(const std::string &resourceOwnerAccount) {
  resourceOwnerAccount_ = resourceOwnerAccount;
  setParameter(std::string("ResourceOwnerAccount"), resourceOwnerAccount);
}

std::string DescribeIPv6TranslatorAclListsRequest::getOwnerAccount() const {
  return ownerAccount_;
}

void DescribeIPv6TranslatorAclListsRequest::setOwnerAccount(const std::string &ownerAccount) {
  ownerAccount_ = ownerAccount;
  setParameter(std::string("OwnerAccount"), ownerAccount);
}

long DescribeIPv6TranslatorAclListsRequest::getOwnerId() const {
  return ownerId_;
}

void DescribeIPv6TranslatorAclListsRequest::setOwnerId(long ownerId) {
  ownerId_ = ownerId;
  setParameter(std::string("OwnerId"), std::to_string(ownerId));
}

