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

#include <alibabacloud/pts/model/GetPtsSceneRequest.h>

using AlibabaCloud::PTS::Model::GetPtsSceneRequest;

GetPtsSceneRequest::GetPtsSceneRequest()
    : RpcServiceRequest("pts", "2020-10-20", "GetPtsScene") {
  setMethod(HttpRequest::Method::Post);
}

GetPtsSceneRequest::~GetPtsSceneRequest() {}

std::string GetPtsSceneRequest::getSceneId() const {
  return sceneId_;
}

void GetPtsSceneRequest::setSceneId(const std::string &sceneId) {
  sceneId_ = sceneId;
  setParameter(std::string("SceneId"), sceneId);
}

