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

#include <alibabacloud/outboundbot/model/TaskPreparingRequest.h>

using AlibabaCloud::OutboundBot::Model::TaskPreparingRequest;

TaskPreparingRequest::TaskPreparingRequest()
    : RpcServiceRequest("outboundbot", "2019-12-26", "TaskPreparing") {
  setMethod(HttpRequest::Method::Post);
}

TaskPreparingRequest::~TaskPreparingRequest() {}

std::string TaskPreparingRequest::getJobId() const {
  return jobId_;
}

void TaskPreparingRequest::setJobId(const std::string &jobId) {
  jobId_ = jobId;
  setParameter(std::string("JobId"), jobId);
}

std::string TaskPreparingRequest::getInstanceId() const {
  return instanceId_;
}

void TaskPreparingRequest::setInstanceId(const std::string &instanceId) {
  instanceId_ = instanceId;
  setParameter(std::string("InstanceId"), instanceId);
}

long TaskPreparingRequest::getInstanceOwnerId() const {
  return instanceOwnerId_;
}

void TaskPreparingRequest::setInstanceOwnerId(long instanceOwnerId) {
  instanceOwnerId_ = instanceOwnerId;
  setParameter(std::string("InstanceOwnerId"), std::to_string(instanceOwnerId));
}

