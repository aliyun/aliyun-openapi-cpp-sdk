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

#include <alibabacloud/idaas-doraemon/model/UpdateAuthenticatorAttributeRequest.h>

using AlibabaCloud::Idaas_doraemon::Model::UpdateAuthenticatorAttributeRequest;

UpdateAuthenticatorAttributeRequest::UpdateAuthenticatorAttributeRequest()
    : RpcServiceRequest("idaas-doraemon", "2021-05-20", "UpdateAuthenticatorAttribute") {
  setMethod(HttpRequest::Method::Post);
}

UpdateAuthenticatorAttributeRequest::~UpdateAuthenticatorAttributeRequest() {}

std::string UpdateAuthenticatorAttributeRequest::getUserId() const {
  return userId_;
}

void UpdateAuthenticatorAttributeRequest::setUserId(const std::string &userId) {
  userId_ = userId;
  setParameter(std::string("UserId"), userId);
}

std::string UpdateAuthenticatorAttributeRequest::getAuthenticatorName() const {
  return authenticatorName_;
}

void UpdateAuthenticatorAttributeRequest::setAuthenticatorName(const std::string &authenticatorName) {
  authenticatorName_ = authenticatorName;
  setParameter(std::string("AuthenticatorName"), authenticatorName);
}

std::string UpdateAuthenticatorAttributeRequest::getAuthenticatorUuid() const {
  return authenticatorUuid_;
}

void UpdateAuthenticatorAttributeRequest::setAuthenticatorUuid(const std::string &authenticatorUuid) {
  authenticatorUuid_ = authenticatorUuid;
  setParameter(std::string("AuthenticatorUuid"), authenticatorUuid);
}

std::string UpdateAuthenticatorAttributeRequest::getApplicationExternalId() const {
  return applicationExternalId_;
}

void UpdateAuthenticatorAttributeRequest::setApplicationExternalId(const std::string &applicationExternalId) {
  applicationExternalId_ = applicationExternalId;
  setParameter(std::string("ApplicationExternalId"), applicationExternalId);
}

