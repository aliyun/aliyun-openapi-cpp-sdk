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

#include <alibabacloud/dataworks-public/model/DsgSceneQuerySceneListByNameRequest.h>

using AlibabaCloud::Dataworks_public::Model::DsgSceneQuerySceneListByNameRequest;

DsgSceneQuerySceneListByNameRequest::DsgSceneQuerySceneListByNameRequest()
    : RpcServiceRequest("dataworks-public", "2020-05-18", "DsgSceneQuerySceneListByName") {
  setMethod(HttpRequest::Method::Get);
}

DsgSceneQuerySceneListByNameRequest::~DsgSceneQuerySceneListByNameRequest() {}

std::string DsgSceneQuerySceneListByNameRequest::getSceneName() const {
  return sceneName_;
}

void DsgSceneQuerySceneListByNameRequest::setSceneName(const std::string &sceneName) {
  sceneName_ = sceneName;
  setParameter(std::string("SceneName"), sceneName);
}

