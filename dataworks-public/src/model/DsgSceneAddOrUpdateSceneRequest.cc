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

#include <alibabacloud/dataworks-public/model/DsgSceneAddOrUpdateSceneRequest.h>

using AlibabaCloud::Dataworks_public::Model::DsgSceneAddOrUpdateSceneRequest;

DsgSceneAddOrUpdateSceneRequest::DsgSceneAddOrUpdateSceneRequest()
    : RpcServiceRequest("dataworks-public", "2020-05-18", "DsgSceneAddOrUpdateScene") {
  setMethod(HttpRequest::Method::Post);
}

DsgSceneAddOrUpdateSceneRequest::~DsgSceneAddOrUpdateSceneRequest() {}

std::vector<DsgSceneAddOrUpdateSceneRequest::scenes> DsgSceneAddOrUpdateSceneRequest::getScenes() const {
  return scenes_;
}

void DsgSceneAddOrUpdateSceneRequest::setScenes(const std::vector<DsgSceneAddOrUpdateSceneRequest::scenes> &scenes) {
  scenes_ = scenes;
  for(int dep1 = 0; dep1 != scenes.size(); dep1++) {
    setParameter(std::string("scenes") + "." + std::to_string(dep1 + 1) + ".sceneCode", scenes[dep1].sceneCode);
    for(int dep2 = 0; dep2 != scenes[dep1].projects.size(); dep2++) {
      setParameter(std::string("scenes") + "." + std::to_string(dep1 + 1) + ".projects." + std::to_string(dep2 + 1) + ".projectName", scenes[dep1].projects[dep2].projectName);
      setParameter(std::string("scenes") + "." + std::to_string(dep1 + 1) + ".projects." + std::to_string(dep2 + 1) + ".dbType", scenes[dep1].projects[dep2].dbType);
      setParameter(std::string("scenes") + "." + std::to_string(dep1 + 1) + ".projects." + std::to_string(dep2 + 1) + ".clusterId", scenes[dep1].projects[dep2].clusterId);
    }
    setParameter(std::string("scenes") + "." + std::to_string(dep1 + 1) + ".sceneName", scenes[dep1].sceneName);
    for(int dep2 = 0; dep2 != scenes[dep1].userGroupIds.size(); dep2++) {
      setParameter(std::string("scenes") + "." + std::to_string(dep1 + 1) + ".userGroupIds." + std::to_string(dep2 + 1), std::to_string(scenes[dep1].userGroupIds[dep2]));
    }
    setParameter(std::string("scenes") + "." + std::to_string(dep1 + 1) + ".id", scenes[dep1].id);
    setParameter(std::string("scenes") + "." + std::to_string(dep1 + 1) + ".desc", scenes[dep1].desc);
  }
}

