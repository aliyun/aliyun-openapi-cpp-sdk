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

#include <alibabacloud/ice/model/SearchEditingProjectRequest.h>

using AlibabaCloud::ICE::Model::SearchEditingProjectRequest;

SearchEditingProjectRequest::SearchEditingProjectRequest()
    : RpcServiceRequest("ice", "2020-11-09", "SearchEditingProject") {
  setMethod(HttpRequest::Method::Post);
}

SearchEditingProjectRequest::~SearchEditingProjectRequest() {}

std::string SearchEditingProjectRequest::getForceNewIndex() const {
  return forceNewIndex_;
}

void SearchEditingProjectRequest::setForceNewIndex(const std::string &forceNewIndex) {
  forceNewIndex_ = forceNewIndex;
  setParameter(std::string("ForceNewIndex"), forceNewIndex);
}

std::string SearchEditingProjectRequest::getUserAgent() const {
  return userAgent_;
}

void SearchEditingProjectRequest::setUserAgent(const std::string &userAgent) {
  userAgent_ = userAgent;
  setParameter(std::string("UserAgent"), userAgent);
}

std::string SearchEditingProjectRequest::getStartTime() const {
  return startTime_;
}

void SearchEditingProjectRequest::setStartTime(const std::string &startTime) {
  startTime_ = startTime;
  setParameter(std::string("StartTime"), startTime);
}

std::string SearchEditingProjectRequest::getNextToken() const {
  return nextToken_;
}

void SearchEditingProjectRequest::setNextToken(const std::string &nextToken) {
  nextToken_ = nextToken;
  setParameter(std::string("NextToken"), nextToken);
}

std::string SearchEditingProjectRequest::getTemplateType() const {
  return templateType_;
}

void SearchEditingProjectRequest::setTemplateType(const std::string &templateType) {
  templateType_ = templateType;
  setParameter(std::string("TemplateType"), templateType);
}

long SearchEditingProjectRequest::getPageSize() const {
  return pageSize_;
}

void SearchEditingProjectRequest::setPageSize(long pageSize) {
  pageSize_ = pageSize;
  setParameter(std::string("PageSize"), std::to_string(pageSize));
}

std::string SearchEditingProjectRequest::getProjectType() const {
  return projectType_;
}

void SearchEditingProjectRequest::setProjectType(const std::string &projectType) {
  projectType_ = projectType;
  setParameter(std::string("ProjectType"), projectType);
}

std::string SearchEditingProjectRequest::getEndTime() const {
  return endTime_;
}

void SearchEditingProjectRequest::setEndTime(const std::string &endTime) {
  endTime_ = endTime;
  setParameter(std::string("EndTime"), endTime);
}

long SearchEditingProjectRequest::getPageNo() const {
  return pageNo_;
}

void SearchEditingProjectRequest::setPageNo(long pageNo) {
  pageNo_ = pageNo;
  setParameter(std::string("PageNo"), std::to_string(pageNo));
}

std::string SearchEditingProjectRequest::getCreateSource() const {
  return createSource_;
}

void SearchEditingProjectRequest::setCreateSource(const std::string &createSource) {
  createSource_ = createSource;
  setParameter(std::string("CreateSource"), createSource);
}

long SearchEditingProjectRequest::getMaxResults() const {
  return maxResults_;
}

void SearchEditingProjectRequest::setMaxResults(long maxResults) {
  maxResults_ = maxResults;
  setParameter(std::string("MaxResults"), std::to_string(maxResults));
}

std::string SearchEditingProjectRequest::getSortBy() const {
  return sortBy_;
}

void SearchEditingProjectRequest::setSortBy(const std::string &sortBy) {
  sortBy_ = sortBy;
  setParameter(std::string("SortBy"), sortBy);
}

std::string SearchEditingProjectRequest::getStatus() const {
  return status_;
}

void SearchEditingProjectRequest::setStatus(const std::string &status) {
  status_ = status;
  setParameter(std::string("Status"), status);
}

