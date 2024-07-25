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

#include <alibabacloud/cams/model/GetCommerceSettingRequest.h>

using AlibabaCloud::Cams::Model::GetCommerceSettingRequest;

GetCommerceSettingRequest::GetCommerceSettingRequest()
    : RpcServiceRequest("cams", "2020-06-06", "GetCommerceSetting") {
  setMethod(HttpRequest::Method::Post);
}

GetCommerceSettingRequest::~GetCommerceSettingRequest() {}

long GetCommerceSettingRequest::getResourceOwnerId() const {
  return resourceOwnerId_;
}

void GetCommerceSettingRequest::setResourceOwnerId(long resourceOwnerId) {
  resourceOwnerId_ = resourceOwnerId;
  setParameter(std::string("ResourceOwnerId"), std::to_string(resourceOwnerId));
}

std::string GetCommerceSettingRequest::getPhoneNumber() const {
  return phoneNumber_;
}

void GetCommerceSettingRequest::setPhoneNumber(const std::string &phoneNumber) {
  phoneNumber_ = phoneNumber;
  setParameter(std::string("PhoneNumber"), phoneNumber);
}

std::string GetCommerceSettingRequest::getLowcodeTenantId() const {
  return lowcodeTenantId_;
}

void GetCommerceSettingRequest::setLowcodeTenantId(const std::string &lowcodeTenantId) {
  lowcodeTenantId_ = lowcodeTenantId;
  setParameter(std::string("LowcodeTenantId"), lowcodeTenantId);
}

std::string GetCommerceSettingRequest::getExtendFunction() const {
  return extendFunction_;
}

void GetCommerceSettingRequest::setExtendFunction(const std::string &extendFunction) {
  extendFunction_ = extendFunction;
  setParameter(std::string("ExtendFunction"), extendFunction);
}

std::string GetCommerceSettingRequest::getAccessKeyId() const {
  return accessKeyId_;
}

void GetCommerceSettingRequest::setAccessKeyId(const std::string &accessKeyId) {
  accessKeyId_ = accessKeyId;
  setParameter(std::string("AccessKeyId"), accessKeyId);
}

std::string GetCommerceSettingRequest::getLowcodePhysicAppName() const {
  return lowcodePhysicAppName_;
}

void GetCommerceSettingRequest::setLowcodePhysicAppName(const std::string &lowcodePhysicAppName) {
  lowcodePhysicAppName_ = lowcodePhysicAppName;
  setParameter(std::string("LowcodePhysicAppName"), lowcodePhysicAppName);
}

std::string GetCommerceSettingRequest::getRouteName() const {
  return routeName_;
}

void GetCommerceSettingRequest::setRouteName(const std::string &routeName) {
  routeName_ = routeName;
  setParameter(std::string("RouteName"), routeName);
}

std::string GetCommerceSettingRequest::getResourceOwnerAccount() const {
  return resourceOwnerAccount_;
}

void GetCommerceSettingRequest::setResourceOwnerAccount(const std::string &resourceOwnerAccount) {
  resourceOwnerAccount_ = resourceOwnerAccount;
  setParameter(std::string("ResourceOwnerAccount"), resourceOwnerAccount);
}

long GetCommerceSettingRequest::getOwnerId() const {
  return ownerId_;
}

void GetCommerceSettingRequest::setOwnerId(long ownerId) {
  ownerId_ = ownerId;
  setParameter(std::string("OwnerId"), std::to_string(ownerId));
}

std::string GetCommerceSettingRequest::getLowcodeLogicAppName() const {
  return lowcodeLogicAppName_;
}

void GetCommerceSettingRequest::setLowcodeLogicAppName(const std::string &lowcodeLogicAppName) {
  lowcodeLogicAppName_ = lowcodeLogicAppName;
  setParameter(std::string("LowcodeLogicAppName"), lowcodeLogicAppName);
}

std::string GetCommerceSettingRequest::getCustSpaceId() const {
  return custSpaceId_;
}

void GetCommerceSettingRequest::setCustSpaceId(const std::string &custSpaceId) {
  custSpaceId_ = custSpaceId;
  setParameter(std::string("CustSpaceId"), custSpaceId);
}

