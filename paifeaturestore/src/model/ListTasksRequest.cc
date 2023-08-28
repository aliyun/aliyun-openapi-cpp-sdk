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

#include <alibabacloud/paifeaturestore/model/ListTasksRequest.h>

using AlibabaCloud::PaiFeatureStore::Model::ListTasksRequest;

ListTasksRequest::ListTasksRequest()
    : RoaServiceRequest("paifeaturestore", "2023-06-21") {
  setResourcePath("/api/v1/instances/[InstanceId]/tasks"};
  setMethod(HttpRequest::Method::Get);
}

ListTasksRequest::~ListTasksRequest() {}

std::string ListTasksRequest::getType() const {
  return type_;
}

void ListTasksRequest::setType(const std::string &type) {
  type_ = type;
  setParameter(std::string("Type"), type);
}

int ListTasksRequest::getPageNumber() const {
  return pageNumber_;
}

void ListTasksRequest::setPageNumber(int pageNumber) {
  pageNumber_ = pageNumber;
  setParameter(std::string("PageNumber"), std::to_string(pageNumber));
}

std::string ListTasksRequest::getInstanceId() const {
  return instanceId_;
}

void ListTasksRequest::setInstanceId(const std::string &instanceId) {
  instanceId_ = instanceId;
  setParameter(std::string("InstanceId"), instanceId);
}

int ListTasksRequest::getPageSize() const {
  return pageSize_;
}

void ListTasksRequest::setPageSize(int pageSize) {
  pageSize_ = pageSize;
  setParameter(std::string("PageSize"), std::to_string(pageSize));
}

std::string ListTasksRequest::getObjectType() const {
  return objectType_;
}

void ListTasksRequest::setObjectType(const std::string &objectType) {
  objectType_ = objectType;
  setParameter(std::string("ObjectType"), objectType);
}

std::string ListTasksRequest::getProjectId() const {
  return projectId_;
}

void ListTasksRequest::setProjectId(const std::string &projectId) {
  projectId_ = projectId;
  setParameter(std::string("ProjectId"), projectId);
}

std::string ListTasksRequest::getObjectId() const {
  return objectId_;
}

void ListTasksRequest::setObjectId(const std::string &objectId) {
  objectId_ = objectId;
  setParameter(std::string("ObjectId"), objectId);
}

std::string ListTasksRequest::getStatus() const {
  return status_;
}

void ListTasksRequest::setStatus(const std::string &status) {
  status_ = status;
  setParameter(std::string("Status"), status);
}

