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

#include <alibabacloud/alb/model/ListAScriptsRequest.h>

using AlibabaCloud::Alb::Model::ListAScriptsRequest;

ListAScriptsRequest::ListAScriptsRequest()
    : RpcServiceRequest("alb", "2020-06-16", "ListAScripts") {
  setMethod(HttpRequest::Method::Post);
}

ListAScriptsRequest::~ListAScriptsRequest() {}

std::string ListAScriptsRequest::getNextToken() const {
  return nextToken_;
}

void ListAScriptsRequest::setNextToken(const std::string &nextToken) {
  nextToken_ = nextToken;
  setParameter(std::string("NextToken"), nextToken);
}

std::vector<ListAScriptsRequest::std::string> ListAScriptsRequest::getAScriptNames() const {
  return aScriptNames_;
}

void ListAScriptsRequest::setAScriptNames(const std::vector<ListAScriptsRequest::std::string> &aScriptNames) {
  aScriptNames_ = aScriptNames;
  for(int dep1 = 0; dep1 != aScriptNames.size(); dep1++) {
    setParameter(std::string("AScriptNames") + "." + std::to_string(dep1 + 1), aScriptNames[dep1]);
  }
}

std::vector<ListAScriptsRequest::std::string> ListAScriptsRequest::getListenerIds() const {
  return listenerIds_;
}

void ListAScriptsRequest::setListenerIds(const std::vector<ListAScriptsRequest::std::string> &listenerIds) {
  listenerIds_ = listenerIds;
  for(int dep1 = 0; dep1 != listenerIds.size(); dep1++) {
    setParameter(std::string("ListenerIds") + "." + std::to_string(dep1 + 1), listenerIds[dep1]);
  }
}

std::vector<ListAScriptsRequest::std::string> ListAScriptsRequest::getAScriptIds() const {
  return aScriptIds_;
}

void ListAScriptsRequest::setAScriptIds(const std::vector<ListAScriptsRequest::std::string> &aScriptIds) {
  aScriptIds_ = aScriptIds;
  for(int dep1 = 0; dep1 != aScriptIds.size(); dep1++) {
    setParameter(std::string("AScriptIds") + "." + std::to_string(dep1 + 1), aScriptIds[dep1]);
  }
}

int ListAScriptsRequest::getMaxResults() const {
  return maxResults_;
}

void ListAScriptsRequest::setMaxResults(int maxResults) {
  maxResults_ = maxResults;
  setParameter(std::string("MaxResults"), std::to_string(maxResults));
}

