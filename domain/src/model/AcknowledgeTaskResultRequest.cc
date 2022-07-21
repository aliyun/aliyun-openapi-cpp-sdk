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

#include <alibabacloud/domain/model/AcknowledgeTaskResultRequest.h>

using AlibabaCloud::Domain::Model::AcknowledgeTaskResultRequest;

AcknowledgeTaskResultRequest::AcknowledgeTaskResultRequest()
    : RpcServiceRequest("domain", "2018-01-29", "AcknowledgeTaskResult") {
  setMethod(HttpRequest::Method::Post);
}

AcknowledgeTaskResultRequest::~AcknowledgeTaskResultRequest() {}

std::vector<std::string> AcknowledgeTaskResultRequest::getTaskDetailNo() const {
  return taskDetailNo_;
}

void AcknowledgeTaskResultRequest::setTaskDetailNo(const std::vector<std::string> &taskDetailNo) {
  taskDetailNo_ = taskDetailNo;
}

std::string AcknowledgeTaskResultRequest::getUserClientIp() const {
  return userClientIp_;
}

void AcknowledgeTaskResultRequest::setUserClientIp(const std::string &userClientIp) {
  userClientIp_ = userClientIp;
  setParameter(std::string("UserClientIp"), userClientIp);
}

std::string AcknowledgeTaskResultRequest::getLang() const {
  return lang_;
}

void AcknowledgeTaskResultRequest::setLang(const std::string &lang) {
  lang_ = lang;
  setParameter(std::string("Lang"), lang);
}

