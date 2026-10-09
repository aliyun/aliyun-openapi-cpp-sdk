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

#include <alibabacloud/airegistry/model/DeletePromptRequest.h>

using AlibabaCloud::AIRegistry::Model::DeletePromptRequest;

DeletePromptRequest::DeletePromptRequest()
    : RpcServiceRequest("airegistry", "2026-03-17", "DeletePrompt") {
  setMethod(HttpRequest::Method::Post);
}

DeletePromptRequest::~DeletePromptRequest() {}

std::string DeletePromptRequest::getPromptKey() const {
  return promptKey_;
}

void DeletePromptRequest::setPromptKey(const std::string &promptKey) {
  promptKey_ = promptKey;
  setParameter(std::string("PromptKey"), promptKey);
}

std::string DeletePromptRequest::getNamespaceId() const {
  return namespaceId_;
}

void DeletePromptRequest::setNamespaceId(const std::string &namespaceId) {
  namespaceId_ = namespaceId;
  setParameter(std::string("NamespaceId"), namespaceId);
}

