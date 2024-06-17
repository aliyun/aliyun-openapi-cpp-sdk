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

int ListSnapshotsRequest::getPageNumber() const {
  return pageNumber_;
}

void ListSnapshotsRequest::setPageNumber(int pageNumber) {
  pageNumber_ = pageNumber;
  setParameter(std::string("PageNumber"), std::to_string(pageNumber));
}

std::string ListSnapshotsRequest::getResourceGroupId() const {
  return resourceGroupId_;
}

void ListSnapshotsRequest::setResourceGroupId(const std::string &resourceGroupId) {
  resourceGroupId_ = resourceGroupId;
  setParameter(std::string("ResourceGroupId"), resourceGroupId);
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

std::vector<ListSnapshotsRequest::Tag> ListSnapshotsRequest::getTag() const {
  return tag_;
}

void ListSnapshotsRequest::setTag(const std::vector<ListSnapshotsRequest::Tag> &tag) {
  tag_ = tag;
  for(int dep1 = 0; dep1 != tag.size(); dep1++) {
  auto tagObj = tag.at(dep1);
  std::string tagObjStr = std::string("Tag") + "." + std::to_string(dep1 + 1);
    setParameter(tagObjStr + ".Key", tagObj.key);
    setParameter(tagObjStr + ".Value", tagObj.value);
  }
}

std::string ListSnapshotsRequest::getSourceDiskType() const {
  return sourceDiskType_;
}

void ListSnapshotsRequest::setSourceDiskType(const std::string &sourceDiskType) {
  sourceDiskType_ = sourceDiskType;
  setParameter(std::string("SourceDiskType"), sourceDiskType);
}

std::string ListSnapshotsRequest::getInstanceId() const {
  return instanceId_;
}

void ListSnapshotsRequest::setInstanceId(const std::string &instanceId) {
  instanceId_ = instanceId;
  setParameter(std::string("InstanceId"), instanceId);
}

