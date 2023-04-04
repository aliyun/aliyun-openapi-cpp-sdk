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

#include <alibabacloud/avatar/model/GetVideoTaskInfoRequest.h>

using AlibabaCloud::Avatar::Model::GetVideoTaskInfoRequest;

GetVideoTaskInfoRequest::GetVideoTaskInfoRequest()
    : RpcServiceRequest("avatar", "2022-01-30", "GetVideoTaskInfo") {
  setMethod(HttpRequest::Method::Get);
}

GetVideoTaskInfoRequest::~GetVideoTaskInfoRequest() {}

GetVideoTaskInfoRequest::App GetVideoTaskInfoRequest::getApp() const {
  return app_;
}

void GetVideoTaskInfoRequest::setApp(const GetVideoTaskInfoRequest::App &app) {
  app_ = app;
  setParameter(std::string("App") + ".AppId", app.appId);
}

long GetVideoTaskInfoRequest::getTenantId() const {
  return tenantId_;
}

void GetVideoTaskInfoRequest::setTenantId(long tenantId) {
  tenantId_ = tenantId;
  setParameter(std::string("TenantId"), std::to_string(tenantId));
}

std::string GetVideoTaskInfoRequest::getTaskUuid() const {
  return taskUuid_;
}

void GetVideoTaskInfoRequest::setTaskUuid(const std::string &taskUuid) {
  taskUuid_ = taskUuid;
  setParameter(std::string("TaskUuid"), taskUuid);
}

