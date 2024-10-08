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

#include <alibabacloud/resourcecenter/model/SearchResourcesRequest.h>

using AlibabaCloud::ResourceCenter::Model::SearchResourcesRequest;

SearchResourcesRequest::SearchResourcesRequest()
    : RpcServiceRequest("resourcecenter", "2022-12-01", "SearchResources") {
  setMethod(HttpRequest::Method::Post);
}

SearchResourcesRequest::~SearchResourcesRequest() {}

std::string SearchResourcesRequest::getResourceGroupId() const {
  return resourceGroupId_;
}

void SearchResourcesRequest::setResourceGroupId(const std::string &resourceGroupId) {
  resourceGroupId_ = resourceGroupId;
  setParameter(std::string("ResourceGroupId"), resourceGroupId);
}

std::string SearchResourcesRequest::getView() const {
  return view_;
}

void SearchResourcesRequest::setView(const std::string &view) {
  view_ = view;
  setParameter(std::string("View"), view);
}

std::string SearchResourcesRequest::getNextToken() const {
  return nextToken_;
}

void SearchResourcesRequest::setNextToken(const std::string &nextToken) {
  nextToken_ = nextToken;
  setParameter(std::string("NextToken"), nextToken);
}

SearchResourcesRequest::SortCriterion SearchResourcesRequest::getSortCriterion() const {
  return sortCriterion_;
}

void SearchResourcesRequest::setSortCriterion(const SearchResourcesRequest::SortCriterion &sortCriterion) {
  sortCriterion_ = sortCriterion;
  setParameter(std::string("SortCriterion") + ".Key", sortCriterion.key);
  setParameter(std::string("SortCriterion") + ".Order", sortCriterion.order);
}

std::vector<SearchResourcesRequest::Filter> SearchResourcesRequest::getFilter() const {
  return filter_;
}

void SearchResourcesRequest::setFilter(const std::vector<SearchResourcesRequest::Filter> &filter) {
  filter_ = filter;
  for(int dep1 = 0; dep1 != filter.size(); dep1++) {
  auto filterObj = filter.at(dep1);
  std::string filterObjStr = std::string("Filter") + "." + std::to_string(dep1 + 1);
    setParameter(filterObjStr + ".MatchType", filterObj.matchType);
    setParameter(filterObjStr + ".Key", filterObj.key);
  }
}

int SearchResourcesRequest::getMaxResults() const {
  return maxResults_;
}

void SearchResourcesRequest::setMaxResults(int maxResults) {
  maxResults_ = maxResults;
  setParameter(std::string("MaxResults"), std::to_string(maxResults));
}

