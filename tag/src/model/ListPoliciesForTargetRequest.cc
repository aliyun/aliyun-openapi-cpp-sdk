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

#include <alibabacloud/tag/model/ListPoliciesForTargetRequest.h>

using AlibabaCloud::Tag::Model::ListPoliciesForTargetRequest;

ListPoliciesForTargetRequest::ListPoliciesForTargetRequest()
    : RpcServiceRequest("tag", "2018-08-28", "ListPoliciesForTarget") {
  setMethod(HttpRequest::Method::Post);
}

ListPoliciesForTargetRequest::~ListPoliciesForTargetRequest() {}

std::string ListPoliciesForTargetRequest::getTargetId() const {
  return targetId_;
}

void ListPoliciesForTargetRequest::setTargetId(const std::string &targetId) {
  targetId_ = targetId;
  setParameter(std::string("TargetId"), targetId);
}

std::string ListPoliciesForTargetRequest::getTargetType() const {
  return targetType_;
}

void ListPoliciesForTargetRequest::setTargetType(const std::string &targetType) {
  targetType_ = targetType;
  setParameter(std::string("TargetType"), targetType);
}

std::string ListPoliciesForTargetRequest::getRegionId() const {
  return regionId_;
}

void ListPoliciesForTargetRequest::setRegionId(const std::string &regionId) {
  regionId_ = regionId;
  setParameter(std::string("RegionId"), regionId);
}

std::string ListPoliciesForTargetRequest::getNextToken() const {
  return nextToken_;
}

void ListPoliciesForTargetRequest::setNextToken(const std::string &nextToken) {
  nextToken_ = nextToken;
  setParameter(std::string("NextToken"), nextToken);
}

std::string ListPoliciesForTargetRequest::getResourceOwnerAccount() const {
  return resourceOwnerAccount_;
}

void ListPoliciesForTargetRequest::setResourceOwnerAccount(const std::string &resourceOwnerAccount) {
  resourceOwnerAccount_ = resourceOwnerAccount;
  setParameter(std::string("ResourceOwnerAccount"), resourceOwnerAccount);
}

std::string ListPoliciesForTargetRequest::getOwnerAccount() const {
  return ownerAccount_;
}

void ListPoliciesForTargetRequest::setOwnerAccount(const std::string &ownerAccount) {
  ownerAccount_ = ownerAccount;
  setParameter(std::string("OwnerAccount"), ownerAccount);
}

long ListPoliciesForTargetRequest::getOwnerId() const {
  return ownerId_;
}

void ListPoliciesForTargetRequest::setOwnerId(long ownerId) {
  ownerId_ = ownerId;
  setParameter(std::string("OwnerId"), std::to_string(ownerId));
}

int ListPoliciesForTargetRequest::getMaxResult() const {
  return maxResult_;
}

void ListPoliciesForTargetRequest::setMaxResult(int maxResult) {
  maxResult_ = maxResult;
  setParameter(std::string("MaxResult"), std::to_string(maxResult));
}

