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

#include <alibabacloud/devops-rdc/model/BatchInsertMembersRequest.h>

using AlibabaCloud::Devops_rdc::Model::BatchInsertMembersRequest;

BatchInsertMembersRequest::BatchInsertMembersRequest()
    : RpcServiceRequest("devops-rdc", "2020-03-03", "BatchInsertMembers") {
  setMethod(HttpRequest::Method::Post);
}

BatchInsertMembersRequest::~BatchInsertMembersRequest() {}

std::string BatchInsertMembersRequest::getMembers() const {
  return members_;
}

void BatchInsertMembersRequest::setMembers(const std::string &members) {
  members_ = members;
  setBodyParameter(std::string("Members"), members);
}

std::string BatchInsertMembersRequest::getRealPk() const {
  return realPk_;
}

void BatchInsertMembersRequest::setRealPk(const std::string &realPk) {
  realPk_ = realPk;
  setBodyParameter(std::string("RealPk"), realPk);
}

std::string BatchInsertMembersRequest::getOrgId() const {
  return orgId_;
}

void BatchInsertMembersRequest::setOrgId(const std::string &orgId) {
  orgId_ = orgId;
  setBodyParameter(std::string("OrgId"), orgId);
}

