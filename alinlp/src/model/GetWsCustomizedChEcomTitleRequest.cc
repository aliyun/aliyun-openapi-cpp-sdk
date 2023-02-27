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

#include <alibabacloud/alinlp/model/GetWsCustomizedChEcomTitleRequest.h>

using AlibabaCloud::Alinlp::Model::GetWsCustomizedChEcomTitleRequest;

GetWsCustomizedChEcomTitleRequest::GetWsCustomizedChEcomTitleRequest()
    : RpcServiceRequest("alinlp", "2020-06-29", "GetWsCustomizedChEcomTitle") {
  setMethod(HttpRequest::Method::Post);
}

GetWsCustomizedChEcomTitleRequest::~GetWsCustomizedChEcomTitleRequest() {}

std::string GetWsCustomizedChEcomTitleRequest::getServiceCode() const {
  return serviceCode_;
}

void GetWsCustomizedChEcomTitleRequest::setServiceCode(const std::string &serviceCode) {
  serviceCode_ = serviceCode;
  setBodyParameter(std::string("ServiceCode"), serviceCode);
}

std::string GetWsCustomizedChEcomTitleRequest::getTokenizerId() const {
  return tokenizerId_;
}

void GetWsCustomizedChEcomTitleRequest::setTokenizerId(const std::string &tokenizerId) {
  tokenizerId_ = tokenizerId;
  setBodyParameter(std::string("TokenizerId"), tokenizerId);
}

std::string GetWsCustomizedChEcomTitleRequest::getText() const {
  return text_;
}

void GetWsCustomizedChEcomTitleRequest::setText(const std::string &text) {
  text_ = text;
  setBodyParameter(std::string("Text"), text);
}

std::string GetWsCustomizedChEcomTitleRequest::getOutType() const {
  return outType_;
}

void GetWsCustomizedChEcomTitleRequest::setOutType(const std::string &outType) {
  outType_ = outType;
  setBodyParameter(std::string("OutType"), outType);
}

