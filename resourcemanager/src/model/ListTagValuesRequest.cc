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

#include <alibabacloud/resourcemanager/model/ListTagValuesRequest.h>

using AlibabaCloud::ResourceManager::Model::ListTagValuesRequest;

ListTagValuesRequest::ListTagValuesRequest()
    : RpcServiceRequest("resourcemanager", "2020-03-31", "ListTagValues") {
  setMethod(HttpRequest::Method::Post);
}

ListTagValuesRequest::~ListTagValuesRequest() {}

std::string ListTagValuesRequest::getResourceType() const {
  return resourceType_;
}

void ListTagValuesRequest::setResourceType(const std::string &resourceType) {
  resourceType_ = resourceType;
  setParameter(std::string("ResourceType"), resourceType);
}

std::string ListTagValuesRequest::getValueFilter() const {
  return valueFilter_;
}

void ListTagValuesRequest::setValueFilter(const std::string &valueFilter) {
  valueFilter_ = valueFilter;
  setParameter(std::string("ValueFilter"), valueFilter);
}

std::string ListTagValuesRequest::getNextToken() const {
  return nextToken_;
}

void ListTagValuesRequest::setNextToken(const std::string &nextToken) {
  nextToken_ = nextToken;
  setParameter(std::string("NextToken"), nextToken);
}

int ListTagValuesRequest::getMaxResults() const {
  return maxResults_;
}

void ListTagValuesRequest::setMaxResults(int maxResults) {
  maxResults_ = maxResults;
  setParameter(std::string("MaxResults"), std::to_string(maxResults));
}

std::string ListTagValuesRequest::getTagKey() const {
  return tagKey_;
}

void ListTagValuesRequest::setTagKey(const std::string &tagKey) {
  tagKey_ = tagKey;
  setParameter(std::string("TagKey"), tagKey);
}

