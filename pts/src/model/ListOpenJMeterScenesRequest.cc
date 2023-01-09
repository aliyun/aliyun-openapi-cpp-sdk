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

#include <alibabacloud/pts/model/ListOpenJMeterScenesRequest.h>

using AlibabaCloud::PTS::Model::ListOpenJMeterScenesRequest;

ListOpenJMeterScenesRequest::ListOpenJMeterScenesRequest()
    : RpcServiceRequest("pts", "2020-10-20", "ListOpenJMeterScenes") {
  setMethod(HttpRequest::Method::Post);
}

ListOpenJMeterScenesRequest::~ListOpenJMeterScenesRequest() {}

int ListOpenJMeterScenesRequest::getPageSize() const {
  return pageSize_;
}

void ListOpenJMeterScenesRequest::setPageSize(int pageSize) {
  pageSize_ = pageSize;
  setParameter(std::string("PageSize"), std::to_string(pageSize));
}

std::string ListOpenJMeterScenesRequest::getSceneId() const {
  return sceneId_;
}

void ListOpenJMeterScenesRequest::setSceneId(const std::string &sceneId) {
  sceneId_ = sceneId;
  setParameter(std::string("SceneId"), sceneId);
}

std::string ListOpenJMeterScenesRequest::getSceneName() const {
  return sceneName_;
}

void ListOpenJMeterScenesRequest::setSceneName(const std::string &sceneName) {
  sceneName_ = sceneName;
  setParameter(std::string("SceneName"), sceneName);
}

int ListOpenJMeterScenesRequest::getPageNumber() const {
  return pageNumber_;
}

void ListOpenJMeterScenesRequest::setPageNumber(int pageNumber) {
  pageNumber_ = pageNumber;
  setParameter(std::string("PageNumber"), std::to_string(pageNumber));
}

