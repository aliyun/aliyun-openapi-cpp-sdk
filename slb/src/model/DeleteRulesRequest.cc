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

#include <alibabacloud/slb/model/DeleteRulesRequest.h>

using AlibabaCloud::Slb::Model::DeleteRulesRequest;

DeleteRulesRequest::DeleteRulesRequest()
    : RpcServiceRequest("slb", "2014-05-15", "DeleteRules") {
  setMethod(HttpRequest::Method::Post);
}

DeleteRulesRequest::~DeleteRulesRequest() {}

std::string DeleteRulesRequest::getAccess_key_id() const {
  return access_key_id_;
}

void DeleteRulesRequest::setAccess_key_id(const std::string &access_key_id) {
  access_key_id_ = access_key_id;
  setParameter(std::string("access_key_id"), access_key_id);
}

long DeleteRulesRequest::getResourceOwnerId() const {
  return resourceOwnerId_;
}

void DeleteRulesRequest::setResourceOwnerId(long resourceOwnerId) {
  resourceOwnerId_ = resourceOwnerId;
  setParameter(std::string("ResourceOwnerId"), std::to_string(resourceOwnerId));
}

std::string DeleteRulesRequest::getRegionId() const {
  return regionId_;
}

void DeleteRulesRequest::setRegionId(const std::string &regionId) {
  regionId_ = regionId;
  setParameter(std::string("RegionId"), regionId);
}

std::string DeleteRulesRequest::getResourceOwnerAccount() const {
  return resourceOwnerAccount_;
}

void DeleteRulesRequest::setResourceOwnerAccount(const std::string &resourceOwnerAccount) {
  resourceOwnerAccount_ = resourceOwnerAccount;
  setParameter(std::string("ResourceOwnerAccount"), resourceOwnerAccount);
}

std::string DeleteRulesRequest::getOwnerAccount() const {
  return ownerAccount_;
}

void DeleteRulesRequest::setOwnerAccount(const std::string &ownerAccount) {
  ownerAccount_ = ownerAccount;
  setParameter(std::string("OwnerAccount"), ownerAccount);
}

long DeleteRulesRequest::getOwnerId() const {
  return ownerId_;
}

void DeleteRulesRequest::setOwnerId(long ownerId) {
  ownerId_ = ownerId;
  setParameter(std::string("OwnerId"), std::to_string(ownerId));
}

std::string DeleteRulesRequest::getTags() const {
  return tags_;
}

void DeleteRulesRequest::setTags(const std::string &tags) {
  tags_ = tags;
  setParameter(std::string("Tags"), tags);
}

std::string DeleteRulesRequest::getRuleIds() const {
  return ruleIds_;
}

void DeleteRulesRequest::setRuleIds(const std::string &ruleIds) {
  ruleIds_ = ruleIds;
  setParameter(std::string("RuleIds"), ruleIds);
}

