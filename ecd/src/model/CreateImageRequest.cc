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

#include <alibabacloud/ecd/model/CreateImageRequest.h>

using AlibabaCloud::Ecd::Model::CreateImageRequest;

CreateImageRequest::CreateImageRequest()
    : RpcServiceRequest("ecd", "2020-09-30", "CreateImage") {
  setMethod(HttpRequest::Method::Post);
}

CreateImageRequest::~CreateImageRequest() {}

std::string CreateImageRequest::getSnapshotId() const {
  return snapshotId_;
}

void CreateImageRequest::setSnapshotId(const std::string &snapshotId) {
  snapshotId_ = snapshotId;
  setParameter(std::string("SnapshotId"), snapshotId);
}

std::vector<std::string> CreateImageRequest::getSnapshotIds() const {
  return snapshotIds_;
}

void CreateImageRequest::setSnapshotIds(const std::vector<std::string> &snapshotIds) {
  snapshotIds_ = snapshotIds;
}

std::string CreateImageRequest::getDescription() const {
  return description_;
}

void CreateImageRequest::setDescription(const std::string &description) {
  description_ = description;
  setParameter(std::string("Description"), description);
}

std::string CreateImageRequest::getDiskType() const {
  return diskType_;
}

void CreateImageRequest::setDiskType(const std::string &diskType) {
  diskType_ = diskType;
  setParameter(std::string("DiskType"), diskType);
}

std::string CreateImageRequest::getRegionId() const {
  return regionId_;
}

void CreateImageRequest::setRegionId(const std::string &regionId) {
  regionId_ = regionId;
  setParameter(std::string("RegionId"), regionId);
}

std::string CreateImageRequest::getImageName() const {
  return imageName_;
}

void CreateImageRequest::setImageName(const std::string &imageName) {
  imageName_ = imageName;
  setParameter(std::string("ImageName"), imageName);
}

bool CreateImageRequest::getAutoCleanUserdata() const {
  return autoCleanUserdata_;
}

void CreateImageRequest::setAutoCleanUserdata(bool autoCleanUserdata) {
  autoCleanUserdata_ = autoCleanUserdata;
  setParameter(std::string("AutoCleanUserdata"), autoCleanUserdata ? "true" : "false");
}

std::string CreateImageRequest::getDesktopId() const {
  return desktopId_;
}

void CreateImageRequest::setDesktopId(const std::string &desktopId) {
  desktopId_ = desktopId;
  setParameter(std::string("DesktopId"), desktopId);
}

std::string CreateImageRequest::getImageResourceType() const {
  return imageResourceType_;
}

void CreateImageRequest::setImageResourceType(const std::string &imageResourceType) {
  imageResourceType_ = imageResourceType;
  setParameter(std::string("ImageResourceType"), imageResourceType);
}

