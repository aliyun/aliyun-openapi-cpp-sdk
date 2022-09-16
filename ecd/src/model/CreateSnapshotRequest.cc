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

#include <alibabacloud/ecd/model/CreateSnapshotRequest.h>

using AlibabaCloud::Ecd::Model::CreateSnapshotRequest;

CreateSnapshotRequest::CreateSnapshotRequest()
    : RpcServiceRequest("ecd", "2020-09-30", "CreateSnapshot") {
  setMethod(HttpRequest::Method::Post);
}

CreateSnapshotRequest::~CreateSnapshotRequest() {}

std::string CreateSnapshotRequest::getDescription() const {
  return description_;
}

void CreateSnapshotRequest::setDescription(const std::string &description) {
  description_ = description;
  setParameter(std::string("Description"), description);
}

std::string CreateSnapshotRequest::getSourceDiskType() const {
  return sourceDiskType_;
}

void CreateSnapshotRequest::setSourceDiskType(const std::string &sourceDiskType) {
  sourceDiskType_ = sourceDiskType;
  setParameter(std::string("SourceDiskType"), sourceDiskType);
}

std::string CreateSnapshotRequest::getSnapshotName() const {
  return snapshotName_;
}

void CreateSnapshotRequest::setSnapshotName(const std::string &snapshotName) {
  snapshotName_ = snapshotName;
  setParameter(std::string("SnapshotName"), snapshotName);
}

std::string CreateSnapshotRequest::getRegionId() const {
  return regionId_;
}

void CreateSnapshotRequest::setRegionId(const std::string &regionId) {
  regionId_ = regionId;
  setParameter(std::string("RegionId"), regionId);
}

std::string CreateSnapshotRequest::getDesktopId() const {
  return desktopId_;
}

void CreateSnapshotRequest::setDesktopId(const std::string &desktopId) {
  desktopId_ = desktopId;
  setParameter(std::string("DesktopId"), desktopId);
}

