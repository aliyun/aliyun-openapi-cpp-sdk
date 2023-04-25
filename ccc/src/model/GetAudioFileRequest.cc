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

#include <alibabacloud/ccc/model/GetAudioFileRequest.h>

using AlibabaCloud::CCC::Model::GetAudioFileRequest;

GetAudioFileRequest::GetAudioFileRequest()
    : RpcServiceRequest("ccc", "2020-07-01", "GetAudioFile") {
  setMethod(HttpRequest::Method::Post);
}

GetAudioFileRequest::~GetAudioFileRequest() {}

std::string GetAudioFileRequest::getInstanceId() const {
  return instanceId_;
}

void GetAudioFileRequest::setInstanceId(const std::string &instanceId) {
  instanceId_ = instanceId;
  setParameter(std::string("InstanceId"), instanceId);
}

std::string GetAudioFileRequest::getAudioResourceId() const {
  return audioResourceId_;
}

void GetAudioFileRequest::setAudioResourceId(const std::string &audioResourceId) {
  audioResourceId_ = audioResourceId;
  setParameter(std::string("AudioResourceId"), audioResourceId);
}

