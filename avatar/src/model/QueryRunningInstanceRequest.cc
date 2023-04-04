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

#include <alibabacloud/avatar/model/QueryRunningInstanceRequest.h>

using AlibabaCloud::Avatar::Model::QueryRunningInstanceRequest;

QueryRunningInstanceRequest::QueryRunningInstanceRequest()
    : RpcServiceRequest("avatar", "2022-01-30", "QueryRunningInstance") {
  setMethod(HttpRequest::Method::Post);
}

QueryRunningInstanceRequest::~QueryRunningInstanceRequest() {}

QueryRunningInstanceRequest::App QueryRunningInstanceRequest::getApp() const {
  return app_;
}

void QueryRunningInstanceRequest::setApp(const QueryRunningInstanceRequest::App &app) {
  app_ = app;
  setParameter(std::string("App") + ".AppId", app.appId);
}

long QueryRunningInstanceRequest::getTenantId() const {
  return tenantId_;
}

void QueryRunningInstanceRequest::setTenantId(long tenantId) {
  tenantId_ = tenantId;
  setParameter(std::string("TenantId"), std::to_string(tenantId));
}

std::string QueryRunningInstanceRequest::getSessionId() const {
  return sessionId_;
}

void QueryRunningInstanceRequest::setSessionId(const std::string &sessionId) {
  sessionId_ = sessionId;
  setParameter(std::string("SessionId"), sessionId);
}

