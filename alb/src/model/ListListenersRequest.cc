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

#include <alibabacloud/alb/model/ListListenersRequest.h>

using AlibabaCloud::Alb::Model::ListListenersRequest;

ListListenersRequest::ListListenersRequest()
    : RpcServiceRequest("alb", "2020-06-16", "ListListeners") {
  setMethod(HttpRequest::Method::Post);
}

ListListenersRequest::~ListListenersRequest() {}

std::vector<ListListenersRequest::std::string> ListListenersRequest::getLoadBalancerIds() const {
  return loadBalancerIds_;
}

void ListListenersRequest::setLoadBalancerIds(const std::vector<ListListenersRequest::std::string> &loadBalancerIds) {
  loadBalancerIds_ = loadBalancerIds;
  for(int dep1 = 0; dep1 != loadBalancerIds.size(); dep1++) {
    setParameter(std::string("LoadBalancerIds") + "." + std::to_string(dep1 + 1), loadBalancerIds[dep1]);
  }
}

std::string ListListenersRequest::getNextToken() const {
  return nextToken_;
}

void ListListenersRequest::setNextToken(const std::string &nextToken) {
  nextToken_ = nextToken;
  setParameter(std::string("NextToken"), nextToken);
}

std::vector<ListListenersRequest::Tag> ListListenersRequest::getTag() const {
  return tag_;
}

void ListListenersRequest::setTag(const std::vector<ListListenersRequest::Tag> &tag) {
  tag_ = tag;
  for(int dep1 = 0; dep1 != tag.size(); dep1++) {
    setParameter(std::string("Tag") + "." + std::to_string(dep1 + 1) + ".Value", tag[dep1].value);
    setParameter(std::string("Tag") + "." + std::to_string(dep1 + 1) + ".Key", tag[dep1].key);
  }
}

bool ListListenersRequest::getAccessLogRecordCustomizedHeadersEnabled() const {
  return accessLogRecordCustomizedHeadersEnabled_;
}

void ListListenersRequest::setAccessLogRecordCustomizedHeadersEnabled(bool accessLogRecordCustomizedHeadersEnabled) {
  accessLogRecordCustomizedHeadersEnabled_ = accessLogRecordCustomizedHeadersEnabled;
  setParameter(std::string("AccessLogRecordCustomizedHeadersEnabled"), accessLogRecordCustomizedHeadersEnabled ? "true" : "false");
}

std::string ListListenersRequest::getListenerProtocol() const {
  return listenerProtocol_;
}

void ListListenersRequest::setListenerProtocol(const std::string &listenerProtocol) {
  listenerProtocol_ = listenerProtocol;
  setParameter(std::string("ListenerProtocol"), listenerProtocol);
}

std::vector<ListListenersRequest::std::string> ListListenersRequest::getListenerIds() const {
  return listenerIds_;
}

void ListListenersRequest::setListenerIds(const std::vector<ListListenersRequest::std::string> &listenerIds) {
  listenerIds_ = listenerIds;
  for(int dep1 = 0; dep1 != listenerIds.size(); dep1++) {
    setParameter(std::string("ListenerIds") + "." + std::to_string(dep1 + 1), listenerIds[dep1]);
  }
}

int ListListenersRequest::getMaxResults() const {
  return maxResults_;
}

void ListListenersRequest::setMaxResults(int maxResults) {
  maxResults_ = maxResults;
  setParameter(std::string("MaxResults"), std::to_string(maxResults));
}

bool ListListenersRequest::getIsAssociatedAcl() const {
  return isAssociatedAcl_;
}

void ListListenersRequest::setIsAssociatedAcl(bool isAssociatedAcl) {
  isAssociatedAcl_ = isAssociatedAcl;
  setParameter(std::string("IsAssociatedAcl"), isAssociatedAcl ? "true" : "false");
}

std::string ListListenersRequest::getStatus() const {
  return status_;
}

void ListListenersRequest::setStatus(const std::string &status) {
  status_ = status;
  setParameter(std::string("Status"), status);
}

