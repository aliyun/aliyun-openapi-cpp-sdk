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

#include <alibabacloud/dataworks-public/model/CreateProjectRequest.h>

using AlibabaCloud::Dataworks_public::Model::CreateProjectRequest;

CreateProjectRequest::CreateProjectRequest()
    : RpcServiceRequest("dataworks-public", "2020-05-18", "CreateProject") {
  setMethod(HttpRequest::Method::Post);
}

CreateProjectRequest::~CreateProjectRequest() {}

std::string CreateProjectRequest::getProjectName() const {
  return projectName_;
}

void CreateProjectRequest::setProjectName(const std::string &projectName) {
  projectName_ = projectName;
  setParameter(std::string("ProjectName"), projectName);
}

bool CreateProjectRequest::getDisableDevelopment() const {
  return disableDevelopment_;
}

void CreateProjectRequest::setDisableDevelopment(bool disableDevelopment) {
  disableDevelopment_ = disableDevelopment;
  setParameter(std::string("DisableDevelopment"), disableDevelopment ? "true" : "false");
}

std::string CreateProjectRequest::getClientToken() const {
  return clientToken_;
}

void CreateProjectRequest::setClientToken(const std::string &clientToken) {
  clientToken_ = clientToken;
  setParameter(std::string("ClientToken"), clientToken);
}

std::string CreateProjectRequest::getProjectIdentifier() const {
  return projectIdentifier_;
}

void CreateProjectRequest::setProjectIdentifier(const std::string &projectIdentifier) {
  projectIdentifier_ = projectIdentifier;
  setParameter(std::string("ProjectIdentifier"), projectIdentifier);
}

std::vector<CreateProjectRequest::Tags> CreateProjectRequest::getTags() const {
  return tags_;
}

void CreateProjectRequest::setTags(const std::vector<CreateProjectRequest::Tags> &tags) {
  tags_ = tags;
  for(int dep1 = 0; dep1 != tags.size(); dep1++) {
    setParameter(std::string("Tags") + "." + std::to_string(dep1 + 1) + ".Value", tags[dep1].value);
    setParameter(std::string("Tags") + "." + std::to_string(dep1 + 1) + ".Key", tags[dep1].key);
  }
}

std::string CreateProjectRequest::getProjectDescription() const {
  return projectDescription_;
}

void CreateProjectRequest::setProjectDescription(const std::string &projectDescription) {
  projectDescription_ = projectDescription;
  setParameter(std::string("ProjectDescription"), projectDescription);
}

int CreateProjectRequest::getIsAllowDownload() const {
  return isAllowDownload_;
}

void CreateProjectRequest::setIsAllowDownload(int isAllowDownload) {
  isAllowDownload_ = isAllowDownload;
  setParameter(std::string("IsAllowDownload"), std::to_string(isAllowDownload));
}

std::string CreateProjectRequest::getResourceManagerResourceGroupId() const {
  return resourceManagerResourceGroupId_;
}

void CreateProjectRequest::setResourceManagerResourceGroupId(const std::string &resourceManagerResourceGroupId) {
  resourceManagerResourceGroupId_ = resourceManagerResourceGroupId;
  setParameter(std::string("ResourceManagerResourceGroupId"), resourceManagerResourceGroupId);
}

int CreateProjectRequest::getProjectMode() const {
  return projectMode_;
}

void CreateProjectRequest::setProjectMode(int projectMode) {
  projectMode_ = projectMode;
  setParameter(std::string("ProjectMode"), std::to_string(projectMode));
}

