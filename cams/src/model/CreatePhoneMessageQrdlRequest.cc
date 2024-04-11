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

#include <alibabacloud/cams/model/CreatePhoneMessageQrdlRequest.h>

using AlibabaCloud::Cams::Model::CreatePhoneMessageQrdlRequest;

CreatePhoneMessageQrdlRequest::CreatePhoneMessageQrdlRequest()
    : RpcServiceRequest("cams", "2020-06-06", "CreatePhoneMessageQrdl") {
  setMethod(HttpRequest::Method::Post);
}

CreatePhoneMessageQrdlRequest::~CreatePhoneMessageQrdlRequest() {}

std::string CreatePhoneMessageQrdlRequest::getPhoneNumber() const {
  return phoneNumber_;
}

void CreatePhoneMessageQrdlRequest::setPhoneNumber(const std::string &phoneNumber) {
  phoneNumber_ = phoneNumber;
  setBodyParameter(std::string("PhoneNumber"), phoneNumber);
}

std::string CreatePhoneMessageQrdlRequest::getPrefilledMessage() const {
  return prefilledMessage_;
}

void CreatePhoneMessageQrdlRequest::setPrefilledMessage(const std::string &prefilledMessage) {
  prefilledMessage_ = prefilledMessage;
  setBodyParameter(std::string("PrefilledMessage"), prefilledMessage);
}

std::string CreatePhoneMessageQrdlRequest::getApiCode() const {
  return apiCode_;
}

void CreatePhoneMessageQrdlRequest::setApiCode(const std::string &apiCode) {
  apiCode_ = apiCode;
  setParameter(std::string("ApiCode"), apiCode);
}

std::string CreatePhoneMessageQrdlRequest::getGenerateQrImage() const {
  return generateQrImage_;
}

void CreatePhoneMessageQrdlRequest::setGenerateQrImage(const std::string &generateQrImage) {
  generateQrImage_ = generateQrImage;
  setBodyParameter(std::string("GenerateQrImage"), generateQrImage);
}

std::string CreatePhoneMessageQrdlRequest::getProdCode() const {
  return prodCode_;
}

void CreatePhoneMessageQrdlRequest::setProdCode(const std::string &prodCode) {
  prodCode_ = prodCode;
  setParameter(std::string("ProdCode"), prodCode);
}

std::string CreatePhoneMessageQrdlRequest::getCustSpaceId() const {
  return custSpaceId_;
}

void CreatePhoneMessageQrdlRequest::setCustSpaceId(const std::string &custSpaceId) {
  custSpaceId_ = custSpaceId;
  setBodyParameter(std::string("CustSpaceId"), custSpaceId);
}

