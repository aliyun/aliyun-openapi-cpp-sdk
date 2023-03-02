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

#include <alibabacloud/swas-open/model/DeleteSnapshotRequest.h>

using AlibabaCloud::SWAS_OPEN::Model::DeleteSnapshotRequest;

DeleteSnapshotRequest::DeleteSnapshotRequest()
    : RpcServiceRequest("swas-open", "2020-06-01", "DeleteSnapshot") {
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

std::string DeleteSnapshotRequest::getClientToken() const {
  return clientToken_;
}

void DeleteSnapshotRequest::setClientToken(const std::string &clientToken) {
  clientToken_ = clientToken;
  setParameter(std::string("ClientToken"), clientToken);
}

std::string DeleteSnapshotRequest::getRegionId() const {
  return regionId_;
}

void DeleteSnapshotRequest::setRegionId(const std::string &regionId) {
  regionId_ = regionId;
  setParameter(std::string("RegionId"), regionId);
}

