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

#include <alibabacloud/nas/model/DescribeAccessPointsRequest.h>

using AlibabaCloud::NAS::Model::DescribeAccessPointsRequest;

DescribeAccessPointsRequest::DescribeAccessPointsRequest()
    : RpcServiceRequest("nas", "2017-06-26", "DescribeAccessPoints") {
  setMethod(HttpRequest::Method::Post);
}

DescribeAccessPointsRequest::~DescribeAccessPointsRequest() {}

std::string DescribeAccessPointsRequest::getNextToken() const {
  return nextToken_;
}

void DescribeAccessPointsRequest::setNextToken(const std::string &nextToken) {
  nextToken_ = nextToken;
  setParameter(std::string("NextToken"), nextToken);
}

std::string DescribeAccessPointsRequest::getFileSystemId() const {
  return fileSystemId_;
}

void DescribeAccessPointsRequest::setFileSystemId(const std::string &fileSystemId) {
  fileSystemId_ = fileSystemId;
  setParameter(std::string("FileSystemId"), fileSystemId);
}

int DescribeAccessPointsRequest::getMaxResults() const {
  return maxResults_;
}

void DescribeAccessPointsRequest::setMaxResults(int maxResults) {
  maxResults_ = maxResults;
  setParameter(std::string("MaxResults"), std::to_string(maxResults));
}

std::string DescribeAccessPointsRequest::getAccessGroup() const {
  return accessGroup_;
}

void DescribeAccessPointsRequest::setAccessGroup(const std::string &accessGroup) {
  accessGroup_ = accessGroup;
  setParameter(std::string("AccessGroup"), accessGroup);
}

