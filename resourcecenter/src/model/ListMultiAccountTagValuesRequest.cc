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

#include <alibabacloud/resourcecenter/model/ListMultiAccountTagValuesRequest.h>

using AlibabaCloud::ResourceCenter::Model::ListMultiAccountTagValuesRequest;

ListMultiAccountTagValuesRequest::ListMultiAccountTagValuesRequest()
    : RpcServiceRequest("resourcecenter", "2022-12-01", "ListMultiAccountTagValues") {
  setMethod(HttpRequest::Method::Post);
}

ListMultiAccountTagValuesRequest::~ListMultiAccountTagValuesRequest() {}

std::string ListMultiAccountTagValuesRequest::getNextToken() const {
  return nextToken_;
}

void ListMultiAccountTagValuesRequest::setNextToken(const std::string &nextToken) {
  nextToken_ = nextToken;
  setParameter(std::string("NextToken"), nextToken);
}

std::string ListMultiAccountTagValuesRequest::getScope() const {
  return scope_;
}

void ListMultiAccountTagValuesRequest::setScope(const std::string &scope) {
  scope_ = scope;
  setParameter(std::string("Scope"), scope);
}

std::string ListMultiAccountTagValuesRequest::getMatchType() const {
  return matchType_;
}

void ListMultiAccountTagValuesRequest::setMatchType(const std::string &matchType) {
  matchType_ = matchType;
  setParameter(std::string("MatchType"), matchType);
}

std::string ListMultiAccountTagValuesRequest::getTagValue() const {
  return tagValue_;
}

void ListMultiAccountTagValuesRequest::setTagValue(const std::string &tagValue) {
  tagValue_ = tagValue;
  setParameter(std::string("TagValue"), tagValue);
}

int ListMultiAccountTagValuesRequest::getMaxResults() const {
  return maxResults_;
}

void ListMultiAccountTagValuesRequest::setMaxResults(int maxResults) {
  maxResults_ = maxResults;
  setParameter(std::string("MaxResults"), std::to_string(maxResults));
}

std::string ListMultiAccountTagValuesRequest::getTagKey() const {
  return tagKey_;
}

void ListMultiAccountTagValuesRequest::setTagKey(const std::string &tagKey) {
  tagKey_ = tagKey;
  setParameter(std::string("TagKey"), tagKey);
}

