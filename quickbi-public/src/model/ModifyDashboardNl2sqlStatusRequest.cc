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

#include <alibabacloud/quickbi-public/model/ModifyDashboardNl2sqlStatusRequest.h>

using AlibabaCloud::Quickbi_public::Model::ModifyDashboardNl2sqlStatusRequest;

ModifyDashboardNl2sqlStatusRequest::ModifyDashboardNl2sqlStatusRequest()
    : RpcServiceRequest("quickbi-public", "2022-01-01", "ModifyDashboardNl2sqlStatus") {
  setMethod(HttpRequest::Method::Post);
}

ModifyDashboardNl2sqlStatusRequest::~ModifyDashboardNl2sqlStatusRequest() {}

std::string ModifyDashboardNl2sqlStatusRequest::getAccessPoint() const {
  return accessPoint_;
}

void ModifyDashboardNl2sqlStatusRequest::setAccessPoint(const std::string &accessPoint) {
  accessPoint_ = accessPoint;
  setParameter(std::string("AccessPoint"), accessPoint);
}

std::string ModifyDashboardNl2sqlStatusRequest::getSignType() const {
  return signType_;
}

void ModifyDashboardNl2sqlStatusRequest::setSignType(const std::string &signType) {
  signType_ = signType;
  setParameter(std::string("SignType"), signType);
}

std::string ModifyDashboardNl2sqlStatusRequest::getDashboardIds() const {
  return dashboardIds_;
}

void ModifyDashboardNl2sqlStatusRequest::setDashboardIds(const std::string &dashboardIds) {
  dashboardIds_ = dashboardIds;
  setParameter(std::string("DashboardIds"), dashboardIds);
}

int ModifyDashboardNl2sqlStatusRequest::getStatus() const {
  return status_;
}

void ModifyDashboardNl2sqlStatusRequest::setStatus(int status) {
  status_ = status;
  setParameter(std::string("Status"), std::to_string(status));
}

