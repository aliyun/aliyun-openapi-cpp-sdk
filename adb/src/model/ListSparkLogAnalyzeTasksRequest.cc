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

#include <alibabacloud/adb/model/ListSparkLogAnalyzeTasksRequest.h>

using AlibabaCloud::Adb::Model::ListSparkLogAnalyzeTasksRequest;

ListSparkLogAnalyzeTasksRequest::ListSparkLogAnalyzeTasksRequest()
    : RpcServiceRequest("adb", "2021-12-01", "ListSparkLogAnalyzeTasks") {
  setMethod(HttpRequest::Method::Post);
}

ListSparkLogAnalyzeTasksRequest::~ListSparkLogAnalyzeTasksRequest() {}

std::string ListSparkLogAnalyzeTasksRequest::getDBClusterId() const {
  return dBClusterId_;
}

void ListSparkLogAnalyzeTasksRequest::setDBClusterId(const std::string &dBClusterId) {
  dBClusterId_ = dBClusterId;
  setBodyParameter(std::string("DBClusterId"), dBClusterId);
}

long ListSparkLogAnalyzeTasksRequest::getPageNumber() const {
  return pageNumber_;
}

void ListSparkLogAnalyzeTasksRequest::setPageNumber(long pageNumber) {
  pageNumber_ = pageNumber;
  setBodyParameter(std::string("PageNumber"), std::to_string(pageNumber));
}

long ListSparkLogAnalyzeTasksRequest::getPageSize() const {
  return pageSize_;
}

void ListSparkLogAnalyzeTasksRequest::setPageSize(long pageSize) {
  pageSize_ = pageSize;
  setBodyParameter(std::string("PageSize"), std::to_string(pageSize));
}

