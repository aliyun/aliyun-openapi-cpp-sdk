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

#include <alibabacloud/arms/model/GetRumOcuStatisticDataRequest.h>

using AlibabaCloud::ARMS::Model::GetRumOcuStatisticDataRequest;

GetRumOcuStatisticDataRequest::GetRumOcuStatisticDataRequest()
    : RpcServiceRequest("arms", "2019-08-08", "GetRumOcuStatisticData") {
  setMethod(HttpRequest::Method::Get);
}

GetRumOcuStatisticDataRequest::~GetRumOcuStatisticDataRequest() {}

long GetRumOcuStatisticDataRequest::getEndTime() const {
  return endTime_;
}

void GetRumOcuStatisticDataRequest::setEndTime(long endTime) {
  endTime_ = endTime;
  setParameter(std::string("EndTime"), std::to_string(endTime));
}

long GetRumOcuStatisticDataRequest::getStartTime() const {
  return startTime_;
}

void GetRumOcuStatisticDataRequest::setStartTime(long startTime) {
  startTime_ = startTime;
  setParameter(std::string("StartTime"), std::to_string(startTime));
}

std::vector<GetRumOcuStatisticDataRequest::Filter> GetRumOcuStatisticDataRequest::getFilter() const {
  return filter_;
}

void GetRumOcuStatisticDataRequest::setFilter(const std::vector<GetRumOcuStatisticDataRequest::Filter> &filter) {
  filter_ = filter;
  for(int dep1 = 0; dep1 != filter.size(); dep1++) {
    setParameter(std::string("Filter") + "." + std::to_string(dep1 + 1) + ".OpType", filter[dep1].opType);
    setParameter(std::string("Filter") + "." + std::to_string(dep1 + 1) + ".Value", std::to_string(filter[dep1].value));
    setParameter(std::string("Filter") + "." + std::to_string(dep1 + 1) + ".Key", filter[dep1].key);
  }
}

std::string GetRumOcuStatisticDataRequest::getRegionId() const {
  return regionId_;
}

void GetRumOcuStatisticDataRequest::setRegionId(const std::string &regionId) {
  regionId_ = regionId;
  setParameter(std::string("RegionId"), regionId);
}

int GetRumOcuStatisticDataRequest::getPageSize() const {
  return pageSize_;
}

void GetRumOcuStatisticDataRequest::setPageSize(int pageSize) {
  pageSize_ = pageSize;
  setParameter(std::string("PageSize"), std::to_string(pageSize));
}

int GetRumOcuStatisticDataRequest::getPage() const {
  return page_;
}

void GetRumOcuStatisticDataRequest::setPage(int page) {
  page_ = page;
  setParameter(std::string("Page"), std::to_string(page));
}

std::string GetRumOcuStatisticDataRequest::getQueryType() const {
  return queryType_;
}

void GetRumOcuStatisticDataRequest::setQueryType(const std::string &queryType) {
  queryType_ = queryType;
  setParameter(std::string("QueryType"), queryType);
}

std::vector<GetRumOcuStatisticDataRequest::std::string> GetRumOcuStatisticDataRequest::getGroup() const {
  return group_;
}

void GetRumOcuStatisticDataRequest::setGroup(const std::vector<GetRumOcuStatisticDataRequest::std::string> &group) {
  group_ = group;
  for(int dep1 = 0; dep1 != group.size(); dep1++) {
    setParameter(std::string("Group") + "." + std::to_string(dep1 + 1), group[dep1]);
  }
}

