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

#include <alibabacloud/pts/model/StopDebugPtsSceneRequest.h>

using AlibabaCloud::PTS::Model::StopDebugPtsSceneRequest;

StopDebugPtsSceneRequest::StopDebugPtsSceneRequest()
    : RpcServiceRequest("pts", "2020-10-20", "StopDebugPtsScene") {
  setMethod(HttpRequest::Method::Post);
}

StopDebugPtsSceneRequest::~StopDebugPtsSceneRequest() {}

std::string StopDebugPtsSceneRequest::getSceneId() const {
  return sceneId_;
}

void StopDebugPtsSceneRequest::setSceneId(const std::string &sceneId) {
  sceneId_ = sceneId;
  setParameter(std::string("SceneId"), sceneId);
}

std::string StopDebugPtsSceneRequest::getPlanId() const {
  return planId_;
}

void StopDebugPtsSceneRequest::setPlanId(const std::string &planId) {
  planId_ = planId;
  setParameter(std::string("PlanId"), planId);
}

