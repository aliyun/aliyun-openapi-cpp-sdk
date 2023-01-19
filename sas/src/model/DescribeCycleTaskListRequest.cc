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

#include <alibabacloud/sas/model/DescribeCycleTaskListRequest.h>

using AlibabaCloud::Sas::Model::DescribeCycleTaskListRequest;

DescribeCycleTaskListRequest::DescribeCycleTaskListRequest()
    : RpcServiceRequest("sas", "2018-12-03", "DescribeCycleTaskList") {
  setMethod(HttpRequest::Method::Post);
}

DescribeCycleTaskListRequest::~DescribeCycleTaskListRequest() {}

std::string DescribeCycleTaskListRequest::getTaskName() const {
  return taskName_;
}

void DescribeCycleTaskListRequest::setTaskName(const std::string &taskName) {
  taskName_ = taskName;
  setParameter(std::string("TaskName"), taskName);
}

std::string DescribeCycleTaskListRequest::getSourceIp() const {
  return sourceIp_;
}

void DescribeCycleTaskListRequest::setSourceIp(const std::string &sourceIp) {
  sourceIp_ = sourceIp;
  setParameter(std::string("SourceIp"), sourceIp);
}

int DescribeCycleTaskListRequest::getPageSize() const {
  return pageSize_;
}

void DescribeCycleTaskListRequest::setPageSize(int pageSize) {
  pageSize_ = pageSize;
  setParameter(std::string("PageSize"), std::to_string(pageSize));
}

std::string DescribeCycleTaskListRequest::getResourceDirectoryAccountId() const {
  return resourceDirectoryAccountId_;
}

void DescribeCycleTaskListRequest::setResourceDirectoryAccountId(const std::string &resourceDirectoryAccountId) {
  resourceDirectoryAccountId_ = resourceDirectoryAccountId;
  setParameter(std::string("ResourceDirectoryAccountId"), resourceDirectoryAccountId);
}

std::string DescribeCycleTaskListRequest::getTaskType() const {
  return taskType_;
}

void DescribeCycleTaskListRequest::setTaskType(const std::string &taskType) {
  taskType_ = taskType;
  setParameter(std::string("TaskType"), taskType);
}

int DescribeCycleTaskListRequest::getCurrentPage() const {
  return currentPage_;
}

void DescribeCycleTaskListRequest::setCurrentPage(int currentPage) {
  currentPage_ = currentPage;
  setParameter(std::string("CurrentPage"), std::to_string(currentPage));
}

