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

#include <alibabacloud/alinlp/model/GetWsCustomizedChO2ORequest.h>

using AlibabaCloud::Alinlp::Model::GetWsCustomizedChO2ORequest;

GetWsCustomizedChO2ORequest::GetWsCustomizedChO2ORequest()
    : RpcServiceRequest("alinlp", "2020-06-29", "GetWsCustomizedChO2O") {
  setMethod(HttpRequest::Method::Post);
}

GetWsCustomizedChO2ORequest::~GetWsCustomizedChO2ORequest() {}

std::string GetWsCustomizedChO2ORequest::getServiceCode() const {
  return serviceCode_;
}

void GetWsCustomizedChO2ORequest::setServiceCode(const std::string &serviceCode) {
  serviceCode_ = serviceCode;
  setBodyParameter(std::string("ServiceCode"), serviceCode);
}

std::string GetWsCustomizedChO2ORequest::getTokenizerId() const {
  return tokenizerId_;
}

void GetWsCustomizedChO2ORequest::setTokenizerId(const std::string &tokenizerId) {
  tokenizerId_ = tokenizerId;
  setBodyParameter(std::string("TokenizerId"), tokenizerId);
}

std::string GetWsCustomizedChO2ORequest::getText() const {
  return text_;
}

void GetWsCustomizedChO2ORequest::setText(const std::string &text) {
  text_ = text;
  setBodyParameter(std::string("Text"), text);
}

std::string GetWsCustomizedChO2ORequest::getOutType() const {
  return outType_;
}

void GetWsCustomizedChO2ORequest::setOutType(const std::string &outType) {
  outType_ = outType;
  setBodyParameter(std::string("OutType"), outType);
}

