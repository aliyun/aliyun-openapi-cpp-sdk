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

#include <alibabacloud/ddoscoo/model/DescribeWebAccessLogDispatchStatusRequest.h>

using AlibabaCloud::Ddoscoo::Model::DescribeWebAccessLogDispatchStatusRequest;

DescribeWebAccessLogDispatchStatusRequest::DescribeWebAccessLogDispatchStatusRequest()
    : RpcServiceRequest("ddoscoo", "2020-01-01", "DescribeWebAccessLogDispatchStatus") {
  setMethod(HttpRequest::Method::Post);
}

DescribeWebAccessLogDispatchStatusRequest::~DescribeWebAccessLogDispatchStatusRequest() {}

int DescribeWebAccessLogDispatchStatusRequest::getPageNumber() const {
  return pageNumber_;
}

void DescribeWebAccessLogDispatchStatusRequest::setPageNumber(int pageNumber) {
  pageNumber_ = pageNumber;
  setParameter(std::string("PageNumber"), std::to_string(pageNumber));
}

std::string DescribeWebAccessLogDispatchStatusRequest::getResourceGroupId() const {
  return resourceGroupId_;
}

void DescribeWebAccessLogDispatchStatusRequest::setResourceGroupId(const std::string &resourceGroupId) {
  resourceGroupId_ = resourceGroupId;
  setParameter(std::string("ResourceGroupId"), resourceGroupId);
}

std::string DescribeWebAccessLogDispatchStatusRequest::getSourceIp() const {
  return sourceIp_;
}

void DescribeWebAccessLogDispatchStatusRequest::setSourceIp(const std::string &sourceIp) {
  sourceIp_ = sourceIp;
  setParameter(std::string("SourceIp"), sourceIp);
}

int DescribeWebAccessLogDispatchStatusRequest::getPageSize() const {
  return pageSize_;
}

void DescribeWebAccessLogDispatchStatusRequest::setPageSize(int pageSize) {
  pageSize_ = pageSize;
  setParameter(std::string("PageSize"), std::to_string(pageSize));
}

std::string DescribeWebAccessLogDispatchStatusRequest::getLang() const {
  return lang_;
}

void DescribeWebAccessLogDispatchStatusRequest::setLang(const std::string &lang) {
  lang_ = lang;
  setParameter(std::string("Lang"), lang);
}

