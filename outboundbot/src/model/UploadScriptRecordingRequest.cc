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

#include <alibabacloud/outboundbot/model/UploadScriptRecordingRequest.h>

using AlibabaCloud::OutboundBot::Model::UploadScriptRecordingRequest;

UploadScriptRecordingRequest::UploadScriptRecordingRequest()
    : RpcServiceRequest("outboundbot", "2019-12-26", "UploadScriptRecording") {
  setMethod(HttpRequest::Method::Post);
}

UploadScriptRecordingRequest::~UploadScriptRecordingRequest() {}

std::string UploadScriptRecordingRequest::getContent() const {
  return content_;
}

void UploadScriptRecordingRequest::setContent(const std::string &content) {
  content_ = content;
  setParameter(std::string("Content"), content);
}

std::string UploadScriptRecordingRequest::getScriptId() const {
  return scriptId_;
}

void UploadScriptRecordingRequest::setScriptId(const std::string &scriptId) {
  scriptId_ = scriptId;
  setParameter(std::string("ScriptId"), scriptId);
}

std::string UploadScriptRecordingRequest::getInstanceId() const {
  return instanceId_;
}

void UploadScriptRecordingRequest::setInstanceId(const std::string &instanceId) {
  instanceId_ = instanceId;
  setParameter(std::string("InstanceId"), instanceId);
}

std::string UploadScriptRecordingRequest::getFileName() const {
  return fileName_;
}

void UploadScriptRecordingRequest::setFileName(const std::string &fileName) {
  fileName_ = fileName;
  setParameter(std::string("FileName"), fileName);
}

std::string UploadScriptRecordingRequest::getFileId() const {
  return fileId_;
}

void UploadScriptRecordingRequest::setFileId(const std::string &fileId) {
  fileId_ = fileId;
  setParameter(std::string("FileId"), fileId);
}

