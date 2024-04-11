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

#include <alibabacloud/cams/model/UpdatePhoneMessageQrdlRequest.h>

using AlibabaCloud::Cams::Model::UpdatePhoneMessageQrdlRequest;

UpdatePhoneMessageQrdlRequest::UpdatePhoneMessageQrdlRequest()
    : RpcServiceRequest("cams", "2020-06-06", "UpdatePhoneMessageQrdl") {
  setMethod(HttpRequest::Method::Post);
}

UpdatePhoneMessageQrdlRequest::~UpdatePhoneMessageQrdlRequest() {}

std::string UpdatePhoneMessageQrdlRequest::getPhoneNumber() const {
  return phoneNumber_;
}

void UpdatePhoneMessageQrdlRequest::setPhoneNumber(const std::string &phoneNumber) {
  phoneNumber_ = phoneNumber;
  setBodyParameter(std::string("PhoneNumber"), phoneNumber);
}

std::string UpdatePhoneMessageQrdlRequest::getPrefilledMessage() const {
  return prefilledMessage_;
}

void UpdatePhoneMessageQrdlRequest::setPrefilledMessage(const std::string &prefilledMessage) {
  prefilledMessage_ = prefilledMessage;
  setBodyParameter(std::string("PrefilledMessage"), prefilledMessage);
}

std::string UpdatePhoneMessageQrdlRequest::getApiCode() const {
  return apiCode_;
}

void UpdatePhoneMessageQrdlRequest::setApiCode(const std::string &apiCode) {
  apiCode_ = apiCode;
  setParameter(std::string("ApiCode"), apiCode);
}

std::string UpdatePhoneMessageQrdlRequest::getGenerateQrImage() const {
  return generateQrImage_;
}

void UpdatePhoneMessageQrdlRequest::setGenerateQrImage(const std::string &generateQrImage) {
  generateQrImage_ = generateQrImage;
  setBodyParameter(std::string("GenerateQrImage"), generateQrImage);
}

std::string UpdatePhoneMessageQrdlRequest::getQrdlCode() const {
  return qrdlCode_;
}

void UpdatePhoneMessageQrdlRequest::setQrdlCode(const std::string &qrdlCode) {
  qrdlCode_ = qrdlCode;
  setBodyParameter(std::string("QrdlCode"), qrdlCode);
}

std::string UpdatePhoneMessageQrdlRequest::getProdCode() const {
  return prodCode_;
}

void UpdatePhoneMessageQrdlRequest::setProdCode(const std::string &prodCode) {
  prodCode_ = prodCode;
  setParameter(std::string("ProdCode"), prodCode);
}

std::string UpdatePhoneMessageQrdlRequest::getCustSpaceId() const {
  return custSpaceId_;
}

void UpdatePhoneMessageQrdlRequest::setCustSpaceId(const std::string &custSpaceId) {
  custSpaceId_ = custSpaceId;
  setBodyParameter(std::string("CustSpaceId"), custSpaceId);
}

