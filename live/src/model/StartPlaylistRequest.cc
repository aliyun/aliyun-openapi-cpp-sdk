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

#include <alibabacloud/live/model/StartPlaylistRequest.h>

using AlibabaCloud::Live::Model::StartPlaylistRequest;

StartPlaylistRequest::StartPlaylistRequest()
    : RpcServiceRequest("live", "2016-11-01", "StartPlaylist") {
  setMethod(HttpRequest::Method::Post);
}

StartPlaylistRequest::~StartPlaylistRequest() {}

std::string StartPlaylistRequest::getResumeMode() const {
  return resumeMode_;
}

void StartPlaylistRequest::setResumeMode(const std::string &resumeMode) {
  resumeMode_ = resumeMode;
  setParameter(std::string("ResumeMode"), resumeMode);
}

std::string StartPlaylistRequest::getRegionId() const {
  return regionId_;
}

void StartPlaylistRequest::setRegionId(const std::string &regionId) {
  regionId_ = regionId;
  setParameter(std::string("RegionId"), regionId);
}

std::string StartPlaylistRequest::getStartItemId() const {
  return startItemId_;
}

void StartPlaylistRequest::setStartItemId(const std::string &startItemId) {
  startItemId_ = startItemId;
  setParameter(std::string("StartItemId"), startItemId);
}

std::string StartPlaylistRequest::getProgramId() const {
  return programId_;
}

void StartPlaylistRequest::setProgramId(const std::string &programId) {
  programId_ = programId;
  setParameter(std::string("ProgramId"), programId);
}

int StartPlaylistRequest::getOffset() const {
  return offset_;
}

void StartPlaylistRequest::setOffset(int offset) {
  offset_ = offset;
  setParameter(std::string("Offset"), std::to_string(offset));
}

long StartPlaylistRequest::getOwnerId() const {
  return ownerId_;
}

void StartPlaylistRequest::setOwnerId(long ownerId) {
  ownerId_ = ownerId;
  setParameter(std::string("OwnerId"), std::to_string(ownerId));
}

