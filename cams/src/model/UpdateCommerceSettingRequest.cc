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

#include <alibabacloud/cams/model/UpdateCommerceSettingRequest.h>

using AlibabaCloud::Cams::Model::UpdateCommerceSettingRequest;

UpdateCommerceSettingRequest::UpdateCommerceSettingRequest()
    : RpcServiceRequest("cams", "2020-06-06", "UpdateCommerceSetting") {
  setMethod(HttpRequest::Method::Post);
}

UpdateCommerceSettingRequest::~UpdateCommerceSettingRequest() {}

long UpdateCommerceSettingRequest::getResourceOwnerId() const {
  return resourceOwnerId_;
}

void UpdateCommerceSettingRequest::setResourceOwnerId(long resourceOwnerId) {
  resourceOwnerId_ = resourceOwnerId;
  setParameter(std::string("ResourceOwnerId"), std::to_string(resourceOwnerId));
}

std::string UpdateCommerceSettingRequest::getPhoneNumber() const {
  return phoneNumber_;
}

void UpdateCommerceSettingRequest::setPhoneNumber(const std::string &phoneNumber) {
  phoneNumber_ = phoneNumber;
  setParameter(std::string("PhoneNumber"), phoneNumber);
}

std::string UpdateCommerceSettingRequest::getLowcodeTenantId() const {
  return lowcodeTenantId_;
}

void UpdateCommerceSettingRequest::setLowcodeTenantId(const std::string &lowcodeTenantId) {
  lowcodeTenantId_ = lowcodeTenantId;
  setParameter(std::string("LowcodeTenantId"), lowcodeTenantId);
}

std::string UpdateCommerceSettingRequest::getExtendFunction() const {
  return extendFunction_;
}

void UpdateCommerceSettingRequest::setExtendFunction(const std::string &extendFunction) {
  extendFunction_ = extendFunction;
  setParameter(std::string("ExtendFunction"), extendFunction);
}

std::string UpdateCommerceSettingRequest::getAccessKeyId() const {
  return accessKeyId_;
}

void UpdateCommerceSettingRequest::setAccessKeyId(const std::string &accessKeyId) {
  accessKeyId_ = accessKeyId;
  setParameter(std::string("AccessKeyId"), accessKeyId);
}

std::string UpdateCommerceSettingRequest::getLowcodePhysicAppName() const {
  return lowcodePhysicAppName_;
}

void UpdateCommerceSettingRequest::setLowcodePhysicAppName(const std::string &lowcodePhysicAppName) {
  lowcodePhysicAppName_ = lowcodePhysicAppName;
  setParameter(std::string("LowcodePhysicAppName"), lowcodePhysicAppName);
}

bool UpdateCommerceSettingRequest::getCatalogVisible() const {
  return catalogVisible_;
}

void UpdateCommerceSettingRequest::setCatalogVisible(bool catalogVisible) {
  catalogVisible_ = catalogVisible;
  setParameter(std::string("CatalogVisible"), catalogVisible ? "true" : "false");
}

std::string UpdateCommerceSettingRequest::getRouteName() const {
  return routeName_;
}

void UpdateCommerceSettingRequest::setRouteName(const std::string &routeName) {
  routeName_ = routeName;
  setParameter(std::string("RouteName"), routeName);
}

bool UpdateCommerceSettingRequest::getCartEnable() const {
  return cartEnable_;
}

void UpdateCommerceSettingRequest::setCartEnable(bool cartEnable) {
  cartEnable_ = cartEnable;
  setParameter(std::string("CartEnable"), cartEnable ? "true" : "false");
}

std::string UpdateCommerceSettingRequest::getResourceOwnerAccount() const {
  return resourceOwnerAccount_;
}

void UpdateCommerceSettingRequest::setResourceOwnerAccount(const std::string &resourceOwnerAccount) {
  resourceOwnerAccount_ = resourceOwnerAccount;
  setParameter(std::string("ResourceOwnerAccount"), resourceOwnerAccount);
}

long UpdateCommerceSettingRequest::getOwnerId() const {
  return ownerId_;
}

void UpdateCommerceSettingRequest::setOwnerId(long ownerId) {
  ownerId_ = ownerId;
  setParameter(std::string("OwnerId"), std::to_string(ownerId));
}

std::string UpdateCommerceSettingRequest::getLowcodeLogicAppName() const {
  return lowcodeLogicAppName_;
}

void UpdateCommerceSettingRequest::setLowcodeLogicAppName(const std::string &lowcodeLogicAppName) {
  lowcodeLogicAppName_ = lowcodeLogicAppName;
  setParameter(std::string("LowcodeLogicAppName"), lowcodeLogicAppName);
}

std::string UpdateCommerceSettingRequest::getCustSpaceId() const {
  return custSpaceId_;
}

void UpdateCommerceSettingRequest::setCustSpaceId(const std::string &custSpaceId) {
  custSpaceId_ = custSpaceId;
  setParameter(std::string("CustSpaceId"), custSpaceId);
}

