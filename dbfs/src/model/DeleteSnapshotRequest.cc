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

#include <alibabacloud/dbfs/model/DeleteSnapshotRequest.h>

using AlibabaCloud::DBFS::Model::DeleteSnapshotRequest;

DeleteSnapshotRequest::DeleteSnapshotRequest()
    : RpcServiceRequest("dbfs", "2020-04-18", "DeleteSnapshot") {
  setMethod(HttpRequest::Method::Post);
}

DeleteSnapshotRequest::~DeleteSnapshotRequest() {}

std::string DeleteSnapshotRequest::getSnapshotId() const {
  return snapshotId_;
}

void DeleteSnapshotRequest::setSnapshotId(const std::string &snapshotId) {
  snapshotId_ = snapshotId;
  setParameter(std::string("SnapshotId"), snapshotId);
}

std::string DeleteSnapshotRequest::getRegionId() const {
  return regionId_;
}

void DeleteSnapshotRequest::setRegionId(const std::string &regionId) {
  regionId_ = regionId;
  setParameter(std::string("RegionId"), regionId);
}

bool DeleteSnapshotRequest::getForce() const {
  return force_;
}

void DeleteSnapshotRequest::setForce(bool force) {
  force_ = force;
  setParameter(std::string("Force"), force ? "true" : "false");
}

