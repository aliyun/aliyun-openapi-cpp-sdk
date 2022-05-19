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

#include <alibabacloud/idaas-doraemon/model/RegisterAuthenticatorRequest.h>

using AlibabaCloud::Idaas_doraemon::Model::RegisterAuthenticatorRequest;

RegisterAuthenticatorRequest::RegisterAuthenticatorRequest()
    : RpcServiceRequest("idaas-doraemon", "2021-05-20", "RegisterAuthenticator") {
  setMethod(HttpRequest::Method::Post);
}

RegisterAuthenticatorRequest::~RegisterAuthenticatorRequest() {}

std::string RegisterAuthenticatorRequest::getLogParams() const {
  return logParams_;
}

void RegisterAuthenticatorRequest::setLogParams(const std::string &logParams) {
  logParams_ = logParams;
  setParameter(std::string("LogParams"), logParams);
}

std::string RegisterAuthenticatorRequest::getClientExtendParamsJson() const {
  return clientExtendParamsJson_;
}

void RegisterAuthenticatorRequest::setClientExtendParamsJson(const std::string &clientExtendParamsJson) {
  clientExtendParamsJson_ = clientExtendParamsJson;
  setParameter(std::string("ClientExtendParamsJson"), clientExtendParamsJson);
}

std::string RegisterAuthenticatorRequest::getUserId() const {
  return userId_;
}

void RegisterAuthenticatorRequest::setUserId(const std::string &userId) {
  userId_ = userId;
  setParameter(std::string("UserId"), userId);
}

std::string RegisterAuthenticatorRequest::getServerExtendParamsJson() const {
  return serverExtendParamsJson_;
}

void RegisterAuthenticatorRequest::setServerExtendParamsJson(const std::string &serverExtendParamsJson) {
  serverExtendParamsJson_ = serverExtendParamsJson;
  setParameter(std::string("ServerExtendParamsJson"), serverExtendParamsJson);
}

std::string RegisterAuthenticatorRequest::getRegistrationContext() const {
  return registrationContext_;
}

void RegisterAuthenticatorRequest::setRegistrationContext(const std::string &registrationContext) {
  registrationContext_ = registrationContext;
  setParameter(std::string("RegistrationContext"), registrationContext);
}

std::string RegisterAuthenticatorRequest::getAuthenticatorName() const {
  return authenticatorName_;
}

void RegisterAuthenticatorRequest::setAuthenticatorName(const std::string &authenticatorName) {
  authenticatorName_ = authenticatorName;
  setParameter(std::string("AuthenticatorName"), authenticatorName);
}

std::string RegisterAuthenticatorRequest::getRequireChallengeBase64() const {
  return requireChallengeBase64_;
}

void RegisterAuthenticatorRequest::setRequireChallengeBase64(const std::string &requireChallengeBase64) {
  requireChallengeBase64_ = requireChallengeBase64;
  setParameter(std::string("RequireChallengeBase64"), requireChallengeBase64);
}

std::string RegisterAuthenticatorRequest::getAuthenticatorType() const {
  return authenticatorType_;
}

void RegisterAuthenticatorRequest::setAuthenticatorType(const std::string &authenticatorType) {
  authenticatorType_ = authenticatorType;
  setParameter(std::string("AuthenticatorType"), authenticatorType);
}

std::string RegisterAuthenticatorRequest::getClientExtendParamsJsonSign() const {
  return clientExtendParamsJsonSign_;
}

void RegisterAuthenticatorRequest::setClientExtendParamsJsonSign(const std::string &clientExtendParamsJsonSign) {
  clientExtendParamsJsonSign_ = clientExtendParamsJsonSign;
  setParameter(std::string("ClientExtendParamsJsonSign"), clientExtendParamsJsonSign);
}

std::string RegisterAuthenticatorRequest::getUserSourceIp() const {
  return userSourceIp_;
}

void RegisterAuthenticatorRequest::setUserSourceIp(const std::string &userSourceIp) {
  userSourceIp_ = userSourceIp;
  setParameter(std::string("UserSourceIp"), userSourceIp);
}

std::string RegisterAuthenticatorRequest::getApplicationExternalId() const {
  return applicationExternalId_;
}

void RegisterAuthenticatorRequest::setApplicationExternalId(const std::string &applicationExternalId) {
  applicationExternalId_ = applicationExternalId;
  setParameter(std::string("ApplicationExternalId"), applicationExternalId);
}

