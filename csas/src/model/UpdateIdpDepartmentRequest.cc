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

#include <alibabacloud/csas/model/UpdateIdpDepartmentRequest.h>

using AlibabaCloud::Csas::Model::UpdateIdpDepartmentRequest;

UpdateIdpDepartmentRequest::UpdateIdpDepartmentRequest()
    : RpcServiceRequest("csas", "2023-01-20", "UpdateIdpDepartment") {
  setMethod(HttpRequest::Method::Post);
}

UpdateIdpDepartmentRequest::~UpdateIdpDepartmentRequest() {}

std::string UpdateIdpDepartmentRequest::getDepartmentId() const {
  return departmentId_;
}

void UpdateIdpDepartmentRequest::setDepartmentId(const std::string &departmentId) {
  departmentId_ = departmentId;
  setParameter(std::string("DepartmentId"), departmentId);
}

std::string UpdateIdpDepartmentRequest::getIdpConfigId() const {
  return idpConfigId_;
}

void UpdateIdpDepartmentRequest::setIdpConfigId(const std::string &idpConfigId) {
  idpConfigId_ = idpConfigId;
  setParameter(std::string("IdpConfigId"), idpConfigId);
}

std::string UpdateIdpDepartmentRequest::getDepartmentName() const {
  return departmentName_;
}

void UpdateIdpDepartmentRequest::setDepartmentName(const std::string &departmentName) {
  departmentName_ = departmentName;
  setParameter(std::string("DepartmentName"), departmentName);
}

