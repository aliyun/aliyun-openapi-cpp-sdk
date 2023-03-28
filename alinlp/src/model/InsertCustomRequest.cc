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

#include <alibabacloud/alinlp/model/InsertCustomRequest.h>

using AlibabaCloud::Alinlp::Model::InsertCustomRequest;

InsertCustomRequest::InsertCustomRequest()
    : RpcServiceRequest("alinlp", "2020-06-29", "InsertCustom") {
  setMethod(HttpRequest::Method::Post);
}

InsertCustomRequest::~InsertCustomRequest() {}

std::string InsertCustomRequest::getCustomUrl() const {
  return customUrl_;
}

void InsertCustomRequest::setCustomUrl(const std::string &customUrl) {
  customUrl_ = customUrl;
  setBodyParameter(std::string("CustomUrl"), customUrl);
}

std::string InsertCustomRequest::getRegUrl() const {
  return regUrl_;
}

void InsertCustomRequest::setRegUrl(const std::string &regUrl) {
  regUrl_ = regUrl;
  setBodyParameter(std::string("RegUrl"), regUrl);
}

std::string InsertCustomRequest::getServiceCode() const {
  return serviceCode_;
}

void InsertCustomRequest::setServiceCode(const std::string &serviceCode) {
  serviceCode_ = serviceCode;
  setBodyParameter(std::string("ServiceCode"), serviceCode);
}

std::string InsertCustomRequest::getRegFileName() const {
  return regFileName_;
}

void InsertCustomRequest::setRegFileName(const std::string &regFileName) {
  regFileName_ = regFileName;
  setBodyParameter(std::string("RegFileName"), regFileName);
}

std::string InsertCustomRequest::getCustomFileName() const {
  return customFileName_;
}

void InsertCustomRequest::setCustomFileName(const std::string &customFileName) {
  customFileName_ = customFileName;
  setBodyParameter(std::string("CustomFileName"), customFileName);
}

int InsertCustomRequest::getApiId() const {
  return apiId_;
}

void InsertCustomRequest::setApiId(int apiId) {
  apiId_ = apiId;
  setBodyParameter(std::string("ApiId"), std::to_string(apiId));
}

