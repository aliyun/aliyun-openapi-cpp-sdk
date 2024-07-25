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

#include <alibabacloud/cams/model/AddChatappPhoneNumberRequest.h>

using AlibabaCloud::Cams::Model::AddChatappPhoneNumberRequest;

AddChatappPhoneNumberRequest::AddChatappPhoneNumberRequest()
    : RpcServiceRequest("cams", "2020-06-06", "AddChatappPhoneNumber") {
  setMethod(HttpRequest::Method::Post);
}

AddChatappPhoneNumberRequest::~AddChatappPhoneNumberRequest() {}

long AddChatappPhoneNumberRequest::getResourceOwnerId() const {
  return resourceOwnerId_;
}

void AddChatappPhoneNumberRequest::setResourceOwnerId(long resourceOwnerId) {
  resourceOwnerId_ = resourceOwnerId;
  setParameter(std::string("ResourceOwnerId"), std::to_string(resourceOwnerId));
}

std::string AddChatappPhoneNumberRequest::getPreValidateId() const {
  return preValidateId_;
}

void AddChatappPhoneNumberRequest::setPreValidateId(const std::string &preValidateId) {
  preValidateId_ = preValidateId;
  setParameter(std::string("PreValidateId"), preValidateId);
}

std::string AddChatappPhoneNumberRequest::getVerifiedName() const {
  return verifiedName_;
}

void AddChatappPhoneNumberRequest::setVerifiedName(const std::string &verifiedName) {
  verifiedName_ = verifiedName;
  setParameter(std::string("VerifiedName"), verifiedName);
}

std::string AddChatappPhoneNumberRequest::getPhoneNumber() const {
  return phoneNumber_;
}

void AddChatappPhoneNumberRequest::setPhoneNumber(const std::string &phoneNumber) {
  phoneNumber_ = phoneNumber;
  setParameter(std::string("PhoneNumber"), phoneNumber);
}

std::string AddChatappPhoneNumberRequest::getLowcodeTenantId() const {
  return lowcodeTenantId_;
}

void AddChatappPhoneNumberRequest::setLowcodeTenantId(const std::string &lowcodeTenantId) {
  lowcodeTenantId_ = lowcodeTenantId;
  setParameter(std::string("LowcodeTenantId"), lowcodeTenantId);
}

std::string AddChatappPhoneNumberRequest::getExtendFunction() const {
  return extendFunction_;
}

void AddChatappPhoneNumberRequest::setExtendFunction(const std::string &extendFunction) {
  extendFunction_ = extendFunction;
  setParameter(std::string("ExtendFunction"), extendFunction);
}

std::string AddChatappPhoneNumberRequest::getAccessKeyId() const {
  return accessKeyId_;
}

void AddChatappPhoneNumberRequest::setAccessKeyId(const std::string &accessKeyId) {
  accessKeyId_ = accessKeyId;
  setParameter(std::string("AccessKeyId"), accessKeyId);
}

std::string AddChatappPhoneNumberRequest::getLowcodePhysicAppName() const {
  return lowcodePhysicAppName_;
}

void AddChatappPhoneNumberRequest::setLowcodePhysicAppName(const std::string &lowcodePhysicAppName) {
  lowcodePhysicAppName_ = lowcodePhysicAppName;
  setParameter(std::string("LowcodePhysicAppName"), lowcodePhysicAppName);
}

std::string AddChatappPhoneNumberRequest::getRouteName() const {
  return routeName_;
}

void AddChatappPhoneNumberRequest::setRouteName(const std::string &routeName) {
  routeName_ = routeName;
  setParameter(std::string("RouteName"), routeName);
}

std::string AddChatappPhoneNumberRequest::getCc() const {
  return cc_;
}

void AddChatappPhoneNumberRequest::setCc(const std::string &cc) {
  cc_ = cc;
  setParameter(std::string("Cc"), cc);
}

std::string AddChatappPhoneNumberRequest::getResourceOwnerAccount() const {
  return resourceOwnerAccount_;
}

void AddChatappPhoneNumberRequest::setResourceOwnerAccount(const std::string &resourceOwnerAccount) {
  resourceOwnerAccount_ = resourceOwnerAccount;
  setParameter(std::string("ResourceOwnerAccount"), resourceOwnerAccount);
}

long AddChatappPhoneNumberRequest::getOwnerId() const {
  return ownerId_;
}

void AddChatappPhoneNumberRequest::setOwnerId(long ownerId) {
  ownerId_ = ownerId;
  setParameter(std::string("OwnerId"), std::to_string(ownerId));
}

std::string AddChatappPhoneNumberRequest::getLowcodeLogicAppName() const {
  return lowcodeLogicAppName_;
}

void AddChatappPhoneNumberRequest::setLowcodeLogicAppName(const std::string &lowcodeLogicAppName) {
  lowcodeLogicAppName_ = lowcodeLogicAppName;
  setParameter(std::string("LowcodeLogicAppName"), lowcodeLogicAppName);
}

std::string AddChatappPhoneNumberRequest::getCustSpaceId() const {
  return custSpaceId_;
}

void AddChatappPhoneNumberRequest::setCustSpaceId(const std::string &custSpaceId) {
  custSpaceId_ = custSpaceId;
  setParameter(std::string("CustSpaceId"), custSpaceId);
}

