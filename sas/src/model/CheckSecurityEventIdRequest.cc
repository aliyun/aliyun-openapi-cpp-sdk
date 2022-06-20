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

#include <alibabacloud/sas/model/CheckSecurityEventIdRequest.h>

using AlibabaCloud::Sas::Model::CheckSecurityEventIdRequest;

CheckSecurityEventIdRequest::CheckSecurityEventIdRequest()
    : RpcServiceRequest("sas", "2018-12-03", "CheckSecurityEventId") {
  setMethod(HttpRequest::Method::Post);
}

CheckSecurityEventIdRequest::~CheckSecurityEventIdRequest() {}

std::vector<std::string> CheckSecurityEventIdRequest::getSecurityEventIds() const {
  return securityEventIds_;
}

void CheckSecurityEventIdRequest::setSecurityEventIds(const std::vector<std::string> &securityEventIds) {
  securityEventIds_ = securityEventIds;
}

std::string CheckSecurityEventIdRequest::getUuid() const {
  return uuid_;
}

void CheckSecurityEventIdRequest::setUuid(const std::string &uuid) {
  uuid_ = uuid;
  setParameter(std::string("Uuid"), uuid);
}

std::string CheckSecurityEventIdRequest::getSourceIp() const {
  return sourceIp_;
}

void CheckSecurityEventIdRequest::setSourceIp(const std::string &sourceIp) {
  sourceIp_ = sourceIp;
  setParameter(std::string("SourceIp"), sourceIp);
}

