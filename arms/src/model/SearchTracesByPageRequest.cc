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

#include <alibabacloud/arms/model/SearchTracesByPageRequest.h>

using AlibabaCloud::ARMS::Model::SearchTracesByPageRequest;

SearchTracesByPageRequest::SearchTracesByPageRequest()
    : RpcServiceRequest("arms", "2019-08-08", "SearchTracesByPage") {
  setMethod(HttpRequest::Method::Post);
}

SearchTracesByPageRequest::~SearchTracesByPageRequest() {}

long SearchTracesByPageRequest::getEndTime() const {
  return endTime_;
}

void SearchTracesByPageRequest::setEndTime(long endTime) {
  endTime_ = endTime;
  setParameter(std::string("EndTime"), std::to_string(endTime));
}

std::string SearchTracesByPageRequest::getPid() const {
  return pid_;
}

void SearchTracesByPageRequest::setPid(const std::string &pid) {
  pid_ = pid;
  setParameter(std::string("Pid"), pid);
}

long SearchTracesByPageRequest::getStartTime() const {
  return startTime_;
}

void SearchTracesByPageRequest::setStartTime(long startTime) {
  startTime_ = startTime;
  setParameter(std::string("StartTime"), std::to_string(startTime));
}

bool SearchTracesByPageRequest::getReverse() const {
  return reverse_;
}

void SearchTracesByPageRequest::setReverse(bool reverse) {
  reverse_ = reverse;
  setParameter(std::string("Reverse"), reverse ? "true" : "false");
}

long SearchTracesByPageRequest::getMinDuration() const {
  return minDuration_;
}

void SearchTracesByPageRequest::setMinDuration(long minDuration) {
  minDuration_ = minDuration;
  setParameter(std::string("MinDuration"), std::to_string(minDuration));
}

int SearchTracesByPageRequest::getPageNumber() const {
  return pageNumber_;
}

void SearchTracesByPageRequest::setPageNumber(int pageNumber) {
  pageNumber_ = pageNumber;
  setParameter(std::string("PageNumber"), std::to_string(pageNumber));
}

bool SearchTracesByPageRequest::getIsError() const {
  return isError_;
}

void SearchTracesByPageRequest::setIsError(bool isError) {
  isError_ = isError;
  setParameter(std::string("IsError"), isError ? "true" : "false");
}

std::vector<SearchTracesByPageRequest::Tags> SearchTracesByPageRequest::getTags() const {
  return tags_;
}

void SearchTracesByPageRequest::setTags(const std::vector<SearchTracesByPageRequest::Tags> &tags) {
  tags_ = tags;
  for(int dep1 = 0; dep1 != tags.size(); dep1++) {
  auto tagsObj = tags.at(dep1);
  std::string tagsObjStr = std::string("Tags") + "." + std::to_string(dep1 + 1);
    setParameter(tagsObjStr + ".Value", tagsObj.value);
    setParameter(tagsObjStr + ".Key", tagsObj.key);
  }
}

std::string SearchTracesByPageRequest::getServiceIp() const {
  return serviceIp_;
}

void SearchTracesByPageRequest::setServiceIp(const std::string &serviceIp) {
  serviceIp_ = serviceIp;
  setParameter(std::string("ServiceIp"), serviceIp);
}

std::vector<SearchTracesByPageRequest::ExclusionFilters> SearchTracesByPageRequest::getExclusionFilters() const {
  return exclusionFilters_;
}

void SearchTracesByPageRequest::setExclusionFilters(const std::vector<SearchTracesByPageRequest::ExclusionFilters> &exclusionFilters) {
  exclusionFilters_ = exclusionFilters;
  for(int dep1 = 0; dep1 != exclusionFilters.size(); dep1++) {
  auto exclusionFiltersObj = exclusionFilters.at(dep1);
  std::string exclusionFiltersObjStr = std::string("ExclusionFilters") + "." + std::to_string(dep1 + 1);
    setParameter(exclusionFiltersObjStr + ".Value", exclusionFiltersObj.value);
    setParameter(exclusionFiltersObjStr + ".Key", exclusionFiltersObj.key);
  }
}

std::string SearchTracesByPageRequest::getRegionId() const {
  return regionId_;
}

void SearchTracesByPageRequest::setRegionId(const std::string &regionId) {
  regionId_ = regionId;
  setParameter(std::string("RegionId"), regionId);
}

std::string SearchTracesByPageRequest::getOperationName() const {
  return operationName_;
}

void SearchTracesByPageRequest::setOperationName(const std::string &operationName) {
  operationName_ = operationName;
  setParameter(std::string("OperationName"), operationName);
}

int SearchTracesByPageRequest::getPageSize() const {
  return pageSize_;
}

void SearchTracesByPageRequest::setPageSize(int pageSize) {
  pageSize_ = pageSize;
  setParameter(std::string("PageSize"), std::to_string(pageSize));
}

std::string SearchTracesByPageRequest::getServiceName() const {
  return serviceName_;
}

void SearchTracesByPageRequest::setServiceName(const std::string &serviceName) {
  serviceName_ = serviceName;
  setParameter(std::string("ServiceName"), serviceName);
}

