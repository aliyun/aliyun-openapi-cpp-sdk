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

#include <alibabacloud/live/model/ListEdgeTranscodeJobRequest.h>

using AlibabaCloud::Live::Model::ListEdgeTranscodeJobRequest;

ListEdgeTranscodeJobRequest::ListEdgeTranscodeJobRequest()
    : RpcServiceRequest("live", "2016-11-01", "ListEdgeTranscodeJob") {
  setMethod(HttpRequest::Method::Post);
}

ListEdgeTranscodeJobRequest::~ListEdgeTranscodeJobRequest() {}

std::string ListEdgeTranscodeJobRequest::getType() const {
  return type_;
}

void ListEdgeTranscodeJobRequest::setType(const std::string &type) {
  type_ = type;
  setParameter(std::string("Type"), type);
}

std::string ListEdgeTranscodeJobRequest::getRegionId() const {
  return regionId_;
}

void ListEdgeTranscodeJobRequest::setRegionId(const std::string &regionId) {
  regionId_ = regionId;
  setParameter(std::string("RegionId"), regionId);
}

int ListEdgeTranscodeJobRequest::getPageSize() const {
  return pageSize_;
}

void ListEdgeTranscodeJobRequest::setPageSize(int pageSize) {
  pageSize_ = pageSize;
  setParameter(std::string("PageSize"), std::to_string(pageSize));
}

std::string ListEdgeTranscodeJobRequest::getKeyword() const {
  return keyword_;
}

void ListEdgeTranscodeJobRequest::setKeyword(const std::string &keyword) {
  keyword_ = keyword;
  setParameter(std::string("Keyword"), keyword);
}

std::string ListEdgeTranscodeJobRequest::getClusterId() const {
  return clusterId_;
}

void ListEdgeTranscodeJobRequest::setClusterId(const std::string &clusterId) {
  clusterId_ = clusterId;
  setParameter(std::string("ClusterId"), clusterId);
}

long ListEdgeTranscodeJobRequest::getOwnerId() const {
  return ownerId_;
}

void ListEdgeTranscodeJobRequest::setOwnerId(long ownerId) {
  ownerId_ = ownerId;
  setParameter(std::string("OwnerId"), std::to_string(ownerId));
}

int ListEdgeTranscodeJobRequest::getPageNo() const {
  return pageNo_;
}

void ListEdgeTranscodeJobRequest::setPageNo(int pageNo) {
  pageNo_ = pageNo;
  setParameter(std::string("PageNo"), std::to_string(pageNo));
}

std::string ListEdgeTranscodeJobRequest::getSortBy() const {
  return sortBy_;
}

void ListEdgeTranscodeJobRequest::setSortBy(const std::string &sortBy) {
  sortBy_ = sortBy;
  setParameter(std::string("SortBy"), sortBy);
}

int ListEdgeTranscodeJobRequest::getStatus() const {
  return status_;
}

void ListEdgeTranscodeJobRequest::setStatus(int status) {
  status_ = status;
  setParameter(std::string("Status"), std::to_string(status));
}

