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

#include <alibabacloud/outboundbot/model/SubmitRecordingRequest.h>

using AlibabaCloud::OutboundBot::Model::SubmitRecordingRequest;

SubmitRecordingRequest::SubmitRecordingRequest()
    : RpcServiceRequest("outboundbot", "2019-12-26", "SubmitRecording") {
  setMethod(HttpRequest::Method::Post);
}

SubmitRecordingRequest::~SubmitRecordingRequest() {}

std::string SubmitRecordingRequest::getMergedRecording() const {
  return mergedRecording_;
}

void SubmitRecordingRequest::setMergedRecording(const std::string &mergedRecording) {
  mergedRecording_ = mergedRecording;
  setParameter(std::string("MergedRecording"), mergedRecording);
}

std::string SubmitRecordingRequest::getResourceRecording() const {
  return resourceRecording_;
}

void SubmitRecordingRequest::setResourceRecording(const std::string &resourceRecording) {
  resourceRecording_ = resourceRecording;
  setParameter(std::string("ResourceRecording"), resourceRecording);
}

std::string SubmitRecordingRequest::getInstanceId() const {
  return instanceId_;
}

void SubmitRecordingRequest::setInstanceId(const std::string &instanceId) {
  instanceId_ = instanceId;
  setParameter(std::string("InstanceId"), instanceId);
}

long SubmitRecordingRequest::getInstanceOwnerId() const {
  return instanceOwnerId_;
}

void SubmitRecordingRequest::setInstanceOwnerId(long instanceOwnerId) {
  instanceOwnerId_ = instanceOwnerId;
  setParameter(std::string("InstanceOwnerId"), std::to_string(instanceOwnerId));
}

std::string SubmitRecordingRequest::getTaskId() const {
  return taskId_;
}

void SubmitRecordingRequest::setTaskId(const std::string &taskId) {
  taskId_ = taskId;
  setParameter(std::string("TaskId"), taskId);
}

