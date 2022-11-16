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

#include <alibabacloud/dataworks-public/model/CreateTableThemeRequest.h>

using AlibabaCloud::Dataworks_public::Model::CreateTableThemeRequest;

CreateTableThemeRequest::CreateTableThemeRequest()
    : RpcServiceRequest("dataworks-public", "2020-05-18", "CreateTableTheme") {
  setMethod(HttpRequest::Method::Post);
}

CreateTableThemeRequest::~CreateTableThemeRequest() {}

int CreateTableThemeRequest::getLevel() const {
  return level_;
}

void CreateTableThemeRequest::setLevel(int level) {
  level_ = level;
  setParameter(std::string("Level"), std::to_string(level));
}

long CreateTableThemeRequest::getParentId() const {
  return parentId_;
}

void CreateTableThemeRequest::setParentId(long parentId) {
  parentId_ = parentId;
  setParameter(std::string("ParentId"), std::to_string(parentId));
}

std::string CreateTableThemeRequest::getName() const {
  return name_;
}

void CreateTableThemeRequest::setName(const std::string &name) {
  name_ = name;
  setParameter(std::string("Name"), name);
}

long CreateTableThemeRequest::getProjectId() const {
  return projectId_;
}

void CreateTableThemeRequest::setProjectId(long projectId) {
  projectId_ = projectId;
  setParameter(std::string("ProjectId"), std::to_string(projectId));
}

