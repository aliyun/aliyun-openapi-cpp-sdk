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

#include <alibabacloud/cams/model/GetMigrationVerifyCodeRequest.h>

using AlibabaCloud::Cams::Model::GetMigrationVerifyCodeRequest;

GetMigrationVerifyCodeRequest::GetMigrationVerifyCodeRequest()
    : RpcServiceRequest("cams", "2020-06-06", "GetMigrationVerifyCode") {
  setMethod(HttpRequest::Method::Post);
}

GetMigrationVerifyCodeRequest::~GetMigrationVerifyCodeRequest() {}

std::string GetMigrationVerifyCodeRequest::getPhoneNumber() const {
  return phoneNumber_;
}

void GetMigrationVerifyCodeRequest::setPhoneNumber(const std::string &phoneNumber) {
  phoneNumber_ = phoneNumber;
  setParameter(std::string("PhoneNumber"), phoneNumber);
}

std::string GetMigrationVerifyCodeRequest::getLocale() const {
  return locale_;
}

void GetMigrationVerifyCodeRequest::setLocale(const std::string &locale) {
  locale_ = locale;
  setParameter(std::string("Locale"), locale);
}

std::string GetMigrationVerifyCodeRequest::getApiCode() const {
  return apiCode_;
}

void GetMigrationVerifyCodeRequest::setApiCode(const std::string &apiCode) {
  apiCode_ = apiCode;
  setParameter(std::string("ApiCode"), apiCode);
}

std::string GetMigrationVerifyCodeRequest::getMethod() const {
  return method_;
}

void GetMigrationVerifyCodeRequest::setMethod(const std::string &method) {
  method_ = method;
  setParameter(std::string("Method"), method);
}

std::string GetMigrationVerifyCodeRequest::getProdCode() const {
  return prodCode_;
}

void GetMigrationVerifyCodeRequest::setProdCode(const std::string &prodCode) {
  prodCode_ = prodCode;
  setParameter(std::string("ProdCode"), prodCode);
}

std::string GetMigrationVerifyCodeRequest::getCustSpaceId() const {
  return custSpaceId_;
}

void GetMigrationVerifyCodeRequest::setCustSpaceId(const std::string &custSpaceId) {
  custSpaceId_ = custSpaceId;
  setParameter(std::string("CustSpaceId"), custSpaceId);
}

