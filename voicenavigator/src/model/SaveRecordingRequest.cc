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

#include <alibabacloud/voicenavigator/model/SaveRecordingRequest.h>

using AlibabaCloud::VoiceNavigator::Model::SaveRecordingRequest;

SaveRecordingRequest::SaveRecordingRequest()
    : RpcServiceRequest("voicenavigator", "2018-06-12", "SaveRecording") {
  setMethod(HttpRequest::Method::Post);
}

SaveRecordingRequest::~SaveRecordingRequest() {}

std::string SaveRecordingRequest::getVoiceSliceRecordingList() const {
  return voiceSliceRecordingList_;
}

void SaveRecordingRequest::setVoiceSliceRecordingList(const std::string &voiceSliceRecordingList) {
  voiceSliceRecordingList_ = voiceSliceRecordingList;
  setParameter(std::string("VoiceSliceRecordingList"), voiceSliceRecordingList);
}

std::string SaveRecordingRequest::getConversationId() const {
  return conversationId_;
}

void SaveRecordingRequest::setConversationId(const std::string &conversationId) {
  conversationId_ = conversationId;
  setParameter(std::string("ConversationId"), conversationId);
}

long SaveRecordingRequest::getStartTime() const {
  return startTime_;
}

void SaveRecordingRequest::setStartTime(long startTime) {
  startTime_ = startTime;
  setParameter(std::string("StartTime"), std::to_string(startTime));
}

std::string SaveRecordingRequest::getType() const {
  return type_;
}

void SaveRecordingRequest::setType(const std::string &type) {
  type_ = type;
  setParameter(std::string("Type"), type);
}

std::string SaveRecordingRequest::getDuration() const {
  return duration_;
}

void SaveRecordingRequest::setDuration(const std::string &duration) {
  duration_ = duration;
  setParameter(std::string("Duration"), duration);
}

std::string SaveRecordingRequest::getInstanceId() const {
  return instanceId_;
}

void SaveRecordingRequest::setInstanceId(const std::string &instanceId) {
  instanceId_ = instanceId;
  setParameter(std::string("InstanceId"), instanceId);
}

std::string SaveRecordingRequest::getFileName() const {
  return fileName_;
}

void SaveRecordingRequest::setFileName(const std::string &fileName) {
  fileName_ = fileName;
  setParameter(std::string("FileName"), fileName);
}

std::string SaveRecordingRequest::getFilePath() const {
  return filePath_;
}

void SaveRecordingRequest::setFilePath(const std::string &filePath) {
  filePath_ = filePath;
  setParameter(std::string("FilePath"), filePath);
}

long SaveRecordingRequest::getInstanceOwnerId() const {
  return instanceOwnerId_;
}

void SaveRecordingRequest::setInstanceOwnerId(long instanceOwnerId) {
  instanceOwnerId_ = instanceOwnerId;
  setParameter(std::string("InstanceOwnerId"), std::to_string(instanceOwnerId));
}

