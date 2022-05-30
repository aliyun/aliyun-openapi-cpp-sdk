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

#include <alibabacloud/dataworks-public/model/ListDeploymentsRequest.h>

using AlibabaCloud::Dataworks_public::Model::ListDeploymentsRequest;

ListDeploymentsRequest::ListDeploymentsRequest()
    : RpcServiceRequest("dataworks-public", "2020-05-18", "ListDeployments") {
  setMethod(HttpRequest::Method::Post);
}

ListDeploymentsRequest::~ListDeploymentsRequest() {}

std::string ListDeploymentsRequest::getCreator() const {
  return creator_;
}

void ListDeploymentsRequest::setCreator(const std::string &creator) {
  creator_ = creator;
  setBodyParameter(std::string("Creator"), creator);
}

long ListDeploymentsRequest::getEndCreateTime() const {
  return endCreateTime_;
}

void ListDeploymentsRequest::setEndCreateTime(long endCreateTime) {
  endCreateTime_ = endCreateTime;
  setBodyParameter(std::string("EndCreateTime"), std::to_string(endCreateTime));
}

std::string ListDeploymentsRequest::getProjectIdentifier() const {
  return projectIdentifier_;
}

void ListDeploymentsRequest::setProjectIdentifier(const std::string &projectIdentifier) {
  projectIdentifier_ = projectIdentifier;
  setBodyParameter(std::string("ProjectIdentifier"), projectIdentifier);
}

int ListDeploymentsRequest::getPageNumber() const {
  return pageNumber_;
}

void ListDeploymentsRequest::setPageNumber(int pageNumber) {
  pageNumber_ = pageNumber;
  setBodyParameter(std::string("PageNumber"), std::to_string(pageNumber));
}

std::string ListDeploymentsRequest::getExecutor() const {
  return executor_;
}

void ListDeploymentsRequest::setExecutor(const std::string &executor) {
  executor_ = executor;
  setBodyParameter(std::string("Executor"), executor);
}

int ListDeploymentsRequest::getPageSize() const {
  return pageSize_;
}

void ListDeploymentsRequest::setPageSize(int pageSize) {
  pageSize_ = pageSize;
  setBodyParameter(std::string("PageSize"), std::to_string(pageSize));
}

long ListDeploymentsRequest::getEndExecuteTime() const {
  return endExecuteTime_;
}

void ListDeploymentsRequest::setEndExecuteTime(long endExecuteTime) {
  endExecuteTime_ = endExecuteTime;
  setBodyParameter(std::string("EndExecuteTime"), std::to_string(endExecuteTime));
}

std::string ListDeploymentsRequest::getKeyword() const {
  return keyword_;
}

void ListDeploymentsRequest::setKeyword(const std::string &keyword) {
  keyword_ = keyword;
  setBodyParameter(std::string("Keyword"), keyword);
}

long ListDeploymentsRequest::getProjectId() const {
  return projectId_;
}

void ListDeploymentsRequest::setProjectId(long projectId) {
  projectId_ = projectId;
  setBodyParameter(std::string("ProjectId"), std::to_string(projectId));
}

int ListDeploymentsRequest::getStatus() const {
  return status_;
}

void ListDeploymentsRequest::setStatus(int status) {
  status_ = status;
  setBodyParameter(std::string("Status"), std::to_string(status));
}

