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

#include <alibabacloud/ice/model/DeleteEditingProjectMaterialsRequest.h>

using AlibabaCloud::ICE::Model::DeleteEditingProjectMaterialsRequest;

DeleteEditingProjectMaterialsRequest::DeleteEditingProjectMaterialsRequest()
    : RpcServiceRequest("ice", "2020-11-09", "DeleteEditingProjectMaterials") {
  setMethod(HttpRequest::Method::Post);
}

DeleteEditingProjectMaterialsRequest::~DeleteEditingProjectMaterialsRequest() {}

std::string DeleteEditingProjectMaterialsRequest::getMaterialType() const {
  return materialType_;
}

void DeleteEditingProjectMaterialsRequest::setMaterialType(const std::string &materialType) {
  materialType_ = materialType;
  setParameter(std::string("MaterialType"), materialType);
}

std::string DeleteEditingProjectMaterialsRequest::getMaterialIds() const {
  return materialIds_;
}

void DeleteEditingProjectMaterialsRequest::setMaterialIds(const std::string &materialIds) {
  materialIds_ = materialIds;
  setParameter(std::string("MaterialIds"), materialIds);
}

std::string DeleteEditingProjectMaterialsRequest::getProjectId() const {
  return projectId_;
}

void DeleteEditingProjectMaterialsRequest::setProjectId(const std::string &projectId) {
  projectId_ = projectId;
  setParameter(std::string("ProjectId"), projectId);
}

