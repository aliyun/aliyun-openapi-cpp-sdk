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

#include <alibabacloud/idaas-doraemon/model/CreateAuthenticatorRegistrationRequest.h>

using AlibabaCloud::Idaas_doraemon::Model::CreateAuthenticatorRegistrationRequest;

CreateAuthenticatorRegistrationRequest::CreateAuthenticatorRegistrationRequest()
    : RpcServiceRequest("idaas-doraemon", "2021-05-20", "CreateAuthenticatorRegistration") {
  setMethod(HttpRequest::Method::Post);
}

CreateAuthenticatorRegistrationRequest::~CreateAuthenticatorRegistrationRequest() {}

std::string CreateAuthenticatorRegistrationRequest::getClientExtendParamsJson() const {
  return clientExtendParamsJson_;
}

void CreateAuthenticatorRegistrationRequest::setClientExtendParamsJson(const std::string &clientExtendParamsJson) {
  clientExtendParamsJson_ = clientExtendParamsJson;
  setParameter(std::string("ClientExtendParamsJson"), clientExtendParamsJson);
}

std::string CreateAuthenticatorRegistrationRequest::getUserId() const {
  return userId_;
}

void CreateAuthenticatorRegistrationRequest::setUserId(const std::string &userId) {
  userId_ = userId;
  setParameter(std::string("UserId"), userId);
}

std::string CreateAuthenticatorRegistrationRequest::getUserDisplayName() const {
  return userDisplayName_;
}

void CreateAuthenticatorRegistrationRequest::setUserDisplayName(const std::string &userDisplayName) {
  userDisplayName_ = userDisplayName;
  setParameter(std::string("UserDisplayName"), userDisplayName);
}

std::string CreateAuthenticatorRegistrationRequest::getServerExtendParamsJson() const {
  return serverExtendParamsJson_;
}

void CreateAuthenticatorRegistrationRequest::setServerExtendParamsJson(const std::string &serverExtendParamsJson) {
  serverExtendParamsJson_ = serverExtendParamsJson;
  setParameter(std::string("ServerExtendParamsJson"), serverExtendParamsJson);
}

std::string CreateAuthenticatorRegistrationRequest::getRegistrationContext() const {
  return registrationContext_;
}

void CreateAuthenticatorRegistrationRequest::setRegistrationContext(const std::string &registrationContext) {
  registrationContext_ = registrationContext;
  setParameter(std::string("RegistrationContext"), registrationContext);
}

std::string CreateAuthenticatorRegistrationRequest::getAuthenticatorType() const {
  return authenticatorType_;
}

void CreateAuthenticatorRegistrationRequest::setAuthenticatorType(const std::string &authenticatorType) {
  authenticatorType_ = authenticatorType;
  setParameter(std::string("AuthenticatorType"), authenticatorType);
}

std::string CreateAuthenticatorRegistrationRequest::getClientExtendParamsJsonSign() const {
  return clientExtendParamsJsonSign_;
}

void CreateAuthenticatorRegistrationRequest::setClientExtendParamsJsonSign(const std::string &clientExtendParamsJsonSign) {
  clientExtendParamsJsonSign_ = clientExtendParamsJsonSign;
  setParameter(std::string("ClientExtendParamsJsonSign"), clientExtendParamsJsonSign);
}

std::string CreateAuthenticatorRegistrationRequest::getApplicationExternalId() const {
  return applicationExternalId_;
}

void CreateAuthenticatorRegistrationRequest::setApplicationExternalId(const std::string &applicationExternalId) {
  applicationExternalId_ = applicationExternalId;
  setParameter(std::string("ApplicationExternalId"), applicationExternalId);
}

std::string CreateAuthenticatorRegistrationRequest::getUserName() const {
  return userName_;
}

void CreateAuthenticatorRegistrationRequest::setUserName(const std::string &userName) {
  userName_ = userName;
  setParameter(std::string("UserName"), userName);
}

