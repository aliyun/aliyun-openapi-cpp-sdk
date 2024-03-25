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

#include <alibabacloud/fnf/model/ListSchedulesRequest.h>

using AlibabaCloud::Fnf::Model::ListSchedulesRequest;

ListSchedulesRequest::ListSchedulesRequest()
    : RpcServiceRequest("fnf", "2019-03-15", "ListSchedules") {
  setMethod(HttpRequest::Method::Get);
}

ListSchedulesRequest::~ListSchedulesRequest() {}

std::string ListSchedulesRequest::getNextToken() const {
  return nextToken_;
}

void ListSchedulesRequest::setNextToken(const std::string &nextToken) {
  nextToken_ = nextToken;
  setParameter(std::string("NextToken"), nextToken);
}

int ListSchedulesRequest::getLimit() const {
  return limit_;
}

void ListSchedulesRequest::setLimit(int limit) {
  limit_ = limit;
  setParameter(std::string("Limit"), std::to_string(limit));
}

std::string ListSchedulesRequest::getFlowName() const {
  return flowName_;
}

void ListSchedulesRequest::setFlowName(const std::string &flowName) {
  flowName_ = flowName;
  setParameter(std::string("FlowName"), flowName);
}

