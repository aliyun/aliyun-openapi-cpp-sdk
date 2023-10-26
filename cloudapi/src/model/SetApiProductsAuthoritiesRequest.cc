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

#include <alibabacloud/cloudapi/model/SetApiProductsAuthoritiesRequest.h>

using AlibabaCloud::CloudAPI::Model::SetApiProductsAuthoritiesRequest;

SetApiProductsAuthoritiesRequest::SetApiProductsAuthoritiesRequest()
    : RpcServiceRequest("cloudapi", "2016-07-14", "SetApiProductsAuthorities") {
  setMethod(HttpRequest::Method::Post);
}

SetApiProductsAuthoritiesRequest::~SetApiProductsAuthoritiesRequest() {}

std::string SetApiProductsAuthoritiesRequest::getDescription() const {
  return description_;
}

void SetApiProductsAuthoritiesRequest::setDescription(const std::string &description) {
  description_ = description;
  setParameter(std::string("Description"), description);
}

std::vector<SetApiProductsAuthoritiesRequest::std::string> SetApiProductsAuthoritiesRequest::getApiProductIds() const {
  return apiProductIds_;
}

void SetApiProductsAuthoritiesRequest::setApiProductIds(const std::vector<SetApiProductsAuthoritiesRequest::std::string> &apiProductIds) {
  apiProductIds_ = apiProductIds;
  for(int dep1 = 0; dep1 != apiProductIds.size(); dep1++) {
    setParameter(std::string("ApiProductIds") + "." + std::to_string(dep1 + 1), apiProductIds[dep1]);
  }
}

std::string SetApiProductsAuthoritiesRequest::getAuthValidTime() const {
  return authValidTime_;
}

void SetApiProductsAuthoritiesRequest::setAuthValidTime(const std::string &authValidTime) {
  authValidTime_ = authValidTime;
  setParameter(std::string("AuthValidTime"), authValidTime);
}

std::string SetApiProductsAuthoritiesRequest::getAccessKeyId() const {
  return accessKeyId_;
}

void SetApiProductsAuthoritiesRequest::setAccessKeyId(const std::string &accessKeyId) {
  accessKeyId_ = accessKeyId;
  setParameter(std::string("AccessKeyId"), accessKeyId);
}

std::string SetApiProductsAuthoritiesRequest::getSecurityToken() const {
  return securityToken_;
}

void SetApiProductsAuthoritiesRequest::setSecurityToken(const std::string &securityToken) {
  securityToken_ = securityToken;
  setParameter(std::string("SecurityToken"), securityToken);
}

long SetApiProductsAuthoritiesRequest::getAppId() const {
  return appId_;
}

void SetApiProductsAuthoritiesRequest::setAppId(long appId) {
  appId_ = appId;
  setParameter(std::string("AppId"), std::to_string(appId));
}

