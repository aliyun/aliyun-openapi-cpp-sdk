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

#include <alibabacloud/oceanbasepro/model/KillProcessListRequest.h>

using AlibabaCloud::OceanBasePro::Model::KillProcessListRequest;

KillProcessListRequest::KillProcessListRequest()
    : RpcServiceRequest("oceanbasepro", "2019-09-01", "KillProcessList") {
  setMethod(HttpRequest::Method::Post);
}

KillProcessListRequest::~KillProcessListRequest() {}

std::string KillProcessListRequest::getSessionList() const {
  return sessionList_;
}

void KillProcessListRequest::setSessionList(const std::string &sessionList) {
  sessionList_ = sessionList;
  setBodyParameter(std::string("SessionList"), sessionList);
}

std::string KillProcessListRequest::getInstanceId() const {
  return instanceId_;
}

void KillProcessListRequest::setInstanceId(const std::string &instanceId) {
  instanceId_ = instanceId;
  setBodyParameter(std::string("InstanceId"), instanceId);
}

std::string KillProcessListRequest::getTenantId() const {
  return tenantId_;
}

void KillProcessListRequest::setTenantId(const std::string &tenantId) {
  tenantId_ = tenantId;
  setBodyParameter(std::string("TenantId"), tenantId);
}

