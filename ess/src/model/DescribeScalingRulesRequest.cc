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

#include <alibabacloud/ess/model/DescribeScalingRulesRequest.h>

using AlibabaCloud::Ess::Model::DescribeScalingRulesRequest;

DescribeScalingRulesRequest::DescribeScalingRulesRequest()
    : RpcServiceRequest("ess", "2014-08-28", "DescribeScalingRules") {
  setMethod(HttpRequest::Method::Post);
}

DescribeScalingRulesRequest::~DescribeScalingRulesRequest() {}

long DescribeScalingRulesRequest::getResourceOwnerId() const {
  return resourceOwnerId_;
}

void DescribeScalingRulesRequest::setResourceOwnerId(long resourceOwnerId) {
  resourceOwnerId_ = resourceOwnerId;
  setParameter(std::string("ResourceOwnerId"), std::to_string(resourceOwnerId));
}

std::string DescribeScalingRulesRequest::getScalingGroupId() const {
  return scalingGroupId_;
}

void DescribeScalingRulesRequest::setScalingGroupId(const std::string &scalingGroupId) {
  scalingGroupId_ = scalingGroupId;
  setParameter(std::string("ScalingGroupId"), scalingGroupId);
}

std::vector<std::string> DescribeScalingRulesRequest::getScalingRuleId() const {
  return scalingRuleId_;
}

void DescribeScalingRulesRequest::setScalingRuleId(const std::vector<std::string> &scalingRuleId) {
  scalingRuleId_ = scalingRuleId;
}

int DescribeScalingRulesRequest::getPageNumber() const {
  return pageNumber_;
}

void DescribeScalingRulesRequest::setPageNumber(int pageNumber) {
  pageNumber_ = pageNumber;
  setParameter(std::string("PageNumber"), std::to_string(pageNumber));
}

std::string DescribeScalingRulesRequest::getAccessKeyId() const {
  return accessKeyId_;
}

void DescribeScalingRulesRequest::setAccessKeyId(const std::string &accessKeyId) {
  accessKeyId_ = accessKeyId;
  setParameter(std::string("AccessKeyId"), accessKeyId);
}

std::vector<std::string> DescribeScalingRulesRequest::getScalingRuleName() const {
  return scalingRuleName_;
}

void DescribeScalingRulesRequest::setScalingRuleName(const std::vector<std::string> &scalingRuleName) {
  scalingRuleName_ = scalingRuleName;
}

std::string DescribeScalingRulesRequest::getRegionId() const {
  return regionId_;
}

void DescribeScalingRulesRequest::setRegionId(const std::string &regionId) {
  regionId_ = regionId;
  setParameter(std::string("RegionId"), regionId);
}

int DescribeScalingRulesRequest::getPageSize() const {
  return pageSize_;
}

void DescribeScalingRulesRequest::setPageSize(int pageSize) {
  pageSize_ = pageSize;
  setParameter(std::string("PageSize"), std::to_string(pageSize));
}

std::string DescribeScalingRulesRequest::getScalingRuleType() const {
  return scalingRuleType_;
}

void DescribeScalingRulesRequest::setScalingRuleType(const std::string &scalingRuleType) {
  scalingRuleType_ = scalingRuleType;
  setParameter(std::string("ScalingRuleType"), scalingRuleType);
}

std::string DescribeScalingRulesRequest::getResourceOwnerAccount() const {
  return resourceOwnerAccount_;
}

void DescribeScalingRulesRequest::setResourceOwnerAccount(const std::string &resourceOwnerAccount) {
  resourceOwnerAccount_ = resourceOwnerAccount;
  setParameter(std::string("ResourceOwnerAccount"), resourceOwnerAccount);
}

std::string DescribeScalingRulesRequest::getOwnerAccount() const {
  return ownerAccount_;
}

void DescribeScalingRulesRequest::setOwnerAccount(const std::string &ownerAccount) {
  ownerAccount_ = ownerAccount;
  setParameter(std::string("OwnerAccount"), ownerAccount);
}

long DescribeScalingRulesRequest::getOwnerId() const {
  return ownerId_;
}

void DescribeScalingRulesRequest::setOwnerId(long ownerId) {
  ownerId_ = ownerId;
  setParameter(std::string("OwnerId"), std::to_string(ownerId));
}

std::vector<std::string> DescribeScalingRulesRequest::getScalingRuleAri() const {
  return scalingRuleAri_;
}

void DescribeScalingRulesRequest::setScalingRuleAri(const std::vector<std::string> &scalingRuleAri) {
  scalingRuleAri_ = scalingRuleAri;
}

bool DescribeScalingRulesRequest::getShowAlarmRules() const {
  return showAlarmRules_;
}

void DescribeScalingRulesRequest::setShowAlarmRules(bool showAlarmRules) {
  showAlarmRules_ = showAlarmRules;
  setParameter(std::string("ShowAlarmRules"), showAlarmRules ? "true" : "false");
}

