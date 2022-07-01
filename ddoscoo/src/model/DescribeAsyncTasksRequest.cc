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

#include <alibabacloud/ddoscoo/model/DescribeAsyncTasksRequest.h>

using AlibabaCloud::Ddoscoo::Model::DescribeAsyncTasksRequest;

DescribeAsyncTasksRequest::DescribeAsyncTasksRequest()
    : RpcServiceRequest("ddoscoo", "2020-01-01", "DescribeAsyncTasks") {
  setMethod(HttpRequest::Method::Post);
}

DescribeAsyncTasksRequest::~DescribeAsyncTasksRequest() {}

int DescribeAsyncTasksRequest::getPageNumber() const {
  return pageNumber_;
}

void DescribeAsyncTasksRequest::setPageNumber(int pageNumber) {
  pageNumber_ = pageNumber;
  setParameter(std::string("PageNumber"), std::to_string(pageNumber));
}

std::string DescribeAsyncTasksRequest::getResourceGroupId() const {
  return resourceGroupId_;
}

void DescribeAsyncTasksRequest::setResourceGroupId(const std::string &resourceGroupId) {
  resourceGroupId_ = resourceGroupId;
  setParameter(std::string("ResourceGroupId"), resourceGroupId);
}

std::string DescribeAsyncTasksRequest::getSourceIp() const {
  return sourceIp_;
}

void DescribeAsyncTasksRequest::setSourceIp(const std::string &sourceIp) {
  sourceIp_ = sourceIp;
  setParameter(std::string("SourceIp"), sourceIp);
}

int DescribeAsyncTasksRequest::getPageSize() const {
  return pageSize_;
}

void DescribeAsyncTasksRequest::setPageSize(int pageSize) {
  pageSize_ = pageSize;
  setParameter(std::string("PageSize"), std::to_string(pageSize));
}

std::string DescribeAsyncTasksRequest::getLang() const {
  return lang_;
}

void DescribeAsyncTasksRequest::setLang(const std::string &lang) {
  lang_ = lang;
  setParameter(std::string("Lang"), lang);
}

