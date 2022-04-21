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

#include <alibabacloud/outboundbot/model/RecordFailureRequest.h>

using AlibabaCloud::OutboundBot::Model::RecordFailureRequest;

RecordFailureRequest::RecordFailureRequest()
    : RpcServiceRequest("outboundbot", "2019-12-26", "RecordFailure") {
  setMethod(HttpRequest::Method::Post);
}

RecordFailureRequest::~RecordFailureRequest() {}

std::string RecordFailureRequest::getCallId() const {
  return callId_;
}

void RecordFailureRequest::setCallId(const std::string &callId) {
  callId_ = callId;
  setParameter(std::string("CallId"), callId);
}

long RecordFailureRequest::getActualTime() const {
  return actualTime_;
}

void RecordFailureRequest::setActualTime(long actualTime) {
  actualTime_ = actualTime;
  setParameter(std::string("ActualTime"), std::to_string(actualTime));
}

std::string RecordFailureRequest::getCallingNumber() const {
  return callingNumber_;
}

void RecordFailureRequest::setCallingNumber(const std::string &callingNumber) {
  callingNumber_ = callingNumber;
  setParameter(std::string("CallingNumber"), callingNumber);
}

std::string RecordFailureRequest::getInstanceId() const {
  return instanceId_;
}

void RecordFailureRequest::setInstanceId(const std::string &instanceId) {
  instanceId_ = instanceId;
  setParameter(std::string("InstanceId"), instanceId);
}

std::string RecordFailureRequest::getDispositionCode() const {
  return dispositionCode_;
}

void RecordFailureRequest::setDispositionCode(const std::string &dispositionCode) {
  dispositionCode_ = dispositionCode;
  setParameter(std::string("DispositionCode"), dispositionCode);
}

std::string RecordFailureRequest::getCalledNumber() const {
  return calledNumber_;
}

void RecordFailureRequest::setCalledNumber(const std::string &calledNumber) {
  calledNumber_ = calledNumber;
  setParameter(std::string("CalledNumber"), calledNumber);
}

std::string RecordFailureRequest::getInstanceOwnerId() const {
  return instanceOwnerId_;
}

void RecordFailureRequest::setInstanceOwnerId(const std::string &instanceOwnerId) {
  instanceOwnerId_ = instanceOwnerId;
  setParameter(std::string("InstanceOwnerId"), instanceOwnerId);
}

std::string RecordFailureRequest::getTaskId() const {
  return taskId_;
}

void RecordFailureRequest::setTaskId(const std::string &taskId) {
  taskId_ = taskId;
  setParameter(std::string("TaskId"), taskId);
}

std::string RecordFailureRequest::getExceptionCodes() const {
  return exceptionCodes_;
}

void RecordFailureRequest::setExceptionCodes(const std::string &exceptionCodes) {
  exceptionCodes_ = exceptionCodes;
  setParameter(std::string("ExceptionCodes"), exceptionCodes);
}

