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

#include <alibabacloud/fnf/model/GetExecutionHistoryRequest.h>

using AlibabaCloud::Fnf::Model::GetExecutionHistoryRequest;

GetExecutionHistoryRequest::GetExecutionHistoryRequest()
    : RpcServiceRequest("fnf", "2019-03-15", "GetExecutionHistory") {
  setMethod(HttpRequest::Method::Get);
}

GetExecutionHistoryRequest::~GetExecutionHistoryRequest() {}

std::string GetExecutionHistoryRequest::getExecutionName() const {
  return executionName_;
}

void GetExecutionHistoryRequest::setExecutionName(const std::string &executionName) {
  executionName_ = executionName;
  setParameter(std::string("ExecutionName"), executionName);
}

std::string GetExecutionHistoryRequest::getNextToken() const {
  return nextToken_;
}

void GetExecutionHistoryRequest::setNextToken(const std::string &nextToken) {
  nextToken_ = nextToken;
  setParameter(std::string("NextToken"), nextToken);
}

int GetExecutionHistoryRequest::getLimit() const {
  return limit_;
}

void GetExecutionHistoryRequest::setLimit(int limit) {
  limit_ = limit;
  setParameter(std::string("Limit"), std::to_string(limit));
}

std::string GetExecutionHistoryRequest::getFlowName() const {
  return flowName_;
}

void GetExecutionHistoryRequest::setFlowName(const std::string &flowName) {
  flowName_ = flowName;
  setParameter(std::string("FlowName"), flowName);
}

