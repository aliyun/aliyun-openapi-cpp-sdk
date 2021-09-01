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

#include <alibabacloud/mts/model/SubmitInferenceJobRequest.h>

using AlibabaCloud::Mts::Model::SubmitInferenceJobRequest;

SubmitInferenceJobRequest::SubmitInferenceJobRequest()
    : RpcServiceRequest("mts", "2014-06-18", "SubmitInferenceJob") {
  setMethod(HttpRequest::Method::Post);
}

SubmitInferenceJobRequest::~SubmitInferenceJobRequest() {}

std::string SubmitInferenceJobRequest::getInput() const {
  return input_;
}

void SubmitInferenceJobRequest::setInput(const std::string &input) {
  input_ = input;
  setParameter(std::string("Input"), input);
}

std::string SubmitInferenceJobRequest::getModelType() const {
  return modelType_;
}

void SubmitInferenceJobRequest::setModelType(const std::string &modelType) {
  modelType_ = modelType;
  setParameter(std::string("ModelType"), modelType);
}

std::string SubmitInferenceJobRequest::getServerName() const {
  return serverName_;
}

void SubmitInferenceJobRequest::setServerName(const std::string &serverName) {
  serverName_ = serverName;
  setParameter(std::string("ServerName"), serverName);
}

