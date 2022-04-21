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

#include <alibabacloud/outboundbot/model/DuplicateScriptRequest.h>

using AlibabaCloud::OutboundBot::Model::DuplicateScriptRequest;

DuplicateScriptRequest::DuplicateScriptRequest()
    : RpcServiceRequest("outboundbot", "2019-12-26", "DuplicateScript") {
  setMethod(HttpRequest::Method::Post);
}

DuplicateScriptRequest::~DuplicateScriptRequest() {}

std::string DuplicateScriptRequest::getInstanceId() const {
  return instanceId_;
}

void DuplicateScriptRequest::setInstanceId(const std::string &instanceId) {
  instanceId_ = instanceId;
  setParameter(std::string("InstanceId"), instanceId);
}

std::string DuplicateScriptRequest::getSourceScriptId() const {
  return sourceScriptId_;
}

void DuplicateScriptRequest::setSourceScriptId(const std::string &sourceScriptId) {
  sourceScriptId_ = sourceScriptId;
  setParameter(std::string("SourceScriptId"), sourceScriptId);
}

std::string DuplicateScriptRequest::getName() const {
  return name_;
}

void DuplicateScriptRequest::setName(const std::string &name) {
  name_ = name;
  setParameter(std::string("Name"), name);
}

