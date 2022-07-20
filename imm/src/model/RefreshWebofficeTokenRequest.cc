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

#include <alibabacloud/imm/model/RefreshWebofficeTokenRequest.h>

using AlibabaCloud::Imm::Model::RefreshWebofficeTokenRequest;

RefreshWebofficeTokenRequest::RefreshWebofficeTokenRequest()
    : RpcServiceRequest("imm", "2020-09-30", "RefreshWebofficeToken") {
  setMethod(HttpRequest::Method::Post);
}

RefreshWebofficeTokenRequest::~RefreshWebofficeTokenRequest() {}

std::string RefreshWebofficeTokenRequest::getAccessToken() const {
  return accessToken_;
}

void RefreshWebofficeTokenRequest::setAccessToken(const std::string &accessToken) {
  accessToken_ = accessToken;
  setParameter(std::string("AccessToken"), accessToken);
}

std::string RefreshWebofficeTokenRequest::getRefreshToken() const {
  return refreshToken_;
}

void RefreshWebofficeTokenRequest::setRefreshToken(const std::string &refreshToken) {
  refreshToken_ = refreshToken;
  setParameter(std::string("RefreshToken"), refreshToken);
}

std::string RefreshWebofficeTokenRequest::getProjectName() const {
  return projectName_;
}

void RefreshWebofficeTokenRequest::setProjectName(const std::string &projectName) {
  projectName_ = projectName;
  setParameter(std::string("ProjectName"), projectName);
}

RefreshWebofficeTokenRequest::CredentialConfig RefreshWebofficeTokenRequest::getCredentialConfig() const {
  return credentialConfig_;
}

void RefreshWebofficeTokenRequest::setCredentialConfig(const RefreshWebofficeTokenRequest::CredentialConfig &credentialConfig) {
  credentialConfig_ = credentialConfig;
  for(int dep1 = 0; dep1 != credentialConfig.chain.size(); dep1++) {
    setParameter(std::string("CredentialConfig") + ".Chain." + std::to_string(dep1 + 1) + ".Role", credentialConfig.chain[dep1].role);
    setParameter(std::string("CredentialConfig") + ".Chain." + std::to_string(dep1 + 1) + ".RoleType", credentialConfig.chain[dep1].roleType);
    setParameter(std::string("CredentialConfig") + ".Chain." + std::to_string(dep1 + 1) + ".AssumeRoleFor", credentialConfig.chain[dep1].assumeRoleFor);
  }
  setParameter(std::string("CredentialConfig") + ".ServiceRole", credentialConfig.serviceRole);
  setParameter(std::string("CredentialConfig") + ".Policy", credentialConfig.policy);
}

