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

#include <alibabacloud/outboundbot/model/CreateScriptWaveformRequest.h>

using AlibabaCloud::OutboundBot::Model::CreateScriptWaveformRequest;

CreateScriptWaveformRequest::CreateScriptWaveformRequest()
    : RpcServiceRequest("outboundbot", "2019-12-26", "CreateScriptWaveform") {
  setMethod(HttpRequest::Method::Post);
}

CreateScriptWaveformRequest::~CreateScriptWaveformRequest() {}

std::string CreateScriptWaveformRequest::getScriptId() const {
  return scriptId_;
}

void CreateScriptWaveformRequest::setScriptId(const std::string &scriptId) {
  scriptId_ = scriptId;
  setParameter(std::string("ScriptId"), scriptId);
}

std::string CreateScriptWaveformRequest::getInstanceId() const {
  return instanceId_;
}

void CreateScriptWaveformRequest::setInstanceId(const std::string &instanceId) {
  instanceId_ = instanceId;
  setParameter(std::string("InstanceId"), instanceId);
}

std::string CreateScriptWaveformRequest::getFileName() const {
  return fileName_;
}

void CreateScriptWaveformRequest::setFileName(const std::string &fileName) {
  fileName_ = fileName;
  setParameter(std::string("FileName"), fileName);
}

std::string CreateScriptWaveformRequest::getScriptContent() const {
  return scriptContent_;
}

void CreateScriptWaveformRequest::setScriptContent(const std::string &scriptContent) {
  scriptContent_ = scriptContent;
  setParameter(std::string("ScriptContent"), scriptContent);
}

std::string CreateScriptWaveformRequest::getFileId() const {
  return fileId_;
}

void CreateScriptWaveformRequest::setFileId(const std::string &fileId) {
  fileId_ = fileId;
  setParameter(std::string("FileId"), fileId);
}

