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

#include <alibabacloud/dataworks-public/model/CreateQualityFollowerRequest.h>

using AlibabaCloud::Dataworks_public::Model::CreateQualityFollowerRequest;

CreateQualityFollowerRequest::CreateQualityFollowerRequest()
    : RpcServiceRequest("dataworks-public", "2020-05-18", "CreateQualityFollower") {
  setMethod(HttpRequest::Method::Post);
}

CreateQualityFollowerRequest::~CreateQualityFollowerRequest() {}

std::string CreateQualityFollowerRequest::getProjectName() const {
  return projectName_;
}

void CreateQualityFollowerRequest::setProjectName(const std::string &projectName) {
  projectName_ = projectName;
  setBodyParameter(std::string("ProjectName"), projectName);
}

std::string CreateQualityFollowerRequest::getFollower() const {
  return follower_;
}

void CreateQualityFollowerRequest::setFollower(const std::string &follower) {
  follower_ = follower;
  setBodyParameter(std::string("Follower"), follower);
}

long CreateQualityFollowerRequest::getEntityId() const {
  return entityId_;
}

void CreateQualityFollowerRequest::setEntityId(long entityId) {
  entityId_ = entityId;
  setBodyParameter(std::string("EntityId"), std::to_string(entityId));
}

int CreateQualityFollowerRequest::getAlarmMode() const {
  return alarmMode_;
}

void CreateQualityFollowerRequest::setAlarmMode(int alarmMode) {
  alarmMode_ = alarmMode;
  setBodyParameter(std::string("AlarmMode"), std::to_string(alarmMode));
}

long CreateQualityFollowerRequest::getProjectId() const {
  return projectId_;
}

void CreateQualityFollowerRequest::setProjectId(long projectId) {
  projectId_ = projectId;
  setBodyParameter(std::string("ProjectId"), std::to_string(projectId));
}

