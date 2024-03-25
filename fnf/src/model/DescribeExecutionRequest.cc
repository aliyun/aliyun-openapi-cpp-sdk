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

#include <alibabacloud/fnf/model/DescribeExecutionRequest.h>

using AlibabaCloud::Fnf::Model::DescribeExecutionRequest;

DescribeExecutionRequest::DescribeExecutionRequest()
    : RpcServiceRequest("fnf", "2019-03-15", "DescribeExecution") {
  setMethod(HttpRequest::Method::Get);
}

DescribeExecutionRequest::~DescribeExecutionRequest() {}

std::string DescribeExecutionRequest::getExecutionName() const {
  return executionName_;
}

void DescribeExecutionRequest::setExecutionName(const std::string &executionName) {
  executionName_ = executionName;
  setParameter(std::string("ExecutionName"), executionName);
}

int DescribeExecutionRequest::getWaitTimeSeconds() const {
  return waitTimeSeconds_;
}

void DescribeExecutionRequest::setWaitTimeSeconds(int waitTimeSeconds) {
  waitTimeSeconds_ = waitTimeSeconds;
  setParameter(std::string("WaitTimeSeconds"), std::to_string(waitTimeSeconds));
}

std::string DescribeExecutionRequest::getFlowName() const {
  return flowName_;
}

void DescribeExecutionRequest::setFlowName(const std::string &flowName) {
  flowName_ = flowName;
  setParameter(std::string("FlowName"), flowName);
}

