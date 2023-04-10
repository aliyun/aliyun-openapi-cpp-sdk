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

#include <alibabacloud/documentautoml/model/PredictTemplateModelRequest.h>

using AlibabaCloud::DocumentAutoml::Model::PredictTemplateModelRequest;

PredictTemplateModelRequest::PredictTemplateModelRequest()
    : RpcServiceRequest("documentautoml", "2022-12-29", "PredictTemplateModel") {
  setMethod(HttpRequest::Method::Post);
}

PredictTemplateModelRequest::~PredictTemplateModelRequest() {}

std::string PredictTemplateModelRequest::getBody() const {
  return body_;
}

void PredictTemplateModelRequest::setBody(const std::string &body) {
  body_ = body;
  setBodyParameter(std::string("body"), body);
}

std::string PredictTemplateModelRequest::getContent() const {
  return content_;
}

void PredictTemplateModelRequest::setContent(const std::string &content) {
  content_ = content;
  setParameter(std::string("Content"), content);
}

bool PredictTemplateModelRequest::getBinaryToText() const {
  return binaryToText_;
}

void PredictTemplateModelRequest::setBinaryToText(bool binaryToText) {
  binaryToText_ = binaryToText;
  setParameter(std::string("BinaryToText"), binaryToText ? "true" : "false");
}

long PredictTemplateModelRequest::getTaskId() const {
  return taskId_;
}

void PredictTemplateModelRequest::setTaskId(long taskId) {
  taskId_ = taskId;
  setParameter(std::string("TaskId"), std::to_string(taskId));
}

std::string PredictTemplateModelRequest::getProduct() const {
  return product_;
}

void PredictTemplateModelRequest::setProduct(const std::string &product) {
  product_ = product;
  setParameter(std::string("Product"), product);
}

