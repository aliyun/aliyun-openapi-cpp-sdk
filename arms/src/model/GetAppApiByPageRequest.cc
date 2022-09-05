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

#include <alibabacloud/arms/model/GetAppApiByPageRequest.h>

using AlibabaCloud::ARMS::Model::GetAppApiByPageRequest;

GetAppApiByPageRequest::GetAppApiByPageRequest()
    : RpcServiceRequest("arms", "2019-08-08", "GetAppApiByPage") {
  setMethod(HttpRequest::Method::Post);
}

GetAppApiByPageRequest::~GetAppApiByPageRequest() {}

long GetAppApiByPageRequest::getEndTime() const {
  return endTime_;
}

void GetAppApiByPageRequest::setEndTime(long endTime) {
  endTime_ = endTime;
  setParameter(std::string("EndTime"), std::to_string(endTime));
}

int GetAppApiByPageRequest::getCurrentPage() const {
  return currentPage_;
}

void GetAppApiByPageRequest::setCurrentPage(int currentPage) {
  currentPage_ = currentPage;
  setParameter(std::string("CurrentPage"), std::to_string(currentPage));
}

std::string GetAppApiByPageRequest::getPId() const {
  return pId_;
}

void GetAppApiByPageRequest::setPId(const std::string &pId) {
  pId_ = pId;
  setParameter(std::string("PId"), pId);
}

long GetAppApiByPageRequest::getStartTime() const {
  return startTime_;
}

void GetAppApiByPageRequest::setStartTime(long startTime) {
  startTime_ = startTime;
  setParameter(std::string("StartTime"), std::to_string(startTime));
}

std::string GetAppApiByPageRequest::getRegionId() const {
  return regionId_;
}

void GetAppApiByPageRequest::setRegionId(const std::string &regionId) {
  regionId_ = regionId;
  setParameter(std::string("RegionId"), regionId);
}

int GetAppApiByPageRequest::getPageSize() const {
  return pageSize_;
}

void GetAppApiByPageRequest::setPageSize(int pageSize) {
  pageSize_ = pageSize;
  setParameter(std::string("PageSize"), std::to_string(pageSize));
}

int GetAppApiByPageRequest::getIntervalMills() const {
  return intervalMills_;
}

void GetAppApiByPageRequest::setIntervalMills(int intervalMills) {
  intervalMills_ = intervalMills;
  setParameter(std::string("IntervalMills"), std::to_string(intervalMills));
}

