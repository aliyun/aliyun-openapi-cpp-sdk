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

#include <alibabacloud/avatar/model/QueryTimedResetOperateStatusRequest.h>

using AlibabaCloud::Avatar::Model::QueryTimedResetOperateStatusRequest;

QueryTimedResetOperateStatusRequest::QueryTimedResetOperateStatusRequest()
    : RpcServiceRequest("avatar", "2022-01-30", "QueryTimedResetOperateStatus") {
  setMethod(HttpRequest::Method::Post);
}

QueryTimedResetOperateStatusRequest::~QueryTimedResetOperateStatusRequest() {}

std::string QueryTimedResetOperateStatusRequest::getInstanceId() const {
  return instanceId_;
}

void QueryTimedResetOperateStatusRequest::setInstanceId(const std::string &instanceId) {
  instanceId_ = instanceId;
  setParameter(std::string("InstanceId"), instanceId);
}

long QueryTimedResetOperateStatusRequest::getTenantId() const {
  return tenantId_;
}

void QueryTimedResetOperateStatusRequest::setTenantId(long tenantId) {
  tenantId_ = tenantId;
  setParameter(std::string("TenantId"), std::to_string(tenantId));
}

