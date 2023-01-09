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

#include <alibabacloud/pts/model/StopPtsSceneRequest.h>

using AlibabaCloud::PTS::Model::StopPtsSceneRequest;

StopPtsSceneRequest::StopPtsSceneRequest()
    : RpcServiceRequest("pts", "2020-10-20", "StopPtsScene") {
  setMethod(HttpRequest::Method::Post);
}

StopPtsSceneRequest::~StopPtsSceneRequest() {}

std::string StopPtsSceneRequest::getSceneId() const {
  return sceneId_;
}

void StopPtsSceneRequest::setSceneId(const std::string &sceneId) {
  sceneId_ = sceneId;
  setParameter(std::string("SceneId"), sceneId);
}

