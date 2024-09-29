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

#include <alibabacloud/dataworks-public/model/ListQualityResultsByEntityRequest.h>

using AlibabaCloud::Dataworks_public::Model::ListQualityResultsByEntityRequest;

ListQualityResultsByEntityRequest::ListQualityResultsByEntityRequest()
    : RpcServiceRequest("dataworks-public", "2020-05-18", "ListQualityResultsByEntity") {
  setMethod(HttpRequest::Method::Post);
}

ListQualityResultsByEntityRequest::~ListQualityResultsByEntityRequest() {}

std::string ListQualityResultsByEntityRequest::getProjectName() const {
  return projectName_;
}

void ListQualityResultsByEntityRequest::setProjectName(const std::string &projectName) {
  projectName_ = projectName;
  setBodyParameter(std::string("ProjectName"), projectName);
}

long ListQualityResultsByEntityRequest::getEntityId() const {
  return entityId_;
}

void ListQualityResultsByEntityRequest::setEntityId(long entityId) {
  entityId_ = entityId;
  setBodyParameter(std::string("EntityId"), std::to_string(entityId));
}

std::string ListQualityResultsByEntityRequest::getStartDate() const {
  return startDate_;
}

void ListQualityResultsByEntityRequest::setStartDate(const std::string &startDate) {
  startDate_ = startDate;
  setBodyParameter(std::string("StartDate"), startDate);
}

int ListQualityResultsByEntityRequest::getPageNumber() const {
  return pageNumber_;
}

void ListQualityResultsByEntityRequest::setPageNumber(int pageNumber) {
  pageNumber_ = pageNumber;
  setBodyParameter(std::string("PageNumber"), std::to_string(pageNumber));
}

std::string ListQualityResultsByEntityRequest::getEndDate() const {
  return endDate_;
}

void ListQualityResultsByEntityRequest::setEndDate(const std::string &endDate) {
  endDate_ = endDate;
  setBodyParameter(std::string("EndDate"), endDate);
}

int ListQualityResultsByEntityRequest::getPageSize() const {
  return pageSize_;
}

void ListQualityResultsByEntityRequest::setPageSize(int pageSize) {
  pageSize_ = pageSize;
  setBodyParameter(std::string("PageSize"), std::to_string(pageSize));
}

long ListQualityResultsByEntityRequest::getProjectId() const {
  return projectId_;
}

void ListQualityResultsByEntityRequest::setProjectId(long projectId) {
  projectId_ = projectId;
  setBodyParameter(std::string("ProjectId"), std::to_string(projectId));
}

