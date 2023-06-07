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

#include <alibabacloud/swas-open/model/ListSnapshotsRequest.h>

using AlibabaCloud::SWAS_OPEN::Model::ListSnapshotsRequest;

ListSnapshotsRequest::ListSnapshotsRequest()
    : RpcServiceRequest("swas-open", "2020-06-01", "ListSnapshots") {
  setMethod(HttpRequest::Method::Post);
}

ListSnapshotsRequest::~ListSnapshotsRequest() {}

std::string ListSnapshotsRequest::getSnapshotIds() const {
  return snapshotIds_;
}

void ListSnapshotsRequest::setSnapshotIds(const std::string &snapshotIds) {
  snapshotIds_ = snapshotIds;
  setParameter(std::string("SnapshotIds"), snapshotIds);
}

std::string ListSnapshotsRequest::getSourceDiskType() const {
  return sourceDiskType_;
}

void ListSnapshotsRequest::setSourceDiskType(const std::string &sourceDiskType) {
  sourceDiskType_ = sourceDiskType;
  setParameter(std::string("SourceDiskType"), sourceDiskType);
}

int ListSnapshotsRequest::getPageNumber() const {
  return pageNumber_;
}

void ListSnapshotsRequest::setPageNumber(int pageNumber) {
  pageNumber_ = pageNumber;
  setParameter(std::string("PageNumber"), std::to_string(pageNumber));
}

std::string ListSnapshotsRequest::getInstanceId() const {
  return instanceId_;
}

void ListSnapshotsRequest::setInstanceId(const std::string &instanceId) {
  instanceId_ = instanceId;
  setParameter(std::string("InstanceId"), instanceId);
}

std::string ListSnapshotsRequest::getRegionId() const {
  return regionId_;
}

void ListSnapshotsRequest::setRegionId(const std::string &regionId) {
  regionId_ = regionId;
  setParameter(std::string("RegionId"), regionId);
}

int ListSnapshotsRequest::getPageSize() const {
  return pageSize_;
}

void ListSnapshotsRequest::setPageSize(int pageSize) {
  pageSize_ = pageSize;
  setParameter(std::string("PageSize"), std::to_string(pageSize));
}

std::string ListSnapshotsRequest::getDiskId() const {
  return diskId_;
}

void ListSnapshotsRequest::setDiskId(const std::string &diskId) {
  diskId_ = diskId;
  setParameter(std::string("DiskId"), diskId);
}

