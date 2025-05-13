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

#include <alibabacloud/schedulerx2/model/UpdateJobScriptRequest.h>

using AlibabaCloud::Schedulerx2::Model::UpdateJobScriptRequest;

UpdateJobScriptRequest::UpdateJobScriptRequest()
    : RpcServiceRequest("schedulerx2", "2019-04-30", "UpdateJobScript") {
  setMethod(HttpRequest::Method::Post);
}

UpdateJobScriptRequest::~UpdateJobScriptRequest() {}

std::string UpdateJobScriptRequest::getNamespaceSource() const {
  return namespaceSource_;
}

void UpdateJobScriptRequest::setNamespaceSource(const std::string &namespaceSource) {
  namespaceSource_ = namespaceSource;
  setBodyParameter(std::string("NamespaceSource"), namespaceSource);
}

long UpdateJobScriptRequest::getJobId() const {
  return jobId_;
}

void UpdateJobScriptRequest::setJobId(long jobId) {
  jobId_ = jobId;
  setBodyParameter(std::string("JobId"), std::to_string(jobId));
}

std::string UpdateJobScriptRequest::getRegionId() const {
  return regionId_;
}

void UpdateJobScriptRequest::setRegionId(const std::string &regionId) {
  regionId_ = regionId;
  setBodyParameter(std::string("RegionId"), regionId);
}

std::string UpdateJobScriptRequest::getGroupId() const {
  return groupId_;
}

void UpdateJobScriptRequest::setGroupId(const std::string &groupId) {
  groupId_ = groupId;
  setBodyParameter(std::string("GroupId"), groupId);
}

std::string UpdateJobScriptRequest::get_Namespace() const {
  return _namespace_;
}

void UpdateJobScriptRequest::set_Namespace(const std::string &_namespace) {
  _namespace_ = _namespace;
  setBodyParameter(std::string("Namespace"), _namespace);
}

std::string UpdateJobScriptRequest::getScriptContent() const {
  return scriptContent_;
}

void UpdateJobScriptRequest::setScriptContent(const std::string &scriptContent) {
  scriptContent_ = scriptContent;
  setBodyParameter(std::string("ScriptContent"), scriptContent);
}

std::string UpdateJobScriptRequest::getVersionDescription() const {
  return versionDescription_;
}

void UpdateJobScriptRequest::setVersionDescription(const std::string &versionDescription) {
  versionDescription_ = versionDescription;
  setBodyParameter(std::string("VersionDescription"), versionDescription);
}

