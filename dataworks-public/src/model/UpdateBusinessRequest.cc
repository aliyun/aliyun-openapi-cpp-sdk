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

#include <alibabacloud/dataworks-public/model/UpdateBusinessRequest.h>

using AlibabaCloud::Dataworks_public::Model::UpdateBusinessRequest;

UpdateBusinessRequest::UpdateBusinessRequest()
    : RpcServiceRequest("dataworks-public", "2020-05-18", "UpdateBusiness") {
  setMethod(HttpRequest::Method::Post);
}

UpdateBusinessRequest::~UpdateBusinessRequest() {}

std::string UpdateBusinessRequest::getOwner() const {
  return owner_;
}

void UpdateBusinessRequest::setOwner(const std::string &owner) {
  owner_ = owner;
  setBodyParameter(std::string("Owner"), owner);
}

long UpdateBusinessRequest::getBusinessId() const {
  return businessId_;
}

void UpdateBusinessRequest::setBusinessId(long businessId) {
  businessId_ = businessId;
  setBodyParameter(std::string("BusinessId"), std::to_string(businessId));
}

std::string UpdateBusinessRequest::getDescription() const {
  return description_;
}

void UpdateBusinessRequest::setDescription(const std::string &description) {
  description_ = description;
  setBodyParameter(std::string("Description"), description);
}

std::string UpdateBusinessRequest::getProjectIdentifier() const {
  return projectIdentifier_;
}

void UpdateBusinessRequest::setProjectIdentifier(const std::string &projectIdentifier) {
  projectIdentifier_ = projectIdentifier;
  setBodyParameter(std::string("ProjectIdentifier"), projectIdentifier);
}

std::string UpdateBusinessRequest::getBusinessName() const {
  return businessName_;
}

void UpdateBusinessRequest::setBusinessName(const std::string &businessName) {
  businessName_ = businessName;
  setBodyParameter(std::string("BusinessName"), businessName);
}

long UpdateBusinessRequest::getProjectId() const {
  return projectId_;
}

void UpdateBusinessRequest::setProjectId(long projectId) {
  projectId_ = projectId;
  setBodyParameter(std::string("ProjectId"), std::to_string(projectId));
}

