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

#include <alibabacloud/ims/model/UpdateApplicationRequest.h>

using AlibabaCloud::Ims::Model::UpdateApplicationRequest;

UpdateApplicationRequest::UpdateApplicationRequest()
    : RpcServiceRequest("ims", "2019-08-15", "UpdateApplication") {
  setMethod(HttpRequest::Method::Post);
}

UpdateApplicationRequest::~UpdateApplicationRequest() {}

bool UpdateApplicationRequest::getNewIsMultiTenant() const {
  return newIsMultiTenant_;
}

void UpdateApplicationRequest::setNewIsMultiTenant(bool newIsMultiTenant) {
  newIsMultiTenant_ = newIsMultiTenant;
  setParameter(std::string("NewIsMultiTenant"), newIsMultiTenant ? "true" : "false");
}

std::string UpdateApplicationRequest::getAkProxySuffix() const {
  return akProxySuffix_;
}

void UpdateApplicationRequest::setAkProxySuffix(const std::string &akProxySuffix) {
  akProxySuffix_ = akProxySuffix;
  setParameter(std::string("AkProxySuffix"), akProxySuffix);
}

int UpdateApplicationRequest::getNewRefreshTokenValidity() const {
  return newRefreshTokenValidity_;
}

void UpdateApplicationRequest::setNewRefreshTokenValidity(int newRefreshTokenValidity) {
  newRefreshTokenValidity_ = newRefreshTokenValidity;
  setParameter(std::string("NewRefreshTokenValidity"), std::to_string(newRefreshTokenValidity));
}

std::string UpdateApplicationRequest::getNewPredefinedScopes() const {
  return newPredefinedScopes_;
}

void UpdateApplicationRequest::setNewPredefinedScopes(const std::string &newPredefinedScopes) {
  newPredefinedScopes_ = newPredefinedScopes;
  setParameter(std::string("NewPredefinedScopes"), newPredefinedScopes);
}

bool UpdateApplicationRequest::getNewSecretRequired() const {
  return newSecretRequired_;
}

void UpdateApplicationRequest::setNewSecretRequired(bool newSecretRequired) {
  newSecretRequired_ = newSecretRequired;
  setParameter(std::string("NewSecretRequired"), newSecretRequired ? "true" : "false");
}

std::string UpdateApplicationRequest::getNewDisplayName() const {
  return newDisplayName_;
}

void UpdateApplicationRequest::setNewDisplayName(const std::string &newDisplayName) {
  newDisplayName_ = newDisplayName;
  setParameter(std::string("NewDisplayName"), newDisplayName);
}

std::string UpdateApplicationRequest::getNewRequiredScopes() const {
  return newRequiredScopes_;
}

void UpdateApplicationRequest::setNewRequiredScopes(const std::string &newRequiredScopes) {
  newRequiredScopes_ = newRequiredScopes;
  setParameter(std::string("NewRequiredScopes"), newRequiredScopes);
}

std::string UpdateApplicationRequest::getNewRedirectUris() const {
  return newRedirectUris_;
}

void UpdateApplicationRequest::setNewRedirectUris(const std::string &newRedirectUris) {
  newRedirectUris_ = newRedirectUris;
  setParameter(std::string("NewRedirectUris"), newRedirectUris);
}

std::string UpdateApplicationRequest::getAppId() const {
  return appId_;
}

void UpdateApplicationRequest::setAppId(const std::string &appId) {
  appId_ = appId;
  setParameter(std::string("AppId"), appId);
}

int UpdateApplicationRequest::getNewAccessTokenValidity() const {
  return newAccessTokenValidity_;
}

void UpdateApplicationRequest::setNewAccessTokenValidity(int newAccessTokenValidity) {
  newAccessTokenValidity_ = newAccessTokenValidity;
  setParameter(std::string("NewAccessTokenValidity"), std::to_string(newAccessTokenValidity));
}

