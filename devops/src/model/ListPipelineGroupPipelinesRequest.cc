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

#include <alibabacloud/devops/model/ListPipelineGroupPipelinesRequest.h>

using AlibabaCloud::Devops::Model::ListPipelineGroupPipelinesRequest;

ListPipelineGroupPipelinesRequest::ListPipelineGroupPipelinesRequest()
    : RoaServiceRequest("devops", "2021-06-25") {
  setResourcePath("/organization/[organizationId]/pipelineGroups/[groupId]/pipelines"};
  setMethod(HttpRequest::Method::Get);
}

ListPipelineGroupPipelinesRequest::~ListPipelineGroupPipelinesRequest() {}

std::string ListPipelineGroupPipelinesRequest::getPipelineName() const {
  return pipelineName_;
}

void ListPipelineGroupPipelinesRequest::setPipelineName(const std::string &pipelineName) {
  pipelineName_ = pipelineName;
  setParameter(std::string("pipelineName"), pipelineName);
}

std::string ListPipelineGroupPipelinesRequest::getResultStatusList() const {
  return resultStatusList_;
}

void ListPipelineGroupPipelinesRequest::setResultStatusList(const std::string &resultStatusList) {
  resultStatusList_ = resultStatusList;
  setParameter(std::string("resultStatusList"), resultStatusList);
}

long ListPipelineGroupPipelinesRequest::getGroupId() const {
  return groupId_;
}

void ListPipelineGroupPipelinesRequest::setGroupId(long groupId) {
  groupId_ = groupId;
  setParameter(std::string("groupId"), std::to_string(groupId));
}

long ListPipelineGroupPipelinesRequest::getExecuteEndTime() const {
  return executeEndTime_;
}

void ListPipelineGroupPipelinesRequest::setExecuteEndTime(long executeEndTime) {
  executeEndTime_ = executeEndTime;
  setParameter(std::string("executeEndTime"), std::to_string(executeEndTime));
}

long ListPipelineGroupPipelinesRequest::getCreateStartTime() const {
  return createStartTime_;
}

void ListPipelineGroupPipelinesRequest::setCreateStartTime(long createStartTime) {
  createStartTime_ = createStartTime;
  setParameter(std::string("createStartTime"), std::to_string(createStartTime));
}

std::string ListPipelineGroupPipelinesRequest::getOrganizationId() const {
  return organizationId_;
}

void ListPipelineGroupPipelinesRequest::setOrganizationId(const std::string &organizationId) {
  organizationId_ = organizationId;
  setParameter(std::string("organizationId"), organizationId);
}

std::string ListPipelineGroupPipelinesRequest::getNextToken() const {
  return nextToken_;
}

void ListPipelineGroupPipelinesRequest::setNextToken(const std::string &nextToken) {
  nextToken_ = nextToken;
  setParameter(std::string("nextToken"), nextToken);
}

long ListPipelineGroupPipelinesRequest::getMaxResults() const {
  return maxResults_;
}

void ListPipelineGroupPipelinesRequest::setMaxResults(long maxResults) {
  maxResults_ = maxResults;
  setParameter(std::string("maxResults"), std::to_string(maxResults));
}

long ListPipelineGroupPipelinesRequest::getExecuteStartTime() const {
  return executeStartTime_;
}

void ListPipelineGroupPipelinesRequest::setExecuteStartTime(long executeStartTime) {
  executeStartTime_ = executeStartTime;
  setParameter(std::string("executeStartTime"), std::to_string(executeStartTime));
}

long ListPipelineGroupPipelinesRequest::getCreateEndTime() const {
  return createEndTime_;
}

void ListPipelineGroupPipelinesRequest::setCreateEndTime(long createEndTime) {
  createEndTime_ = createEndTime;
  setParameter(std::string("createEndTime"), std::to_string(createEndTime));
}

