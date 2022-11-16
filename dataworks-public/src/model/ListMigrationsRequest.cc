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

#include <alibabacloud/dataworks-public/model/ListMigrationsRequest.h>

using AlibabaCloud::Dataworks_public::Model::ListMigrationsRequest;

ListMigrationsRequest::ListMigrationsRequest()
    : RpcServiceRequest("dataworks-public", "2020-05-18", "ListMigrations") {
  setMethod(HttpRequest::Method::Post);
}

ListMigrationsRequest::~ListMigrationsRequest() {}

std::string ListMigrationsRequest::getOwner() const {
  return owner_;
}

void ListMigrationsRequest::setOwner(const std::string &owner) {
  owner_ = owner;
  setBodyParameter(std::string("Owner"), owner);
}

int ListMigrationsRequest::getPageNumber() const {
  return pageNumber_;
}

void ListMigrationsRequest::setPageNumber(int pageNumber) {
  pageNumber_ = pageNumber;
  setBodyParameter(std::string("PageNumber"), std::to_string(pageNumber));
}

int ListMigrationsRequest::getPageSize() const {
  return pageSize_;
}

void ListMigrationsRequest::setPageSize(int pageSize) {
  pageSize_ = pageSize;
  setBodyParameter(std::string("PageSize"), std::to_string(pageSize));
}

std::string ListMigrationsRequest::getMigrationType() const {
  return migrationType_;
}

void ListMigrationsRequest::setMigrationType(const std::string &migrationType) {
  migrationType_ = migrationType;
  setBodyParameter(std::string("MigrationType"), migrationType);
}

long ListMigrationsRequest::getProjectId() const {
  return projectId_;
}

void ListMigrationsRequest::setProjectId(long projectId) {
  projectId_ = projectId;
  setBodyParameter(std::string("ProjectId"), std::to_string(projectId));
}

