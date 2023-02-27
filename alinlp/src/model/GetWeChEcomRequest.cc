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

#include <alibabacloud/alinlp/model/GetWeChEcomRequest.h>

using AlibabaCloud::Alinlp::Model::GetWeChEcomRequest;

GetWeChEcomRequest::GetWeChEcomRequest()
    : RpcServiceRequest("alinlp", "2020-06-29", "GetWeChEcom") {
  setMethod(HttpRequest::Method::Post);
}

GetWeChEcomRequest::~GetWeChEcomRequest() {}

std::string GetWeChEcomRequest::getType() const {
  return type_;
}

void GetWeChEcomRequest::setType(const std::string &type) {
  type_ = type;
  setBodyParameter(std::string("Type"), type);
}

std::string GetWeChEcomRequest::getServiceCode() const {
  return serviceCode_;
}

void GetWeChEcomRequest::setServiceCode(const std::string &serviceCode) {
  serviceCode_ = serviceCode;
  setBodyParameter(std::string("ServiceCode"), serviceCode);
}

std::string GetWeChEcomRequest::getSize() const {
  return size_;
}

void GetWeChEcomRequest::setSize(const std::string &size) {
  size_ = size;
  setBodyParameter(std::string("Size"), size);
}

std::string GetWeChEcomRequest::getTokenizerId() const {
  return tokenizerId_;
}

void GetWeChEcomRequest::setTokenizerId(const std::string &tokenizerId) {
  tokenizerId_ = tokenizerId;
  setBodyParameter(std::string("TokenizerId"), tokenizerId);
}

std::string GetWeChEcomRequest::getText() const {
  return text_;
}

void GetWeChEcomRequest::setText(const std::string &text) {
  text_ = text;
  setBodyParameter(std::string("Text"), text);
}

std::string GetWeChEcomRequest::getOperation() const {
  return operation_;
}

void GetWeChEcomRequest::setOperation(const std::string &operation) {
  operation_ = operation;
  setBodyParameter(std::string("Operation"), operation);
}

