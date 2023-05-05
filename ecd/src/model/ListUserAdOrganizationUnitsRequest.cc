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

#include <alibabacloud/ecd/model/ListUserAdOrganizationUnitsRequest.h>

using AlibabaCloud::Ecd::Model::ListUserAdOrganizationUnitsRequest;

ListUserAdOrganizationUnitsRequest::ListUserAdOrganizationUnitsRequest()
    : RpcServiceRequest("ecd", "2020-09-30", "ListUserAdOrganizationUnits") {
  setMethod(HttpRequest::Method::Post);
}

ListUserAdOrganizationUnitsRequest::~ListUserAdOrganizationUnitsRequest() {}

std::string ListUserAdOrganizationUnitsRequest::getOfficeSiteId() const {
  return officeSiteId_;
}

void ListUserAdOrganizationUnitsRequest::setOfficeSiteId(const std::string &officeSiteId) {
  officeSiteId_ = officeSiteId;
  setParameter(std::string("OfficeSiteId"), officeSiteId);
}

std::string ListUserAdOrganizationUnitsRequest::getFilter() const {
  return filter_;
}

void ListUserAdOrganizationUnitsRequest::setFilter(const std::string &filter) {
  filter_ = filter;
  setParameter(std::string("Filter"), filter);
}

std::string ListUserAdOrganizationUnitsRequest::getRegionId() const {
  return regionId_;
}

void ListUserAdOrganizationUnitsRequest::setRegionId(const std::string &regionId) {
  regionId_ = regionId;
  setParameter(std::string("RegionId"), regionId);
}

std::string ListUserAdOrganizationUnitsRequest::getNextToken() const {
  return nextToken_;
}

void ListUserAdOrganizationUnitsRequest::setNextToken(const std::string &nextToken) {
  nextToken_ = nextToken;
  setParameter(std::string("NextToken"), nextToken);
}

int ListUserAdOrganizationUnitsRequest::getMaxResults() const {
  return maxResults_;
}

void ListUserAdOrganizationUnitsRequest::setMaxResults(int maxResults) {
  maxResults_ = maxResults;
  setParameter(std::string("MaxResults"), std::to_string(maxResults));
}

