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

#include <alibabacloud/dataworks-public/model/GetDataServiceApplicationRequest.h>

using AlibabaCloud::Dataworks_public::Model::GetDataServiceApplicationRequest;

GetDataServiceApplicationRequest::GetDataServiceApplicationRequest()
    : RpcServiceRequest("dataworks-public", "2020-05-18", "GetDataServiceApplication") {
  setMethod(HttpRequest::Method::Post);
}

GetDataServiceApplicationRequest::~GetDataServiceApplicationRequest() {}

long GetDataServiceApplicationRequest::getTenantId() const {
  return tenantId_;
}

void GetDataServiceApplicationRequest::setTenantId(long tenantId) {
  tenantId_ = tenantId;
  setBodyParameter(std::string("TenantId"), std::to_string(tenantId));
}

long GetDataServiceApplicationRequest::getApplicationId() const {
  return applicationId_;
}

void GetDataServiceApplicationRequest::setApplicationId(long applicationId) {
  applicationId_ = applicationId;
  setBodyParameter(std::string("ApplicationId"), std::to_string(applicationId));
}

long GetDataServiceApplicationRequest::getProjectId() const {
  return projectId_;
}

void GetDataServiceApplicationRequest::setProjectId(long projectId) {
  projectId_ = projectId;
  setBodyParameter(std::string("ProjectId"), std::to_string(projectId));
}

