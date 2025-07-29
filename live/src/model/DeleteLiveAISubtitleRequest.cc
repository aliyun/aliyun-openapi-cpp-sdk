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

#include <alibabacloud/live/model/DeleteLiveAISubtitleRequest.h>

using AlibabaCloud::Live::Model::DeleteLiveAISubtitleRequest;

DeleteLiveAISubtitleRequest::DeleteLiveAISubtitleRequest()
    : RpcServiceRequest("live", "2016-11-01", "DeleteLiveAISubtitle") {
  setMethod(HttpRequest::Method::Post);
}

DeleteLiveAISubtitleRequest::~DeleteLiveAISubtitleRequest() {}

std::string DeleteLiveAISubtitleRequest::getSubtitleName() const {
  return subtitleName_;
}

void DeleteLiveAISubtitleRequest::setSubtitleName(const std::string &subtitleName) {
  subtitleName_ = subtitleName;
  setParameter(std::string("SubtitleName"), subtitleName);
}

std::string DeleteLiveAISubtitleRequest::getRegionId() const {
  return regionId_;
}

void DeleteLiveAISubtitleRequest::setRegionId(const std::string &regionId) {
  regionId_ = regionId;
  setParameter(std::string("RegionId"), regionId);
}

long DeleteLiveAISubtitleRequest::getOwnerId() const {
  return ownerId_;
}

void DeleteLiveAISubtitleRequest::setOwnerId(long ownerId) {
  ownerId_ = ownerId;
  setParameter(std::string("OwnerId"), std::to_string(ownerId));
}

std::string DeleteLiveAISubtitleRequest::getSubtitleId() const {
  return subtitleId_;
}

void DeleteLiveAISubtitleRequest::setSubtitleId(const std::string &subtitleId) {
  subtitleId_ = subtitleId;
  setParameter(std::string("SubtitleId"), subtitleId);
}

