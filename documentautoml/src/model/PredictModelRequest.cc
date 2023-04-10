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

#include <alibabacloud/documentautoml/model/PredictModelRequest.h>

using AlibabaCloud::DocumentAutoml::Model::PredictModelRequest;

PredictModelRequest::PredictModelRequest()
    : RpcServiceRequest("documentautoml", "2022-12-29", "PredictModel") {
  setMethod(HttpRequest::Method::Post);
}

PredictModelRequest::~PredictModelRequest() {}

std::string PredictModelRequest::getBody() const {
  return body_;
}

void PredictModelRequest::setBody(const std::string &body) {
  body_ = body;
  setBodyParameter(std::string("body"), body);
}

std::string PredictModelRequest::getContent() const {
  return content_;
}

void PredictModelRequest::setContent(const std::string &content) {
  content_ = content;
  setParameter(std::string("Content"), content);
}

bool PredictModelRequest::getBinaryToText() const {
  return binaryToText_;
}

void PredictModelRequest::setBinaryToText(bool binaryToText) {
  binaryToText_ = binaryToText;
  setParameter(std::string("BinaryToText"), binaryToText ? "true" : "false");
}

std::string PredictModelRequest::getProduct() const {
  return product_;
}

void PredictModelRequest::setProduct(const std::string &product) {
  product_ = product;
  setParameter(std::string("Product"), product);
}

long PredictModelRequest::getModelId() const {
  return modelId_;
}

void PredictModelRequest::setModelId(long modelId) {
  modelId_ = modelId;
  setParameter(std::string("ModelId"), std::to_string(modelId));
}

std::string PredictModelRequest::getModelVersion() const {
  return modelVersion_;
}

void PredictModelRequest::setModelVersion(const std::string &modelVersion) {
  modelVersion_ = modelVersion;
  setParameter(std::string("ModelVersion"), modelVersion);
}

