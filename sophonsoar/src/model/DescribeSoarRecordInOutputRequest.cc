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

#include <alibabacloud/sophonsoar/model/DescribeSoarRecordInOutputRequest.h>

using AlibabaCloud::Sophonsoar::Model::DescribeSoarRecordInOutputRequest;

DescribeSoarRecordInOutputRequest::DescribeSoarRecordInOutputRequest()
    : RpcServiceRequest("sophonsoar", "2022-07-28", "DescribeSoarRecordInOutput") {
  setMethod(HttpRequest::Method::Get);
}

DescribeSoarRecordInOutputRequest::~DescribeSoarRecordInOutputRequest() {}

std::string DescribeSoarRecordInOutputRequest::getActionUuid() const {
  return actionUuid_;
}

void DescribeSoarRecordInOutputRequest::setActionUuid(const std::string &actionUuid) {
  actionUuid_ = actionUuid;
  setParameter(std::string("ActionUuid"), actionUuid);
}

std::string DescribeSoarRecordInOutputRequest::getRoleFor() const {
  return roleFor_;
}

void DescribeSoarRecordInOutputRequest::setRoleFor(const std::string &roleFor) {
  roleFor_ = roleFor;
  setParameter(std::string("RoleFor"), roleFor);
}

std::string DescribeSoarRecordInOutputRequest::getRoleType() const {
  return roleType_;
}

void DescribeSoarRecordInOutputRequest::setRoleType(const std::string &roleType) {
  roleType_ = roleType;
  setParameter(std::string("RoleType"), roleType);
}

std::string DescribeSoarRecordInOutputRequest::getLang() const {
  return lang_;
}

void DescribeSoarRecordInOutputRequest::setLang(const std::string &lang) {
  lang_ = lang;
  setParameter(std::string("Lang"), lang);
}

