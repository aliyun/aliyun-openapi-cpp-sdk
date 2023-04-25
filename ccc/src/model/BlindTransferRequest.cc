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

#include <alibabacloud/ccc/model/BlindTransferRequest.h>

using AlibabaCloud::CCC::Model::BlindTransferRequest;

BlindTransferRequest::BlindTransferRequest()
    : RpcServiceRequest("ccc", "2020-07-01", "BlindTransfer") {
  setMethod(HttpRequest::Method::Post);
}

BlindTransferRequest::~BlindTransferRequest() {}

std::string BlindTransferRequest::getTransferee() const {
  return transferee_;
}

void BlindTransferRequest::setTransferee(const std::string &transferee) {
  transferee_ = transferee;
  setParameter(std::string("Transferee"), transferee);
}

std::string BlindTransferRequest::getTransferor() const {
  return transferor_;
}

void BlindTransferRequest::setTransferor(const std::string &transferor) {
  transferor_ = transferor;
  setParameter(std::string("Transferor"), transferor);
}

std::string BlindTransferRequest::getUserId() const {
  return userId_;
}

void BlindTransferRequest::setUserId(const std::string &userId) {
  userId_ = userId;
  setParameter(std::string("UserId"), userId);
}

std::string BlindTransferRequest::getDeviceId() const {
  return deviceId_;
}

void BlindTransferRequest::setDeviceId(const std::string &deviceId) {
  deviceId_ = deviceId;
  setParameter(std::string("DeviceId"), deviceId);
}

std::string BlindTransferRequest::getStrategyName() const {
  return strategyName_;
}

void BlindTransferRequest::setStrategyName(const std::string &strategyName) {
  strategyName_ = strategyName;
  setParameter(std::string("StrategyName"), strategyName);
}

int BlindTransferRequest::getTimeoutSeconds() const {
  return timeoutSeconds_;
}

void BlindTransferRequest::setTimeoutSeconds(int timeoutSeconds) {
  timeoutSeconds_ = timeoutSeconds;
  setParameter(std::string("TimeoutSeconds"), std::to_string(timeoutSeconds));
}

std::string BlindTransferRequest::getJobId() const {
  return jobId_;
}

void BlindTransferRequest::setJobId(const std::string &jobId) {
  jobId_ = jobId;
  setParameter(std::string("JobId"), jobId);
}

std::string BlindTransferRequest::getInstanceId() const {
  return instanceId_;
}

void BlindTransferRequest::setInstanceId(const std::string &instanceId) {
  instanceId_ = instanceId;
  setParameter(std::string("InstanceId"), instanceId);
}

std::string BlindTransferRequest::getStrategyParams() const {
  return strategyParams_;
}

void BlindTransferRequest::setStrategyParams(const std::string &strategyParams) {
  strategyParams_ = strategyParams;
  setParameter(std::string("StrategyParams"), strategyParams);
}

int BlindTransferRequest::getCallPriority() const {
  return callPriority_;
}

void BlindTransferRequest::setCallPriority(int callPriority) {
  callPriority_ = callPriority;
  setParameter(std::string("CallPriority"), std::to_string(callPriority));
}

