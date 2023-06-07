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

#include <alibabacloud/swas-open/model/DeleteSnapshotsRequest.h>

using AlibabaCloud::SWAS_OPEN::Model::DeleteSnapshotsRequest;

DeleteSnapshotsRequest::DeleteSnapshotsRequest()
    : RpcServiceRequest("swas-open", "2020-06-01", "DeleteSnapshots") {
  setMethod(HttpRequest::Method::Post);
}

DeleteSnapshotsRequest::~DeleteSnapshotsRequest() {}

std::string DeleteSnapshotsRequest::getClientToken() const {
  return clientToken_;
}

void DeleteSnapshotsRequest::setClientToken(const std::string &clientToken) {
  clientToken_ = clientToken;
  setParameter(std::string("ClientToken"), clientToken);
}

std::string DeleteSnapshotsRequest::getSnapshotIds() const {
  return snapshotIds_;
}

void DeleteSnapshotsRequest::setSnapshotIds(const std::string &snapshotIds) {
  snapshotIds_ = snapshotIds;
  setParameter(std::string("SnapshotIds"), snapshotIds);
}

std::string DeleteSnapshotsRequest::getRegionId() const {
  return regionId_;
}

void DeleteSnapshotsRequest::setRegionId(const std::string &regionId) {
  regionId_ = regionId;
  setParameter(std::string("RegionId"), regionId);
}

