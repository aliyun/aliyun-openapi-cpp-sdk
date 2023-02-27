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

#include <alibabacloud/ice/model/SubmitLiveSnapshotJobRequest.h>

using AlibabaCloud::ICE::Model::SubmitLiveSnapshotJobRequest;

SubmitLiveSnapshotJobRequest::SubmitLiveSnapshotJobRequest()
    : RpcServiceRequest("ice", "2020-11-09", "SubmitLiveSnapshotJob") {
  setMethod(HttpRequest::Method::Post);
}

SubmitLiveSnapshotJobRequest::~SubmitLiveSnapshotJobRequest() {}

SubmitLiveSnapshotJobRequest::StreamInput SubmitLiveSnapshotJobRequest::getStreamInput() const {
  return streamInput_;
}

void SubmitLiveSnapshotJobRequest::setStreamInput(const SubmitLiveSnapshotJobRequest::StreamInput &streamInput) {
  streamInput_ = streamInput;
  setBodyParameter(std::string("StreamInput") + ".Type", streamInput.type);
  setBodyParameter(std::string("StreamInput") + ".Url", streamInput.url);
}

std::string SubmitLiveSnapshotJobRequest::getTemplateId() const {
  return templateId_;
}

void SubmitLiveSnapshotJobRequest::setTemplateId(const std::string &templateId) {
  templateId_ = templateId;
  setBodyParameter(std::string("TemplateId"), templateId);
}

SubmitLiveSnapshotJobRequest::SnapshotOutput SubmitLiveSnapshotJobRequest::getSnapshotOutput() const {
  return snapshotOutput_;
}

void SubmitLiveSnapshotJobRequest::setSnapshotOutput(const SubmitLiveSnapshotJobRequest::SnapshotOutput &snapshotOutput) {
  snapshotOutput_ = snapshotOutput;
  setBodyParameter(std::string("SnapshotOutput") + ".Bucket", snapshotOutput.bucket);
  setBodyParameter(std::string("SnapshotOutput") + ".Endpoint", snapshotOutput.endpoint);
  setBodyParameter(std::string("SnapshotOutput") + ".StorageType", snapshotOutput.storageType);
}

std::string SubmitLiveSnapshotJobRequest::getCallbackUrl() const {
  return callbackUrl_;
}

void SubmitLiveSnapshotJobRequest::setCallbackUrl(const std::string &callbackUrl) {
  callbackUrl_ = callbackUrl;
  setBodyParameter(std::string("CallbackUrl"), callbackUrl);
}

std::string SubmitLiveSnapshotJobRequest::getJobName() const {
  return jobName_;
}

void SubmitLiveSnapshotJobRequest::setJobName(const std::string &jobName) {
  jobName_ = jobName;
  setBodyParameter(std::string("JobName"), jobName);
}

