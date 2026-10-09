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

#include <alibabacloud/airegistry/model/SubmitPromptVersionRequest.h>

using AlibabaCloud::AIRegistry::Model::SubmitPromptVersionRequest;

SubmitPromptVersionRequest::SubmitPromptVersionRequest()
    : RpcServiceRequest("airegistry", "2026-03-17", "SubmitPromptVersion") {
  setMethod(HttpRequest::Method::Post);
}

SubmitPromptVersionRequest::~SubmitPromptVersionRequest() {}

std::string SubmitPromptVersionRequest::getPromptKey() const {
  return promptKey_;
}

void SubmitPromptVersionRequest::setPromptKey(const std::string &promptKey) {
  promptKey_ = promptKey;
  setParameter(std::string("PromptKey"), promptKey);
}

std::string SubmitPromptVersionRequest::getNamespaceId() const {
  return namespaceId_;
}

void SubmitPromptVersionRequest::setNamespaceId(const std::string &namespaceId) {
  namespaceId_ = namespaceId;
  setParameter(std::string("NamespaceId"), namespaceId);
}

std::string SubmitPromptVersionRequest::getPromptVersion() const {
  return promptVersion_;
}

void SubmitPromptVersionRequest::setPromptVersion(const std::string &promptVersion) {
  promptVersion_ = promptVersion;
  setParameter(std::string("PromptVersion"), promptVersion);
}

