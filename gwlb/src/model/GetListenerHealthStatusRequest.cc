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

#include <alibabacloud/gwlb/model/GetListenerHealthStatusRequest.h>

using AlibabaCloud::Gwlb::Model::GetListenerHealthStatusRequest;

GetListenerHealthStatusRequest::GetListenerHealthStatusRequest()
    : RpcServiceRequest("gwlb", "2024-04-15", "GetListenerHealthStatus") {
  setMethod(HttpRequest::Method::Post);
}

GetListenerHealthStatusRequest::~GetListenerHealthStatusRequest() {}

int GetListenerHealthStatusRequest::getSkip() const {
  return skip_;
}

void GetListenerHealthStatusRequest::setSkip(int skip) {
  skip_ = skip;
  setBodyParameter(std::string("Skip"), std::to_string(skip));
}

std::string GetListenerHealthStatusRequest::getListenerId() const {
  return listenerId_;
}

void GetListenerHealthStatusRequest::setListenerId(const std::string &listenerId) {
  listenerId_ = listenerId;
  setBodyParameter(std::string("ListenerId"), listenerId);
}

std::string GetListenerHealthStatusRequest::getNextToken() const {
  return nextToken_;
}

void GetListenerHealthStatusRequest::setNextToken(const std::string &nextToken) {
  nextToken_ = nextToken;
  setBodyParameter(std::string("NextToken"), nextToken);
}

std::vector<GetListenerHealthStatusRequest::Filter> GetListenerHealthStatusRequest::getFilter() const {
  return filter_;
}

void GetListenerHealthStatusRequest::setFilter(const std::vector<GetListenerHealthStatusRequest::Filter> &filter) {
  filter_ = filter;
  for(int dep1 = 0; dep1 != filter.size(); dep1++) {
    setBodyParameter(std::string("Filter") + "." + std::to_string(dep1 + 1) + ".Name", filter[dep1].name);
    for(int dep2 = 0; dep2 != filter[dep1].values.size(); dep2++) {
      setBodyParameter(std::string("Filter") + "." + std::to_string(dep1 + 1) + ".Values." + std::to_string(dep2 + 1), filter[dep1].values[dep2]);
    }
  }
}

int GetListenerHealthStatusRequest::getMaxResults() const {
  return maxResults_;
}

void GetListenerHealthStatusRequest::setMaxResults(int maxResults) {
  maxResults_ = maxResults;
  setBodyParameter(std::string("MaxResults"), std::to_string(maxResults));
}

