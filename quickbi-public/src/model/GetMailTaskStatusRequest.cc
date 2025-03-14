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

#include <alibabacloud/quickbi-public/model/GetMailTaskStatusRequest.h>

using AlibabaCloud::Quickbi_public::Model::GetMailTaskStatusRequest;

GetMailTaskStatusRequest::GetMailTaskStatusRequest()
    : RpcServiceRequest("quickbi-public", "2022-01-01", "GetMailTaskStatus") {
  setMethod(HttpRequest::Method::Post);
}

GetMailTaskStatusRequest::~GetMailTaskStatusRequest() {}

std::string GetMailTaskStatusRequest::getAccessPoint() const {
  return accessPoint_;
}

void GetMailTaskStatusRequest::setAccessPoint(const std::string &accessPoint) {
  accessPoint_ = accessPoint;
  setParameter(std::string("AccessPoint"), accessPoint);
}

std::string GetMailTaskStatusRequest::getMailId() const {
  return mailId_;
}

void GetMailTaskStatusRequest::setMailId(const std::string &mailId) {
  mailId_ = mailId;
  setParameter(std::string("MailId"), mailId);
}

long GetMailTaskStatusRequest::getTaskId() const {
  return taskId_;
}

void GetMailTaskStatusRequest::setTaskId(long taskId) {
  taskId_ = taskId;
  setParameter(std::string("TaskId"), std::to_string(taskId));
}

std::string GetMailTaskStatusRequest::getSignType() const {
  return signType_;
}

void GetMailTaskStatusRequest::setSignType(const std::string &signType) {
  signType_ = signType;
  setParameter(std::string("SignType"), signType);
}

