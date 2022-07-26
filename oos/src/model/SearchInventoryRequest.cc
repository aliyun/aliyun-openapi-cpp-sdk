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

#include <alibabacloud/oos/model/SearchInventoryRequest.h>

using AlibabaCloud::Oos::Model::SearchInventoryRequest;

SearchInventoryRequest::SearchInventoryRequest()
    : RpcServiceRequest("oos", "2019-06-01", "SearchInventory") {
  setMethod(HttpRequest::Method::Post);
}

SearchInventoryRequest::~SearchInventoryRequest() {}

std::vector<std::string> SearchInventoryRequest::getAggregator() const {
  return aggregator_;
}

void SearchInventoryRequest::setAggregator(const std::vector<std::string> &aggregator) {
  aggregator_ = aggregator;
}

std::vector<SearchInventoryRequest::Filter> SearchInventoryRequest::getFilter() const {
  return filter_;
}

void SearchInventoryRequest::setFilter(const std::vector<SearchInventoryRequest::Filter> &filter) {
  filter_ = filter;
  for(int dep1 = 0; dep1 != filter.size(); dep1++) {
  auto filterObj = filter.at(dep1);
  std::string filterObjStr = std::string("Filter") + "." + std::to_string(dep1 + 1);
    setParameter(filterObjStr + ".Name", filterObj.name);
    setParameter(filterObjStr + ".Operator", filterObj._operator);
  }
}

std::string SearchInventoryRequest::getRegionId() const {
  return regionId_;
}

void SearchInventoryRequest::setRegionId(const std::string &regionId) {
  regionId_ = regionId;
  setParameter(std::string("RegionId"), regionId);
}

std::string SearchInventoryRequest::getNextToken() const {
  return nextToken_;
}

void SearchInventoryRequest::setNextToken(const std::string &nextToken) {
  nextToken_ = nextToken;
  setParameter(std::string("NextToken"), nextToken);
}

int SearchInventoryRequest::getMaxResults() const {
  return maxResults_;
}

void SearchInventoryRequest::setMaxResults(int maxResults) {
  maxResults_ = maxResults;
  setParameter(std::string("MaxResults"), std::to_string(maxResults));
}

