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

#include <alibabacloud/live/model/ModifyShowListRequest.h>

using AlibabaCloud::Live::Model::ModifyShowListRequest;

ModifyShowListRequest::ModifyShowListRequest()
    : RpcServiceRequest("live", "2016-11-01", "ModifyShowList") {
  setMethod(HttpRequest::Method::Post);
}

ModifyShowListRequest::~ModifyShowListRequest() {}

int ModifyShowListRequest::getRepeatTimes() const {
  return repeatTimes_;
}

void ModifyShowListRequest::setRepeatTimes(int repeatTimes) {
  repeatTimes_ = repeatTimes;
  setParameter(std::string("RepeatTimes"), std::to_string(repeatTimes));
}

std::string ModifyShowListRequest::getHighPriorityShowStartTime() const {
  return highPriorityShowStartTime_;
}

void ModifyShowListRequest::setHighPriorityShowStartTime(const std::string &highPriorityShowStartTime) {
  highPriorityShowStartTime_ = highPriorityShowStartTime;
  setParameter(std::string("HighPriorityShowStartTime"), highPriorityShowStartTime);
}

std::string ModifyShowListRequest::getRegionId() const {
  return regionId_;
}

void ModifyShowListRequest::setRegionId(const std::string &regionId) {
  regionId_ = regionId;
  setParameter(std::string("RegionId"), regionId);
}

std::string ModifyShowListRequest::getCasterId() const {
  return casterId_;
}

void ModifyShowListRequest::setCasterId(const std::string &casterId) {
  casterId_ = casterId;
  setParameter(std::string("CasterId"), casterId);
}

std::string ModifyShowListRequest::getHighPriorityShowId() const {
  return highPriorityShowId_;
}

void ModifyShowListRequest::setHighPriorityShowId(const std::string &highPriorityShowId) {
  highPriorityShowId_ = highPriorityShowId;
  setParameter(std::string("HighPriorityShowId"), highPriorityShowId);
}

long ModifyShowListRequest::getOwnerId() const {
  return ownerId_;
}

void ModifyShowListRequest::setOwnerId(long ownerId) {
  ownerId_ = ownerId;
  setParameter(std::string("OwnerId"), std::to_string(ownerId));
}

std::string ModifyShowListRequest::getShowId() const {
  return showId_;
}

void ModifyShowListRequest::setShowId(const std::string &showId) {
  showId_ = showId;
  setParameter(std::string("ShowId"), showId);
}

int ModifyShowListRequest::getSpot() const {
  return spot_;
}

void ModifyShowListRequest::setSpot(int spot) {
  spot_ = spot;
  setParameter(std::string("Spot"), std::to_string(spot));
}

