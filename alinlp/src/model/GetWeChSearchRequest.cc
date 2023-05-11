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

#include <alibabacloud/alinlp/model/GetWeChSearchRequest.h>

using AlibabaCloud::Alinlp::Model::GetWeChSearchRequest;

GetWeChSearchRequest::GetWeChSearchRequest()
    : RpcServiceRequest("alinlp", "2020-06-29", "GetWeChSearch") {
  setMethod(HttpRequest::Method::Post);
}

GetWeChSearchRequest::~GetWeChSearchRequest() {}

std::string GetWeChSearchRequest::getType() const {
  return type_;
}

void GetWeChSearchRequest::setType(const std::string &type) {
  type_ = type;
  setBodyParameter(std::string("Type"), type);
}

std::string GetWeChSearchRequest::getServiceCode() const {
  return serviceCode_;
}

void GetWeChSearchRequest::setServiceCode(const std::string &serviceCode) {
  serviceCode_ = serviceCode;
  setBodyParameter(std::string("ServiceCode"), serviceCode);
}

std::string GetWeChSearchRequest::getSize() const {
  return size_;
}

void GetWeChSearchRequest::setSize(const std::string &size) {
  size_ = size;
  setBodyParameter(std::string("Size"), size);
}

std::string GetWeChSearchRequest::getTokenizerId() const {
  return tokenizerId_;
}

void GetWeChSearchRequest::setTokenizerId(const std::string &tokenizerId) {
  tokenizerId_ = tokenizerId;
  setBodyParameter(std::string("TokenizerId"), tokenizerId);
}

std::string GetWeChSearchRequest::getText() const {
  return text_;
}

void GetWeChSearchRequest::setText(const std::string &text) {
  text_ = text;
  setBodyParameter(std::string("Text"), text);
}

std::string GetWeChSearchRequest::getOperation() const {
  return operation_;
}

void GetWeChSearchRequest::setOperation(const std::string &operation) {
  operation_ = operation;
  setBodyParameter(std::string("Operation"), operation);
}

