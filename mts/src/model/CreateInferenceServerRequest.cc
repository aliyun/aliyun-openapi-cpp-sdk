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

#include <alibabacloud/mts/model/CreateInferenceServerRequest.h>

using AlibabaCloud::Mts::Model::CreateInferenceServerRequest;

CreateInferenceServerRequest::CreateInferenceServerRequest()
    : RpcServiceRequest("mts", "2014-06-18", "CreateInferenceServer") {
  setMethod(HttpRequest::Method::Post);
}

CreateInferenceServerRequest::~CreateInferenceServerRequest() {}

std::string CreateInferenceServerRequest::getPipelineId() const {
  return pipelineId_;
}

void CreateInferenceServerRequest::setPipelineId(const std::string &pipelineId) {
  pipelineId_ = pipelineId;
  setParameter(std::string("PipelineId"), pipelineId);
}

std::string CreateInferenceServerRequest::getUserData() const {
  return userData_;
}

void CreateInferenceServerRequest::setUserData(const std::string &userData) {
  userData_ = userData;
  setParameter(std::string("UserData"), userData);
}

std::string CreateInferenceServerRequest::getModelType() const {
  return modelType_;
}

void CreateInferenceServerRequest::setModelType(const std::string &modelType) {
  modelType_ = modelType;
  setParameter(std::string("ModelType"), modelType);
}

std::string CreateInferenceServerRequest::getFunctionName() const {
  return functionName_;
}

void CreateInferenceServerRequest::setFunctionName(const std::string &functionName) {
  functionName_ = functionName;
  setParameter(std::string("FunctionName"), functionName);
}

std::string CreateInferenceServerRequest::getTestId() const {
  return testId_;
}

void CreateInferenceServerRequest::setTestId(const std::string &testId) {
  testId_ = testId;
  setParameter(std::string("TestId"), testId);
}

std::string CreateInferenceServerRequest::getModelPath() const {
  return modelPath_;
}

void CreateInferenceServerRequest::setModelPath(const std::string &modelPath) {
  modelPath_ = modelPath;
  setParameter(std::string("ModelPath"), modelPath);
}

