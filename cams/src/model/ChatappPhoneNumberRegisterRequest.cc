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

#include <alibabacloud/cams/model/ChatappPhoneNumberRegisterRequest.h>

using AlibabaCloud::Cams::Model::ChatappPhoneNumberRegisterRequest;

ChatappPhoneNumberRegisterRequest::ChatappPhoneNumberRegisterRequest()
    : RpcServiceRequest("cams", "2020-06-06", "ChatappPhoneNumberRegister") {
  setMethod(HttpRequest::Method::Post);
}

ChatappPhoneNumberRegisterRequest::~ChatappPhoneNumberRegisterRequest() {}

long ChatappPhoneNumberRegisterRequest::getResourceOwnerId() const {
  return resourceOwnerId_;
}

void ChatappPhoneNumberRegisterRequest::setResourceOwnerId(long resourceOwnerId) {
  resourceOwnerId_ = resourceOwnerId;
  setParameter(std::string("ResourceOwnerId"), std::to_string(resourceOwnerId));
}

std::string ChatappPhoneNumberRegisterRequest::getPhoneNumber() const {
  return phoneNumber_;
}

void ChatappPhoneNumberRegisterRequest::setPhoneNumber(const std::string &phoneNumber) {
  phoneNumber_ = phoneNumber;
  setParameter(std::string("PhoneNumber"), phoneNumber);
}

std::string ChatappPhoneNumberRegisterRequest::getLowcodeTenantId() const {
  return lowcodeTenantId_;
}

void ChatappPhoneNumberRegisterRequest::setLowcodeTenantId(const std::string &lowcodeTenantId) {
  lowcodeTenantId_ = lowcodeTenantId;
  setParameter(std::string("LowcodeTenantId"), lowcodeTenantId);
}

std::string ChatappPhoneNumberRegisterRequest::getExtendFunction() const {
  return extendFunction_;
}

void ChatappPhoneNumberRegisterRequest::setExtendFunction(const std::string &extendFunction) {
  extendFunction_ = extendFunction;
  setParameter(std::string("ExtendFunction"), extendFunction);
}

std::string ChatappPhoneNumberRegisterRequest::getAccessKeyId() const {
  return accessKeyId_;
}

void ChatappPhoneNumberRegisterRequest::setAccessKeyId(const std::string &accessKeyId) {
  accessKeyId_ = accessKeyId;
  setParameter(std::string("AccessKeyId"), accessKeyId);
}

std::string ChatappPhoneNumberRegisterRequest::getLowcodePhysicAppName() const {
  return lowcodePhysicAppName_;
}

void ChatappPhoneNumberRegisterRequest::setLowcodePhysicAppName(const std::string &lowcodePhysicAppName) {
  lowcodePhysicAppName_ = lowcodePhysicAppName;
  setParameter(std::string("LowcodePhysicAppName"), lowcodePhysicAppName);
}

std::string ChatappPhoneNumberRegisterRequest::getRouteName() const {
  return routeName_;
}

void ChatappPhoneNumberRegisterRequest::setRouteName(const std::string &routeName) {
  routeName_ = routeName;
  setParameter(std::string("RouteName"), routeName);
}

std::string ChatappPhoneNumberRegisterRequest::getResourceOwnerAccount() const {
  return resourceOwnerAccount_;
}

void ChatappPhoneNumberRegisterRequest::setResourceOwnerAccount(const std::string &resourceOwnerAccount) {
  resourceOwnerAccount_ = resourceOwnerAccount;
  setParameter(std::string("ResourceOwnerAccount"), resourceOwnerAccount);
}

long ChatappPhoneNumberRegisterRequest::getOwnerId() const {
  return ownerId_;
}

void ChatappPhoneNumberRegisterRequest::setOwnerId(long ownerId) {
  ownerId_ = ownerId;
  setParameter(std::string("OwnerId"), std::to_string(ownerId));
}

std::string ChatappPhoneNumberRegisterRequest::getLowcodeLogicAppName() const {
  return lowcodeLogicAppName_;
}

void ChatappPhoneNumberRegisterRequest::setLowcodeLogicAppName(const std::string &lowcodeLogicAppName) {
  lowcodeLogicAppName_ = lowcodeLogicAppName;
  setParameter(std::string("LowcodeLogicAppName"), lowcodeLogicAppName);
}

std::string ChatappPhoneNumberRegisterRequest::getCustSpaceId() const {
  return custSpaceId_;
}

void ChatappPhoneNumberRegisterRequest::setCustSpaceId(const std::string &custSpaceId) {
  custSpaceId_ = custSpaceId;
  setParameter(std::string("CustSpaceId"), custSpaceId);
}

