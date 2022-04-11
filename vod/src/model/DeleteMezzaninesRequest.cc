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

#include <alibabacloud/vod/model/DeleteMezzaninesRequest.h>

using AlibabaCloud::Vod::Model::DeleteMezzaninesRequest;

DeleteMezzaninesRequest::DeleteMezzaninesRequest()
    : RpcServiceRequest("vod", "2017-03-21", "DeleteMezzanines") {
  setMethod(HttpRequest::Method::Post);
}

DeleteMezzaninesRequest::~DeleteMezzaninesRequest() {}

bool DeleteMezzaninesRequest::getForce() const {
  return force_;
}

void DeleteMezzaninesRequest::setForce(bool force) {
  force_ = force;
  setParameter(std::string("Force"), force ? "true" : "false");
}

std::string DeleteMezzaninesRequest::getVideoIds() const {
  return videoIds_;
}

void DeleteMezzaninesRequest::setVideoIds(const std::string &videoIds) {
  videoIds_ = videoIds;
  setParameter(std::string("VideoIds"), videoIds);
}

