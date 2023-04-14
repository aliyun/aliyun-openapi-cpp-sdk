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

#include <alibabacloud/cams/model/CreateChatappMigrationInitiateRequest.h>

using AlibabaCloud::Cams::Model::CreateChatappMigrationInitiateRequest;

CreateChatappMigrationInitiateRequest::CreateChatappMigrationInitiateRequest()
    : RpcServiceRequest("cams", "2020-06-06", "CreateChatappMigrationInitiate") {
  setMethod(HttpRequest::Method::Post);
}

CreateChatappMigrationInitiateRequest::~CreateChatappMigrationInitiateRequest() {}

std::string CreateChatappMigrationInitiateRequest::getMobileNumber() const {
  return mobileNumber_;
}

void CreateChatappMigrationInitiateRequest::setMobileNumber(const std::string &mobileNumber) {
  mobileNumber_ = mobileNumber;
  setParameter(std::string("MobileNumber"), mobileNumber);
}

std::string CreateChatappMigrationInitiateRequest::getCountryCode() const {
  return countryCode_;
}

void CreateChatappMigrationInitiateRequest::setCountryCode(const std::string &countryCode) {
  countryCode_ = countryCode;
  setParameter(std::string("CountryCode"), countryCode);
}

std::string CreateChatappMigrationInitiateRequest::getApiCode() const {
  return apiCode_;
}

void CreateChatappMigrationInitiateRequest::setApiCode(const std::string &apiCode) {
  apiCode_ = apiCode;
  setParameter(std::string("ApiCode"), apiCode);
}

std::string CreateChatappMigrationInitiateRequest::getProdCode() const {
  return prodCode_;
}

void CreateChatappMigrationInitiateRequest::setProdCode(const std::string &prodCode) {
  prodCode_ = prodCode;
  setParameter(std::string("ProdCode"), prodCode);
}

std::string CreateChatappMigrationInitiateRequest::getCustSpaceId() const {
  return custSpaceId_;
}

void CreateChatappMigrationInitiateRequest::setCustSpaceId(const std::string &custSpaceId) {
  custSpaceId_ = custSpaceId;
  setParameter(std::string("CustSpaceId"), custSpaceId);
}

