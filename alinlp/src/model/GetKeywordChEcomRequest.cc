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

#include <alibabacloud/alinlp/model/GetKeywordChEcomRequest.h>

using AlibabaCloud::Alinlp::Model::GetKeywordChEcomRequest;

GetKeywordChEcomRequest::GetKeywordChEcomRequest()
    : RpcServiceRequest("alinlp", "2020-06-29", "GetKeywordChEcom") {
  setMethod(HttpRequest::Method::Post);
}

GetKeywordChEcomRequest::~GetKeywordChEcomRequest() {}

std::string GetKeywordChEcomRequest::getApiVersion() const {
  return apiVersion_;
}

void GetKeywordChEcomRequest::setApiVersion(const std::string &apiVersion) {
  apiVersion_ = apiVersion;
  setBodyParameter(std::string("ApiVersion"), apiVersion);
}

std::string GetKeywordChEcomRequest::getServiceCode() const {
  return serviceCode_;
}

void GetKeywordChEcomRequest::setServiceCode(const std::string &serviceCode) {
  serviceCode_ = serviceCode;
  setBodyParameter(std::string("ServiceCode"), serviceCode);
}

std::string GetKeywordChEcomRequest::getText() const {
  return text_;
}

void GetKeywordChEcomRequest::setText(const std::string &text) {
  text_ = text;
  setBodyParameter(std::string("Text"), text);
}

