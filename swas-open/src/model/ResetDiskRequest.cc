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

#include <alibabacloud/swas-open/model/ResetDiskRequest.h>

using AlibabaCloud::SWAS_OPEN::Model::ResetDiskRequest;

ResetDiskRequest::ResetDiskRequest()
    : RpcServiceRequest("swas-open", "2020-06-01", "ResetDisk") {
  setMethod(HttpRequest::Method::Post);
}

ResetDiskRequest::~ResetDiskRequest() {}

std::string ResetDiskRequest::getSnapshotId() const {
  return snapshotId_;
}

void ResetDiskRequest::setSnapshotId(const std::string &snapshotId) {
  snapshotId_ = snapshotId;
  setParameter(std::string("SnapshotId"), snapshotId);
}

std::string ResetDiskRequest::getClientToken() const {
  return clientToken_;
}

void ResetDiskRequest::setClientToken(const std::string &clientToken) {
  clientToken_ = clientToken;
  setParameter(std::string("ClientToken"), clientToken);
}

std::string ResetDiskRequest::getRegionId() const {
  return regionId_;
}

void ResetDiskRequest::setRegionId(const std::string &regionId) {
  regionId_ = regionId;
  setParameter(std::string("RegionId"), regionId);
}

std::string ResetDiskRequest::getDiskId() const {
  return diskId_;
}

void ResetDiskRequest::setDiskId(const std::string &diskId) {
  diskId_ = diskId;
  setParameter(std::string("DiskId"), diskId);
}

