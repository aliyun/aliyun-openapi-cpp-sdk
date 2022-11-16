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

#include <alibabacloud/dataworks-public/model/UpdateTableLevelRequest.h>

using AlibabaCloud::Dataworks_public::Model::UpdateTableLevelRequest;

UpdateTableLevelRequest::UpdateTableLevelRequest()
    : RpcServiceRequest("dataworks-public", "2020-05-18", "UpdateTableLevel") {
  setMethod(HttpRequest::Method::Post);
}

UpdateTableLevelRequest::~UpdateTableLevelRequest() {}

int UpdateTableLevelRequest::getLevelType() const {
  return levelType_;
}

void UpdateTableLevelRequest::setLevelType(int levelType) {
  levelType_ = levelType;
  setParameter(std::string("LevelType"), std::to_string(levelType));
}

std::string UpdateTableLevelRequest::getDescription() const {
  return description_;
}

void UpdateTableLevelRequest::setDescription(const std::string &description) {
  description_ = description;
  setParameter(std::string("Description"), description);
}

long UpdateTableLevelRequest::getLevelId() const {
  return levelId_;
}

void UpdateTableLevelRequest::setLevelId(long levelId) {
  levelId_ = levelId;
  setParameter(std::string("LevelId"), std::to_string(levelId));
}

std::string UpdateTableLevelRequest::getName() const {
  return name_;
}

void UpdateTableLevelRequest::setName(const std::string &name) {
  name_ = name;
  setParameter(std::string("Name"), name);
}

long UpdateTableLevelRequest::getProjectId() const {
  return projectId_;
}

void UpdateTableLevelRequest::setProjectId(long projectId) {
  projectId_ = projectId;
  setParameter(std::string("ProjectId"), std::to_string(projectId));
}

