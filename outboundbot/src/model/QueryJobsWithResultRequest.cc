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

#include <alibabacloud/outboundbot/model/QueryJobsWithResultRequest.h>

using AlibabaCloud::OutboundBot::Model::QueryJobsWithResultRequest;

QueryJobsWithResultRequest::QueryJobsWithResultRequest()
    : RpcServiceRequest("outboundbot", "2019-12-26", "QueryJobsWithResult") {
  setMethod(HttpRequest::Method::Post);
}

QueryJobsWithResultRequest::~QueryJobsWithResultRequest() {}

bool QueryJobsWithResultRequest::getHasReachedEndOfFlowFilter() const {
  return hasReachedEndOfFlowFilter_;
}

void QueryJobsWithResultRequest::setHasReachedEndOfFlowFilter(bool hasReachedEndOfFlowFilter) {
  hasReachedEndOfFlowFilter_ = hasReachedEndOfFlowFilter;
  setParameter(std::string("HasReachedEndOfFlowFilter"), hasReachedEndOfFlowFilter ? "true" : "false");
}

long QueryJobsWithResultRequest::getEndActualTimeFilter() const {
  return endActualTimeFilter_;
}

void QueryJobsWithResultRequest::setEndActualTimeFilter(long endActualTimeFilter) {
  endActualTimeFilter_ = endActualTimeFilter;
  setParameter(std::string("EndActualTimeFilter"), std::to_string(endActualTimeFilter));
}

int QueryJobsWithResultRequest::getPageNumber() const {
  return pageNumber_;
}

void QueryJobsWithResultRequest::setPageNumber(int pageNumber) {
  pageNumber_ = pageNumber;
  setParameter(std::string("PageNumber"), std::to_string(pageNumber));
}

bool QueryJobsWithResultRequest::getHasHangUpByRejectionFilter() const {
  return hasHangUpByRejectionFilter_;
}

void QueryJobsWithResultRequest::setHasHangUpByRejectionFilter(bool hasHangUpByRejectionFilter) {
  hasHangUpByRejectionFilter_ = hasHangUpByRejectionFilter;
  setParameter(std::string("HasHangUpByRejectionFilter"), hasHangUpByRejectionFilter ? "true" : "false");
}

int QueryJobsWithResultRequest::getPageSize() const {
  return pageSize_;
}

void QueryJobsWithResultRequest::setPageSize(int pageSize) {
  pageSize_ = pageSize;
  setParameter(std::string("PageSize"), std::to_string(pageSize));
}

long QueryJobsWithResultRequest::getStartActualTimeFilter() const {
  return startActualTimeFilter_;
}

void QueryJobsWithResultRequest::setStartActualTimeFilter(long startActualTimeFilter) {
  startActualTimeFilter_ = startActualTimeFilter;
  setParameter(std::string("StartActualTimeFilter"), std::to_string(startActualTimeFilter));
}

bool QueryJobsWithResultRequest::getHasAnsweredFilter() const {
  return hasAnsweredFilter_;
}

void QueryJobsWithResultRequest::setHasAnsweredFilter(bool hasAnsweredFilter) {
  hasAnsweredFilter_ = hasAnsweredFilter;
  setParameter(std::string("HasAnsweredFilter"), hasAnsweredFilter ? "true" : "false");
}

std::vector<std::string> QueryJobsWithResultRequest::getLabelsJson() const {
  return labelsJson_;
}

void QueryJobsWithResultRequest::setLabelsJson(const std::vector<std::string> &labelsJson) {
  labelsJson_ = labelsJson;
}

std::string QueryJobsWithResultRequest::getTaskStatusFilter() const {
  return taskStatusFilter_;
}

void QueryJobsWithResultRequest::setTaskStatusFilter(const std::string &taskStatusFilter) {
  taskStatusFilter_ = taskStatusFilter;
  setParameter(std::string("TaskStatusFilter"), taskStatusFilter);
}

std::string QueryJobsWithResultRequest::getQueryText() const {
  return queryText_;
}

void QueryJobsWithResultRequest::setQueryText(const std::string &queryText) {
  queryText_ = queryText;
  setParameter(std::string("QueryText"), queryText);
}

std::string QueryJobsWithResultRequest::getJobFailureReasonsFilter() const {
  return jobFailureReasonsFilter_;
}

void QueryJobsWithResultRequest::setJobFailureReasonsFilter(const std::string &jobFailureReasonsFilter) {
  jobFailureReasonsFilter_ = jobFailureReasonsFilter;
  setParameter(std::string("JobFailureReasonsFilter"), jobFailureReasonsFilter);
}

std::string QueryJobsWithResultRequest::getInstanceId() const {
  return instanceId_;
}

void QueryJobsWithResultRequest::setInstanceId(const std::string &instanceId) {
  instanceId_ = instanceId;
  setParameter(std::string("InstanceId"), instanceId);
}

std::string QueryJobsWithResultRequest::getJobStatusFilter() const {
  return jobStatusFilter_;
}

void QueryJobsWithResultRequest::setJobStatusFilter(const std::string &jobStatusFilter) {
  jobStatusFilter_ = jobStatusFilter;
  setParameter(std::string("JobStatusFilter"), jobStatusFilter);
}

std::string QueryJobsWithResultRequest::getJobGroupId() const {
  return jobGroupId_;
}

void QueryJobsWithResultRequest::setJobGroupId(const std::string &jobGroupId) {
  jobGroupId_ = jobGroupId;
  setParameter(std::string("JobGroupId"), jobGroupId);
}

