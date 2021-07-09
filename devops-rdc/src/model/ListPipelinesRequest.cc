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

#include <alibabacloud/devops-rdc/model/ListPipelinesRequest.h>

using AlibabaCloud::Devops_rdc::Model::ListPipelinesRequest;

ListPipelinesRequest::ListPipelinesRequest()
    : RpcServiceRequest("devops-rdc", "2020-03-03", "ListPipelines") {
  setMethod(HttpRequest::Method::Post);
}

ListPipelinesRequest::~ListPipelinesRequest() {}

std::string ListPipelinesRequest::getPipelineName() const {
  return pipelineName_;
}

void ListPipelinesRequest::setPipelineName(const std::string &pipelineName) {
  pipelineName_ = pipelineName;
  setBodyParameter(std::string("PipelineName"), pipelineName);
}

std::string ListPipelinesRequest::getResultStatusList() const {
  return resultStatusList_;
}

void ListPipelinesRequest::setResultStatusList(const std::string &resultStatusList) {
  resultStatusList_ = resultStatusList;
  setBodyParameter(std::string("ResultStatusList"), resultStatusList);
}

std::string ListPipelinesRequest::getCreators() const {
  return creators_;
}

void ListPipelinesRequest::setCreators(const std::string &creators) {
  creators_ = creators;
  setBodyParameter(std::string("Creators"), creators);
}

std::string ListPipelinesRequest::getExecuteEndTime() const {
  return executeEndTime_;
}

void ListPipelinesRequest::setExecuteEndTime(const std::string &executeEndTime) {
  executeEndTime_ = executeEndTime;
  setBodyParameter(std::string("ExecuteEndTime"), executeEndTime);
}

std::string ListPipelinesRequest::getUserPk() const {
  return userPk_;
}

void ListPipelinesRequest::setUserPk(const std::string &userPk) {
  userPk_ = userPk;
  setBodyParameter(std::string("UserPk"), userPk);
}

std::string ListPipelinesRequest::getOrgId() const {
  return orgId_;
}

void ListPipelinesRequest::setOrgId(const std::string &orgId) {
  orgId_ = orgId;
  setParameter(std::string("OrgId"), orgId);
}

std::string ListPipelinesRequest::getCreateStartTime() const {
  return createStartTime_;
}

void ListPipelinesRequest::setCreateStartTime(const std::string &createStartTime) {
  createStartTime_ = createStartTime;
  setBodyParameter(std::string("CreateStartTime"), createStartTime);
}

std::string ListPipelinesRequest::getOperators() const {
  return operators_;
}

void ListPipelinesRequest::setOperators(const std::string &operators) {
  operators_ = operators;
  setBodyParameter(std::string("Operators"), operators);
}

int ListPipelinesRequest::getPageSize() const {
  return pageSize_;
}

void ListPipelinesRequest::setPageSize(int pageSize) {
  pageSize_ = pageSize;
  setBodyParameter(std::string("PageSize"), std::to_string(pageSize));
}

std::string ListPipelinesRequest::getExecuteStartTime() const {
  return executeStartTime_;
}

void ListPipelinesRequest::setExecuteStartTime(const std::string &executeStartTime) {
  executeStartTime_ = executeStartTime;
  setBodyParameter(std::string("ExecuteStartTime"), executeStartTime);
}

int ListPipelinesRequest::getPageStart() const {
  return pageStart_;
}

void ListPipelinesRequest::setPageStart(int pageStart) {
  pageStart_ = pageStart;
  setBodyParameter(std::string("PageStart"), std::to_string(pageStart));
}

std::string ListPipelinesRequest::getCreateEndTime() const {
  return createEndTime_;
}

void ListPipelinesRequest::setCreateEndTime(const std::string &createEndTime) {
  createEndTime_ = createEndTime;
  setBodyParameter(std::string("CreateEndTime"), createEndTime);
}

