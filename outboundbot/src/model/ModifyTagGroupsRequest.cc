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

#include <alibabacloud/outboundbot/model/ModifyTagGroupsRequest.h>

using AlibabaCloud::OutboundBot::Model::ModifyTagGroupsRequest;

ModifyTagGroupsRequest::ModifyTagGroupsRequest()
    : RpcServiceRequest("outboundbot", "2019-12-26", "ModifyTagGroups") {
  setMethod(HttpRequest::Method::Post);
}

ModifyTagGroupsRequest::~ModifyTagGroupsRequest() {}

std::string ModifyTagGroupsRequest::getTags() const {
  return tags_;
}

void ModifyTagGroupsRequest::setTags(const std::string &tags) {
  tags_ = tags;
  setParameter(std::string("Tags"), tags);
}

std::string ModifyTagGroupsRequest::getScriptId() const {
  return scriptId_;
}

void ModifyTagGroupsRequest::setScriptId(const std::string &scriptId) {
  scriptId_ = scriptId;
  setParameter(std::string("ScriptId"), scriptId);
}

std::string ModifyTagGroupsRequest::getInstanceId() const {
  return instanceId_;
}

void ModifyTagGroupsRequest::setInstanceId(const std::string &instanceId) {
  instanceId_ = instanceId;
  setParameter(std::string("InstanceId"), instanceId);
}

std::string ModifyTagGroupsRequest::getTagGroups() const {
  return tagGroups_;
}

void ModifyTagGroupsRequest::setTagGroups(const std::string &tagGroups) {
  tagGroups_ = tagGroups;
  setParameter(std::string("TagGroups"), tagGroups);
}

