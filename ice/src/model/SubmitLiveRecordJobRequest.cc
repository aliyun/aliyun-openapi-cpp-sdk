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

#include <alibabacloud/ice/model/SubmitLiveRecordJobRequest.h>

using AlibabaCloud::ICE::Model::SubmitLiveRecordJobRequest;

SubmitLiveRecordJobRequest::SubmitLiveRecordJobRequest()
    : RpcServiceRequest("ice", "2020-11-09", "SubmitLiveRecordJob") {
  setMethod(HttpRequest::Method::Post);
}

SubmitLiveRecordJobRequest::~SubmitLiveRecordJobRequest() {}

SubmitLiveRecordJobRequest::StreamInput SubmitLiveRecordJobRequest::getStreamInput() const {
  return streamInput_;
}

void SubmitLiveRecordJobRequest::setStreamInput(const SubmitLiveRecordJobRequest::StreamInput &streamInput) {
  streamInput_ = streamInput;
  setBodyParameter(std::string("StreamInput") + ".Type", streamInput.type);
  setBodyParameter(std::string("StreamInput") + ".Url", streamInput.url);
}

std::string SubmitLiveRecordJobRequest::getTemplateId() const {
  return templateId_;
}

void SubmitLiveRecordJobRequest::setTemplateId(const std::string &templateId) {
  templateId_ = templateId;
  setBodyParameter(std::string("TemplateId"), templateId);
}

std::string SubmitLiveRecordJobRequest::getName() const {
  return name_;
}

void SubmitLiveRecordJobRequest::setName(const std::string &name) {
  name_ = name;
  setBodyParameter(std::string("Name"), name);
}

std::string SubmitLiveRecordJobRequest::getNotifyUrl() const {
  return notifyUrl_;
}

void SubmitLiveRecordJobRequest::setNotifyUrl(const std::string &notifyUrl) {
  notifyUrl_ = notifyUrl;
  setBodyParameter(std::string("NotifyUrl"), notifyUrl);
}

SubmitLiveRecordJobRequest::RecordOutput SubmitLiveRecordJobRequest::getRecordOutput() const {
  return recordOutput_;
}

void SubmitLiveRecordJobRequest::setRecordOutput(const SubmitLiveRecordJobRequest::RecordOutput &recordOutput) {
  recordOutput_ = recordOutput;
  setBodyParameter(std::string("RecordOutput") + ".Bucket", recordOutput.bucket);
  setBodyParameter(std::string("RecordOutput") + ".Endpoint", recordOutput.endpoint);
  setBodyParameter(std::string("RecordOutput") + ".Type", recordOutput.type);
}

