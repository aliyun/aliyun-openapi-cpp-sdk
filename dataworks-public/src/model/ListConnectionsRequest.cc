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

#include <alibabacloud/dataworks-public/model/ListConnectionsRequest.h>

using AlibabaCloud::Dataworks_public::Model::ListConnectionsRequest;

ListConnectionsRequest::ListConnectionsRequest()
    : RpcServiceRequest("dataworks-public", "2020-05-18", "ListConnections") {
  setMethod(HttpRequest::Method::Get);
}

ListConnectionsRequest::~ListConnectionsRequest() {}

int ListConnectionsRequest::getPageNumber() const {
  return pageNumber_;
}

void ListConnectionsRequest::setPageNumber(int pageNumber) {
  pageNumber_ = pageNumber;
  setParameter(std::string("PageNumber"), std::to_string(pageNumber));
}

std::string ListConnectionsRequest::getSubType() const {
  return subType_;
}

void ListConnectionsRequest::setSubType(const std::string &subType) {
  subType_ = subType;
  setParameter(std::string("SubType"), subType);
}

std::string ListConnectionsRequest::getName() const {
  return name_;
}

void ListConnectionsRequest::setName(const std::string &name) {
  name_ = name;
  setParameter(std::string("Name"), name);
}

int ListConnectionsRequest::getEnvType() const {
  return envType_;
}

void ListConnectionsRequest::setEnvType(int envType) {
  envType_ = envType;
  setParameter(std::string("EnvType"), std::to_string(envType));
}

int ListConnectionsRequest::getPageSize() const {
  return pageSize_;
}

void ListConnectionsRequest::setPageSize(int pageSize) {
  pageSize_ = pageSize;
  setParameter(std::string("PageSize"), std::to_string(pageSize));
}

std::string ListConnectionsRequest::getConnectionType() const {
  return connectionType_;
}

void ListConnectionsRequest::setConnectionType(const std::string &connectionType) {
  connectionType_ = connectionType;
  setParameter(std::string("ConnectionType"), connectionType);
}

long ListConnectionsRequest::getProjectId() const {
  return projectId_;
}

void ListConnectionsRequest::setProjectId(long projectId) {
  projectId_ = projectId;
  setParameter(std::string("ProjectId"), std::to_string(projectId));
}

std::string ListConnectionsRequest::getStatus() const {
  return status_;
}

void ListConnectionsRequest::setStatus(const std::string &status) {
  status_ = status;
  setParameter(std::string("Status"), status);
}

