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

#include <alibabacloud/ice/model/ListLiveTranscodeJobsRequest.h>

using AlibabaCloud::ICE::Model::ListLiveTranscodeJobsRequest;

ListLiveTranscodeJobsRequest::ListLiveTranscodeJobsRequest()
    : RpcServiceRequest("ice", "2020-11-09", "ListLiveTranscodeJobs") {
  setMethod(HttpRequest::Method::Post);
}

ListLiveTranscodeJobsRequest::~ListLiveTranscodeJobsRequest() {}

std::string ListLiveTranscodeJobsRequest::getType() const {
  return type_;
}

void ListLiveTranscodeJobsRequest::setType(const std::string &type) {
  type_ = type;
  setParameter(std::string("Type"), type);
}

int ListLiveTranscodeJobsRequest::getPageSize() const {
  return pageSize_;
}

void ListLiveTranscodeJobsRequest::setPageSize(int pageSize) {
  pageSize_ = pageSize;
  setParameter(std::string("PageSize"), std::to_string(pageSize));
}

std::string ListLiveTranscodeJobsRequest::getKeyWord() const {
  return keyWord_;
}

void ListLiveTranscodeJobsRequest::setKeyWord(const std::string &keyWord) {
  keyWord_ = keyWord;
  setParameter(std::string("KeyWord"), keyWord);
}

int ListLiveTranscodeJobsRequest::getStartMode() const {
  return startMode_;
}

void ListLiveTranscodeJobsRequest::setStartMode(int startMode) {
  startMode_ = startMode;
  setParameter(std::string("StartMode"), std::to_string(startMode));
}

int ListLiveTranscodeJobsRequest::getPageNo() const {
  return pageNo_;
}

void ListLiveTranscodeJobsRequest::setPageNo(int pageNo) {
  pageNo_ = pageNo;
  setParameter(std::string("PageNo"), std::to_string(pageNo));
}

std::string ListLiveTranscodeJobsRequest::getSortBy() const {
  return sortBy_;
}

void ListLiveTranscodeJobsRequest::setSortBy(const std::string &sortBy) {
  sortBy_ = sortBy;
  setParameter(std::string("SortBy"), sortBy);
}

int ListLiveTranscodeJobsRequest::getStatus() const {
  return status_;
}

void ListLiveTranscodeJobsRequest::setStatus(int status) {
  status_ = status;
  setParameter(std::string("Status"), std::to_string(status));
}

