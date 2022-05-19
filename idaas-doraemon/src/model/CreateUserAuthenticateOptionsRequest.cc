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

#include <alibabacloud/idaas-doraemon/model/CreateUserAuthenticateOptionsRequest.h>

using AlibabaCloud::Idaas_doraemon::Model::CreateUserAuthenticateOptionsRequest;

CreateUserAuthenticateOptionsRequest::CreateUserAuthenticateOptionsRequest()
    : RpcServiceRequest("idaas-doraemon", "2021-05-20", "CreateUserAuthenticateOptions") {
  setMethod(HttpRequest::Method::Post);
}

CreateUserAuthenticateOptionsRequest::~CreateUserAuthenticateOptionsRequest() {}

std::string CreateUserAuthenticateOptionsRequest::getClientExtendParamsJson() const {
  return clientExtendParamsJson_;
}

void CreateUserAuthenticateOptionsRequest::setClientExtendParamsJson(const std::string &clientExtendParamsJson) {
  clientExtendParamsJson_ = clientExtendParamsJson;
  setParameter(std::string("ClientExtendParamsJson"), clientExtendParamsJson);
}

std::string CreateUserAuthenticateOptionsRequest::getUserId() const {
  return userId_;
}

void CreateUserAuthenticateOptionsRequest::setUserId(const std::string &userId) {
  userId_ = userId;
  setParameter(std::string("UserId"), userId);
}

std::string CreateUserAuthenticateOptionsRequest::getBindHashBase64() const {
  return bindHashBase64_;
}

void CreateUserAuthenticateOptionsRequest::setBindHashBase64(const std::string &bindHashBase64) {
  bindHashBase64_ = bindHashBase64;
  setParameter(std::string("BindHashBase64"), bindHashBase64);
}

std::string CreateUserAuthenticateOptionsRequest::getServerExtendParamsJson() const {
  return serverExtendParamsJson_;
}

void CreateUserAuthenticateOptionsRequest::setServerExtendParamsJson(const std::string &serverExtendParamsJson) {
  serverExtendParamsJson_ = serverExtendParamsJson;
  setParameter(std::string("ServerExtendParamsJson"), serverExtendParamsJson);
}

std::string CreateUserAuthenticateOptionsRequest::getAuthenticatorType() const {
  return authenticatorType_;
}

void CreateUserAuthenticateOptionsRequest::setAuthenticatorType(const std::string &authenticatorType) {
  authenticatorType_ = authenticatorType;
  setParameter(std::string("AuthenticatorType"), authenticatorType);
}

std::string CreateUserAuthenticateOptionsRequest::getClientExtendParamsJsonSign() const {
  return clientExtendParamsJsonSign_;
}

void CreateUserAuthenticateOptionsRequest::setClientExtendParamsJsonSign(const std::string &clientExtendParamsJsonSign) {
  clientExtendParamsJsonSign_ = clientExtendParamsJsonSign;
  setParameter(std::string("ClientExtendParamsJsonSign"), clientExtendParamsJsonSign);
}

std::string CreateUserAuthenticateOptionsRequest::getApplicationExternalId() const {
  return applicationExternalId_;
}

void CreateUserAuthenticateOptionsRequest::setApplicationExternalId(const std::string &applicationExternalId) {
  applicationExternalId_ = applicationExternalId;
  setParameter(std::string("ApplicationExternalId"), applicationExternalId);
}

