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

#include <alibabacloud/nlp-automl/model/GetPredictResultHighRequest.h>

using AlibabaCloud::Nlp_automl::Model::GetPredictResultHighRequest;

GetPredictResultHighRequest::GetPredictResultHighRequest()
    : RpcServiceRequest("nlp-automl", "2019-11-11", "GetPredictResultHigh") {
  setMethod(HttpRequest::Method::Post);
}

GetPredictResultHighRequest::~GetPredictResultHighRequest() {}

int GetPredictResultHighRequest::getTopK() const {
  return topK_;
}

void GetPredictResultHighRequest::setTopK(int topK) {
  topK_ = topK;
  setBodyParameter(std::string("TopK"), std::to_string(topK));
}

std::string GetPredictResultHighRequest::getProduct() const {
  return product_;
}

void GetPredictResultHighRequest::setProduct(const std::string &product) {
  product_ = product;
  setBodyParameter(std::string("Product"), product);
}

int GetPredictResultHighRequest::getModelId() const {
  return modelId_;
}

void GetPredictResultHighRequest::setModelId(int modelId) {
  modelId_ = modelId;
  setBodyParameter(std::string("ModelId"), std::to_string(modelId));
}

std::string GetPredictResultHighRequest::getDetailTag() const {
  return detailTag_;
}

void GetPredictResultHighRequest::setDetailTag(const std::string &detailTag) {
  detailTag_ = detailTag;
  setBodyParameter(std::string("DetailTag"), detailTag);
}

std::string GetPredictResultHighRequest::getContent() const {
  return content_;
}

void GetPredictResultHighRequest::setContent(const std::string &content) {
  content_ = content;
  setBodyParameter(std::string("Content"), content);
}

std::string GetPredictResultHighRequest::getModelVersion() const {
  return modelVersion_;
}

void GetPredictResultHighRequest::setModelVersion(const std::string &modelVersion) {
  modelVersion_ = modelVersion;
  setBodyParameter(std::string("ModelVersion"), modelVersion);
}

