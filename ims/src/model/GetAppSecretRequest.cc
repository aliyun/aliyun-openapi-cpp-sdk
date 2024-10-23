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

#include <alibabacloud/ims/model/GetAppSecretRequest.h>

using AlibabaCloud::Ims::Model::GetAppSecretRequest;

GetAppSecretRequest::GetAppSecretRequest()
    : RpcServiceRequest("ims", "2019-08-15", "GetAppSecret") {
  setMethod(HttpRequest::Method::Post);
}

GetAppSecretRequest::~GetAppSecretRequest() {}

std::string GetAppSecretRequest::getAkProxySuffix() const {
  return akProxySuffix_;
}

void GetAppSecretRequest::setAkProxySuffix(const std::string &akProxySuffix) {
  akProxySuffix_ = akProxySuffix;
  setParameter(std::string("AkProxySuffix"), akProxySuffix);
}

std::string GetAppSecretRequest::getAppSecretId() const {
  return appSecretId_;
}

void GetAppSecretRequest::setAppSecretId(const std::string &appSecretId) {
  appSecretId_ = appSecretId;
  setParameter(std::string("AppSecretId"), appSecretId);
}

std::string GetAppSecretRequest::getAppId() const {
  return appId_;
}

void GetAppSecretRequest::setAppId(const std::string &appId) {
  appId_ = appId;
  setParameter(std::string("AppId"), appId);
}

