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

#include <alibabacloud/swas-open/model/DescribeCloudAssistantStatusRequest.h>

using AlibabaCloud::SWAS_OPEN::Model::DescribeCloudAssistantStatusRequest;

DescribeCloudAssistantStatusRequest::DescribeCloudAssistantStatusRequest()
    : RpcServiceRequest("swas-open", "2020-06-01", "DescribeCloudAssistantStatus") {
  setMethod(HttpRequest::Method::Post);
}

DescribeCloudAssistantStatusRequest::~DescribeCloudAssistantStatusRequest() {}

int DescribeCloudAssistantStatusRequest::getPageNumber() const {
  return pageNumber_;
}

void DescribeCloudAssistantStatusRequest::setPageNumber(int pageNumber) {
  pageNumber_ = pageNumber;
  setParameter(std::string("PageNumber"), std::to_string(pageNumber));
}

std::string DescribeCloudAssistantStatusRequest::getRegionId() const {
  return regionId_;
}

void DescribeCloudAssistantStatusRequest::setRegionId(const std::string &regionId) {
  regionId_ = regionId;
  setParameter(std::string("RegionId"), regionId);
}

std::vector<DescribeCloudAssistantStatusRequest::std::string> DescribeCloudAssistantStatusRequest::getInstanceIds() const {
  return instanceIds_;
}

void DescribeCloudAssistantStatusRequest::setInstanceIds(const std::vector<DescribeCloudAssistantStatusRequest::std::string> &instanceIds) {
  instanceIds_ = instanceIds;
  for(int dep1 = 0; dep1 != instanceIds.size(); dep1++) {
    setParameter(std::string("InstanceIds") + "." + std::to_string(dep1 + 1), instanceIds[dep1]);
  }
}

int DescribeCloudAssistantStatusRequest::getPageSize() const {
  return pageSize_;
}

void DescribeCloudAssistantStatusRequest::setPageSize(int pageSize) {
  pageSize_ = pageSize;
  setParameter(std::string("PageSize"), std::to_string(pageSize));
}

