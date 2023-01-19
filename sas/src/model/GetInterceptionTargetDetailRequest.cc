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

#include <alibabacloud/sas/model/GetInterceptionTargetDetailRequest.h>

using AlibabaCloud::Sas::Model::GetInterceptionTargetDetailRequest;

GetInterceptionTargetDetailRequest::GetInterceptionTargetDetailRequest()
    : RpcServiceRequest("sas", "2018-12-03", "GetInterceptionTargetDetail") {
  setMethod(HttpRequest::Method::Post);
}

GetInterceptionTargetDetailRequest::~GetInterceptionTargetDetailRequest() {}

long GetInterceptionTargetDetailRequest::getTargetId() const {
  return targetId_;
}

void GetInterceptionTargetDetailRequest::setTargetId(long targetId) {
  targetId_ = targetId;
  setParameter(std::string("TargetId"), std::to_string(targetId));
}

std::string GetInterceptionTargetDetailRequest::getSourceIp() const {
  return sourceIp_;
}

void GetInterceptionTargetDetailRequest::setSourceIp(const std::string &sourceIp) {
  sourceIp_ = sourceIp;
  setParameter(std::string("SourceIp"), sourceIp);
}

