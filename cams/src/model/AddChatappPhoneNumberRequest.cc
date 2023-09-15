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

#include <alibabacloud/cams/model/AddChatappPhoneNumberRequest.h>

using AlibabaCloud::Cams::Model::AddChatappPhoneNumberRequest;

AddChatappPhoneNumberRequest::AddChatappPhoneNumberRequest()
    : RpcServiceRequest("cams", "2020-06-06", "AddChatappPhoneNumber") {
  setMethod(HttpRequest::Method::Post);
}

AddChatappPhoneNumberRequest::~AddChatappPhoneNumberRequest() {}

std::string AddChatappPhoneNumberRequest::getPreValidateId() const {
  return preValidateId_;
}

void AddChatappPhoneNumberRequest::setPreValidateId(const std::string &preValidateId) {
  preValidateId_ = preValidateId;
  setBodyParameter(std::string("PreValidateId"), preValidateId);
}

std::string AddChatappPhoneNumberRequest::getVerifiedName() const {
  return verifiedName_;
}

void AddChatappPhoneNumberRequest::setVerifiedName(const std::string &verifiedName) {
  verifiedName_ = verifiedName;
  setBodyParameter(std::string("VerifiedName"), verifiedName);
}

std::string AddChatappPhoneNumberRequest::getPhoneNumber() const {
  return phoneNumber_;
}

void AddChatappPhoneNumberRequest::setPhoneNumber(const std::string &phoneNumber) {
  phoneNumber_ = phoneNumber;
  setBodyParameter(std::string("PhoneNumber"), phoneNumber);
}

std::string AddChatappPhoneNumberRequest::getApiCode() const {
  return apiCode_;
}

void AddChatappPhoneNumberRequest::setApiCode(const std::string &apiCode) {
  apiCode_ = apiCode;
  setParameter(std::string("ApiCode"), apiCode);
}

std::string AddChatappPhoneNumberRequest::getCc() const {
  return cc_;
}

void AddChatappPhoneNumberRequest::setCc(const std::string &cc) {
  cc_ = cc;
  setBodyParameter(std::string("Cc"), cc);
}

std::string AddChatappPhoneNumberRequest::getProdCode() const {
  return prodCode_;
}

void AddChatappPhoneNumberRequest::setProdCode(const std::string &prodCode) {
  prodCode_ = prodCode;
  setParameter(std::string("ProdCode"), prodCode);
}

std::string AddChatappPhoneNumberRequest::getCustSpaceId() const {
  return custSpaceId_;
}

void AddChatappPhoneNumberRequest::setCustSpaceId(const std::string &custSpaceId) {
  custSpaceId_ = custSpaceId;
  setBodyParameter(std::string("CustSpaceId"), custSpaceId);
}

