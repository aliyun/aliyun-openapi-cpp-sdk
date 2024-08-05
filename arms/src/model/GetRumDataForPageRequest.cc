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

#include <alibabacloud/arms/model/GetRumDataForPageRequest.h>

using AlibabaCloud::ARMS::Model::GetRumDataForPageRequest;

GetRumDataForPageRequest::GetRumDataForPageRequest()
    : RpcServiceRequest("arms", "2019-08-08", "GetRumDataForPage") {
  setMethod(HttpRequest::Method::Post);
}

GetRumDataForPageRequest::~GetRumDataForPageRequest() {}

std::string GetRumDataForPageRequest::getQuery() const {
  return query_;
}

void GetRumDataForPageRequest::setQuery(const std::string &query) {
  query_ = query;
  setParameter(std::string("Query"), query);
}

int GetRumDataForPageRequest::getEndTime() const {
  return endTime_;
}

void GetRumDataForPageRequest::setEndTime(int endTime) {
  endTime_ = endTime;
  setParameter(std::string("EndTime"), std::to_string(endTime));
}

std::string GetRumDataForPageRequest::getPid() const {
  return pid_;
}

void GetRumDataForPageRequest::setPid(const std::string &pid) {
  pid_ = pid;
  setParameter(std::string("Pid"), pid);
}

int GetRumDataForPageRequest::getCurrentPage() const {
  return currentPage_;
}

void GetRumDataForPageRequest::setCurrentPage(int currentPage) {
  currentPage_ = currentPage;
  setParameter(std::string("CurrentPage"), std::to_string(currentPage));
}

int GetRumDataForPageRequest::getStartTime() const {
  return startTime_;
}

void GetRumDataForPageRequest::setStartTime(int startTime) {
  startTime_ = startTime;
  setParameter(std::string("StartTime"), std::to_string(startTime));
}

std::string GetRumDataForPageRequest::getAppGroup() const {
  return appGroup_;
}

void GetRumDataForPageRequest::setAppGroup(const std::string &appGroup) {
  appGroup_ = appGroup;
  setParameter(std::string("AppGroup"), appGroup);
}

std::string GetRumDataForPageRequest::getRegionId() const {
  return regionId_;
}

void GetRumDataForPageRequest::setRegionId(const std::string &regionId) {
  regionId_ = regionId;
  setParameter(std::string("RegionId"), regionId);
}

int GetRumDataForPageRequest::getPageSize() const {
  return pageSize_;
}

void GetRumDataForPageRequest::setPageSize(int pageSize) {
  pageSize_ = pageSize;
  setParameter(std::string("PageSize"), std::to_string(pageSize));
}

