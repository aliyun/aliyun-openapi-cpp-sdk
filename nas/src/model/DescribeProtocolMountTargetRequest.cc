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

#include <alibabacloud/nas/model/DescribeProtocolMountTargetRequest.h>

using AlibabaCloud::NAS::Model::DescribeProtocolMountTargetRequest;

DescribeProtocolMountTargetRequest::DescribeProtocolMountTargetRequest()
    : RpcServiceRequest("nas", "2017-06-26", "DescribeProtocolMountTarget") {
  setMethod(HttpRequest::Method::Post);
}

DescribeProtocolMountTargetRequest::~DescribeProtocolMountTargetRequest() {}

std::string DescribeProtocolMountTargetRequest::getClientToken() const {
  return clientToken_;
}

void DescribeProtocolMountTargetRequest::setClientToken(const std::string &clientToken) {
  clientToken_ = clientToken;
  setParameter(std::string("ClientToken"), clientToken);
}

std::string DescribeProtocolMountTargetRequest::getNextToken() const {
  return nextToken_;
}

void DescribeProtocolMountTargetRequest::setNextToken(const std::string &nextToken) {
  nextToken_ = nextToken;
  setParameter(std::string("NextToken"), nextToken);
}

std::string DescribeProtocolMountTargetRequest::getFileSystemId() const {
  return fileSystemId_;
}

void DescribeProtocolMountTargetRequest::setFileSystemId(const std::string &fileSystemId) {
  fileSystemId_ = fileSystemId;
  setParameter(std::string("FileSystemId"), fileSystemId);
}

std::vector<DescribeProtocolMountTargetRequest::Filters> DescribeProtocolMountTargetRequest::getFilters() const {
  return filters_;
}

void DescribeProtocolMountTargetRequest::setFilters(const std::vector<DescribeProtocolMountTargetRequest::Filters> &filters) {
  filters_ = filters;
  for(int dep1 = 0; dep1 != filters.size(); dep1++) {
  auto filtersObj = filters.at(dep1);
  std::string filtersObjStr = std::string("Filters") + "." + std::to_string(dep1 + 1);
    setParameter(filtersObjStr + ".Value", filtersObj.value);
    setParameter(filtersObjStr + ".Key", filtersObj.key);
  }
}

long DescribeProtocolMountTargetRequest::getMaxResults() const {
  return maxResults_;
}

void DescribeProtocolMountTargetRequest::setMaxResults(long maxResults) {
  maxResults_ = maxResults;
  setParameter(std::string("MaxResults"), std::to_string(maxResults));
}

