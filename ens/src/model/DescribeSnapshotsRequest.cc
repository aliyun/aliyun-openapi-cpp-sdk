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

#include <alibabacloud/ens/model/DescribeSnapshotsRequest.h>

using AlibabaCloud::Ens::Model::DescribeSnapshotsRequest;

DescribeSnapshotsRequest::DescribeSnapshotsRequest()
    : RpcServiceRequest("ens", "2017-11-10", "DescribeSnapshots") {
  setMethod(HttpRequest::Method::Post);
}

DescribeSnapshotsRequest::~DescribeSnapshotsRequest() {}

std::string DescribeSnapshotsRequest::getEnsRegionId() const {
  return ensRegionId_;
}

void DescribeSnapshotsRequest::setEnsRegionId(const std::string &ensRegionId) {
  ensRegionId_ = ensRegionId;
  setParameter(std::string("EnsRegionId"), ensRegionId);
}

std::string DescribeSnapshotsRequest::getInstanceId() const {
  return instanceId_;
}

void DescribeSnapshotsRequest::setInstanceId(const std::string &instanceId) {
  instanceId_ = instanceId;
  setParameter(std::string("InstanceId"), instanceId);
}

std::string DescribeSnapshotsRequest::getSnapshotId() const {
  return snapshotId_;
}

void DescribeSnapshotsRequest::setSnapshotId(const std::string &snapshotId) {
  snapshotId_ = snapshotId;
  setParameter(std::string("SnapshotId"), snapshotId);
}

std::string DescribeSnapshotsRequest::getSnapshotName() const {
  return snapshotName_;
}

void DescribeSnapshotsRequest::setSnapshotName(const std::string &snapshotName) {
  snapshotName_ = snapshotName;
  setParameter(std::string("SnapshotName"), snapshotName);
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

std::string DescribeSnapshotsRequest::getDiskId() const {
  return diskId_;
}

void DescribeSnapshotsRequest::setDiskId(const std::string &diskId) {
  diskId_ = diskId;
  setParameter(std::string("DiskId"), diskId);
}

std::string DescribeSnapshotsRequest::getEnsRegionIds() const {
  return ensRegionIds_;
}

void DescribeSnapshotsRequest::setEnsRegionIds(const std::string &ensRegionIds) {
  ensRegionIds_ = ensRegionIds;
  setParameter(std::string("EnsRegionIds"), ensRegionIds);
}

