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

#include <alibabacloud/devops/model/CreateWorkspaceRequest.h>

using AlibabaCloud::Devops::Model::CreateWorkspaceRequest;

CreateWorkspaceRequest::CreateWorkspaceRequest()
    : RoaServiceRequest("devops", "2021-06-25") {
  setResourcePath("/api/workspaces"};
  setMethod(HttpRequest::Method::Post);
}

CreateWorkspaceRequest::~CreateWorkspaceRequest() {}

std::string CreateWorkspaceRequest::getCodeUrl() const {
  return codeUrl_;
}

void CreateWorkspaceRequest::setCodeUrl(const std::string &codeUrl) {
  codeUrl_ = codeUrl;
  setBodyParameter(std::string("codeUrl"), codeUrl);
}

bool CreateWorkspaceRequest::getReuse() const {
  return reuse_;
}

void CreateWorkspaceRequest::setReuse(bool reuse) {
  reuse_ = reuse;
  setBodyParameter(std::string("reuse"), reuse ? "true" : "false");
}

std::string CreateWorkspaceRequest::getResourceIdentifier() const {
  return resourceIdentifier_;
}

void CreateWorkspaceRequest::setResourceIdentifier(const std::string &resourceIdentifier) {
  resourceIdentifier_ = resourceIdentifier;
  setBodyParameter(std::string("resourceIdentifier"), resourceIdentifier);
}

std::string CreateWorkspaceRequest::getRequestFrom() const {
  return requestFrom_;
}

void CreateWorkspaceRequest::setRequestFrom(const std::string &requestFrom) {
  requestFrom_ = requestFrom;
  setBodyParameter(std::string("requestFrom"), requestFrom);
}

std::string CreateWorkspaceRequest::getWorkspaceTemplate() const {
  return workspaceTemplate_;
}

void CreateWorkspaceRequest::setWorkspaceTemplate(const std::string &workspaceTemplate) {
  workspaceTemplate_ = workspaceTemplate;
  setBodyParameter(std::string("workspaceTemplate"), workspaceTemplate);
}

std::string CreateWorkspaceRequest::getFilePath() const {
  return filePath_;
}

void CreateWorkspaceRequest::setFilePath(const std::string &filePath) {
  filePath_ = filePath;
  setBodyParameter(std::string("filePath"), filePath);
}

std::string CreateWorkspaceRequest::getName() const {
  return name_;
}

void CreateWorkspaceRequest::setName(const std::string &name) {
  name_ = name;
  setBodyParameter(std::string("name"), name);
}

std::string CreateWorkspaceRequest::getCodeVersion() const {
  return codeVersion_;
}

void CreateWorkspaceRequest::setCodeVersion(const std::string &codeVersion) {
  codeVersion_ = codeVersion;
  setBodyParameter(std::string("codeVersion"), codeVersion);
}

