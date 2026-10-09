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

#include <alibabacloud/airegistry/model/CreatePromptRequest.h>

using AlibabaCloud::AIRegistry::Model::CreatePromptRequest;

CreatePromptRequest::CreatePromptRequest()
    : RpcServiceRequest("airegistry", "2026-03-17", "CreatePrompt") {
  setMethod(HttpRequest::Method::Post);
}

CreatePromptRequest::~CreatePromptRequest() {}

std::string CreatePromptRequest::getPromptKey() const {
  return promptKey_;
}

void CreatePromptRequest::setPromptKey(const std::string &promptKey) {
  promptKey_ = promptKey;
  setParameter(std::string("PromptKey"), promptKey);
}

std::string CreatePromptRequest::getBizTags() const {
  return bizTags_;
}

void CreatePromptRequest::setBizTags(const std::string &bizTags) {
  bizTags_ = bizTags;
  setParameter(std::string("BizTags"), bizTags);
}

std::string CreatePromptRequest::getNamespaceId() const {
  return namespaceId_;
}

void CreatePromptRequest::setNamespaceId(const std::string &namespaceId) {
  namespaceId_ = namespaceId;
  setParameter(std::string("NamespaceId"), namespaceId);
}

std::string CreatePromptRequest::getTargetVersion() const {
  return targetVersion_;
}

void CreatePromptRequest::setTargetVersion(const std::string &targetVersion) {
  targetVersion_ = targetVersion;
  setParameter(std::string("TargetVersion"), targetVersion);
}

std::string CreatePromptRequest::get_Template() const {
  return _template_;
}

void CreatePromptRequest::set_Template(const std::string &_template) {
  _template_ = _template;
  setParameter(std::string("Template"), _template);
}

std::string CreatePromptRequest::getDescription() const {
  return description_;
}

void CreatePromptRequest::setDescription(const std::string &description) {
  description_ = description;
  setParameter(std::string("Description"), description);
}

std::string CreatePromptRequest::getVariables() const {
  return variables_;
}

void CreatePromptRequest::setVariables(const std::string &variables) {
  variables_ = variables;
  setParameter(std::string("Variables"), variables);
}

std::string CreatePromptRequest::getCommitMsg() const {
  return commitMsg_;
}

void CreatePromptRequest::setCommitMsg(const std::string &commitMsg) {
  commitMsg_ = commitMsg;
  setParameter(std::string("CommitMsg"), commitMsg);
}

