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

#include <alibabacloud/gwlb/model/ListListenersRequest.h>

using AlibabaCloud::Gwlb::Model::ListListenersRequest;

ListListenersRequest::ListListenersRequest()
    : RpcServiceRequest("gwlb", "2024-04-15", "ListListeners") {
  setMethod(HttpRequest::Method::Post);
}

ListListenersRequest::~ListListenersRequest() {}

std::vector<ListListenersRequest::std::string> ListListenersRequest::getLoadBalancerIds() const {
  return loadBalancerIds_;
}

void ListListenersRequest::setLoadBalancerIds(const std::vector<ListListenersRequest::std::string> &loadBalancerIds) {
  loadBalancerIds_ = loadBalancerIds;
  for(int dep1 = 0; dep1 != loadBalancerIds.size(); dep1++) {
    setBodyParameter(std::string("LoadBalancerIds") + "." + std::to_string(dep1 + 1), loadBalancerIds[dep1]);
  }
}

int ListListenersRequest::getSkip() const {
  return skip_;
}

void ListListenersRequest::setSkip(int skip) {
  skip_ = skip;
  setBodyParameter(std::string("Skip"), std::to_string(skip));
}

std::string ListListenersRequest::getNextToken() const {
  return nextToken_;
}

void ListListenersRequest::setNextToken(const std::string &nextToken) {
  nextToken_ = nextToken;
  setBodyParameter(std::string("NextToken"), nextToken);
}

std::vector<ListListenersRequest::Tag> ListListenersRequest::getTag() const {
  return tag_;
}

void ListListenersRequest::setTag(const std::vector<ListListenersRequest::Tag> &tag) {
  tag_ = tag;
  for(int dep1 = 0; dep1 != tag.size(); dep1++) {
    setBodyParameter(std::string("Tag") + "." + std::to_string(dep1 + 1) + ".Key", tag[dep1].key);
    setBodyParameter(std::string("Tag") + "." + std::to_string(dep1 + 1) + ".Value", tag[dep1].value);
  }
}

std::vector<ListListenersRequest::std::string> ListListenersRequest::getListenerIds() const {
  return listenerIds_;
}

void ListListenersRequest::setListenerIds(const std::vector<ListListenersRequest::std::string> &listenerIds) {
  listenerIds_ = listenerIds;
  for(int dep1 = 0; dep1 != listenerIds.size(); dep1++) {
    setBodyParameter(std::string("ListenerIds") + "." + std::to_string(dep1 + 1), listenerIds[dep1]);
  }
}

int ListListenersRequest::getMaxResults() const {
  return maxResults_;
}

void ListListenersRequest::setMaxResults(int maxResults) {
  maxResults_ = maxResults;
  setBodyParameter(std::string("MaxResults"), std::to_string(maxResults));
}

