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

#include <alibabacloud/ccc/model/SaveWebRtcInfoRequest.h>

using AlibabaCloud::CCC::Model::SaveWebRtcInfoRequest;

SaveWebRtcInfoRequest::SaveWebRtcInfoRequest()
    : RpcServiceRequest("ccc", "2020-07-01", "SaveWebRtcInfo") {
  setMethod(HttpRequest::Method::Post);
}

SaveWebRtcInfoRequest::~SaveWebRtcInfoRequest() {}

std::string SaveWebRtcInfoRequest::getCallId() const {
  return callId_;
}

void SaveWebRtcInfoRequest::setCallId(const std::string &callId) {
  callId_ = callId;
  setParameter(std::string("CallId"), callId);
}

std::string SaveWebRtcInfoRequest::getContent() const {
  return content_;
}

void SaveWebRtcInfoRequest::setContent(const std::string &content) {
  content_ = content;
  setParameter(std::string("Content"), content);
}

std::string SaveWebRtcInfoRequest::getContentType() const {
  return contentType_;
}

void SaveWebRtcInfoRequest::setContentType(const std::string &contentType) {
  contentType_ = contentType;
  setParameter(std::string("ContentType"), contentType);
}

std::string SaveWebRtcInfoRequest::getJobId() const {
  return jobId_;
}

void SaveWebRtcInfoRequest::setJobId(const std::string &jobId) {
  jobId_ = jobId;
  setParameter(std::string("JobId"), jobId);
}

std::string SaveWebRtcInfoRequest::getInstanceId() const {
  return instanceId_;
}

void SaveWebRtcInfoRequest::setInstanceId(const std::string &instanceId) {
  instanceId_ = instanceId;
  setParameter(std::string("InstanceId"), instanceId);
}

