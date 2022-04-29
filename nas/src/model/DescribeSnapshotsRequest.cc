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

#include <alibabacloud/nas/model/DescribeSnapshotsRequest.h>

using AlibabaCloud::NAS::Model::DescribeSnapshotsRequest;

DescribeSnapshotsRequest::DescribeSnapshotsRequest()
    : RpcServiceRequest("nas", "2017-06-26", "DescribeSnapshots") {
  setMethod(HttpRequest::Method::Post);
}

DescribeSnapshotsRequest::~DescribeSnapshotsRequest() {}

std::string DescribeSnapshotsRequest::getSnapshotIds() const {
  return snapshotIds_;
}

void DescribeSnapshotsRequest::setSnapshotIds(const std::string &snapshotIds) {
  snapshotIds_ = snapshotIds;
  setParameter(std::string("SnapshotIds"), snapshotIds);
}

std::string DescribeSnapshotsRequest::getSnapshotName() const {
  return snapshotName_;
}

void DescribeSnapshotsRequest::setSnapshotName(const std::string &snapshotName) {
  snapshotName_ = snapshotName;
  setParameter(std::string("SnapshotName"), snapshotName);
}

std::string DescribeSnapshotsRequest::getFileSystemType() const {
  return fileSystemType_;
}

void DescribeSnapshotsRequest::setFileSystemType(const std::string &fileSystemType) {
  fileSystemType_ = fileSystemType;
  setParameter(std::string("FileSystemType"), fileSystemType);
}

int DescribeSnapshotsRequest::getPageNumber() const {
  return pageNumber_;
}

void DescribeSnapshotsRequest::setPageNumber(int pageNumber) {
  pageNumber_ = pageNumber;
  setParameter(std::string("PageNumber"), std::to_string(pageNumber));
}

int DescribeSnapshotsRequest::getPageSize() const {
  return pageSize_;
}

void DescribeSnapshotsRequest::setPageSize(int pageSize) {
  pageSize_ = pageSize;
  setParameter(std::string("PageSize"), std::to_string(pageSize));
}

std::string DescribeSnapshotsRequest::getFileSystemId() const {
  return fileSystemId_;
}

void DescribeSnapshotsRequest::setFileSystemId(const std::string &fileSystemId) {
  fileSystemId_ = fileSystemId;
  setParameter(std::string("FileSystemId"), fileSystemId);
}

std::string DescribeSnapshotsRequest::getSnapshotType() const {
  return snapshotType_;
}

void DescribeSnapshotsRequest::setSnapshotType(const std::string &snapshotType) {
  snapshotType_ = snapshotType;
  setParameter(std::string("SnapshotType"), snapshotType);
}

std::string DescribeSnapshotsRequest::getStatus() const {
  return status_;
}

void DescribeSnapshotsRequest::setStatus(const std::string &status) {
  status_ = status;
  setParameter(std::string("Status"), status);
}

