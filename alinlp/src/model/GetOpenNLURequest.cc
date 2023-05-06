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

#include <alibabacloud/alinlp/model/GetOpenNLURequest.h>

using AlibabaCloud::Alinlp::Model::GetOpenNLURequest;

GetOpenNLURequest::GetOpenNLURequest()
    : RpcServiceRequest("alinlp", "2020-06-29", "GetOpenNLU") {
  setMethod(HttpRequest::Method::Post);
}

GetOpenNLURequest::~GetOpenNLURequest() {}

std::string GetOpenNLURequest::getSentence() const {
  return sentence_;
}

void GetOpenNLURequest::setSentence(const std::string &sentence) {
  sentence_ = sentence;
  setBodyParameter(std::string("Sentence"), sentence);
}

std::string GetOpenNLURequest::getBusiness() const {
  return business_;
}

void GetOpenNLURequest::setBusiness(const std::string &business) {
  business_ = business;
  setParameter(std::string("Business"), business);
}

std::string GetOpenNLURequest::getLabels() const {
  return labels_;
}

void GetOpenNLURequest::setLabels(const std::string &labels) {
  labels_ = labels;
  setBodyParameter(std::string("Labels"), labels);
}

std::string GetOpenNLURequest::getTask() const {
  return task_;
}

void GetOpenNLURequest::setTask(const std::string &task) {
  task_ = task;
  setBodyParameter(std::string("Task"), task);
}

std::string GetOpenNLURequest::getServiceCode() const {
  return serviceCode_;
}

void GetOpenNLURequest::setServiceCode(const std::string &serviceCode) {
  serviceCode_ = serviceCode;
  setBodyParameter(std::string("ServiceCode"), serviceCode);
}

std::string GetOpenNLURequest::getExamples() const {
  return examples_;
}

void GetOpenNLURequest::setExamples(const std::string &examples) {
  examples_ = examples;
  setBodyParameter(std::string("Examples"), examples);
}

