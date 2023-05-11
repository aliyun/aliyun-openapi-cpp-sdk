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

#include <alibabacloud/alinlp/model/GetPosChGeneralRequest.h>

using AlibabaCloud::Alinlp::Model::GetPosChGeneralRequest;

GetPosChGeneralRequest::GetPosChGeneralRequest()
    : RpcServiceRequest("alinlp", "2020-06-29", "GetPosChGeneral") {
  setMethod(HttpRequest::Method::Post);
}

GetPosChGeneralRequest::~GetPosChGeneralRequest() {}

std::string GetPosChGeneralRequest::getServiceCode() const {
  return serviceCode_;
}

void GetPosChGeneralRequest::setServiceCode(const std::string &serviceCode) {
  serviceCode_ = serviceCode;
  setBodyParameter(std::string("ServiceCode"), serviceCode);
}

std::string GetPosChGeneralRequest::getTokenizerId() const {
  return tokenizerId_;
}

void GetPosChGeneralRequest::setTokenizerId(const std::string &tokenizerId) {
  tokenizerId_ = tokenizerId;
  setBodyParameter(std::string("TokenizerId"), tokenizerId);
}

std::string GetPosChGeneralRequest::getText() const {
  return text_;
}

void GetPosChGeneralRequest::setText(const std::string &text) {
  text_ = text;
  setBodyParameter(std::string("Text"), text);
}

std::string GetPosChGeneralRequest::getOutType() const {
  return outType_;
}

void GetPosChGeneralRequest::setOutType(const std::string &outType) {
  outType_ = outType;
  setBodyParameter(std::string("OutType"), outType);
}

