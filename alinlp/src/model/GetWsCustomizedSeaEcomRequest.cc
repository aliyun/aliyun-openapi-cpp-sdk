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

#include <alibabacloud/alinlp/model/GetWsCustomizedSeaEcomRequest.h>

using AlibabaCloud::Alinlp::Model::GetWsCustomizedSeaEcomRequest;

GetWsCustomizedSeaEcomRequest::GetWsCustomizedSeaEcomRequest()
    : RpcServiceRequest("alinlp", "2020-06-29", "GetWsCustomizedSeaEcom") {
  setMethod(HttpRequest::Method::Post);
}

GetWsCustomizedSeaEcomRequest::~GetWsCustomizedSeaEcomRequest() {}

std::string GetWsCustomizedSeaEcomRequest::getLanguage() const {
  return language_;
}

void GetWsCustomizedSeaEcomRequest::setLanguage(const std::string &language) {
  language_ = language;
  setBodyParameter(std::string("Language"), language);
}

std::string GetWsCustomizedSeaEcomRequest::getServiceCode() const {
  return serviceCode_;
}

void GetWsCustomizedSeaEcomRequest::setServiceCode(const std::string &serviceCode) {
  serviceCode_ = serviceCode;
  setBodyParameter(std::string("ServiceCode"), serviceCode);
}

std::string GetWsCustomizedSeaEcomRequest::getText() const {
  return text_;
}

void GetWsCustomizedSeaEcomRequest::setText(const std::string &text) {
  text_ = text;
  setBodyParameter(std::string("Text"), text);
}

