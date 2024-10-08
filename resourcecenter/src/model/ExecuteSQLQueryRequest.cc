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

#include <alibabacloud/resourcecenter/model/ExecuteSQLQueryRequest.h>

using AlibabaCloud::ResourceCenter::Model::ExecuteSQLQueryRequest;

ExecuteSQLQueryRequest::ExecuteSQLQueryRequest()
    : RpcServiceRequest("resourcecenter", "2022-12-01", "ExecuteSQLQuery") {
  setMethod(HttpRequest::Method::Post);
}

ExecuteSQLQueryRequest::~ExecuteSQLQueryRequest() {}

std::string ExecuteSQLQueryRequest::getExpression() const {
  return expression_;
}

void ExecuteSQLQueryRequest::setExpression(const std::string &expression) {
  expression_ = expression;
  setParameter(std::string("Expression"), expression);
}

std::string ExecuteSQLQueryRequest::getNextToken() const {
  return nextToken_;
}

void ExecuteSQLQueryRequest::setNextToken(const std::string &nextToken) {
  nextToken_ = nextToken;
  setParameter(std::string("NextToken"), nextToken);
}

std::string ExecuteSQLQueryRequest::getScope() const {
  return scope_;
}

void ExecuteSQLQueryRequest::setScope(const std::string &scope) {
  scope_ = scope;
  setParameter(std::string("Scope"), scope);
}

int ExecuteSQLQueryRequest::getMaxResults() const {
  return maxResults_;
}

void ExecuteSQLQueryRequest::setMaxResults(int maxResults) {
  maxResults_ = maxResults;
  setParameter(std::string("MaxResults"), std::to_string(maxResults));
}

