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

#include <alibabacloud/csas/model/CreateIdpDepartmentRequest.h>

using AlibabaCloud::Csas::Model::CreateIdpDepartmentRequest;

CreateIdpDepartmentRequest::CreateIdpDepartmentRequest()
    : RpcServiceRequest("csas", "2023-01-20", "CreateIdpDepartment") {
  setMethod(HttpRequest::Method::Post);
}

CreateIdpDepartmentRequest::~CreateIdpDepartmentRequest() {}

std::string CreateIdpDepartmentRequest::getIdpConfigId() const {
  return idpConfigId_;
}

void CreateIdpDepartmentRequest::setIdpConfigId(const std::string &idpConfigId) {
  idpConfigId_ = idpConfigId;
  setParameter(std::string("IdpConfigId"), idpConfigId);
}

std::string CreateIdpDepartmentRequest::getDepartmentName() const {
  return departmentName_;
}

void CreateIdpDepartmentRequest::setDepartmentName(const std::string &departmentName) {
  departmentName_ = departmentName;
  setParameter(std::string("DepartmentName"), departmentName);
}

