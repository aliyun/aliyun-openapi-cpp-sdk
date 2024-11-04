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

#include <alibabacloud/alb/model/ListRulesRequest.h>

using AlibabaCloud::Alb::Model::ListRulesRequest;

ListRulesRequest::ListRulesRequest()
    : RpcServiceRequest("alb", "2020-06-16", "ListRules") {
  setMethod(HttpRequest::Method::Post);
}

ListRulesRequest::~ListRulesRequest() {}

std::vector<ListRulesRequest::std::string> ListRulesRequest::getLoadBalancerIds() const {
  return loadBalancerIds_;
}

void ListRulesRequest::setLoadBalancerIds(const std::vector<ListRulesRequest::std::string> &loadBalancerIds) {
  loadBalancerIds_ = loadBalancerIds;
  for(int dep1 = 0; dep1 != loadBalancerIds.size(); dep1++) {
    setParameter(std::string("LoadBalancerIds") + "." + std::to_string(dep1 + 1), loadBalancerIds[dep1]);
  }
}

std::string ListRulesRequest::getListenerId() const {
  return listenerId_;
}

void ListRulesRequest::setListenerId(const std::string &listenerId) {
  listenerId_ = listenerId;
  setParameter(std::string("ListenerId"), listenerId);
}

std::string ListRulesRequest::getNextToken() const {
  return nextToken_;
}

void ListRulesRequest::setNextToken(const std::string &nextToken) {
  nextToken_ = nextToken;
  setParameter(std::string("NextToken"), nextToken);
}

std::vector<ListRulesRequest::Tag> ListRulesRequest::getTag() const {
  return tag_;
}

void ListRulesRequest::setTag(const std::vector<ListRulesRequest::Tag> &tag) {
  tag_ = tag;
  for(int dep1 = 0; dep1 != tag.size(); dep1++) {
    setParameter(std::string("Tag") + "." + std::to_string(dep1 + 1) + ".Value", tag[dep1].value);
    setParameter(std::string("Tag") + "." + std::to_string(dep1 + 1) + ".Key", tag[dep1].key);
  }
}

std::string ListRulesRequest::getDirection() const {
  return direction_;
}

void ListRulesRequest::setDirection(const std::string &direction) {
  direction_ = direction;
  setParameter(std::string("Direction"), direction);
}

std::vector<ListRulesRequest::std::string> ListRulesRequest::getRuleIds() const {
  return ruleIds_;
}

void ListRulesRequest::setRuleIds(const std::vector<ListRulesRequest::std::string> &ruleIds) {
  ruleIds_ = ruleIds;
  for(int dep1 = 0; dep1 != ruleIds.size(); dep1++) {
    setParameter(std::string("RuleIds") + "." + std::to_string(dep1 + 1), ruleIds[dep1]);
  }
}

std::vector<ListRulesRequest::std::string> ListRulesRequest::getListenerIds() const {
  return listenerIds_;
}

void ListRulesRequest::setListenerIds(const std::vector<ListRulesRequest::std::string> &listenerIds) {
  listenerIds_ = listenerIds;
  for(int dep1 = 0; dep1 != listenerIds.size(); dep1++) {
    setParameter(std::string("ListenerIds") + "." + std::to_string(dep1 + 1), listenerIds[dep1]);
  }
}

int ListRulesRequest::getMaxResults() const {
  return maxResults_;
}

void ListRulesRequest::setMaxResults(int maxResults) {
  maxResults_ = maxResults;
  setParameter(std::string("MaxResults"), std::to_string(maxResults));
}

