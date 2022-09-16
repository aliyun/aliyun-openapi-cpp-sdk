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

#include <alibabacloud/ecd/model/DescribeVirtualMFADevicesRequest.h>

using AlibabaCloud::Ecd::Model::DescribeVirtualMFADevicesRequest;

DescribeVirtualMFADevicesRequest::DescribeVirtualMFADevicesRequest()
    : RpcServiceRequest("ecd", "2020-09-30", "DescribeVirtualMFADevices") {
  setMethod(HttpRequest::Method::Post);
}

DescribeVirtualMFADevicesRequest::~DescribeVirtualMFADevicesRequest() {}

std::string DescribeVirtualMFADevicesRequest::getOfficeSiteId() const {
  return officeSiteId_;
}

void DescribeVirtualMFADevicesRequest::setOfficeSiteId(const std::string &officeSiteId) {
  officeSiteId_ = officeSiteId;
  setParameter(std::string("OfficeSiteId"), officeSiteId);
}

std::string DescribeVirtualMFADevicesRequest::getRegionId() const {
  return regionId_;
}

void DescribeVirtualMFADevicesRequest::setRegionId(const std::string &regionId) {
  regionId_ = regionId;
  setParameter(std::string("RegionId"), regionId);
}

std::string DescribeVirtualMFADevicesRequest::getNextToken() const {
  return nextToken_;
}

void DescribeVirtualMFADevicesRequest::setNextToken(const std::string &nextToken) {
  nextToken_ = nextToken;
  setParameter(std::string("NextToken"), nextToken);
}

int DescribeVirtualMFADevicesRequest::getMaxResults() const {
  return maxResults_;
}

void DescribeVirtualMFADevicesRequest::setMaxResults(int maxResults) {
  maxResults_ = maxResults;
  setParameter(std::string("MaxResults"), std::to_string(maxResults));
}

std::string DescribeVirtualMFADevicesRequest::getDirectoryId() const {
  return directoryId_;
}

void DescribeVirtualMFADevicesRequest::setDirectoryId(const std::string &directoryId) {
  directoryId_ = directoryId;
  setParameter(std::string("DirectoryId"), directoryId);
}

std::vector<std::string> DescribeVirtualMFADevicesRequest::getEndUserId() const {
  return endUserId_;
}

void DescribeVirtualMFADevicesRequest::setEndUserId(const std::vector<std::string> &endUserId) {
  endUserId_ = endUserId;
}

