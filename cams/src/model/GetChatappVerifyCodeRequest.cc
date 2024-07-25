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

#include <alibabacloud/cams/model/GetChatappVerifyCodeRequest.h>

using AlibabaCloud::Cams::Model::GetChatappVerifyCodeRequest;

GetChatappVerifyCodeRequest::GetChatappVerifyCodeRequest()
    : RpcServiceRequest("cams", "2020-06-06", "GetChatappVerifyCode") {
  setMethod(HttpRequest::Method::Post);
}

GetChatappVerifyCodeRequest::~GetChatappVerifyCodeRequest() {}

long GetChatappVerifyCodeRequest::getResourceOwnerId() const {
  return resourceOwnerId_;
}

void GetChatappVerifyCodeRequest::setResourceOwnerId(long resourceOwnerId) {
  resourceOwnerId_ = resourceOwnerId;
  setParameter(std::string("ResourceOwnerId"), std::to_string(resourceOwnerId));
}

std::string GetChatappVerifyCodeRequest::getPhoneNumber() const {
  return phoneNumber_;
}

void GetChatappVerifyCodeRequest::setPhoneNumber(const std::string &phoneNumber) {
  phoneNumber_ = phoneNumber;
  setParameter(std::string("PhoneNumber"), phoneNumber);
}

std::string GetChatappVerifyCodeRequest::getLowcodeTenantId() const {
  return lowcodeTenantId_;
}

void GetChatappVerifyCodeRequest::setLowcodeTenantId(const std::string &lowcodeTenantId) {
  lowcodeTenantId_ = lowcodeTenantId;
  setParameter(std::string("LowcodeTenantId"), lowcodeTenantId);
}

std::string GetChatappVerifyCodeRequest::getLocale() const {
  return locale_;
}

void GetChatappVerifyCodeRequest::setLocale(const std::string &locale) {
  locale_ = locale;
  setParameter(std::string("Locale"), locale);
}

std::string GetChatappVerifyCodeRequest::getExtendFunction() const {
  return extendFunction_;
}

void GetChatappVerifyCodeRequest::setExtendFunction(const std::string &extendFunction) {
  extendFunction_ = extendFunction;
  setParameter(std::string("ExtendFunction"), extendFunction);
}

std::string GetChatappVerifyCodeRequest::getAccessKeyId() const {
  return accessKeyId_;
}

void GetChatappVerifyCodeRequest::setAccessKeyId(const std::string &accessKeyId) {
  accessKeyId_ = accessKeyId;
  setParameter(std::string("AccessKeyId"), accessKeyId);
}

std::string GetChatappVerifyCodeRequest::getLowcodePhysicAppName() const {
  return lowcodePhysicAppName_;
}

void GetChatappVerifyCodeRequest::setLowcodePhysicAppName(const std::string &lowcodePhysicAppName) {
  lowcodePhysicAppName_ = lowcodePhysicAppName;
  setParameter(std::string("LowcodePhysicAppName"), lowcodePhysicAppName);
}

std::string GetChatappVerifyCodeRequest::getRouteName() const {
  return routeName_;
}

void GetChatappVerifyCodeRequest::setRouteName(const std::string &routeName) {
  routeName_ = routeName;
  setParameter(std::string("RouteName"), routeName);
}

std::string GetChatappVerifyCodeRequest::getMethod() const {
  return method_;
}

void GetChatappVerifyCodeRequest::setMethod(const std::string &method) {
  method_ = method;
  setParameter(std::string("Method"), method);
}

std::string GetChatappVerifyCodeRequest::getResourceOwnerAccount() const {
  return resourceOwnerAccount_;
}

void GetChatappVerifyCodeRequest::setResourceOwnerAccount(const std::string &resourceOwnerAccount) {
  resourceOwnerAccount_ = resourceOwnerAccount;
  setParameter(std::string("ResourceOwnerAccount"), resourceOwnerAccount);
}

long GetChatappVerifyCodeRequest::getOwnerId() const {
  return ownerId_;
}

void GetChatappVerifyCodeRequest::setOwnerId(long ownerId) {
  ownerId_ = ownerId;
  setParameter(std::string("OwnerId"), std::to_string(ownerId));
}

std::string GetChatappVerifyCodeRequest::getLowcodeLogicAppName() const {
  return lowcodeLogicAppName_;
}

void GetChatappVerifyCodeRequest::setLowcodeLogicAppName(const std::string &lowcodeLogicAppName) {
  lowcodeLogicAppName_ = lowcodeLogicAppName;
  setParameter(std::string("LowcodeLogicAppName"), lowcodeLogicAppName);
}

std::string GetChatappVerifyCodeRequest::getCustSpaceId() const {
  return custSpaceId_;
}

void GetChatappVerifyCodeRequest::setCustSpaceId(const std::string &custSpaceId) {
  custSpaceId_ = custSpaceId;
  setParameter(std::string("CustSpaceId"), custSpaceId);
}

