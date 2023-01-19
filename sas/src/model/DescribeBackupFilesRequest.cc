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

#include <alibabacloud/sas/model/DescribeBackupFilesRequest.h>

using AlibabaCloud::Sas::Model::DescribeBackupFilesRequest;

DescribeBackupFilesRequest::DescribeBackupFilesRequest()
    : RpcServiceRequest("sas", "2018-12-03", "DescribeBackupFiles") {
  setMethod(HttpRequest::Method::Post);
}

DescribeBackupFilesRequest::~DescribeBackupFilesRequest() {}

long DescribeBackupFilesRequest::getResourceOwnerId() const {
  return resourceOwnerId_;
}

void DescribeBackupFilesRequest::setResourceOwnerId(long resourceOwnerId) {
  resourceOwnerId_ = resourceOwnerId;
  setParameter(std::string("ResourceOwnerId"), std::to_string(resourceOwnerId));
}

std::string DescribeBackupFilesRequest::getUuid() const {
  return uuid_;
}

void DescribeBackupFilesRequest::setUuid(const std::string &uuid) {
  uuid_ = uuid;
  setParameter(std::string("Uuid"), uuid);
}

std::string DescribeBackupFilesRequest::getPath() const {
  return path_;
}

void DescribeBackupFilesRequest::setPath(const std::string &path) {
  path_ = path;
  setParameter(std::string("Path"), path);
}

std::string DescribeBackupFilesRequest::getSnapshotHash() const {
  return snapshotHash_;
}

void DescribeBackupFilesRequest::setSnapshotHash(const std::string &snapshotHash) {
  snapshotHash_ = snapshotHash;
  setParameter(std::string("SnapshotHash"), snapshotHash);
}

std::string DescribeBackupFilesRequest::getSourceIp() const {
  return sourceIp_;
}

void DescribeBackupFilesRequest::setSourceIp(const std::string &sourceIp) {
  sourceIp_ = sourceIp;
  setParameter(std::string("SourceIp"), sourceIp);
}

std::string DescribeBackupFilesRequest::getNextToken() const {
  return nextToken_;
}

void DescribeBackupFilesRequest::setNextToken(const std::string &nextToken) {
  nextToken_ = nextToken;
  setParameter(std::string("NextToken"), nextToken);
}

std::string DescribeBackupFilesRequest::getPageSize() const {
  return pageSize_;
}

void DescribeBackupFilesRequest::setPageSize(const std::string &pageSize) {
  pageSize_ = pageSize;
  setParameter(std::string("PageSize"), pageSize);
}

std::string DescribeBackupFilesRequest::getCurrentPage() const {
  return currentPage_;
}

void DescribeBackupFilesRequest::setCurrentPage(const std::string &currentPage) {
  currentPage_ = currentPage;
  setParameter(std::string("CurrentPage"), currentPage);
}

int DescribeBackupFilesRequest::getMaxResults() const {
  return maxResults_;
}

void DescribeBackupFilesRequest::setMaxResults(int maxResults) {
  maxResults_ = maxResults;
  setParameter(std::string("MaxResults"), std::to_string(maxResults));
}

