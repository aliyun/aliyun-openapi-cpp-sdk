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

#include <alibabacloud/live/model/StopPlaylistRequest.h>

using AlibabaCloud::Live::Model::StopPlaylistRequest;

StopPlaylistRequest::StopPlaylistRequest()
    : RpcServiceRequest("live", "2016-11-01", "StopPlaylist") {
  setMethod(HttpRequest::Method::Post);
}

StopPlaylistRequest::~StopPlaylistRequest() {}

std::string StopPlaylistRequest::getRegionId() const {
  return regionId_;
}

void StopPlaylistRequest::setRegionId(const std::string &regionId) {
  regionId_ = regionId;
  setParameter(std::string("RegionId"), regionId);
}

std::string StopPlaylistRequest::getProgramId() const {
  return programId_;
}

void StopPlaylistRequest::setProgramId(const std::string &programId) {
  programId_ = programId;
  setParameter(std::string("ProgramId"), programId);
}

long StopPlaylistRequest::getOwnerId() const {
  return ownerId_;
}

void StopPlaylistRequest::setOwnerId(long ownerId) {
  ownerId_ = ownerId;
  setParameter(std::string("OwnerId"), std::to_string(ownerId));
}

