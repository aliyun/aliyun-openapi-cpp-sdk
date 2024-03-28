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

#include <alibabacloud/devops/model/GetCustomFieldOptionRequest.h>

using AlibabaCloud::Devops::Model::GetCustomFieldOptionRequest;

GetCustomFieldOptionRequest::GetCustomFieldOptionRequest()
    : RoaServiceRequest("devops", "2021-06-25") {
  setResourcePath("/organization/[organizationId]/fields/[fieldId]/getCustomOption"};
  setMethod(HttpRequest::Method::Get);
}

GetCustomFieldOptionRequest::~GetCustomFieldOptionRequest() {}

std::string GetCustomFieldOptionRequest::getOrganizationId() const {
  return organizationId_;
}

void GetCustomFieldOptionRequest::setOrganizationId(const std::string &organizationId) {
  organizationId_ = organizationId;
  setParameter(std::string("organizationId"), organizationId);
}

std::string GetCustomFieldOptionRequest::getSpaceType() const {
  return spaceType_;
}

void GetCustomFieldOptionRequest::setSpaceType(const std::string &spaceType) {
  spaceType_ = spaceType;
  setParameter(std::string("spaceType"), spaceType);
}

std::string GetCustomFieldOptionRequest::getWorkitemTypeIdentifier() const {
  return workitemTypeIdentifier_;
}

void GetCustomFieldOptionRequest::setWorkitemTypeIdentifier(const std::string &workitemTypeIdentifier) {
  workitemTypeIdentifier_ = workitemTypeIdentifier;
  setParameter(std::string("workitemTypeIdentifier"), workitemTypeIdentifier);
}

std::string GetCustomFieldOptionRequest::getSpaceIdentifier() const {
  return spaceIdentifier_;
}

void GetCustomFieldOptionRequest::setSpaceIdentifier(const std::string &spaceIdentifier) {
  spaceIdentifier_ = spaceIdentifier;
  setParameter(std::string("spaceIdentifier"), spaceIdentifier);
}

std::string GetCustomFieldOptionRequest::getFieldId() const {
  return fieldId_;
}

void GetCustomFieldOptionRequest::setFieldId(const std::string &fieldId) {
  fieldId_ = fieldId;
  setParameter(std::string("fieldId"), fieldId);
}

