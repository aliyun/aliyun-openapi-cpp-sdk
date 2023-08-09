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

#include <alibabacloud/config/model/ListRemediationExecutionsRequest.h>

using AlibabaCloud::Config::Model::ListRemediationExecutionsRequest;

ListRemediationExecutionsRequest::ListRemediationExecutionsRequest()
    : RpcServiceRequest("config", "2020-09-07", "ListRemediationExecutions") {
  setMethod(HttpRequest::Method::Post);
}

ListRemediationExecutionsRequest::~ListRemediationExecutionsRequest() {}

std::string ListRemediationExecutionsRequest::getConfigRuleId() const {
  return configRuleId_;
}

void ListRemediationExecutionsRequest::setConfigRuleId(const std::string &configRuleId) {
  configRuleId_ = configRuleId;
  setParameter(std::string("ConfigRuleId"), configRuleId);
}

std::string ListRemediationExecutionsRequest::getExecutionStatus() const {
  return executionStatus_;
}

void ListRemediationExecutionsRequest::setExecutionStatus(const std::string &executionStatus) {
  executionStatus_ = executionStatus;
  setParameter(std::string("ExecutionStatus"), executionStatus);
}

std::string ListRemediationExecutionsRequest::getNextToken() const {
  return nextToken_;
}

void ListRemediationExecutionsRequest::setNextToken(const std::string &nextToken) {
  nextToken_ = nextToken;
  setParameter(std::string("NextToken"), nextToken);
}

long ListRemediationExecutionsRequest::getMaxResults() const {
  return maxResults_;
}

void ListRemediationExecutionsRequest::setMaxResults(long maxResults) {
  maxResults_ = maxResults;
  setParameter(std::string("MaxResults"), std::to_string(maxResults));
}

