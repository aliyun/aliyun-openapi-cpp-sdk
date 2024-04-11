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

#include <alibabacloud/cams/model/IsvGetAppIdRequest.h>

using AlibabaCloud::Cams::Model::IsvGetAppIdRequest;

IsvGetAppIdRequest::IsvGetAppIdRequest()
    : RpcServiceRequest("cams", "2020-06-06", "IsvGetAppId") {
  setMethod(HttpRequest::Method::Post);
}

IsvGetAppIdRequest::~IsvGetAppIdRequest() {}

std::string IsvGetAppIdRequest::getIntlVersion() const {
  return intlVersion_;
}

void IsvGetAppIdRequest::setIntlVersion(const std::string &intlVersion) {
  intlVersion_ = intlVersion;
  setBodyParameter(std::string("IntlVersion"), intlVersion);
}

std::string IsvGetAppIdRequest::getType() const {
  return type_;
}

void IsvGetAppIdRequest::setType(const std::string &type) {
  type_ = type;
  setBodyParameter(std::string("Type"), type);
}

std::string IsvGetAppIdRequest::getApiCode() const {
  return apiCode_;
}

void IsvGetAppIdRequest::setApiCode(const std::string &apiCode) {
  apiCode_ = apiCode;
  setParameter(std::string("ApiCode"), apiCode);
}

std::string IsvGetAppIdRequest::getPermissions() const {
  return permissions_;
}

void IsvGetAppIdRequest::setPermissions(const std::string &permissions) {
  permissions_ = permissions;
  setBodyParameter(std::string("Permissions"), permissions);
}

std::string IsvGetAppIdRequest::getProdCode() const {
  return prodCode_;
}

void IsvGetAppIdRequest::setProdCode(const std::string &prodCode) {
  prodCode_ = prodCode;
  setParameter(std::string("ProdCode"), prodCode);
}

