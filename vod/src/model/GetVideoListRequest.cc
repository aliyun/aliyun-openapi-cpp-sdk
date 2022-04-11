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

#include <alibabacloud/vod/model/GetVideoListRequest.h>

using AlibabaCloud::Vod::Model::GetVideoListRequest;

GetVideoListRequest::GetVideoListRequest()
    : RpcServiceRequest("vod", "2017-03-21", "GetVideoList") {
  setMethod(HttpRequest::Method::Post);
}

GetVideoListRequest::~GetVideoListRequest() {}

std::string GetVideoListRequest::getStartTime() const {
  return startTime_;
}

void GetVideoListRequest::setStartTime(const std::string &startTime) {
  startTime_ = startTime;
  setParameter(std::string("StartTime"), startTime);
}

std::string GetVideoListRequest::getStorageLocation() const {
  return storageLocation_;
}

void GetVideoListRequest::setStorageLocation(const std::string &storageLocation) {
  storageLocation_ = storageLocation;
  setParameter(std::string("StorageLocation"), storageLocation);
}

long GetVideoListRequest::getCateId() const {
  return cateId_;
}

void GetVideoListRequest::setCateId(long cateId) {
  cateId_ = cateId;
  setParameter(std::string("CateId"), std::to_string(cateId));
}

int GetVideoListRequest::getPageSize() const {
  return pageSize_;
}

void GetVideoListRequest::setPageSize(int pageSize) {
  pageSize_ = pageSize;
  setParameter(std::string("PageSize"), std::to_string(pageSize));
}

std::string GetVideoListRequest::getEndTime() const {
  return endTime_;
}

void GetVideoListRequest::setEndTime(const std::string &endTime) {
  endTime_ = endTime;
  setParameter(std::string("EndTime"), endTime);
}

int GetVideoListRequest::getPageNo() const {
  return pageNo_;
}

void GetVideoListRequest::setPageNo(int pageNo) {
  pageNo_ = pageNo;
  setParameter(std::string("PageNo"), std::to_string(pageNo));
}

std::string GetVideoListRequest::getSortBy() const {
  return sortBy_;
}

void GetVideoListRequest::setSortBy(const std::string &sortBy) {
  sortBy_ = sortBy;
  setParameter(std::string("SortBy"), sortBy);
}

std::string GetVideoListRequest::getStatus() const {
  return status_;
}

void GetVideoListRequest::setStatus(const std::string &status) {
  status_ = status;
  setParameter(std::string("Status"), status);
}

