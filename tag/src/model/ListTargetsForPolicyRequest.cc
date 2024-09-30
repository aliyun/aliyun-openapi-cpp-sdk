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

#include <alibabacloud/tag/model/ListTargetsForPolicyRequest.h>

using AlibabaCloud::Tag::Model::ListTargetsForPolicyRequest;

ListTargetsForPolicyRequest::ListTargetsForPolicyRequest()
    : RpcServiceRequest("tag", "2018-08-28", "ListTargetsForPolicy") {
  setMethod(HttpRequest::Method::Post);
}

ListTargetsForPolicyRequest::~ListTargetsForPolicyRequest() {}

std::string ListTargetsForPolicyRequest::getPolicyId() const {
  return policyId_;
}

void ListTargetsForPolicyRequest::setPolicyId(const std::string &policyId) {
  policyId_ = policyId;
  setParameter(std::string("PolicyId"), policyId);
}

std::string ListTargetsForPolicyRequest::getRegionId() const {
  return regionId_;
}

void ListTargetsForPolicyRequest::setRegionId(const std::string &regionId) {
  regionId_ = regionId;
  setParameter(std::string("RegionId"), regionId);
}

std::string ListTargetsForPolicyRequest::getNextToken() const {
  return nextToken_;
}

void ListTargetsForPolicyRequest::setNextToken(const std::string &nextToken) {
  nextToken_ = nextToken;
  setParameter(std::string("NextToken"), nextToken);
}

std::string ListTargetsForPolicyRequest::getResourceOwnerAccount() const {
  return resourceOwnerAccount_;
}

void ListTargetsForPolicyRequest::setResourceOwnerAccount(const std::string &resourceOwnerAccount) {
  resourceOwnerAccount_ = resourceOwnerAccount;
  setParameter(std::string("ResourceOwnerAccount"), resourceOwnerAccount);
}

std::string ListTargetsForPolicyRequest::getOwnerAccount() const {
  return ownerAccount_;
}

void ListTargetsForPolicyRequest::setOwnerAccount(const std::string &ownerAccount) {
  ownerAccount_ = ownerAccount;
  setParameter(std::string("OwnerAccount"), ownerAccount);
}

long ListTargetsForPolicyRequest::getOwnerId() const {
  return ownerId_;
}

void ListTargetsForPolicyRequest::setOwnerId(long ownerId) {
  ownerId_ = ownerId;
  setParameter(std::string("OwnerId"), std::to_string(ownerId));
}

int ListTargetsForPolicyRequest::getMaxResult() const {
  return maxResult_;
}

void ListTargetsForPolicyRequest::setMaxResult(int maxResult) {
  maxResult_ = maxResult;
  setParameter(std::string("MaxResult"), std::to_string(maxResult));
}

