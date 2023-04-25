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

#include <alibabacloud/ccc/model/CreateAudioFileRequest.h>

using AlibabaCloud::CCC::Model::CreateAudioFileRequest;

CreateAudioFileRequest::CreateAudioFileRequest()
    : RpcServiceRequest("ccc", "2020-07-01", "CreateAudioFile") {
  setMethod(HttpRequest::Method::Post);
}

CreateAudioFileRequest::~CreateAudioFileRequest() {}

std::string CreateAudioFileRequest::getOssFileKey() const {
  return ossFileKey_;
}

void CreateAudioFileRequest::setOssFileKey(const std::string &ossFileKey) {
  ossFileKey_ = ossFileKey;
  setParameter(std::string("OssFileKey"), ossFileKey);
}

std::string CreateAudioFileRequest::getInstanceId() const {
  return instanceId_;
}

void CreateAudioFileRequest::setInstanceId(const std::string &instanceId) {
  instanceId_ = instanceId;
  setParameter(std::string("InstanceId"), instanceId);
}

std::string CreateAudioFileRequest::getAudioFileName() const {
  return audioFileName_;
}

void CreateAudioFileRequest::setAudioFileName(const std::string &audioFileName) {
  audioFileName_ = audioFileName;
  setParameter(std::string("AudioFileName"), audioFileName);
}

std::string CreateAudioFileRequest::getName() const {
  return name_;
}

void CreateAudioFileRequest::setName(const std::string &name) {
  name_ = name;
  setParameter(std::string("Name"), name);
}

