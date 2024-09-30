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

#include <alibabacloud/tag/model/ListConfigRulesForTargetRequest.h>

using AlibabaCloud::Tag::Model::ListConfigRulesForTargetRequest;

ListConfigRulesForTargetRequest::ListConfigRulesForTargetRequest()
    : RpcServiceRequest("tag", "2018-08-28", "ListConfigRulesForTarget") {
  setMethod(HttpRequest::Method::Post);
}

ListConfigRulesForTargetRequest::~ListConfigRulesForTargetRequest() {}

std::string ListConfigRulesForTargetRequest::getTargetId() const {
  return targetId_;
}

void ListConfigRulesForTargetRequest::setTargetId(const std::string &targetId) {
  targetId_ = targetId;
  setParameter(std::string("TargetId"), targetId);
}

std::string ListConfigRulesForTargetRequest::getTargetType() const {
  return targetType_;
}

void ListConfigRulesForTargetRequest::setTargetType(const std::string &targetType) {
  targetType_ = targetType;
  setParameter(std::string("TargetType"), targetType);
}

std::string ListConfigRulesForTargetRequest::getRegionId() const {
  return regionId_;
}

void ListConfigRulesForTargetRequest::setRegionId(const std::string &regionId) {
  regionId_ = regionId;
  setParameter(std::string("RegionId"), regionId);
}

std::string ListConfigRulesForTargetRequest::getNextToken() const {
  return nextToken_;
}

void ListConfigRulesForTargetRequest::setNextToken(const std::string &nextToken) {
  nextToken_ = nextToken;
  setParameter(std::string("NextToken"), nextToken);
}

std::string ListConfigRulesForTargetRequest::getResourceOwnerAccount() const {
  return resourceOwnerAccount_;
}

void ListConfigRulesForTargetRequest::setResourceOwnerAccount(const std::string &resourceOwnerAccount) {
  resourceOwnerAccount_ = resourceOwnerAccount;
  setParameter(std::string("ResourceOwnerAccount"), resourceOwnerAccount);
}

std::string ListConfigRulesForTargetRequest::getPolicyType() const {
  return policyType_;
}

void ListConfigRulesForTargetRequest::setPolicyType(const std::string &policyType) {
  policyType_ = policyType;
  setParameter(std::string("PolicyType"), policyType);
}

std::string ListConfigRulesForTargetRequest::getOwnerAccount() const {
  return ownerAccount_;
}

void ListConfigRulesForTargetRequest::setOwnerAccount(const std::string &ownerAccount) {
  ownerAccount_ = ownerAccount;
  setParameter(std::string("OwnerAccount"), ownerAccount);
}

std::string ListConfigRulesForTargetRequest::getUserType() const {
  return userType_;
}

void ListConfigRulesForTargetRequest::setUserType(const std::string &userType) {
  userType_ = userType;
  setParameter(std::string("UserType"), userType);
}

long ListConfigRulesForTargetRequest::getOwnerId() const {
  return ownerId_;
}

void ListConfigRulesForTargetRequest::setOwnerId(long ownerId) {
  ownerId_ = ownerId;
  setParameter(std::string("OwnerId"), std::to_string(ownerId));
}

int ListConfigRulesForTargetRequest::getMaxResult() const {
  return maxResult_;
}

void ListConfigRulesForTargetRequest::setMaxResult(int maxResult) {
  maxResult_ = maxResult;
  setParameter(std::string("MaxResult"), std::to_string(maxResult));
}

std::string ListConfigRulesForTargetRequest::getTagKey() const {
  return tagKey_;
}

void ListConfigRulesForTargetRequest::setTagKey(const std::string &tagKey) {
  tagKey_ = tagKey;
  setParameter(std::string("TagKey"), tagKey);
}

