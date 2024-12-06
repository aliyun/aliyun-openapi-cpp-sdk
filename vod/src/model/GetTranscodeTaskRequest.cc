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

#include <alibabacloud/vod/model/GetTranscodeTaskRequest.h>

using AlibabaCloud::Vod::Model::GetTranscodeTaskRequest;

GetTranscodeTaskRequest::GetTranscodeTaskRequest()
    : RpcServiceRequest("vod", "2017-03-21", "GetTranscodeTask") {
  setMethod(HttpRequest::Method::Post);
}

GetTranscodeTaskRequest::~GetTranscodeTaskRequest() {}

std::string GetTranscodeTaskRequest::getAccessKeyId() const {
  return accessKeyId_;
}

void GetTranscodeTaskRequest::setAccessKeyId(const std::string &accessKeyId) {
  accessKeyId_ = accessKeyId;
  setParameter(std::string("AccessKeyId"), accessKeyId);
}

std::string GetTranscodeTaskRequest::getTranscodeTaskId() const {
  return transcodeTaskId_;
}

void GetTranscodeTaskRequest::setTranscodeTaskId(const std::string &transcodeTaskId) {
  transcodeTaskId_ = transcodeTaskId;
  setParameter(std::string("TranscodeTaskId"), transcodeTaskId);
}

std::string GetTranscodeTaskRequest::getJobIds() const {
  return jobIds_;
}

void GetTranscodeTaskRequest::setJobIds(const std::string &jobIds) {
  jobIds_ = jobIds;
  setParameter(std::string("JobIds"), jobIds);
}

