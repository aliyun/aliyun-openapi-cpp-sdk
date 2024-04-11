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

#include <alibabacloud/cams/model/ListPhoneMessageQrdlRequest.h>

using AlibabaCloud::Cams::Model::ListPhoneMessageQrdlRequest;

ListPhoneMessageQrdlRequest::ListPhoneMessageQrdlRequest()
    : RpcServiceRequest("cams", "2020-06-06", "ListPhoneMessageQrdl") {
  setMethod(HttpRequest::Method::Post);
}

ListPhoneMessageQrdlRequest::~ListPhoneMessageQrdlRequest() {}

std::string ListPhoneMessageQrdlRequest::getPhoneNumber() const {
  return phoneNumber_;
}

void ListPhoneMessageQrdlRequest::setPhoneNumber(const std::string &phoneNumber) {
  phoneNumber_ = phoneNumber;
  setBodyParameter(std::string("PhoneNumber"), phoneNumber);
}

std::string ListPhoneMessageQrdlRequest::getApiCode() const {
  return apiCode_;
}

void ListPhoneMessageQrdlRequest::setApiCode(const std::string &apiCode) {
  apiCode_ = apiCode;
  setParameter(std::string("ApiCode"), apiCode);
}

std::string ListPhoneMessageQrdlRequest::getProdCode() const {
  return prodCode_;
}

void ListPhoneMessageQrdlRequest::setProdCode(const std::string &prodCode) {
  prodCode_ = prodCode;
  setParameter(std::string("ProdCode"), prodCode);
}

std::string ListPhoneMessageQrdlRequest::getCustSpaceId() const {
  return custSpaceId_;
}

void ListPhoneMessageQrdlRequest::setCustSpaceId(const std::string &custSpaceId) {
  custSpaceId_ = custSpaceId;
  setBodyParameter(std::string("CustSpaceId"), custSpaceId);
}

