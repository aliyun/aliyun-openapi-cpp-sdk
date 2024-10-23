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

#include <alibabacloud/ims/model/CreateApplicationRequest.h>

using AlibabaCloud::Ims::Model::CreateApplicationRequest;

CreateApplicationRequest::CreateApplicationRequest()
    : RpcServiceRequest("ims", "2019-08-15", "CreateApplication") {
  setMethod(HttpRequest::Method::Post);
}

CreateApplicationRequest::~CreateApplicationRequest() {}

std::string CreateApplicationRequest::getAkProxySuffix() const {
  return akProxySuffix_;
}

void CreateApplicationRequest::setAkProxySuffix(const std::string &akProxySuffix) {
  akProxySuffix_ = akProxySuffix;
  setParameter(std::string("AkProxySuffix"), akProxySuffix);
}

std::string CreateApplicationRequest::getAppName() const {
  return appName_;
}

void CreateApplicationRequest::setAppName(const std::string &appName) {
  appName_ = appName;
  setParameter(std::string("AppName"), appName);
}

std::string CreateApplicationRequest::getRequiredScopes() const {
  return requiredScopes_;
}

void CreateApplicationRequest::setRequiredScopes(const std::string &requiredScopes) {
  requiredScopes_ = requiredScopes;
  setParameter(std::string("RequiredScopes"), requiredScopes);
}

int CreateApplicationRequest::getAccessTokenValidity() const {
  return accessTokenValidity_;
}

void CreateApplicationRequest::setAccessTokenValidity(int accessTokenValidity) {
  accessTokenValidity_ = accessTokenValidity;
  setParameter(std::string("AccessTokenValidity"), std::to_string(accessTokenValidity));
}

int CreateApplicationRequest::getRefreshTokenValidity() const {
  return refreshTokenValidity_;
}

void CreateApplicationRequest::setRefreshTokenValidity(int refreshTokenValidity) {
  refreshTokenValidity_ = refreshTokenValidity;
  setParameter(std::string("RefreshTokenValidity"), std::to_string(refreshTokenValidity));
}

std::string CreateApplicationRequest::getRedirectUris() const {
  return redirectUris_;
}

void CreateApplicationRequest::setRedirectUris(const std::string &redirectUris) {
  redirectUris_ = redirectUris;
  setParameter(std::string("RedirectUris"), redirectUris);
}

bool CreateApplicationRequest::getSecretRequired() const {
  return secretRequired_;
}

void CreateApplicationRequest::setSecretRequired(bool secretRequired) {
  secretRequired_ = secretRequired;
  setParameter(std::string("SecretRequired"), secretRequired ? "true" : "false");
}

std::string CreateApplicationRequest::getAppType() const {
  return appType_;
}

void CreateApplicationRequest::setAppType(const std::string &appType) {
  appType_ = appType;
  setParameter(std::string("AppType"), appType);
}

std::string CreateApplicationRequest::getAppPrincipalName() const {
  return appPrincipalName_;
}

void CreateApplicationRequest::setAppPrincipalName(const std::string &appPrincipalName) {
  appPrincipalName_ = appPrincipalName;
  setParameter(std::string("AppPrincipalName"), appPrincipalName);
}

std::string CreateApplicationRequest::getDisplayName() const {
  return displayName_;
}

void CreateApplicationRequest::setDisplayName(const std::string &displayName) {
  displayName_ = displayName;
  setParameter(std::string("DisplayName"), displayName);
}

std::string CreateApplicationRequest::getPredefinedScopes() const {
  return predefinedScopes_;
}

void CreateApplicationRequest::setPredefinedScopes(const std::string &predefinedScopes) {
  predefinedScopes_ = predefinedScopes;
  setParameter(std::string("PredefinedScopes"), predefinedScopes);
}

bool CreateApplicationRequest::getIsMultiTenant() const {
  return isMultiTenant_;
}

void CreateApplicationRequest::setIsMultiTenant(bool isMultiTenant) {
  isMultiTenant_ = isMultiTenant;
  setParameter(std::string("IsMultiTenant"), isMultiTenant ? "true" : "false");
}

