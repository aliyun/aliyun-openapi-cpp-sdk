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

#include <alibabacloud/devops/model/ListPipelinesRequest.h>

using AlibabaCloud::Devops::Model::ListPipelinesRequest;

ListPipelinesRequest::ListPipelinesRequest()
    : RoaServiceRequest("devops", "2021-06-25") {
  setResourcePath("/organization/[organizationId]/pipelines"};
  setMethod(HttpRequest::Method::Get);
}

ListPipelinesRequest::~ListPipelinesRequest() {}

std::string ListPipelinesRequest::getPipelineName() const {
  return pipelineName_;
}

void ListPipelinesRequest::setPipelineName(const std::string &pipelineName) {
  pipelineName_ = pipelineName;
  setParameter(std::string("pipelineName"), pipelineName);
}

std::string ListPipelinesRequest::getStatusList() const {
  return statusList_;
}

void ListPipelinesRequest::setStatusList(const std::string &statusList) {
  statusList_ = statusList;
  setParameter(std::string("statusList"), statusList);
}

std::string ListPipelinesRequest::getCreatorAccountIds() const {
  return creatorAccountIds_;
}

void ListPipelinesRequest::setCreatorAccountIds(const std::string &creatorAccountIds) {
  creatorAccountIds_ = creatorAccountIds;
  setParameter(std::string("creatorAccountIds"), creatorAccountIds);
}

long ListPipelinesRequest::getExecuteEndTime() const {
  return executeEndTime_;
}

void ListPipelinesRequest::setExecuteEndTime(long executeEndTime) {
  executeEndTime_ = executeEndTime;
  setParameter(std::string("executeEndTime"), std::to_string(executeEndTime));
}

long ListPipelinesRequest::getCreateStartTime() const {
  return createStartTime_;
}

void ListPipelinesRequest::setCreateStartTime(long createStartTime) {
  createStartTime_ = createStartTime;
  setParameter(std::string("createStartTime"), std::to_string(createStartTime));
}

std::string ListPipelinesRequest::getOrganizationId() const {
  return organizationId_;
}

void ListPipelinesRequest::setOrganizationId(const std::string &organizationId) {
  organizationId_ = organizationId;
  setParameter(std::string("organizationId"), organizationId);
}

std::string ListPipelinesRequest::getExecuteAccountIds() const {
  return executeAccountIds_;
}

void ListPipelinesRequest::setExecuteAccountIds(const std::string &executeAccountIds) {
  executeAccountIds_ = executeAccountIds;
  setParameter(std::string("executeAccountIds"), executeAccountIds);
}

std::string ListPipelinesRequest::getNextToken() const {
  return nextToken_;
}

void ListPipelinesRequest::setNextToken(const std::string &nextToken) {
  nextToken_ = nextToken;
  setParameter(std::string("nextToken"), nextToken);
}

long ListPipelinesRequest::getMaxResults() const {
  return maxResults_;
}

void ListPipelinesRequest::setMaxResults(long maxResults) {
  maxResults_ = maxResults;
  setParameter(std::string("maxResults"), std::to_string(maxResults));
}

long ListPipelinesRequest::getExecuteStartTime() const {
  return executeStartTime_;
}

void ListPipelinesRequest::setExecuteStartTime(long executeStartTime) {
  executeStartTime_ = executeStartTime;
  setParameter(std::string("executeStartTime"), std::to_string(executeStartTime));
}

long ListPipelinesRequest::getCreateEndTime() const {
  return createEndTime_;
}

void ListPipelinesRequest::setCreateEndTime(long createEndTime) {
  createEndTime_ = createEndTime;
  setParameter(std::string("createEndTime"), std::to_string(createEndTime));
}

