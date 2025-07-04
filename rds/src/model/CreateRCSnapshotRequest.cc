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

#include <alibabacloud/rds/model/CreateRCSnapshotRequest.h>

using AlibabaCloud::Rds::Model::CreateRCSnapshotRequest;

CreateRCSnapshotRequest::CreateRCSnapshotRequest()
    : RpcServiceRequest("rds", "2014-08-15", "CreateRCSnapshot") {
  setMethod(HttpRequest::Method::Post);
}

CreateRCSnapshotRequest::~CreateRCSnapshotRequest() {}

bool CreateRCSnapshotRequest::getInstantAccess() const {
  return instantAccess_;
}

void CreateRCSnapshotRequest::setInstantAccess(bool instantAccess) {
  instantAccess_ = instantAccess;
  setParameter(std::string("InstantAccess"), instantAccess ? "true" : "false");
}

std::string CreateRCSnapshotRequest::getDescription() const {
  return description_;
}

void CreateRCSnapshotRequest::setDescription(const std::string &description) {
  description_ = description;
  setParameter(std::string("Description"), description);
}

std::string CreateRCSnapshotRequest::getResourceGroupId() const {
  return resourceGroupId_;
}

void CreateRCSnapshotRequest::setResourceGroupId(const std::string &resourceGroupId) {
  resourceGroupId_ = resourceGroupId;
  setParameter(std::string("ResourceGroupId"), resourceGroupId);
}

int CreateRCSnapshotRequest::getInstantAccessRetentionDays() const {
  return instantAccessRetentionDays_;
}

void CreateRCSnapshotRequest::setInstantAccessRetentionDays(int instantAccessRetentionDays) {
  instantAccessRetentionDays_ = instantAccessRetentionDays;
  setParameter(std::string("InstantAccessRetentionDays"), std::to_string(instantAccessRetentionDays));
}

std::string CreateRCSnapshotRequest::getRegionId() const {
  return regionId_;
}

void CreateRCSnapshotRequest::setRegionId(const std::string &regionId) {
  regionId_ = regionId;
  setParameter(std::string("RegionId"), regionId);
}

std::string CreateRCSnapshotRequest::getDiskId() const {
  return diskId_;
}

void CreateRCSnapshotRequest::setDiskId(const std::string &diskId) {
  diskId_ = diskId;
  setParameter(std::string("DiskId"), diskId);
}

std::vector<CreateRCSnapshotRequest::Tag> CreateRCSnapshotRequest::getTag() const {
  return tag_;
}

void CreateRCSnapshotRequest::setTag(const std::vector<CreateRCSnapshotRequest::Tag> &tag) {
  tag_ = tag;
  for(int dep1 = 0; dep1 != tag.size(); dep1++) {
  auto tagObj = tag.at(dep1);
  std::string tagObjStr = std::string("Tag") + "." + std::to_string(dep1 + 1);
    setParameter(tagObjStr + ".Value", tagObj.value);
    setParameter(tagObjStr + ".Key", tagObj.key);
  }
}

std::string CreateRCSnapshotRequest::getZoneId() const {
  return zoneId_;
}

void CreateRCSnapshotRequest::setZoneId(const std::string &zoneId) {
  zoneId_ = zoneId;
  setParameter(std::string("ZoneId"), zoneId);
}

int CreateRCSnapshotRequest::getRetentionDays() const {
  return retentionDays_;
}

void CreateRCSnapshotRequest::setRetentionDays(int retentionDays) {
  retentionDays_ = retentionDays;
  setParameter(std::string("RetentionDays"), std::to_string(retentionDays));
}

