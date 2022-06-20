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

#include <alibabacloud/sas/model/StartVirusScanTaskRequest.h>

using AlibabaCloud::Sas::Model::StartVirusScanTaskRequest;

StartVirusScanTaskRequest::StartVirusScanTaskRequest()
    : RpcServiceRequest("sas", "2018-12-03", "StartVirusScanTask") {
  setMethod(HttpRequest::Method::Post);
}

StartVirusScanTaskRequest::~StartVirusScanTaskRequest() {}

std::string StartVirusScanTaskRequest::getSourceIp() const {
  return sourceIp_;
}

void StartVirusScanTaskRequest::setSourceIp(const std::string &sourceIp) {
  sourceIp_ = sourceIp;
  setParameter(std::string("SourceIp"), sourceIp);
}

std::string StartVirusScanTaskRequest::getTargetInfo() const {
  return targetInfo_;
}

void StartVirusScanTaskRequest::setTargetInfo(const std::string &targetInfo) {
  targetInfo_ = targetInfo;
  setParameter(std::string("TargetInfo"), targetInfo);
}

