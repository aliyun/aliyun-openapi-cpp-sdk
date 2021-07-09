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

#include <alibabacloud/devops-rdc/model/GetUserNameRequest.h>

using AlibabaCloud::Devops_rdc::Model::GetUserNameRequest;

GetUserNameRequest::GetUserNameRequest()
    : RpcServiceRequest("devops-rdc", "2020-03-03", "GetUserName") {
  setMethod(HttpRequest::Method::Post);
}

GetUserNameRequest::~GetUserNameRequest() {}

std::string GetUserNameRequest::getUserId() const {
  return userId_;
}

void GetUserNameRequest::setUserId(const std::string &userId) {
  userId_ = userId;
  setBodyParameter(std::string("UserId"), userId);
}

std::string GetUserNameRequest::getOrgId() const {
  return orgId_;
}

void GetUserNameRequest::setOrgId(const std::string &orgId) {
  orgId_ = orgId;
  setBodyParameter(std::string("OrgId"), orgId);
}

