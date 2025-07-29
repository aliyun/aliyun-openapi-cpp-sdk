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

#include <alibabacloud/live/model/DeletePlaylistRequest.h>

using AlibabaCloud::Live::Model::DeletePlaylistRequest;

DeletePlaylistRequest::DeletePlaylistRequest()
    : RpcServiceRequest("live", "2016-11-01", "DeletePlaylist") {
  setMethod(HttpRequest::Method::Post);
}

DeletePlaylistRequest::~DeletePlaylistRequest() {}

std::string DeletePlaylistRequest::getRegionId() const {
  return regionId_;
}

void DeletePlaylistRequest::setRegionId(const std::string &regionId) {
  regionId_ = regionId;
  setParameter(std::string("RegionId"), regionId);
}

std::string DeletePlaylistRequest::getProgramId() const {
  return programId_;
}

void DeletePlaylistRequest::setProgramId(const std::string &programId) {
  programId_ = programId;
  setParameter(std::string("ProgramId"), programId);
}

long DeletePlaylistRequest::getOwnerId() const {
  return ownerId_;
}

void DeletePlaylistRequest::setOwnerId(long ownerId) {
  ownerId_ = ownerId;
  setParameter(std::string("OwnerId"), std::to_string(ownerId));
}

