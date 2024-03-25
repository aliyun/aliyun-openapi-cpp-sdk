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

#include <alibabacloud/fnf/model/StartExecutionRequest.h>

using AlibabaCloud::Fnf::Model::StartExecutionRequest;

StartExecutionRequest::StartExecutionRequest()
    : RpcServiceRequest("fnf", "2019-03-15", "StartExecution") {
  setMethod(HttpRequest::Method::Post);
}

StartExecutionRequest::~StartExecutionRequest() {}

std::string StartExecutionRequest::getCallbackFnFTaskToken() const {
  return callbackFnFTaskToken_;
}

void StartExecutionRequest::setCallbackFnFTaskToken(const std::string &callbackFnFTaskToken) {
  callbackFnFTaskToken_ = callbackFnFTaskToken;
  setBodyParameter(std::string("CallbackFnFTaskToken"), callbackFnFTaskToken);
}

std::string StartExecutionRequest::getExecutionName() const {
  return executionName_;
}

void StartExecutionRequest::setExecutionName(const std::string &executionName) {
  executionName_ = executionName;
  setBodyParameter(std::string("ExecutionName"), executionName);
}

std::string StartExecutionRequest::getInput() const {
  return input_;
}

void StartExecutionRequest::setInput(const std::string &input) {
  input_ = input;
  setBodyParameter(std::string("Input"), input);
}

std::string StartExecutionRequest::getFlowName() const {
  return flowName_;
}

void StartExecutionRequest::setFlowName(const std::string &flowName) {
  flowName_ = flowName;
  setBodyParameter(std::string("FlowName"), flowName);
}

