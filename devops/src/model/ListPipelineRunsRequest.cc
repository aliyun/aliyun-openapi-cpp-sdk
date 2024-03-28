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

#include <alibabacloud/devops/model/ListPipelineRunsRequest.h>

using AlibabaCloud::Devops::Model::ListPipelineRunsRequest;

ListPipelineRunsRequest::ListPipelineRunsRequest()
    : RoaServiceRequest("devops", "2021-06-25") {
  setResourcePath("/organization/[organizationId]/pipelines/[pipelineId]/pipelineRuns"};
  setMethod(HttpRequest::Method::Get);
}

ListPipelineRunsRequest::~ListPipelineRunsRequest() {}

long ListPipelineRunsRequest::getEndTime() const {
  return endTime_;
}

void ListPipelineRunsRequest::setEndTime(long endTime) {
  endTime_ = endTime;
  setParameter(std::string("endTime"), std::to_string(endTime));
}

long ListPipelineRunsRequest::getStartTime() const {
  return startTime_;
}

void ListPipelineRunsRequest::setStartTime(long startTime) {
  startTime_ = startTime;
  setParameter(std::string("startTime"), std::to_string(startTime));
}

long ListPipelineRunsRequest::getPipelineId() const {
  return pipelineId_;
}

void ListPipelineRunsRequest::setPipelineId(long pipelineId) {
  pipelineId_ = pipelineId;
  setParameter(std::string("pipelineId"), std::to_string(pipelineId));
}

int ListPipelineRunsRequest::getTriggerMode() const {
  return triggerMode_;
}

void ListPipelineRunsRequest::setTriggerMode(int triggerMode) {
  triggerMode_ = triggerMode;
  setParameter(std::string("triggerMode"), std::to_string(triggerMode));
}

std::string ListPipelineRunsRequest::getOrganizationId() const {
  return organizationId_;
}

void ListPipelineRunsRequest::setOrganizationId(const std::string &organizationId) {
  organizationId_ = organizationId;
  setParameter(std::string("organizationId"), organizationId);
}

std::string ListPipelineRunsRequest::getNextToken() const {
  return nextToken_;
}

void ListPipelineRunsRequest::setNextToken(const std::string &nextToken) {
  nextToken_ = nextToken;
  setParameter(std::string("nextToken"), nextToken);
}

long ListPipelineRunsRequest::getMaxResults() const {
  return maxResults_;
}

void ListPipelineRunsRequest::setMaxResults(long maxResults) {
  maxResults_ = maxResults;
  setParameter(std::string("maxResults"), std::to_string(maxResults));
}

std::string ListPipelineRunsRequest::getStatus() const {
  return status_;
}

void ListPipelineRunsRequest::setStatus(const std::string &status) {
  status_ = status;
  setParameter(std::string("status"), status);
}

