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

#include <alibabacloud/dataworks-public/model/GetDataServiceFolderRequest.h>

using AlibabaCloud::Dataworks_public::Model::GetDataServiceFolderRequest;

GetDataServiceFolderRequest::GetDataServiceFolderRequest()
    : RpcServiceRequest("dataworks-public", "2020-05-18", "GetDataServiceFolder") {
  setMethod(HttpRequest::Method::Post);
}

GetDataServiceFolderRequest::~GetDataServiceFolderRequest() {}

long GetDataServiceFolderRequest::getFolderId() const {
  return folderId_;
}

void GetDataServiceFolderRequest::setFolderId(long folderId) {
  folderId_ = folderId;
  setBodyParameter(std::string("FolderId"), std::to_string(folderId));
}

long GetDataServiceFolderRequest::getTenantId() const {
  return tenantId_;
}

void GetDataServiceFolderRequest::setTenantId(long tenantId) {
  tenantId_ = tenantId;
  setBodyParameter(std::string("TenantId"), std::to_string(tenantId));
}

long GetDataServiceFolderRequest::getProjectId() const {
  return projectId_;
}

void GetDataServiceFolderRequest::setProjectId(long projectId) {
  projectId_ = projectId;
  setBodyParameter(std::string("ProjectId"), std::to_string(projectId));
}

