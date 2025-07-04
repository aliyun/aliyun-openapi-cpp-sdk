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

#include <alibabacloud/rds/model/DescribeRCCloudAssistantStatusRequest.h>

using AlibabaCloud::Rds::Model::DescribeRCCloudAssistantStatusRequest;

DescribeRCCloudAssistantStatusRequest::DescribeRCCloudAssistantStatusRequest()
    : RpcServiceRequest("rds", "2014-08-15", "DescribeRCCloudAssistantStatus") {
  setMethod(HttpRequest::Method::Post);
}

DescribeRCCloudAssistantStatusRequest::~DescribeRCCloudAssistantStatusRequest() {}

std::string DescribeRCCloudAssistantStatusRequest::getOSType() const {
  return oSType_;
}

void DescribeRCCloudAssistantStatusRequest::setOSType(const std::string &oSType) {
  oSType_ = oSType;
  setParameter(std::string("OSType"), oSType);
}

int DescribeRCCloudAssistantStatusRequest::getPageNumber() const {
  return pageNumber_;
}

void DescribeRCCloudAssistantStatusRequest::setPageNumber(int pageNumber) {
  pageNumber_ = pageNumber;
  setParameter(std::string("PageNumber"), std::to_string(pageNumber));
}

std::string DescribeRCCloudAssistantStatusRequest::getRegionId() const {
  return regionId_;
}

void DescribeRCCloudAssistantStatusRequest::setRegionId(const std::string &regionId) {
  regionId_ = regionId;
  setParameter(std::string("RegionId"), regionId);
}

std::string DescribeRCCloudAssistantStatusRequest::getNextToken() const {
  return nextToken_;
}

void DescribeRCCloudAssistantStatusRequest::setNextToken(const std::string &nextToken) {
  nextToken_ = nextToken;
  setParameter(std::string("NextToken"), nextToken);
}

std::vector<DescribeRCCloudAssistantStatusRequest::std::string> DescribeRCCloudAssistantStatusRequest::getInstanceIds() const {
  return instanceIds_;
}

void DescribeRCCloudAssistantStatusRequest::setInstanceIds(const std::vector<DescribeRCCloudAssistantStatusRequest::std::string> &instanceIds) {
  instanceIds_ = instanceIds;
  for(int dep1 = 0; dep1 != instanceIds.size(); dep1++) {
    setParameter(std::string("InstanceIds") + "." + std::to_string(dep1 + 1), instanceIds[dep1]);
  }
}

int DescribeRCCloudAssistantStatusRequest::getPageSize() const {
  return pageSize_;
}

void DescribeRCCloudAssistantStatusRequest::setPageSize(int pageSize) {
  pageSize_ = pageSize;
  setParameter(std::string("PageSize"), std::to_string(pageSize));
}

int DescribeRCCloudAssistantStatusRequest::getMaxResults() const {
  return maxResults_;
}

void DescribeRCCloudAssistantStatusRequest::setMaxResults(int maxResults) {
  maxResults_ = maxResults;
  setParameter(std::string("MaxResults"), std::to_string(maxResults));
}

