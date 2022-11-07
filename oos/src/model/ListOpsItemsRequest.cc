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

#include <alibabacloud/oos/model/ListOpsItemsRequest.h>

using AlibabaCloud::Oos::Model::ListOpsItemsRequest;

ListOpsItemsRequest::ListOpsItemsRequest()
    : RpcServiceRequest("oos", "2019-06-01", "ListOpsItems") {
  setMethod(HttpRequest::Method::Post);
}

ListOpsItemsRequest::~ListOpsItemsRequest() {}

std::string ListOpsItemsRequest::getResourceTags() const {
  return resourceTags_;
}

void ListOpsItemsRequest::setResourceTags(const std::string &resourceTags) {
  resourceTags_ = resourceTags;
  setParameter(std::string("ResourceTags"), resourceTags);
}

std::string ListOpsItemsRequest::getTags() const {
  return tags_;
}

void ListOpsItemsRequest::setTags(const std::string &tags) {
  tags_ = tags;
  setParameter(std::string("Tags"), tags);
}

std::vector<ListOpsItemsRequest::Filter> ListOpsItemsRequest::getFilter() const {
  return filter_;
}

void ListOpsItemsRequest::setFilter(const std::vector<ListOpsItemsRequest::Filter> &filter) {
  filter_ = filter;
  for(int dep1 = 0; dep1 != filter.size(); dep1++) {
  auto filterObj = filter.at(dep1);
  std::string filterObjStr = std::string("Filter") + "." + std::to_string(dep1 + 1);
    setParameter(filterObjStr + ".Name", filterObj.name);
    setParameter(filterObjStr + ".Operator", filterObj._operator);
  }
}

std::string ListOpsItemsRequest::getRegionId() const {
  return regionId_;
}

void ListOpsItemsRequest::setRegionId(const std::string &regionId) {
  regionId_ = regionId;
  setParameter(std::string("RegionId"), regionId);
}

std::string ListOpsItemsRequest::getNextToken() const {
  return nextToken_;
}

void ListOpsItemsRequest::setNextToken(const std::string &nextToken) {
  nextToken_ = nextToken;
  setParameter(std::string("NextToken"), nextToken);
}

int ListOpsItemsRequest::getMaxResults() const {
  return maxResults_;
}

void ListOpsItemsRequest::setMaxResults(int maxResults) {
  maxResults_ = maxResults;
  setParameter(std::string("MaxResults"), std::to_string(maxResults));
}

