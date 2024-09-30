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

#include <alibabacloud/tag/model/GenerateConfigRuleReportRequest.h>

using AlibabaCloud::Tag::Model::GenerateConfigRuleReportRequest;

GenerateConfigRuleReportRequest::GenerateConfigRuleReportRequest()
    : RpcServiceRequest("tag", "2018-08-28", "GenerateConfigRuleReport") {
  setMethod(HttpRequest::Method::Post);
}

GenerateConfigRuleReportRequest::~GenerateConfigRuleReportRequest() {}

std::string GenerateConfigRuleReportRequest::getTargetId() const {
  return targetId_;
}

void GenerateConfigRuleReportRequest::setTargetId(const std::string &targetId) {
  targetId_ = targetId;
  setParameter(std::string("TargetId"), targetId);
}

std::string GenerateConfigRuleReportRequest::getTargetType() const {
  return targetType_;
}

void GenerateConfigRuleReportRequest::setTargetType(const std::string &targetType) {
  targetType_ = targetType;
  setParameter(std::string("TargetType"), targetType);
}

std::string GenerateConfigRuleReportRequest::getRegionId() const {
  return regionId_;
}

void GenerateConfigRuleReportRequest::setRegionId(const std::string &regionId) {
  regionId_ = regionId;
  setParameter(std::string("RegionId"), regionId);
}

std::string GenerateConfigRuleReportRequest::getResourceOwnerAccount() const {
  return resourceOwnerAccount_;
}

void GenerateConfigRuleReportRequest::setResourceOwnerAccount(const std::string &resourceOwnerAccount) {
  resourceOwnerAccount_ = resourceOwnerAccount;
  setParameter(std::string("ResourceOwnerAccount"), resourceOwnerAccount);
}

std::string GenerateConfigRuleReportRequest::getOwnerAccount() const {
  return ownerAccount_;
}

void GenerateConfigRuleReportRequest::setOwnerAccount(const std::string &ownerAccount) {
  ownerAccount_ = ownerAccount;
  setParameter(std::string("OwnerAccount"), ownerAccount);
}

std::string GenerateConfigRuleReportRequest::getUserType() const {
  return userType_;
}

void GenerateConfigRuleReportRequest::setUserType(const std::string &userType) {
  userType_ = userType;
  setParameter(std::string("UserType"), userType);
}

long GenerateConfigRuleReportRequest::getOwnerId() const {
  return ownerId_;
}

void GenerateConfigRuleReportRequest::setOwnerId(long ownerId) {
  ownerId_ = ownerId;
  setParameter(std::string("OwnerId"), std::to_string(ownerId));
}

