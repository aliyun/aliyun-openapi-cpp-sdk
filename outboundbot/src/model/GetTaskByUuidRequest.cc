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

#include <alibabacloud/outboundbot/model/GetTaskByUuidRequest.h>

using AlibabaCloud::OutboundBot::Model::GetTaskByUuidRequest;

GetTaskByUuidRequest::GetTaskByUuidRequest()
    : RpcServiceRequest("outboundbot", "2019-12-26", "GetTaskByUuid") {
  setMethod(HttpRequest::Method::Get);
}

GetTaskByUuidRequest::~GetTaskByUuidRequest() {}

bool GetTaskByUuidRequest::getWithConversations() const {
  return withConversations_;
}

void GetTaskByUuidRequest::setWithConversations(bool withConversations) {
  withConversations_ = withConversations;
  setParameter(std::string("WithConversations"), withConversations ? "true" : "false");
}

std::string GetTaskByUuidRequest::getInstanceId() const {
  return instanceId_;
}

void GetTaskByUuidRequest::setInstanceId(const std::string &instanceId) {
  instanceId_ = instanceId;
  setParameter(std::string("InstanceId"), instanceId);
}

std::string GetTaskByUuidRequest::getTaskId() const {
  return taskId_;
}

void GetTaskByUuidRequest::setTaskId(const std::string &taskId) {
  taskId_ = taskId;
  setParameter(std::string("TaskId"), taskId);
}

