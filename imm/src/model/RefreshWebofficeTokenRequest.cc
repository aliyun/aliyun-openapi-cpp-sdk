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
    : RpcServiceRequest("imm", "2017-09-06", "RefreshWebofficeToken") {
  setMethod(HttpRequest::Method::Post);
}

RefreshWebofficeTokenRequest::~RefreshWebofficeTokenRequest() {}

std::string RefreshWebofficeTokenRequest::getProject() const {
  return project_;
}

void RefreshWebofficeTokenRequest::setProject(const std::string &project) {
  project_ = project;
  setParameter(std::string("Project"), project);
}

std::string RefreshWebofficeTokenRequest::getAccessToken() const {
  return accessToken_;
}

void RefreshWebofficeTokenRequest::setAccessToken(const std::string &accessToken) {
  accessToken_ = accessToken;
  setParameter(std::string("AccessToken"), accessToken);
}

std::string RefreshWebofficeTokenRequest::getAccessKeyId() const {
  return accessKeyId_;
}

void RefreshWebofficeTokenRequest::setAccessKeyId(const std::string &accessKeyId) {
  accessKeyId_ = accessKeyId;
  setParameter(std::string("AccessKeyId"), accessKeyId);
}

std::string RefreshWebofficeTokenRequest::getRefreshToken() const {
  return refreshToken_;
}

void RefreshWebofficeTokenRequest::setRefreshToken(const std::string &refreshToken) {
  refreshToken_ = refreshToken;
  setParameter(std::string("RefreshToken"), refreshToken);
}

