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

#include <alibabacloud/cms/model/DescribeSiteMonitorListRequest.h>

using AlibabaCloud::Cms::Model::DescribeSiteMonitorListRequest;

DescribeSiteMonitorListRequest::DescribeSiteMonitorListRequest()
    : RpcServiceRequest("cms", "2019-01-01", "DescribeSiteMonitorList") {
  setMethod(HttpRequest::Method::Post);
}

DescribeSiteMonitorListRequest::~DescribeSiteMonitorListRequest() {}

std::string DescribeSiteMonitorListRequest::getTaskType() const {
  return taskType_;
}

void DescribeSiteMonitorListRequest::setTaskType(const std::string &taskType) {
  taskType_ = taskType;
  setParameter(std::string("TaskType"), taskType);
}

int DescribeSiteMonitorListRequest::getPageSize() const {
  return pageSize_;
}

void DescribeSiteMonitorListRequest::setPageSize(int pageSize) {
  pageSize_ = pageSize;
  setParameter(std::string("PageSize"), std::to_string(pageSize));
}

int DescribeSiteMonitorListRequest::getPage() const {
  return page_;
}

void DescribeSiteMonitorListRequest::setPage(int page) {
  page_ = page;
  setParameter(std::string("Page"), std::to_string(page));
}

std::string DescribeSiteMonitorListRequest::getKeyword() const {
  return keyword_;
}

void DescribeSiteMonitorListRequest::setKeyword(const std::string &keyword) {
  keyword_ = keyword;
  setParameter(std::string("Keyword"), keyword);
}

std::string DescribeSiteMonitorListRequest::getTaskId() const {
  return taskId_;
}

void DescribeSiteMonitorListRequest::setTaskId(const std::string &taskId) {
  taskId_ = taskId;
  setParameter(std::string("TaskId"), taskId);
}

