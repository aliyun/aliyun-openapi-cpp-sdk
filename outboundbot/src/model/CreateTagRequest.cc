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

#include <alibabacloud/outboundbot/model/CreateTagRequest.h>

using AlibabaCloud::OutboundBot::Model::CreateTagRequest;

CreateTagRequest::CreateTagRequest()
    : RpcServiceRequest("outboundbot", "2019-12-26", "CreateTag") {
  setMethod(HttpRequest::Method::Post);
}

CreateTagRequest::~CreateTagRequest() {}

std::string CreateTagRequest::getTagGroup() const {
  return tagGroup_;
}

void CreateTagRequest::setTagGroup(const std::string &tagGroup) {
  tagGroup_ = tagGroup;
  setParameter(std::string("TagGroup"), tagGroup);
}

std::string CreateTagRequest::getScriptId() const {
  return scriptId_;
}

void CreateTagRequest::setScriptId(const std::string &scriptId) {
  scriptId_ = scriptId;
  setParameter(std::string("ScriptId"), scriptId);
}

std::string CreateTagRequest::getTagName() const {
  return tagName_;
}

void CreateTagRequest::setTagName(const std::string &tagName) {
  tagName_ = tagName;
  setParameter(std::string("TagName"), tagName);
}

std::string CreateTagRequest::getInstanceId() const {
  return instanceId_;
}

void CreateTagRequest::setInstanceId(const std::string &instanceId) {
  instanceId_ = instanceId;
  setParameter(std::string("InstanceId"), instanceId);
}

