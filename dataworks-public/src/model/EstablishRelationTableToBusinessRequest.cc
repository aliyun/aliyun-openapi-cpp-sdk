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

#include <alibabacloud/dataworks-public/model/EstablishRelationTableToBusinessRequest.h>

using AlibabaCloud::Dataworks_public::Model::EstablishRelationTableToBusinessRequest;

EstablishRelationTableToBusinessRequest::EstablishRelationTableToBusinessRequest()
    : RpcServiceRequest("dataworks-public", "2020-05-18", "EstablishRelationTableToBusiness") {
  setMethod(HttpRequest::Method::Post);
}

EstablishRelationTableToBusinessRequest::~EstablishRelationTableToBusinessRequest() {}

std::string EstablishRelationTableToBusinessRequest::getBusinessId() const {
  return businessId_;
}

void EstablishRelationTableToBusinessRequest::setBusinessId(const std::string &businessId) {
  businessId_ = businessId;
  setBodyParameter(std::string("BusinessId"), businessId);
}

std::string EstablishRelationTableToBusinessRequest::getProjectIdentifier() const {
  return projectIdentifier_;
}

void EstablishRelationTableToBusinessRequest::setProjectIdentifier(const std::string &projectIdentifier) {
  projectIdentifier_ = projectIdentifier;
  setBodyParameter(std::string("ProjectIdentifier"), projectIdentifier);
}

std::string EstablishRelationTableToBusinessRequest::getFolderId() const {
  return folderId_;
}

void EstablishRelationTableToBusinessRequest::setFolderId(const std::string &folderId) {
  folderId_ = folderId;
  setBodyParameter(std::string("FolderId"), folderId);
}

std::string EstablishRelationTableToBusinessRequest::getTableGuid() const {
  return tableGuid_;
}

void EstablishRelationTableToBusinessRequest::setTableGuid(const std::string &tableGuid) {
  tableGuid_ = tableGuid;
  setBodyParameter(std::string("TableGuid"), tableGuid);
}

long EstablishRelationTableToBusinessRequest::getProjectId() const {
  return projectId_;
}

void EstablishRelationTableToBusinessRequest::setProjectId(long projectId) {
  projectId_ = projectId;
  setBodyParameter(std::string("ProjectId"), std::to_string(projectId));
}

