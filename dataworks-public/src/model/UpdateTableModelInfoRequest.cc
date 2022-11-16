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

#include <alibabacloud/dataworks-public/model/UpdateTableModelInfoRequest.h>

using AlibabaCloud::Dataworks_public::Model::UpdateTableModelInfoRequest;

UpdateTableModelInfoRequest::UpdateTableModelInfoRequest()
    : RpcServiceRequest("dataworks-public", "2020-05-18", "UpdateTableModelInfo") {
  setMethod(HttpRequest::Method::Post);
}

UpdateTableModelInfoRequest::~UpdateTableModelInfoRequest() {}

int UpdateTableModelInfoRequest::getLevelType() const {
  return levelType_;
}

void UpdateTableModelInfoRequest::setLevelType(int levelType) {
  levelType_ = levelType;
  setParameter(std::string("LevelType"), std::to_string(levelType));
}

long UpdateTableModelInfoRequest::getSecondLevelThemeId() const {
  return secondLevelThemeId_;
}

void UpdateTableModelInfoRequest::setSecondLevelThemeId(long secondLevelThemeId) {
  secondLevelThemeId_ = secondLevelThemeId;
  setParameter(std::string("SecondLevelThemeId"), std::to_string(secondLevelThemeId));
}

std::string UpdateTableModelInfoRequest::getTableGuid() const {
  return tableGuid_;
}

void UpdateTableModelInfoRequest::setTableGuid(const std::string &tableGuid) {
  tableGuid_ = tableGuid;
  setParameter(std::string("TableGuid"), tableGuid);
}

long UpdateTableModelInfoRequest::getLevelId() const {
  return levelId_;
}

void UpdateTableModelInfoRequest::setLevelId(long levelId) {
  levelId_ = levelId;
  setParameter(std::string("LevelId"), std::to_string(levelId));
}

long UpdateTableModelInfoRequest::getFirstLevelThemeId() const {
  return firstLevelThemeId_;
}

void UpdateTableModelInfoRequest::setFirstLevelThemeId(long firstLevelThemeId) {
  firstLevelThemeId_ = firstLevelThemeId;
  setParameter(std::string("FirstLevelThemeId"), std::to_string(firstLevelThemeId));
}

