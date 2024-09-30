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

#include <alibabacloud/tag/model/ListPoliciesRequest.h>

using AlibabaCloud::Tag::Model::ListPoliciesRequest;

ListPoliciesRequest::ListPoliciesRequest()
    : RpcServiceRequest("tag", "2018-08-28", "ListPolicies") {
  setMethod(HttpRequest::Method::Post);
}

ListPoliciesRequest::~ListPoliciesRequest() {}

std::vector<std::string> ListPoliciesRequest::getPolicyNames() const {
  return policyNames_;
}

void ListPoliciesRequest::setPolicyNames(const std::vector<std::string> &policyNames) {
  policyNames_ = policyNames;
}

std::vector<std::string> ListPoliciesRequest::getPolicyIds() const {
  return policyIds_;
}

void ListPoliciesRequest::setPolicyIds(const std::vector<std::string> &policyIds) {
  policyIds_ = policyIds;
}

std::string ListPoliciesRequest::getRegionId() const {
  return regionId_;
}

void ListPoliciesRequest::setRegionId(const std::string &regionId) {
  regionId_ = regionId;
  setParameter(std::string("RegionId"), regionId);
}

std::string ListPoliciesRequest::getNextToken() const {
  return nextToken_;
}

void ListPoliciesRequest::setNextToken(const std::string &nextToken) {
  nextToken_ = nextToken;
  setParameter(std::string("NextToken"), nextToken);
}

std::string ListPoliciesRequest::getResourceOwnerAccount() const {
  return resourceOwnerAccount_;
}

void ListPoliciesRequest::setResourceOwnerAccount(const std::string &resourceOwnerAccount) {
  resourceOwnerAccount_ = resourceOwnerAccount;
  setParameter(std::string("ResourceOwnerAccount"), resourceOwnerAccount);
}

std::string ListPoliciesRequest::getOwnerAccount() const {
  return ownerAccount_;
}

void ListPoliciesRequest::setOwnerAccount(const std::string &ownerAccount) {
  ownerAccount_ = ownerAccount;
  setParameter(std::string("OwnerAccount"), ownerAccount);
}

std::string ListPoliciesRequest::getUserType() const {
  return userType_;
}

void ListPoliciesRequest::setUserType(const std::string &userType) {
  userType_ = userType;
  setParameter(std::string("UserType"), userType);
}

long ListPoliciesRequest::getOwnerId() const {
  return ownerId_;
}

void ListPoliciesRequest::setOwnerId(long ownerId) {
  ownerId_ = ownerId;
  setParameter(std::string("OwnerId"), std::to_string(ownerId));
}

int ListPoliciesRequest::getMaxResult() const {
  return maxResult_;
}

void ListPoliciesRequest::setMaxResult(int maxResult) {
  maxResult_ = maxResult;
  setParameter(std::string("MaxResult"), std::to_string(maxResult));
}

