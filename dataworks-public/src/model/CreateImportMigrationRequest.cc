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

#include <alibabacloud/dataworks-public/model/CreateImportMigrationRequest.h>

using AlibabaCloud::Dataworks_public::Model::CreateImportMigrationRequest;

CreateImportMigrationRequest::CreateImportMigrationRequest()
    : RpcServiceRequest("dataworks-public", "2020-05-18", "CreateImportMigration") {
  setMethod(HttpRequest::Method::Post);
}

CreateImportMigrationRequest::~CreateImportMigrationRequest() {}

std::string CreateImportMigrationRequest::getDescription() const {
  return description_;
}

void CreateImportMigrationRequest::setDescription(const std::string &description) {
  description_ = description;
  setBodyParameter(std::string("Description"), description);
}

std::string CreateImportMigrationRequest::getCommitRule() const {
  return commitRule_;
}

void CreateImportMigrationRequest::setCommitRule(const std::string &commitRule) {
  commitRule_ = commitRule;
  setBodyParameter(std::string("CommitRule"), commitRule);
}

std::string CreateImportMigrationRequest::getWorkspaceMap() const {
  return workspaceMap_;
}

void CreateImportMigrationRequest::setWorkspaceMap(const std::string &workspaceMap) {
  workspaceMap_ = workspaceMap;
  setBodyParameter(std::string("WorkspaceMap"), workspaceMap);
}

std::string CreateImportMigrationRequest::getCalculateEngineMap() const {
  return calculateEngineMap_;
}

void CreateImportMigrationRequest::setCalculateEngineMap(const std::string &calculateEngineMap) {
  calculateEngineMap_ = calculateEngineMap;
  setBodyParameter(std::string("CalculateEngineMap"), calculateEngineMap);
}

std::string CreateImportMigrationRequest::getPackageFile() const {
  return packageFile_;
}

void CreateImportMigrationRequest::setPackageFile(const std::string &packageFile) {
  packageFile_ = packageFile;
  setBodyParameter(std::string("PackageFile"), packageFile);
}

std::string CreateImportMigrationRequest::getName() const {
  return name_;
}

void CreateImportMigrationRequest::setName(const std::string &name) {
  name_ = name;
  setBodyParameter(std::string("Name"), name);
}

std::string CreateImportMigrationRequest::getPackageType() const {
  return packageType_;
}

void CreateImportMigrationRequest::setPackageType(const std::string &packageType) {
  packageType_ = packageType;
  setBodyParameter(std::string("PackageType"), packageType);
}

long CreateImportMigrationRequest::getProjectId() const {
  return projectId_;
}

void CreateImportMigrationRequest::setProjectId(long projectId) {
  projectId_ = projectId;
  setBodyParameter(std::string("ProjectId"), std::to_string(projectId));
}

std::string CreateImportMigrationRequest::getResourceGroupMap() const {
  return resourceGroupMap_;
}

void CreateImportMigrationRequest::setResourceGroupMap(const std::string &resourceGroupMap) {
  resourceGroupMap_ = resourceGroupMap;
  setBodyParameter(std::string("ResourceGroupMap"), resourceGroupMap);
}

