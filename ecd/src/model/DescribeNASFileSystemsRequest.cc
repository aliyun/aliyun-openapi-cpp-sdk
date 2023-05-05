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

#include <alibabacloud/ecd/model/DescribeNASFileSystemsRequest.h>

using AlibabaCloud::Ecd::Model::DescribeNASFileSystemsRequest;

DescribeNASFileSystemsRequest::DescribeNASFileSystemsRequest()
    : RpcServiceRequest("ecd", "2020-09-30", "DescribeNASFileSystems") {
  setMethod(HttpRequest::Method::Post);
}

DescribeNASFileSystemsRequest::~DescribeNASFileSystemsRequest() {}

std::string DescribeNASFileSystemsRequest::getOfficeSiteId() const {
  return officeSiteId_;
}

void DescribeNASFileSystemsRequest::setOfficeSiteId(const std::string &officeSiteId) {
  officeSiteId_ = officeSiteId;
  setParameter(std::string("OfficeSiteId"), officeSiteId);
}

bool DescribeNASFileSystemsRequest::getMatchCompatibleProfile() const {
  return matchCompatibleProfile_;
}

void DescribeNASFileSystemsRequest::setMatchCompatibleProfile(bool matchCompatibleProfile) {
  matchCompatibleProfile_ = matchCompatibleProfile;
  setParameter(std::string("MatchCompatibleProfile"), matchCompatibleProfile ? "true" : "false");
}

std::string DescribeNASFileSystemsRequest::getRegionId() const {
  return regionId_;
}

void DescribeNASFileSystemsRequest::setRegionId(const std::string &regionId) {
  regionId_ = regionId;
  setParameter(std::string("RegionId"), regionId);
}

std::string DescribeNASFileSystemsRequest::getNextToken() const {
  return nextToken_;
}

void DescribeNASFileSystemsRequest::setNextToken(const std::string &nextToken) {
  nextToken_ = nextToken;
  setParameter(std::string("NextToken"), nextToken);
}

int DescribeNASFileSystemsRequest::getMaxResults() const {
  return maxResults_;
}

void DescribeNASFileSystemsRequest::setMaxResults(int maxResults) {
  maxResults_ = maxResults;
  setParameter(std::string("MaxResults"), std::to_string(maxResults));
}

std::vector<std::string> DescribeNASFileSystemsRequest::getFileSystemId() const {
  return fileSystemId_;
}

void DescribeNASFileSystemsRequest::setFileSystemId(const std::vector<std::string> &fileSystemId) {
  fileSystemId_ = fileSystemId;
}

