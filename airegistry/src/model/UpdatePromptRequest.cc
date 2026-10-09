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

#include <alibabacloud/airegistry/model/UpdatePromptRequest.h>

using AlibabaCloud::AIRegistry::Model::UpdatePromptRequest;

UpdatePromptRequest::UpdatePromptRequest()
    : RpcServiceRequest("airegistry", "2026-03-17", "UpdatePrompt") {
  setMethod(HttpRequest::Method::Post);
}

UpdatePromptRequest::~UpdatePromptRequest() {}

std::string UpdatePromptRequest::getPromptKey() const {
  return promptKey_;
}

void UpdatePromptRequest::setPromptKey(const std::string &promptKey) {
  promptKey_ = promptKey;
  setParameter(std::string("PromptKey"), promptKey);
}

std::vector<UpdatePromptRequest::std::string> UpdatePromptRequest::getBizTags() const {
  return bizTags_;
}

void UpdatePromptRequest::setBizTags(const std::vector<UpdatePromptRequest::std::string> &bizTags) {
  bizTags_ = bizTags;
  for(int dep1 = 0; dep1 != bizTags.size(); dep1++) {
    setParameter(std::string("BizTags") + "." + std::to_string(dep1 + 1), bizTags[dep1]);
  }
}

std::string UpdatePromptRequest::getNamespaceId() const {
  return namespaceId_;
}

void UpdatePromptRequest::setNamespaceId(const std::string &namespaceId) {
  namespaceId_ = namespaceId;
  setParameter(std::string("NamespaceId"), namespaceId);
}

std::map<std::string, std::string> UpdatePromptRequest::getLabels() const {
  return labels_;
}

void UpdatePromptRequest::setLabels(const std::map<std::string, std::string> &labels) {
  labels_ = labels;
  for(auto const &iter1 : labels) {
    setParameter(std::string("Labels") + "." + iter1.first, iter1.second);
  }
}

std::string UpdatePromptRequest::getDescription() const {
  return description_;
}

void UpdatePromptRequest::setDescription(const std::string &description) {
  description_ = description;
  setParameter(std::string("Description"), description);
}

