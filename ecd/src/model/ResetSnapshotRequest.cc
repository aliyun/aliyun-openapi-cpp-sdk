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

#include <alibabacloud/ecd/model/ResetSnapshotRequest.h>

using AlibabaCloud::Ecd::Model::ResetSnapshotRequest;

ResetSnapshotRequest::ResetSnapshotRequest()
    : RpcServiceRequest("ecd", "2020-09-30", "ResetSnapshot") {
  setMethod(HttpRequest::Method::Post);
}

ResetSnapshotRequest::~ResetSnapshotRequest() {}

std::string ResetSnapshotRequest::getSnapshotId() const {
  return snapshotId_;
}

void ResetSnapshotRequest::setSnapshotId(const std::string &snapshotId) {
  snapshotId_ = snapshotId;
  setParameter(std::string("SnapshotId"), snapshotId);
}

std::string ResetSnapshotRequest::getRegionId() const {
  return regionId_;
}

void ResetSnapshotRequest::setRegionId(const std::string &regionId) {
  regionId_ = regionId;
  setParameter(std::string("RegionId"), regionId);
}

