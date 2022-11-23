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

#include <alibabacloud/ververica/model/ListDeploymentsRequest.h>

using AlibabaCloud::Ververica::Model::ListDeploymentsRequest;

ListDeploymentsRequest::ListDeploymentsRequest()
    : RoaServiceRequest("ververica", "2020-05-01") {
  setResourcePath("/pop/workspaces/[workspace]/api/v1/namespaces/[namespace]/deployments"};
  setMethod(HttpRequest::Method::Get);
}

ListDeploymentsRequest::~ListDeploymentsRequest() {}

std::string ListDeploymentsRequest::getWorkspace() const {
  return workspace_;
}

void ListDeploymentsRequest::setWorkspace(const std::string &workspace) {
  workspace_ = workspace;
  setParameter(std::string("workspace"), workspace);
}

std::string ListDeploymentsRequest::getCreator() const {
  return creator_;
}

void ListDeploymentsRequest::setCreator(const std::string &creator) {
  creator_ = creator;
  setParameter(std::string("creator"), creator);
}

std::string ListDeploymentsRequest::getModifier() const {
  return modifier_;
}

void ListDeploymentsRequest::setModifier(const std::string &modifier) {
  modifier_ = modifier;
  setParameter(std::string("modifier"), modifier);
}

std::string ListDeploymentsRequest::getPriority() const {
  return priority_;
}

void ListDeploymentsRequest::setPriority(const std::string &priority) {
  priority_ = priority;
  setParameter(std::string("priority"), priority);
}

bool ListDeploymentsRequest::getBatchMode() const {
  return batchMode_;
}

void ListDeploymentsRequest::setBatchMode(bool batchMode) {
  batchMode_ = batchMode;
  setParameter(std::string("batchMode"), batchMode ? "true" : "false");
}

std::string ListDeploymentsRequest::getSortName() const {
  return sortName_;
}

void ListDeploymentsRequest::setSortName(const std::string &sortName) {
  sortName_ = sortName;
  setParameter(std::string("sortName"), sortName);
}

std::string ListDeploymentsRequest::getDeploymentId() const {
  return deploymentId_;
}

void ListDeploymentsRequest::setDeploymentId(const std::string &deploymentId) {
  deploymentId_ = deploymentId;
  setParameter(std::string("deploymentId"), deploymentId);
}

std::string ListDeploymentsRequest::get_Namespace() const {
  return _namespace_;
}

void ListDeploymentsRequest::set_Namespace(const std::string &_namespace) {
  _namespace_ = _namespace;
  setParameter(std::string("namespace"), _namespace);
}

std::string ListDeploymentsRequest::getPageSize() const {
  return pageSize_;
}

void ListDeploymentsRequest::setPageSize(const std::string &pageSize) {
  pageSize_ = pageSize;
  setParameter(std::string("pageSize"), pageSize);
}

std::string ListDeploymentsRequest::getName() const {
  return name_;
}

void ListDeploymentsRequest::setName(const std::string &name) {
  name_ = name;
  setParameter(std::string("name"), name);
}

std::string ListDeploymentsRequest::getPageIndex() const {
  return pageIndex_;
}

void ListDeploymentsRequest::setPageIndex(const std::string &pageIndex) {
  pageIndex_ = pageIndex;
  setParameter(std::string("pageIndex"), pageIndex);
}

std::string ListDeploymentsRequest::getSortOrder() const {
  return sortOrder_;
}

void ListDeploymentsRequest::setSortOrder(const std::string &sortOrder) {
  sortOrder_ = sortOrder;
  setParameter(std::string("sortOrder"), sortOrder);
}

std::string ListDeploymentsRequest::getState() const {
  return state_;
}

void ListDeploymentsRequest::setState(const std::string &state) {
  state_ = state;
  setParameter(std::string("state"), state);
}

std::string ListDeploymentsRequest::getStatus() const {
  return status_;
}

void ListDeploymentsRequest::setStatus(const std::string &status) {
  status_ = status;
  setParameter(std::string("status"), status);
}

