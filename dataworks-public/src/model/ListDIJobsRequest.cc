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

#include <alibabacloud/dataworks-public/model/ListDIJobsRequest.h>

using AlibabaCloud::Dataworks_public::Model::ListDIJobsRequest;

ListDIJobsRequest::ListDIJobsRequest()
    : RpcServiceRequest("dataworks-public", "2020-05-18", "ListDIJobs") {
  setMethod(HttpRequest::Method::Post);
}

ListDIJobsRequest::~ListDIJobsRequest() {}

std::string ListDIJobsRequest::getSourceDataSourceType() const {
  return sourceDataSourceType_;
}

void ListDIJobsRequest::setSourceDataSourceType(const std::string &sourceDataSourceType) {
  sourceDataSourceType_ = sourceDataSourceType;
  setBodyParameter(std::string("SourceDataSourceType"), sourceDataSourceType);
}

int ListDIJobsRequest::getPageNumber() const {
  return pageNumber_;
}

void ListDIJobsRequest::setPageNumber(int pageNumber) {
  pageNumber_ = pageNumber;
  setBodyParameter(std::string("PageNumber"), std::to_string(pageNumber));
}

std::string ListDIJobsRequest::getDestinationDataSourceType() const {
  return destinationDataSourceType_;
}

void ListDIJobsRequest::setDestinationDataSourceType(const std::string &destinationDataSourceType) {
  destinationDataSourceType_ = destinationDataSourceType;
  setBodyParameter(std::string("DestinationDataSourceType"), destinationDataSourceType);
}

int ListDIJobsRequest::getPageSize() const {
  return pageSize_;
}

void ListDIJobsRequest::setPageSize(int pageSize) {
  pageSize_ = pageSize;
  setBodyParameter(std::string("PageSize"), std::to_string(pageSize));
}

long ListDIJobsRequest::getProjectId() const {
  return projectId_;
}

void ListDIJobsRequest::setProjectId(long projectId) {
  projectId_ = projectId;
  setBodyParameter(std::string("ProjectId"), std::to_string(projectId));
}

std::string ListDIJobsRequest::getJobName() const {
  return jobName_;
}

void ListDIJobsRequest::setJobName(const std::string &jobName) {
  jobName_ = jobName;
  setBodyParameter(std::string("JobName"), jobName);
}

