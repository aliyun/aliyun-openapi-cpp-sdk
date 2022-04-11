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

#include <alibabacloud/vod/model/GetAuditHistoryRequest.h>

using AlibabaCloud::Vod::Model::GetAuditHistoryRequest;

GetAuditHistoryRequest::GetAuditHistoryRequest()
    : RpcServiceRequest("vod", "2017-03-21", "GetAuditHistory") {
  setMethod(HttpRequest::Method::Post);
}

GetAuditHistoryRequest::~GetAuditHistoryRequest() {}

long GetAuditHistoryRequest::getPageSize() const {
  return pageSize_;
}

void GetAuditHistoryRequest::setPageSize(long pageSize) {
  pageSize_ = pageSize;
  setParameter(std::string("PageSize"), std::to_string(pageSize));
}

std::string GetAuditHistoryRequest::getVideoId() const {
  return videoId_;
}

void GetAuditHistoryRequest::setVideoId(const std::string &videoId) {
  videoId_ = videoId;
  setParameter(std::string("VideoId"), videoId);
}

long GetAuditHistoryRequest::getPageNo() const {
  return pageNo_;
}

void GetAuditHistoryRequest::setPageNo(long pageNo) {
  pageNo_ = pageNo;
  setParameter(std::string("PageNo"), std::to_string(pageNo));
}

std::string GetAuditHistoryRequest::getSortBy() const {
  return sortBy_;
}

void GetAuditHistoryRequest::setSortBy(const std::string &sortBy) {
  sortBy_ = sortBy;
  setParameter(std::string("SortBy"), sortBy);
}

