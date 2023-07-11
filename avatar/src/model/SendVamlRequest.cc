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

#include <alibabacloud/avatar/model/SendVamlRequest.h>

using AlibabaCloud::Avatar::Model::SendVamlRequest;

SendVamlRequest::SendVamlRequest()
    : RpcServiceRequest("avatar", "2022-01-30", "SendVaml") {
  setMethod(HttpRequest::Method::Post);
}

SendVamlRequest::~SendVamlRequest() {}

long SendVamlRequest::getTenantId() const {
  return tenantId_;
}

void SendVamlRequest::setTenantId(long tenantId) {
  tenantId_ = tenantId;
  setParameter(std::string("TenantId"), std::to_string(tenantId));
}

std::string SendVamlRequest::getSessionId() const {
  return sessionId_;
}

void SendVamlRequest::setSessionId(const std::string &sessionId) {
  sessionId_ = sessionId;
  setParameter(std::string("SessionId"), sessionId);
}

std::string SendVamlRequest::getVaml() const {
  return vaml_;
}

void SendVamlRequest::setVaml(const std::string &vaml) {
  vaml_ = vaml;
  setParameter(std::string("Vaml"), vaml);
}

