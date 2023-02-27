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

#include <alibabacloud/ice/model/ListSmartJobsRequest.h>

using AlibabaCloud::ICE::Model::ListSmartJobsRequest;

ListSmartJobsRequest::ListSmartJobsRequest()
    : RpcServiceRequest("ice", "2020-11-09", "ListSmartJobs") {
  setMethod(HttpRequest::Method::Get);
}

ListSmartJobsRequest::~ListSmartJobsRequest() {}

long ListSmartJobsRequest::getShowInputInfo() const {
  return showInputInfo_;
}

void ListSmartJobsRequest::setShowInputInfo(long showInputInfo) {
  showInputInfo_ = showInputInfo;
  setParameter(std::string("ShowInputInfo"), std::to_string(showInputInfo));
}

std::string ListSmartJobsRequest::getTitle() const {
  return title_;
}

void ListSmartJobsRequest::setTitle(const std::string &title) {
  title_ = title;
  setParameter(std::string("Title"), title);
}

std::string ListSmartJobsRequest::getNextToken() const {
  return nextToken_;
}

void ListSmartJobsRequest::setNextToken(const std::string &nextToken) {
  nextToken_ = nextToken;
  setParameter(std::string("NextToken"), nextToken);
}

long ListSmartJobsRequest::getPageSize() const {
  return pageSize_;
}

void ListSmartJobsRequest::setPageSize(long pageSize) {
  pageSize_ = pageSize;
  setParameter(std::string("PageSize"), std::to_string(pageSize));
}

std::string ListSmartJobsRequest::getKeyword() const {
  return keyword_;
}

void ListSmartJobsRequest::setKeyword(const std::string &keyword) {
  keyword_ = keyword;
  setParameter(std::string("Keyword"), keyword);
}

std::string ListSmartJobsRequest::getJobState() const {
  return jobState_;
}

void ListSmartJobsRequest::setJobState(const std::string &jobState) {
  jobState_ = jobState;
  setParameter(std::string("JobState"), jobState);
}

std::string ListSmartJobsRequest::getJobType() const {
  return jobType_;
}

void ListSmartJobsRequest::setJobType(const std::string &jobType) {
  jobType_ = jobType;
  setParameter(std::string("JobType"), jobType);
}

long ListSmartJobsRequest::getPageNo() const {
  return pageNo_;
}

void ListSmartJobsRequest::setPageNo(long pageNo) {
  pageNo_ = pageNo;
  setParameter(std::string("PageNo"), std::to_string(pageNo));
}

long ListSmartJobsRequest::getMaxResults() const {
  return maxResults_;
}

void ListSmartJobsRequest::setMaxResults(long maxResults) {
  maxResults_ = maxResults;
  setParameter(std::string("MaxResults"), std::to_string(maxResults));
}

std::string ListSmartJobsRequest::getSortBy() const {
  return sortBy_;
}

void ListSmartJobsRequest::setSortBy(const std::string &sortBy) {
  sortBy_ = sortBy;
  setParameter(std::string("SortBy"), sortBy);
}

long ListSmartJobsRequest::getStatus() const {
  return status_;
}

void ListSmartJobsRequest::setStatus(long status) {
  status_ = status;
  setParameter(std::string("Status"), std::to_string(status));
}

