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

#include <alibabacloud/sas/model/ModifyAutoDelConfigRequest.h>

using AlibabaCloud::Sas::Model::ModifyAutoDelConfigRequest;

ModifyAutoDelConfigRequest::ModifyAutoDelConfigRequest()
    : RpcServiceRequest("sas", "2018-12-03", "ModifyAutoDelConfig") {
  setMethod(HttpRequest::Method::Post);
}

ModifyAutoDelConfigRequest::~ModifyAutoDelConfigRequest() {}

std::string ModifyAutoDelConfigRequest::getSourceIp() const {
  return sourceIp_;
}

void ModifyAutoDelConfigRequest::setSourceIp(const std::string &sourceIp) {
  sourceIp_ = sourceIp;
  setParameter(std::string("SourceIp"), sourceIp);
}

int ModifyAutoDelConfigRequest::getDays() const {
  return days_;
}

void ModifyAutoDelConfigRequest::setDays(int days) {
  days_ = days;
  setParameter(std::string("Days"), std::to_string(days));
}

std::string ModifyAutoDelConfigRequest::getResourceDirectoryAccountId() const {
  return resourceDirectoryAccountId_;
}

void ModifyAutoDelConfigRequest::setResourceDirectoryAccountId(const std::string &resourceDirectoryAccountId) {
  resourceDirectoryAccountId_ = resourceDirectoryAccountId;
  setParameter(std::string("ResourceDirectoryAccountId"), resourceDirectoryAccountId);
}

