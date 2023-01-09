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

#include <alibabacloud/pts/model/SavePtsSceneRequest.h>

using AlibabaCloud::PTS::Model::SavePtsSceneRequest;

SavePtsSceneRequest::SavePtsSceneRequest()
    : RpcServiceRequest("pts", "2020-10-20", "SavePtsScene") {
  setMethod(HttpRequest::Method::Post);
}

SavePtsSceneRequest::~SavePtsSceneRequest() {}

std::string SavePtsSceneRequest::getScene() const {
  return scene_;
}

void SavePtsSceneRequest::setScene(const std::string &scene) {
  scene_ = scene;
  setParameter(std::string("Scene"), scene);
}

