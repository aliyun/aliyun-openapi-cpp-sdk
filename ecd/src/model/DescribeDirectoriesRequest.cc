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

#include <alibabacloud/ecd/model/DescribeDirectoriesRequest.h>

using AlibabaCloud::Ecd::Model::DescribeDirectoriesRequest;

DescribeDirectoriesRequest::DescribeDirectoriesRequest()
    : RpcServiceRequest("ecd", "2020-09-30", "DescribeDirectories") {
  setMethod(HttpRequest::Method::Post);
}

DescribeDirectoriesRequest::~DescribeDirectoriesRequest() {}

std::string DescribeDirectoriesRequest::getDirectoryType() const {
  return directoryType_;
}

void DescribeDirectoriesRequest::setDirectoryType(const std::string &directoryType) {
  directoryType_ = directoryType;
  setParameter(std::string("DirectoryType"), directoryType);
}

std::string DescribeDirectoriesRequest::getRegionId() const {
  return regionId_;
}

void DescribeDirectoriesRequest::setRegionId(const std::string &regionId) {
  regionId_ = regionId;
  setParameter(std::string("RegionId"), regionId);
}

std::string DescribeDirectoriesRequest::getNextToken() const {
  return nextToken_;
}

void DescribeDirectoriesRequest::setNextToken(const std::string &nextToken) {
  nextToken_ = nextToken;
  setParameter(std::string("NextToken"), nextToken);
}

std::string DescribeDirectoriesRequest::getDirectoryStatus() const {
  return directoryStatus_;
}

void DescribeDirectoriesRequest::setDirectoryStatus(const std::string &directoryStatus) {
  directoryStatus_ = directoryStatus;
  setParameter(std::string("DirectoryStatus"), directoryStatus);
}

int DescribeDirectoriesRequest::getMaxResults() const {
  return maxResults_;
}

void DescribeDirectoriesRequest::setMaxResults(int maxResults) {
  maxResults_ = maxResults;
  setParameter(std::string("MaxResults"), std::to_string(maxResults));
}

std::vector<std::string> DescribeDirectoriesRequest::getDirectoryId() const {
  return directoryId_;
}

void DescribeDirectoriesRequest::setDirectoryId(const std::vector<std::string> &directoryId) {
  directoryId_ = directoryId;
}

std::string DescribeDirectoriesRequest::getStatus() const {
  return status_;
}

void DescribeDirectoriesRequest::setStatus(const std::string &status) {
  status_ = status;
  setParameter(std::string("Status"), status);
}

