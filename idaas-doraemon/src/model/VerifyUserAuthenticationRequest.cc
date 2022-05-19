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

#include <alibabacloud/idaas-doraemon/model/VerifyUserAuthenticationRequest.h>

using AlibabaCloud::Idaas_doraemon::Model::VerifyUserAuthenticationRequest;

VerifyUserAuthenticationRequest::VerifyUserAuthenticationRequest()
    : RpcServiceRequest("idaas-doraemon", "2021-05-20", "VerifyUserAuthentication") {
  setMethod(HttpRequest::Method::Post);
}

VerifyUserAuthenticationRequest::~VerifyUserAuthenticationRequest() {}

std::string VerifyUserAuthenticationRequest::getLogParams() const {
  return logParams_;
}

void VerifyUserAuthenticationRequest::setLogParams(const std::string &logParams) {
  logParams_ = logParams;
  setParameter(std::string("LogParams"), logParams);
}

std::string VerifyUserAuthenticationRequest::getClientExtendParamsJson() const {
  return clientExtendParamsJson_;
}

void VerifyUserAuthenticationRequest::setClientExtendParamsJson(const std::string &clientExtendParamsJson) {
  clientExtendParamsJson_ = clientExtendParamsJson;
  setParameter(std::string("ClientExtendParamsJson"), clientExtendParamsJson);
}

std::string VerifyUserAuthenticationRequest::getUserId() const {
  return userId_;
}

void VerifyUserAuthenticationRequest::setUserId(const std::string &userId) {
  userId_ = userId;
  setParameter(std::string("UserId"), userId);
}

std::string VerifyUserAuthenticationRequest::getLogTag() const {
  return logTag_;
}

void VerifyUserAuthenticationRequest::setLogTag(const std::string &logTag) {
  logTag_ = logTag;
  setParameter(std::string("LogTag"), logTag);
}

std::string VerifyUserAuthenticationRequest::getServerExtendParamsJson() const {
  return serverExtendParamsJson_;
}

void VerifyUserAuthenticationRequest::setServerExtendParamsJson(const std::string &serverExtendParamsJson) {
  serverExtendParamsJson_ = serverExtendParamsJson;
  setParameter(std::string("ServerExtendParamsJson"), serverExtendParamsJson);
}

std::string VerifyUserAuthenticationRequest::getRequireBindHashBase64() const {
  return requireBindHashBase64_;
}

void VerifyUserAuthenticationRequest::setRequireBindHashBase64(const std::string &requireBindHashBase64) {
  requireBindHashBase64_ = requireBindHashBase64;
  setParameter(std::string("RequireBindHashBase64"), requireBindHashBase64);
}

std::string VerifyUserAuthenticationRequest::getAuthenticationContext() const {
  return authenticationContext_;
}

void VerifyUserAuthenticationRequest::setAuthenticationContext(const std::string &authenticationContext) {
  authenticationContext_ = authenticationContext;
  setParameter(std::string("AuthenticationContext"), authenticationContext);
}

std::string VerifyUserAuthenticationRequest::getRequireChallengeBase64() const {
  return requireChallengeBase64_;
}

void VerifyUserAuthenticationRequest::setRequireChallengeBase64(const std::string &requireChallengeBase64) {
  requireChallengeBase64_ = requireChallengeBase64;
  setParameter(std::string("RequireChallengeBase64"), requireChallengeBase64);
}

std::string VerifyUserAuthenticationRequest::getAuthenticatorType() const {
  return authenticatorType_;
}

void VerifyUserAuthenticationRequest::setAuthenticatorType(const std::string &authenticatorType) {
  authenticatorType_ = authenticatorType;
  setParameter(std::string("AuthenticatorType"), authenticatorType);
}

std::string VerifyUserAuthenticationRequest::getClientExtendParamsJsonSign() const {
  return clientExtendParamsJsonSign_;
}

void VerifyUserAuthenticationRequest::setClientExtendParamsJsonSign(const std::string &clientExtendParamsJsonSign) {
  clientExtendParamsJsonSign_ = clientExtendParamsJsonSign;
  setParameter(std::string("ClientExtendParamsJsonSign"), clientExtendParamsJsonSign);
}

std::string VerifyUserAuthenticationRequest::getUserSourceIp() const {
  return userSourceIp_;
}

void VerifyUserAuthenticationRequest::setUserSourceIp(const std::string &userSourceIp) {
  userSourceIp_ = userSourceIp;
  setParameter(std::string("UserSourceIp"), userSourceIp);
}

std::string VerifyUserAuthenticationRequest::getApplicationExternalId() const {
  return applicationExternalId_;
}

void VerifyUserAuthenticationRequest::setApplicationExternalId(const std::string &applicationExternalId) {
  applicationExternalId_ = applicationExternalId;
  setParameter(std::string("ApplicationExternalId"), applicationExternalId);
}

