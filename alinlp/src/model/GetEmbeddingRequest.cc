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

#include <alibabacloud/alinlp/model/GetEmbeddingRequest.h>

using AlibabaCloud::Alinlp::Model::GetEmbeddingRequest;

GetEmbeddingRequest::GetEmbeddingRequest()
    : RpcServiceRequest("alinlp", "2020-06-29", "GetEmbedding") {
  setMethod(HttpRequest::Method::Post);
}

GetEmbeddingRequest::~GetEmbeddingRequest() {}

std::string GetEmbeddingRequest::getBusiness() const {
  return business_;
}

void GetEmbeddingRequest::setBusiness(const std::string &business) {
  business_ = business;
  setParameter(std::string("Business"), business);
}

std::string GetEmbeddingRequest::getServiceCode() const {
  return serviceCode_;
}

void GetEmbeddingRequest::setServiceCode(const std::string &serviceCode) {
  serviceCode_ = serviceCode;
  setBodyParameter(std::string("ServiceCode"), serviceCode);
}

std::string GetEmbeddingRequest::getText() const {
  return text_;
}

void GetEmbeddingRequest::setText(const std::string &text) {
  text_ = text;
  setBodyParameter(std::string("Text"), text);
}

std::string GetEmbeddingRequest::getTextType() const {
  return textType_;
}

void GetEmbeddingRequest::setTextType(const std::string &textType) {
  textType_ = textType;
  setBodyParameter(std::string("TextType"), textType);
}

