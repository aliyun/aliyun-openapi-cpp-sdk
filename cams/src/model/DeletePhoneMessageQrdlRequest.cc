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

#include <alibabacloud/cams/model/DeletePhoneMessageQrdlRequest.h>

using AlibabaCloud::Cams::Model::DeletePhoneMessageQrdlRequest;

DeletePhoneMessageQrdlRequest::DeletePhoneMessageQrdlRequest()
    : RpcServiceRequest("cams", "2020-06-06", "DeletePhoneMessageQrdl") {
  setMethod(HttpRequest::Method::Post);
}

DeletePhoneMessageQrdlRequest::~DeletePhoneMessageQrdlRequest() {}

std::string DeletePhoneMessageQrdlRequest::getPhoneNumber() const {
  return phoneNumber_;
}

void DeletePhoneMessageQrdlRequest::setPhoneNumber(const std::string &phoneNumber) {
  phoneNumber_ = phoneNumber;
  setBodyParameter(std::string("PhoneNumber"), phoneNumber);
}

std::string DeletePhoneMessageQrdlRequest::getApiCode() const {
  return apiCode_;
}

void DeletePhoneMessageQrdlRequest::setApiCode(const std::string &apiCode) {
  apiCode_ = apiCode;
  setParameter(std::string("ApiCode"), apiCode);
}

std::string DeletePhoneMessageQrdlRequest::getQrdlCode() const {
  return qrdlCode_;
}

void DeletePhoneMessageQrdlRequest::setQrdlCode(const std::string &qrdlCode) {
  qrdlCode_ = qrdlCode;
  setBodyParameter(std::string("QrdlCode"), qrdlCode);
}

std::string DeletePhoneMessageQrdlRequest::getProdCode() const {
  return prodCode_;
}

void DeletePhoneMessageQrdlRequest::setProdCode(const std::string &prodCode) {
  prodCode_ = prodCode;
  setParameter(std::string("ProdCode"), prodCode);
}

std::string DeletePhoneMessageQrdlRequest::getCustSpaceId() const {
  return custSpaceId_;
}

void DeletePhoneMessageQrdlRequest::setCustSpaceId(const std::string &custSpaceId) {
  custSpaceId_ = custSpaceId;
  setBodyParameter(std::string("CustSpaceId"), custSpaceId);
}

