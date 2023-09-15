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

#include <alibabacloud/cams/model/GetPreValidatePhoneIdRequest.h>

using AlibabaCloud::Cams::Model::GetPreValidatePhoneIdRequest;

GetPreValidatePhoneIdRequest::GetPreValidatePhoneIdRequest()
    : RpcServiceRequest("cams", "2020-06-06", "GetPreValidatePhoneId") {
  setMethod(HttpRequest::Method::Post);
}

GetPreValidatePhoneIdRequest::~GetPreValidatePhoneIdRequest() {}

std::string GetPreValidatePhoneIdRequest::getPhoneNumber() const {
  return phoneNumber_;
}

void GetPreValidatePhoneIdRequest::setPhoneNumber(const std::string &phoneNumber) {
  phoneNumber_ = phoneNumber;
  setBodyParameter(std::string("PhoneNumber"), phoneNumber);
}

std::string GetPreValidatePhoneIdRequest::getVerifyCode() const {
  return verifyCode_;
}

void GetPreValidatePhoneIdRequest::setVerifyCode(const std::string &verifyCode) {
  verifyCode_ = verifyCode;
  setBodyParameter(std::string("VerifyCode"), verifyCode);
}

std::string GetPreValidatePhoneIdRequest::getApiCode() const {
  return apiCode_;
}

void GetPreValidatePhoneIdRequest::setApiCode(const std::string &apiCode) {
  apiCode_ = apiCode;
  setParameter(std::string("ApiCode"), apiCode);
}

std::string GetPreValidatePhoneIdRequest::getProdCode() const {
  return prodCode_;
}

void GetPreValidatePhoneIdRequest::setProdCode(const std::string &prodCode) {
  prodCode_ = prodCode;
  setParameter(std::string("ProdCode"), prodCode);
}

