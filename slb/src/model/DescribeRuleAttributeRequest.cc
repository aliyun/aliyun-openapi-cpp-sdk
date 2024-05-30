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

#include <alibabacloud/slb/model/DescribeRuleAttributeRequest.h>

using AlibabaCloud::Slb::Model::DescribeRuleAttributeRequest;

DescribeRuleAttributeRequest::DescribeRuleAttributeRequest()
    : RpcServiceRequest("slb", "2014-05-15", "DescribeRuleAttribute") {
  setMethod(HttpRequest::Method::Post);
}

DescribeRuleAttributeRequest::~DescribeRuleAttributeRequest() {}

std::string DescribeRuleAttributeRequest::getAccess_key_id() const {
  return access_key_id_;
}

void DescribeRuleAttributeRequest::setAccess_key_id(const std::string &access_key_id) {
  access_key_id_ = access_key_id;
  setParameter(std::string("access_key_id"), access_key_id);
}

long DescribeRuleAttributeRequest::getResourceOwnerId() const {
  return resourceOwnerId_;
}

void DescribeRuleAttributeRequest::setResourceOwnerId(long resourceOwnerId) {
  resourceOwnerId_ = resourceOwnerId;
  setParameter(std::string("ResourceOwnerId"), std::to_string(resourceOwnerId));
}

std::string DescribeRuleAttributeRequest::getRegionId() const {
  return regionId_;
}

void DescribeRuleAttributeRequest::setRegionId(const std::string &regionId) {
  regionId_ = regionId;
  setParameter(std::string("RegionId"), regionId);
}

std::string DescribeRuleAttributeRequest::getResourceOwnerAccount() const {
  return resourceOwnerAccount_;
}

void DescribeRuleAttributeRequest::setResourceOwnerAccount(const std::string &resourceOwnerAccount) {
  resourceOwnerAccount_ = resourceOwnerAccount;
  setParameter(std::string("ResourceOwnerAccount"), resourceOwnerAccount);
}

std::string DescribeRuleAttributeRequest::getOwnerAccount() const {
  return ownerAccount_;
}

void DescribeRuleAttributeRequest::setOwnerAccount(const std::string &ownerAccount) {
  ownerAccount_ = ownerAccount;
  setParameter(std::string("OwnerAccount"), ownerAccount);
}

long DescribeRuleAttributeRequest::getOwnerId() const {
  return ownerId_;
}

void DescribeRuleAttributeRequest::setOwnerId(long ownerId) {
  ownerId_ = ownerId;
  setParameter(std::string("OwnerId"), std::to_string(ownerId));
}

std::string DescribeRuleAttributeRequest::getTags() const {
  return tags_;
}

void DescribeRuleAttributeRequest::setTags(const std::string &tags) {
  tags_ = tags;
  setParameter(std::string("Tags"), tags);
}

std::string DescribeRuleAttributeRequest::getRuleId() const {
  return ruleId_;
}

void DescribeRuleAttributeRequest::setRuleId(const std::string &ruleId) {
  ruleId_ = ruleId;
  setParameter(std::string("RuleId"), ruleId);
}

