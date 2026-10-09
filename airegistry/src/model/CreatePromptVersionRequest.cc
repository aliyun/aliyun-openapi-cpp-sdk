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

#include <alibabacloud/airegistry/model/CreatePromptVersionRequest.h>

using AlibabaCloud::AIRegistry::Model::CreatePromptVersionRequest;

CreatePromptVersionRequest::CreatePromptVersionRequest()
    : RpcServiceRequest("airegistry", "2026-03-17", "CreatePromptVersion") {
  setMethod(HttpRequest::Method::Post);
}

CreatePromptVersionRequest::~CreatePromptVersionRequest() {}

std::string CreatePromptVersionRequest::getPromptKey() const {
  return promptKey_;
}

void CreatePromptVersionRequest::setPromptKey(const std::string &promptKey) {
  promptKey_ = promptKey;
  setParameter(std::string("PromptKey"), promptKey);
}

std::string CreatePromptVersionRequest::getNamespaceId() const {
  return namespaceId_;
}

void CreatePromptVersionRequest::setNamespaceId(const std::string &namespaceId) {
  namespaceId_ = namespaceId;
  setParameter(std::string("NamespaceId"), namespaceId);
}

std::string CreatePromptVersionRequest::getTargetVersion() const {
  return targetVersion_;
}

void CreatePromptVersionRequest::setTargetVersion(const std::string &targetVersion) {
  targetVersion_ = targetVersion;
  setParameter(std::string("TargetVersion"), targetVersion);
}

std::string CreatePromptVersionRequest::get_Template() const {
  return _template_;
}

void CreatePromptVersionRequest::set_Template(const std::string &_template) {
  _template_ = _template;
  setParameter(std::string("Template"), _template);
}

std::string CreatePromptVersionRequest::getBasedOnVersion() const {
  return basedOnVersion_;
}

void CreatePromptVersionRequest::setBasedOnVersion(const std::string &basedOnVersion) {
  basedOnVersion_ = basedOnVersion;
  setParameter(std::string("BasedOnVersion"), basedOnVersion);
}

std::string CreatePromptVersionRequest::getVariables() const {
  return variables_;
}

void CreatePromptVersionRequest::setVariables(const std::string &variables) {
  variables_ = variables;
  setParameter(std::string("Variables"), variables);
}

std::string CreatePromptVersionRequest::getCommitMsg() const {
  return commitMsg_;
}

void CreatePromptVersionRequest::setCommitMsg(const std::string &commitMsg) {
  commitMsg_ = commitMsg;
  setParameter(std::string("CommitMsg"), commitMsg);
}

