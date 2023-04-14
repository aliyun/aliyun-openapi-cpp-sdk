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

#include <alibabacloud/cams/model/ChatappMigrationVerifiedRequest.h>

using AlibabaCloud::Cams::Model::ChatappMigrationVerifiedRequest;

ChatappMigrationVerifiedRequest::ChatappMigrationVerifiedRequest()
    : RpcServiceRequest("cams", "2020-06-06", "ChatappMigrationVerified") {
  setMethod(HttpRequest::Method::Post);
}

ChatappMigrationVerifiedRequest::~ChatappMigrationVerifiedRequest() {}

std::string ChatappMigrationVerifiedRequest::getPhoneNumber() const {
  return phoneNumber_;
}

void ChatappMigrationVerifiedRequest::setPhoneNumber(const std::string &phoneNumber) {
  phoneNumber_ = phoneNumber;
  setParameter(std::string("PhoneNumber"), phoneNumber);
}

std::string ChatappMigrationVerifiedRequest::getVerifyCode() const {
  return verifyCode_;
}

void ChatappMigrationVerifiedRequest::setVerifyCode(const std::string &verifyCode) {
  verifyCode_ = verifyCode;
  setParameter(std::string("VerifyCode"), verifyCode);
}

std::string ChatappMigrationVerifiedRequest::getApiCode() const {
  return apiCode_;
}

void ChatappMigrationVerifiedRequest::setApiCode(const std::string &apiCode) {
  apiCode_ = apiCode;
  setParameter(std::string("ApiCode"), apiCode);
}

std::string ChatappMigrationVerifiedRequest::getProdCode() const {
  return prodCode_;
}

void ChatappMigrationVerifiedRequest::setProdCode(const std::string &prodCode) {
  prodCode_ = prodCode;
  setParameter(std::string("ProdCode"), prodCode);
}

std::string ChatappMigrationVerifiedRequest::getCustSpaceId() const {
  return custSpaceId_;
}

void ChatappMigrationVerifiedRequest::setCustSpaceId(const std::string &custSpaceId) {
  custSpaceId_ = custSpaceId;
  setParameter(std::string("CustSpaceId"), custSpaceId);
}

