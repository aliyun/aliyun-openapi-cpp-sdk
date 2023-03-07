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

#include <alibabacloud/resourcecenter/model/SearchMultiAccountResourcesRequest.h>

using AlibabaCloud::ResourceCenter::Model::SearchMultiAccountResourcesRequest;

SearchMultiAccountResourcesRequest::SearchMultiAccountResourcesRequest()
    : RpcServiceRequest("resourcecenter", "2022-12-01", "SearchMultiAccountResources") {
  setMethod(HttpRequest::Method::Post);
}

SearchMultiAccountResourcesRequest::~SearchMultiAccountResourcesRequest() {}

std::string SearchMultiAccountResourcesRequest::getNextToken() const {
  return nextToken_;
}

void SearchMultiAccountResourcesRequest::setNextToken(const std::string &nextToken) {
  nextToken_ = nextToken;
  setParameter(std::string("NextToken"), nextToken);
}

std::string SearchMultiAccountResourcesRequest::getScope() const {
  return scope_;
}

void SearchMultiAccountResourcesRequest::setScope(const std::string &scope) {
  scope_ = scope;
  setParameter(std::string("Scope"), scope);
}

SearchMultiAccountResourcesRequest::SortCriterion SearchMultiAccountResourcesRequest::getSortCriterion() const {
  return sortCriterion_;
}

void SearchMultiAccountResourcesRequest::setSortCriterion(const SearchMultiAccountResourcesRequest::SortCriterion &sortCriterion) {
  sortCriterion_ = sortCriterion;
  setParameter(std::string("SortCriterion") + ".Key", sortCriterion.key);
  setParameter(std::string("SortCriterion") + ".Order", sortCriterion.order);
}

std::vector<SearchMultiAccountResourcesRequest::Filter> SearchMultiAccountResourcesRequest::getFilter() const {
  return filter_;
}

void SearchMultiAccountResourcesRequest::setFilter(const std::vector<SearchMultiAccountResourcesRequest::Filter> &filter) {
  filter_ = filter;
  for(int dep1 = 0; dep1 != filter.size(); dep1++) {
  auto filterObj = filter.at(dep1);
  std::string filterObjStr = std::string("Filter") + "." + std::to_string(dep1 + 1);
    setParameter(filterObjStr + ".MatchType", filterObj.matchType);
    setParameter(filterObjStr + ".Key", filterObj.key);
  }
}

int SearchMultiAccountResourcesRequest::getMaxResults() const {
  return maxResults_;
}

void SearchMultiAccountResourcesRequest::setMaxResults(int maxResults) {
  maxResults_ = maxResults;
  setParameter(std::string("MaxResults"), std::to_string(maxResults));
}

