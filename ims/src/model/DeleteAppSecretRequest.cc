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

#include <alibabacloud/ims/model/DeleteAppSecretRequest.h>

using AlibabaCloud::Ims::Model::DeleteAppSecretRequest;

DeleteAppSecretRequest::DeleteAppSecretRequest()
    : RpcServiceRequest("ims", "2019-08-15", "DeleteAppSecret") {
  setMethod(HttpRequest::Method::Post);
}

DeleteAppSecretRequest::~DeleteAppSecretRequest() {}

std::string DeleteAppSecretRequest::getAkProxySuffix() const {
  return akProxySuffix_;
}

void DeleteAppSecretRequest::setAkProxySuffix(const std::string &akProxySuffix) {
  akProxySuffix_ = akProxySuffix;
  setParameter(std::string("AkProxySuffix"), akProxySuffix);
}

std::string DeleteAppSecretRequest::getAppSecretId() const {
  return appSecretId_;
}

void DeleteAppSecretRequest::setAppSecretId(const std::string &appSecretId) {
  appSecretId_ = appSecretId;
  setParameter(std::string("AppSecretId"), appSecretId);
}

std::string DeleteAppSecretRequest::getAppId() const {
  return appId_;
}

void DeleteAppSecretRequest::setAppId(const std::string &appId) {
  appId_ = appId;
  setParameter(std::string("AppId"), appId);
}

