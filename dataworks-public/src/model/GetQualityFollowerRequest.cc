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

#include <alibabacloud/dataworks-public/model/GetQualityFollowerRequest.h>

using AlibabaCloud::Dataworks_public::Model::GetQualityFollowerRequest;

GetQualityFollowerRequest::GetQualityFollowerRequest()
    : RpcServiceRequest("dataworks-public", "2020-05-18", "GetQualityFollower") {
  setMethod(HttpRequest::Method::Post);
}

GetQualityFollowerRequest::~GetQualityFollowerRequest() {}

std::string GetQualityFollowerRequest::getProjectName() const {
  return projectName_;
}

void GetQualityFollowerRequest::setProjectName(const std::string &projectName) {
  projectName_ = projectName;
  setBodyParameter(std::string("ProjectName"), projectName);
}

long GetQualityFollowerRequest::getEntityId() const {
  return entityId_;
}

void GetQualityFollowerRequest::setEntityId(long entityId) {
  entityId_ = entityId;
  setBodyParameter(std::string("EntityId"), std::to_string(entityId));
}

long GetQualityFollowerRequest::getProjectId() const {
  return projectId_;
}

void GetQualityFollowerRequest::setProjectId(long projectId) {
  projectId_ = projectId;
  setBodyParameter(std::string("ProjectId"), std::to_string(projectId));
}

