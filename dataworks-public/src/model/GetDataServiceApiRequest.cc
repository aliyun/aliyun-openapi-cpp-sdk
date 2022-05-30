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

#include <alibabacloud/dataworks-public/model/GetDataServiceApiRequest.h>

using AlibabaCloud::Dataworks_public::Model::GetDataServiceApiRequest;

GetDataServiceApiRequest::GetDataServiceApiRequest()
    : RpcServiceRequest("dataworks-public", "2020-05-18", "GetDataServiceApi") {
  setMethod(HttpRequest::Method::Post);
}

GetDataServiceApiRequest::~GetDataServiceApiRequest() {}

long GetDataServiceApiRequest::getTenantId() const {
  return tenantId_;
}

void GetDataServiceApiRequest::setTenantId(long tenantId) {
  tenantId_ = tenantId;
  setBodyParameter(std::string("TenantId"), std::to_string(tenantId));
}

long GetDataServiceApiRequest::getProjectId() const {
  return projectId_;
}

void GetDataServiceApiRequest::setProjectId(long projectId) {
  projectId_ = projectId;
  setBodyParameter(std::string("ProjectId"), std::to_string(projectId));
}

long GetDataServiceApiRequest::getApiId() const {
  return apiId_;
}

void GetDataServiceApiRequest::setApiId(long apiId) {
  apiId_ = apiId;
  setBodyParameter(std::string("ApiId"), std::to_string(apiId));
}

