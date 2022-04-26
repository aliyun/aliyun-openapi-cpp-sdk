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

#include <alibabacloud/ccc/model/CancelAttendedTransferRequest.h>

using AlibabaCloud::CCC::Model::CancelAttendedTransferRequest;

CancelAttendedTransferRequest::CancelAttendedTransferRequest()
    : RpcServiceRequest("ccc", "2020-07-01", "CancelAttendedTransfer") {
  setMethod(HttpRequest::Method::Post);
}

CancelAttendedTransferRequest::~CancelAttendedTransferRequest() {}

std::string CancelAttendedTransferRequest::getUserId() const {
  return userId_;
}

void CancelAttendedTransferRequest::setUserId(const std::string &userId) {
  userId_ = userId;
  setParameter(std::string("UserId"), userId);
}

std::string CancelAttendedTransferRequest::getDeviceId() const {
  return deviceId_;
}

void CancelAttendedTransferRequest::setDeviceId(const std::string &deviceId) {
  deviceId_ = deviceId;
  setParameter(std::string("DeviceId"), deviceId);
}

std::string CancelAttendedTransferRequest::getJobId() const {
  return jobId_;
}

void CancelAttendedTransferRequest::setJobId(const std::string &jobId) {
  jobId_ = jobId;
  setParameter(std::string("JobId"), jobId);
}

std::string CancelAttendedTransferRequest::getInstanceId() const {
  return instanceId_;
}

void CancelAttendedTransferRequest::setInstanceId(const std::string &instanceId) {
  instanceId_ = instanceId;
  setParameter(std::string("InstanceId"), instanceId);
}

