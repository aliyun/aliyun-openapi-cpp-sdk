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

#include <alibabacloud/swas-open/model/DescribeCloudAssistantAttributesRequest.h>

using AlibabaCloud::SWAS_OPEN::Model::DescribeCloudAssistantAttributesRequest;

DescribeCloudAssistantAttributesRequest::DescribeCloudAssistantAttributesRequest()
    : RpcServiceRequest("swas-open", "2020-06-01", "DescribeCloudAssistantAttributes") {
  setMethod(HttpRequest::Method::Post);
}

DescribeCloudAssistantAttributesRequest::~DescribeCloudAssistantAttributesRequest() {}

int DescribeCloudAssistantAttributesRequest::getPageNumber() const {
  return pageNumber_;
}

void DescribeCloudAssistantAttributesRequest::setPageNumber(int pageNumber) {
  pageNumber_ = pageNumber;
  setParameter(std::string("PageNumber"), std::to_string(pageNumber));
}

std::string DescribeCloudAssistantAttributesRequest::getRegionId() const {
  return regionId_;
}

void DescribeCloudAssistantAttributesRequest::setRegionId(const std::string &regionId) {
  regionId_ = regionId;
  setParameter(std::string("RegionId"), regionId);
}

std::vector<DescribeCloudAssistantAttributesRequest::std::string> DescribeCloudAssistantAttributesRequest::getInstanceIds() const {
  return instanceIds_;
}

void DescribeCloudAssistantAttributesRequest::setInstanceIds(const std::vector<DescribeCloudAssistantAttributesRequest::std::string> &instanceIds) {
  instanceIds_ = instanceIds;
  for(int dep1 = 0; dep1 != instanceIds.size(); dep1++) {
    setParameter(std::string("InstanceIds") + "." + std::to_string(dep1 + 1), instanceIds[dep1]);
  }
}

int DescribeCloudAssistantAttributesRequest::getPageSize() const {
  return pageSize_;
}

void DescribeCloudAssistantAttributesRequest::setPageSize(int pageSize) {
  pageSize_ = pageSize;
  setParameter(std::string("PageSize"), std::to_string(pageSize));
}

