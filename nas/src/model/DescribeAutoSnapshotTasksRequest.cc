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

#include <alibabacloud/nas/model/DescribeAutoSnapshotTasksRequest.h>

using AlibabaCloud::NAS::Model::DescribeAutoSnapshotTasksRequest;

DescribeAutoSnapshotTasksRequest::DescribeAutoSnapshotTasksRequest()
    : RpcServiceRequest("nas", "2017-06-26", "DescribeAutoSnapshotTasks") {
  setMethod(HttpRequest::Method::Post);
}

DescribeAutoSnapshotTasksRequest::~DescribeAutoSnapshotTasksRequest() {}

std::string DescribeAutoSnapshotTasksRequest::getFileSystemType() const {
  return fileSystemType_;
}

void DescribeAutoSnapshotTasksRequest::setFileSystemType(const std::string &fileSystemType) {
  fileSystemType_ = fileSystemType;
  setParameter(std::string("FileSystemType"), fileSystemType);
}

int DescribeAutoSnapshotTasksRequest::getPageNumber() const {
  return pageNumber_;
}

void DescribeAutoSnapshotTasksRequest::setPageNumber(int pageNumber) {
  pageNumber_ = pageNumber;
  setParameter(std::string("PageNumber"), std::to_string(pageNumber));
}

int DescribeAutoSnapshotTasksRequest::getPageSize() const {
  return pageSize_;
}

void DescribeAutoSnapshotTasksRequest::setPageSize(int pageSize) {
  pageSize_ = pageSize;
  setParameter(std::string("PageSize"), std::to_string(pageSize));
}

std::string DescribeAutoSnapshotTasksRequest::getFileSystemIds() const {
  return fileSystemIds_;
}

void DescribeAutoSnapshotTasksRequest::setFileSystemIds(const std::string &fileSystemIds) {
  fileSystemIds_ = fileSystemIds;
  setParameter(std::string("FileSystemIds"), fileSystemIds);
}

std::string DescribeAutoSnapshotTasksRequest::getAutoSnapshotPolicyIds() const {
  return autoSnapshotPolicyIds_;
}

void DescribeAutoSnapshotTasksRequest::setAutoSnapshotPolicyIds(const std::string &autoSnapshotPolicyIds) {
  autoSnapshotPolicyIds_ = autoSnapshotPolicyIds;
  setParameter(std::string("AutoSnapshotPolicyIds"), autoSnapshotPolicyIds);
}

