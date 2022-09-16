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

#include <alibabacloud/ecd/model/ListOfficeSiteOverviewRequest.h>

using AlibabaCloud::Ecd::Model::ListOfficeSiteOverviewRequest;

ListOfficeSiteOverviewRequest::ListOfficeSiteOverviewRequest()
    : RpcServiceRequest("ecd", "2020-09-30", "ListOfficeSiteOverview") {
  setMethod(HttpRequest::Method::Post);
}

ListOfficeSiteOverviewRequest::~ListOfficeSiteOverviewRequest() {}

std::vector<std::string> ListOfficeSiteOverviewRequest::getOfficeSiteId() const {
  return officeSiteId_;
}

void ListOfficeSiteOverviewRequest::setOfficeSiteId(const std::vector<std::string> &officeSiteId) {
  officeSiteId_ = officeSiteId;
}

int ListOfficeSiteOverviewRequest::getQueryRange() const {
  return queryRange_;
}

void ListOfficeSiteOverviewRequest::setQueryRange(int queryRange) {
  queryRange_ = queryRange;
  setParameter(std::string("QueryRange"), std::to_string(queryRange));
}

std::string ListOfficeSiteOverviewRequest::getRegionId() const {
  return regionId_;
}

void ListOfficeSiteOverviewRequest::setRegionId(const std::string &regionId) {
  regionId_ = regionId;
  setParameter(std::string("RegionId"), regionId);
}

bool ListOfficeSiteOverviewRequest::getForceRefresh() const {
  return forceRefresh_;
}

void ListOfficeSiteOverviewRequest::setForceRefresh(bool forceRefresh) {
  forceRefresh_ = forceRefresh;
  setParameter(std::string("ForceRefresh"), forceRefresh ? "true" : "false");
}

std::string ListOfficeSiteOverviewRequest::getNextToken() const {
  return nextToken_;
}

void ListOfficeSiteOverviewRequest::setNextToken(const std::string &nextToken) {
  nextToken_ = nextToken;
  setParameter(std::string("NextToken"), nextToken);
}

int ListOfficeSiteOverviewRequest::getMaxResults() const {
  return maxResults_;
}

void ListOfficeSiteOverviewRequest::setMaxResults(int maxResults) {
  maxResults_ = maxResults;
  setParameter(std::string("MaxResults"), std::to_string(maxResults));
}

