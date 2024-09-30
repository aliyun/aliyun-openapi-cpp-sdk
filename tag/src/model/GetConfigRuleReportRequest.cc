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

#include <alibabacloud/tag/model/GetConfigRuleReportRequest.h>

using AlibabaCloud::Tag::Model::GetConfigRuleReportRequest;

GetConfigRuleReportRequest::GetConfigRuleReportRequest()
    : RpcServiceRequest("tag", "2018-08-28", "GetConfigRuleReport") {
  setMethod(HttpRequest::Method::Post);
}

GetConfigRuleReportRequest::~GetConfigRuleReportRequest() {}

std::string GetConfigRuleReportRequest::getTargetId() const {
  return targetId_;
}

void GetConfigRuleReportRequest::setTargetId(const std::string &targetId) {
  targetId_ = targetId;
  setParameter(std::string("TargetId"), targetId);
}

std::string GetConfigRuleReportRequest::getTargetType() const {
  return targetType_;
}

void GetConfigRuleReportRequest::setTargetType(const std::string &targetType) {
  targetType_ = targetType;
  setParameter(std::string("TargetType"), targetType);
}

std::string GetConfigRuleReportRequest::getRegionId() const {
  return regionId_;
}

void GetConfigRuleReportRequest::setRegionId(const std::string &regionId) {
  regionId_ = regionId;
  setParameter(std::string("RegionId"), regionId);
}

std::string GetConfigRuleReportRequest::getResourceOwnerAccount() const {
  return resourceOwnerAccount_;
}

void GetConfigRuleReportRequest::setResourceOwnerAccount(const std::string &resourceOwnerAccount) {
  resourceOwnerAccount_ = resourceOwnerAccount;
  setParameter(std::string("ResourceOwnerAccount"), resourceOwnerAccount);
}

std::string GetConfigRuleReportRequest::getOwnerAccount() const {
  return ownerAccount_;
}

void GetConfigRuleReportRequest::setOwnerAccount(const std::string &ownerAccount) {
  ownerAccount_ = ownerAccount;
  setParameter(std::string("OwnerAccount"), ownerAccount);
}

std::string GetConfigRuleReportRequest::getUserType() const {
  return userType_;
}

void GetConfigRuleReportRequest::setUserType(const std::string &userType) {
  userType_ = userType;
  setParameter(std::string("UserType"), userType);
}

long GetConfigRuleReportRequest::getOwnerId() const {
  return ownerId_;
}

void GetConfigRuleReportRequest::setOwnerId(long ownerId) {
  ownerId_ = ownerId;
  setParameter(std::string("OwnerId"), std::to_string(ownerId));
}

