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

#include <alibabacloud/live/model/DeleteLiveAIStudioRequest.h>

using AlibabaCloud::Live::Model::DeleteLiveAIStudioRequest;

DeleteLiveAIStudioRequest::DeleteLiveAIStudioRequest()
    : RpcServiceRequest("live", "2016-11-01", "DeleteLiveAIStudio") {
  setMethod(HttpRequest::Method::Post);
}

DeleteLiveAIStudioRequest::~DeleteLiveAIStudioRequest() {}

std::string DeleteLiveAIStudioRequest::getStudioId() const {
  return studioId_;
}

void DeleteLiveAIStudioRequest::setStudioId(const std::string &studioId) {
  studioId_ = studioId;
  setParameter(std::string("StudioId"), studioId);
}

long DeleteLiveAIStudioRequest::getOwnerId() const {
  return ownerId_;
}

void DeleteLiveAIStudioRequest::setOwnerId(long ownerId) {
  ownerId_ = ownerId;
  setParameter(std::string("OwnerId"), std::to_string(ownerId));
}

