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

#include <alibabacloud/fnf/model/StopExecutionRequest.h>

using AlibabaCloud::Fnf::Model::StopExecutionRequest;

StopExecutionRequest::StopExecutionRequest()
    : RpcServiceRequest("fnf", "2019-03-15", "StopExecution") {
  setMethod(HttpRequest::Method::Post);
}

StopExecutionRequest::~StopExecutionRequest() {}

std::string StopExecutionRequest::getExecutionName() const {
  return executionName_;
}

void StopExecutionRequest::setExecutionName(const std::string &executionName) {
  executionName_ = executionName;
  setBodyParameter(std::string("ExecutionName"), executionName);
}

std::string StopExecutionRequest::getCause() const {
  return cause_;
}

void StopExecutionRequest::setCause(const std::string &cause) {
  cause_ = cause;
  setBodyParameter(std::string("Cause"), cause);
}

std::string StopExecutionRequest::getError() const {
  return error_;
}

void StopExecutionRequest::setError(const std::string &error) {
  error_ = error;
  setBodyParameter(std::string("Error"), error);
}

std::string StopExecutionRequest::getFlowName() const {
  return flowName_;
}

void StopExecutionRequest::setFlowName(const std::string &flowName) {
  flowName_ = flowName;
  setBodyParameter(std::string("FlowName"), flowName);
}

