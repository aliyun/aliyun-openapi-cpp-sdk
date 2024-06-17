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

#include <alibabacloud/swas-open/model/CreateSnapshotRequest.h>

using AlibabaCloud::SWAS_OPEN::Model::CreateSnapshotRequest;

CreateSnapshotRequest::CreateSnapshotRequest()
    : RpcServiceRequest("swas-open", "2020-06-01", "CreateSnapshot") {
  setMethod(HttpRequest::Method::Post);
}

CreateSnapshotRequest::~CreateSnapshotRequest() {}

std::string CreateSnapshotRequest::getClientToken() const {
  return clientToken_;
}

void CreateSnapshotRequest::setClientToken(const std::string &clientToken) {
  clientToken_ = clientToken;
  setParameter(std::string("ClientToken"), clientToken);
}

std::string CreateSnapshotRequest::getSnapshotName() const {
  return snapshotName_;
}

void CreateSnapshotRequest::setSnapshotName(const std::string &snapshotName) {
  snapshotName_ = snapshotName;
  setParameter(std::string("SnapshotName"), snapshotName);
}

std::string CreateSnapshotRequest::getResourceGroupId() const {
  return resourceGroupId_;
}

void CreateSnapshotRequest::setResourceGroupId(const std::string &resourceGroupId) {
  resourceGroupId_ = resourceGroupId;
  setParameter(std::string("ResourceGroupId"), resourceGroupId);
}

std::string CreateSnapshotRequest::getRegionId() const {
  return regionId_;
}

void CreateSnapshotRequest::setRegionId(const std::string &regionId) {
  regionId_ = regionId;
  setParameter(std::string("RegionId"), regionId);
}

std::string CreateSnapshotRequest::getDiskId() const {
  return diskId_;
}

void CreateSnapshotRequest::setDiskId(const std::string &diskId) {
  diskId_ = diskId;
  setParameter(std::string("DiskId"), diskId);
}

std::vector<CreateSnapshotRequest::Tag> CreateSnapshotRequest::getTag() const {
  return tag_;
}

void CreateSnapshotRequest::setTag(const std::vector<CreateSnapshotRequest::Tag> &tag) {
  tag_ = tag;
  for(int dep1 = 0; dep1 != tag.size(); dep1++) {
  auto tagObj = tag.at(dep1);
  std::string tagObjStr = std::string("Tag") + "." + std::to_string(dep1 + 1);
    setParameter(tagObjStr + ".Key", tagObj.key);
    setParameter(tagObjStr + ".Value", tagObj.value);
  }
}

