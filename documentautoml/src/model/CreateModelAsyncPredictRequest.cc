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

#include <alibabacloud/documentautoml/model/CreateModelAsyncPredictRequest.h>

using AlibabaCloud::DocumentAutoml::Model::CreateModelAsyncPredictRequest;

CreateModelAsyncPredictRequest::CreateModelAsyncPredictRequest()
    : RpcServiceRequest("documentautoml", "2022-12-29", "CreateModelAsyncPredict") {
  setMethod(HttpRequest::Method::Post);
}

CreateModelAsyncPredictRequest::~CreateModelAsyncPredictRequest() {}

std::string CreateModelAsyncPredictRequest::getBody() const {
  return body_;
}

void CreateModelAsyncPredictRequest::setBody(const std::string &body) {
  body_ = body;
  setBodyParameter(std::string("body"), body);
}

bool CreateModelAsyncPredictRequest::getBinaryToText() const {
  return binaryToText_;
}

void CreateModelAsyncPredictRequest::setBinaryToText(bool binaryToText) {
  binaryToText_ = binaryToText;
  setParameter(std::string("BinaryToText"), binaryToText ? "true" : "false");
}

std::string CreateModelAsyncPredictRequest::getContent() const {
  return content_;
}

void CreateModelAsyncPredictRequest::setContent(const std::string &content) {
  content_ = content;
  setParameter(std::string("Content"), content);
}

std::string CreateModelAsyncPredictRequest::getServiceName() const {
  return serviceName_;
}

void CreateModelAsyncPredictRequest::setServiceName(const std::string &serviceName) {
  serviceName_ = serviceName;
  setParameter(std::string("ServiceName"), serviceName);
}

std::string CreateModelAsyncPredictRequest::getProduct() const {
  return product_;
}

void CreateModelAsyncPredictRequest::setProduct(const std::string &product) {
  product_ = product;
  setParameter(std::string("Product"), product);
}

long CreateModelAsyncPredictRequest::getModelId() const {
  return modelId_;
}

void CreateModelAsyncPredictRequest::setModelId(long modelId) {
  modelId_ = modelId;
  setParameter(std::string("ModelId"), std::to_string(modelId));
}

std::string CreateModelAsyncPredictRequest::getServiceVersion() const {
  return serviceVersion_;
}

void CreateModelAsyncPredictRequest::setServiceVersion(const std::string &serviceVersion) {
  serviceVersion_ = serviceVersion;
  setParameter(std::string("ServiceVersion"), serviceVersion);
}

std::string CreateModelAsyncPredictRequest::getModelVersion() const {
  return modelVersion_;
}

void CreateModelAsyncPredictRequest::setModelVersion(const std::string &modelVersion) {
  modelVersion_ = modelVersion;
  setParameter(std::string("ModelVersion"), modelVersion);
}

