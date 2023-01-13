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

#include <alibabacloud/outboundbot/model/DeleteScriptRecordingRequest.h>

using AlibabaCloud::OutboundBot::Model::DeleteScriptRecordingRequest;

DeleteScriptRecordingRequest::DeleteScriptRecordingRequest()
    : RpcServiceRequest("outboundbot", "2019-12-26", "DeleteScriptRecording") {
  setMethod(HttpRequest::Method::Post);
}

DeleteScriptRecordingRequest::~DeleteScriptRecordingRequest() {}

std::string DeleteScriptRecordingRequest::getUuidsJson() const {
  return uuidsJson_;
}

void DeleteScriptRecordingRequest::setUuidsJson(const std::string &uuidsJson) {
  uuidsJson_ = uuidsJson;
  setParameter(std::string("UuidsJson"), uuidsJson);
}

std::string DeleteScriptRecordingRequest::getScriptId() const {
  return scriptId_;
}

void DeleteScriptRecordingRequest::setScriptId(const std::string &scriptId) {
  scriptId_ = scriptId;
  setParameter(std::string("ScriptId"), scriptId);
}

std::string DeleteScriptRecordingRequest::getInstanceId() const {
  return instanceId_;
}

void DeleteScriptRecordingRequest::setInstanceId(const std::string &instanceId) {
  instanceId_ = instanceId;
  setParameter(std::string("InstanceId"), instanceId);
}

