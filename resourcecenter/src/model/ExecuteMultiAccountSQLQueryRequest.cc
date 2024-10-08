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

#include <alibabacloud/resourcecenter/model/ExecuteMultiAccountSQLQueryRequest.h>

using AlibabaCloud::ResourceCenter::Model::ExecuteMultiAccountSQLQueryRequest;

ExecuteMultiAccountSQLQueryRequest::ExecuteMultiAccountSQLQueryRequest()
    : RpcServiceRequest("resourcecenter", "2022-12-01", "ExecuteMultiAccountSQLQuery") {
  setMethod(HttpRequest::Method::Post);
}

ExecuteMultiAccountSQLQueryRequest::~ExecuteMultiAccountSQLQueryRequest() {}

std::string ExecuteMultiAccountSQLQueryRequest::getExpression() const {
  return expression_;
}

void ExecuteMultiAccountSQLQueryRequest::setExpression(const std::string &expression) {
  expression_ = expression;
  setParameter(std::string("Expression"), expression);
}

std::string ExecuteMultiAccountSQLQueryRequest::getNextToken() const {
  return nextToken_;
}

void ExecuteMultiAccountSQLQueryRequest::setNextToken(const std::string &nextToken) {
  nextToken_ = nextToken;
  setParameter(std::string("NextToken"), nextToken);
}

std::string ExecuteMultiAccountSQLQueryRequest::getScope() const {
  return scope_;
}

void ExecuteMultiAccountSQLQueryRequest::setScope(const std::string &scope) {
  scope_ = scope;
  setParameter(std::string("Scope"), scope);
}

int ExecuteMultiAccountSQLQueryRequest::getMaxResults() const {
  return maxResults_;
}

void ExecuteMultiAccountSQLQueryRequest::setMaxResults(int maxResults) {
  maxResults_ = maxResults;
  setParameter(std::string("MaxResults"), std::to_string(maxResults));
}

