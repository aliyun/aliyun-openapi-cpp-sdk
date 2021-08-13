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

#include <alibabacloud/smartag/model/DescribeGrantRulesRequest.h>

using AlibabaCloud::Smartag::Model::DescribeGrantRulesRequest;

DescribeGrantRulesRequest::DescribeGrantRulesRequest()
    : RpcServiceRequest("smartag", "2018-03-13", "DescribeGrantRules") {
  setMethod(HttpRequest::Method::Post);
}

DescribeGrantRulesRequest::~DescribeGrantRulesRequest() {}

long DescribeGrantRulesRequest::getResourceOwnerId() const {
  return resourceOwnerId_;
}

void DescribeGrantRulesRequest::setResourceOwnerId(long resourceOwnerId) {
  resourceOwnerId_ = resourceOwnerId;
  setParameter(std::string("ResourceOwnerId"), std::to_string(resourceOwnerId));
}

int DescribeGrantRulesRequest::getPageNumber() const {
  return pageNumber_;
}

void DescribeGrantRulesRequest::setPageNumber(int pageNumber) {
  pageNumber_ = pageNumber;
  setParameter(std::string("PageNumber"), std::to_string(pageNumber));
}

std::string DescribeGrantRulesRequest::getRegionId() const {
  return regionId_;
}

void DescribeGrantRulesRequest::setRegionId(const std::string &regionId) {
  regionId_ = regionId;
  setParameter(std::string("RegionId"), regionId);
}

int DescribeGrantRulesRequest::getPageSize() const {
  return pageSize_;
}

void DescribeGrantRulesRequest::setPageSize(int pageSize) {
  pageSize_ = pageSize;
  setParameter(std::string("PageSize"), std::to_string(pageSize));
}

std::string DescribeGrantRulesRequest::getResourceOwnerAccount() const {
  return resourceOwnerAccount_;
}

void DescribeGrantRulesRequest::setResourceOwnerAccount(const std::string &resourceOwnerAccount) {
  resourceOwnerAccount_ = resourceOwnerAccount;
  setParameter(std::string("ResourceOwnerAccount"), resourceOwnerAccount);
}

std::string DescribeGrantRulesRequest::getOwnerAccount() const {
  return ownerAccount_;
}

void DescribeGrantRulesRequest::setOwnerAccount(const std::string &ownerAccount) {
  ownerAccount_ = ownerAccount;
  setParameter(std::string("OwnerAccount"), ownerAccount);
}

std::string DescribeGrantRulesRequest::getAssociatedCcnId() const {
  return associatedCcnId_;
}

void DescribeGrantRulesRequest::setAssociatedCcnId(const std::string &associatedCcnId) {
  associatedCcnId_ = associatedCcnId;
  setParameter(std::string("AssociatedCcnId"), associatedCcnId);
}

long DescribeGrantRulesRequest::getOwnerId() const {
  return ownerId_;
}

void DescribeGrantRulesRequest::setOwnerId(long ownerId) {
  ownerId_ = ownerId;
  setParameter(std::string("OwnerId"), std::to_string(ownerId));
}

