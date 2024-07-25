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

#include <alibabacloud/cams/model/ChatappVerifyAndRegisterRequest.h>

using AlibabaCloud::Cams::Model::ChatappVerifyAndRegisterRequest;

ChatappVerifyAndRegisterRequest::ChatappVerifyAndRegisterRequest()
    : RpcServiceRequest("cams", "2020-06-06", "ChatappVerifyAndRegister") {
  setMethod(HttpRequest::Method::Post);
}

ChatappVerifyAndRegisterRequest::~ChatappVerifyAndRegisterRequest() {}

long ChatappVerifyAndRegisterRequest::getResourceOwnerId() const {
  return resourceOwnerId_;
}

void ChatappVerifyAndRegisterRequest::setResourceOwnerId(long resourceOwnerId) {
  resourceOwnerId_ = resourceOwnerId;
  setParameter(std::string("ResourceOwnerId"), std::to_string(resourceOwnerId));
}

std::string ChatappVerifyAndRegisterRequest::getPhoneNumber() const {
  return phoneNumber_;
}

void ChatappVerifyAndRegisterRequest::setPhoneNumber(const std::string &phoneNumber) {
  phoneNumber_ = phoneNumber;
  setParameter(std::string("PhoneNumber"), phoneNumber);
}

std::string ChatappVerifyAndRegisterRequest::getLowcodeTenantId() const {
  return lowcodeTenantId_;
}

void ChatappVerifyAndRegisterRequest::setLowcodeTenantId(const std::string &lowcodeTenantId) {
  lowcodeTenantId_ = lowcodeTenantId;
  setParameter(std::string("LowcodeTenantId"), lowcodeTenantId);
}

std::string ChatappVerifyAndRegisterRequest::getExtendFunction() const {
  return extendFunction_;
}

void ChatappVerifyAndRegisterRequest::setExtendFunction(const std::string &extendFunction) {
  extendFunction_ = extendFunction;
  setParameter(std::string("ExtendFunction"), extendFunction);
}

std::string ChatappVerifyAndRegisterRequest::getAccessKeyId() const {
  return accessKeyId_;
}

void ChatappVerifyAndRegisterRequest::setAccessKeyId(const std::string &accessKeyId) {
  accessKeyId_ = accessKeyId;
  setParameter(std::string("AccessKeyId"), accessKeyId);
}

std::string ChatappVerifyAndRegisterRequest::getLowcodePhysicAppName() const {
  return lowcodePhysicAppName_;
}

void ChatappVerifyAndRegisterRequest::setLowcodePhysicAppName(const std::string &lowcodePhysicAppName) {
  lowcodePhysicAppName_ = lowcodePhysicAppName;
  setParameter(std::string("LowcodePhysicAppName"), lowcodePhysicAppName);
}

std::string ChatappVerifyAndRegisterRequest::getVerifyCode() const {
  return verifyCode_;
}

void ChatappVerifyAndRegisterRequest::setVerifyCode(const std::string &verifyCode) {
  verifyCode_ = verifyCode;
  setParameter(std::string("VerifyCode"), verifyCode);
}

std::string ChatappVerifyAndRegisterRequest::getRouteName() const {
  return routeName_;
}

void ChatappVerifyAndRegisterRequest::setRouteName(const std::string &routeName) {
  routeName_ = routeName;
  setParameter(std::string("RouteName"), routeName);
}

std::string ChatappVerifyAndRegisterRequest::getResourceOwnerAccount() const {
  return resourceOwnerAccount_;
}

void ChatappVerifyAndRegisterRequest::setResourceOwnerAccount(const std::string &resourceOwnerAccount) {
  resourceOwnerAccount_ = resourceOwnerAccount;
  setParameter(std::string("ResourceOwnerAccount"), resourceOwnerAccount);
}

long ChatappVerifyAndRegisterRequest::getOwnerId() const {
  return ownerId_;
}

void ChatappVerifyAndRegisterRequest::setOwnerId(long ownerId) {
  ownerId_ = ownerId;
  setParameter(std::string("OwnerId"), std::to_string(ownerId));
}

std::string ChatappVerifyAndRegisterRequest::getLowcodeLogicAppName() const {
  return lowcodeLogicAppName_;
}

void ChatappVerifyAndRegisterRequest::setLowcodeLogicAppName(const std::string &lowcodeLogicAppName) {
  lowcodeLogicAppName_ = lowcodeLogicAppName;
  setParameter(std::string("LowcodeLogicAppName"), lowcodeLogicAppName);
}

std::string ChatappVerifyAndRegisterRequest::getCustSpaceId() const {
  return custSpaceId_;
}

void ChatappVerifyAndRegisterRequest::setCustSpaceId(const std::string &custSpaceId) {
  custSpaceId_ = custSpaceId;
  setParameter(std::string("CustSpaceId"), custSpaceId);
}

