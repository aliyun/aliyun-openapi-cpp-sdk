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

#include <alibabacloud/quickbi-public/model/DataInterpretationRequest.h>

using AlibabaCloud::Quickbi_public::Model::DataInterpretationRequest;

DataInterpretationRequest::DataInterpretationRequest()
    : RpcServiceRequest("quickbi-public", "2022-01-01", "DataInterpretation") {
  setMethod(HttpRequest::Method::Post);
}

DataInterpretationRequest::~DataInterpretationRequest() {}

bool DataInterpretationRequest::getPromptForceOverride() const {
  return promptForceOverride_;
}

void DataInterpretationRequest::setPromptForceOverride(bool promptForceOverride) {
  promptForceOverride_ = promptForceOverride;
  setParameter(std::string("PromptForceOverride"), promptForceOverride ? "true" : "false");
}

std::string DataInterpretationRequest::getData() const {
  return data_;
}

void DataInterpretationRequest::setData(const std::string &data) {
  data_ = data;
  setParameter(std::string("Data"), data);
}

std::string DataInterpretationRequest::getAccessPoint() const {
  return accessPoint_;
}

void DataInterpretationRequest::setAccessPoint(const std::string &accessPoint) {
  accessPoint_ = accessPoint;
  setParameter(std::string("AccessPoint"), accessPoint);
}

std::string DataInterpretationRequest::getUserQuestion() const {
  return userQuestion_;
}

void DataInterpretationRequest::setUserQuestion(const std::string &userQuestion) {
  userQuestion_ = userQuestion;
  setParameter(std::string("UserQuestion"), userQuestion);
}

std::string DataInterpretationRequest::getSignType() const {
  return signType_;
}

void DataInterpretationRequest::setSignType(const std::string &signType) {
  signType_ = signType;
  setParameter(std::string("SignType"), signType);
}

std::string DataInterpretationRequest::getUserPrompt() const {
  return userPrompt_;
}

void DataInterpretationRequest::setUserPrompt(const std::string &userPrompt) {
  userPrompt_ = userPrompt;
  setParameter(std::string("UserPrompt"), userPrompt);
}

std::string DataInterpretationRequest::getModelCode() const {
  return modelCode_;
}

void DataInterpretationRequest::setModelCode(const std::string &modelCode) {
  modelCode_ = modelCode;
  setParameter(std::string("ModelCode"), modelCode);
}

