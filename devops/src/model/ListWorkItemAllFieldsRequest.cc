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

#include <alibabacloud/devops/model/ListWorkItemAllFieldsRequest.h>

using AlibabaCloud::Devops::Model::ListWorkItemAllFieldsRequest;

ListWorkItemAllFieldsRequest::ListWorkItemAllFieldsRequest()
    : RoaServiceRequest("devops", "2021-06-25") {
  setResourcePath("/organization/[organizationId]/workitems/fields/listAll"};
  setMethod(HttpRequest::Method::Get);
}

ListWorkItemAllFieldsRequest::~ListWorkItemAllFieldsRequest() {}

std::string ListWorkItemAllFieldsRequest::getOrganizationId() const {
  return organizationId_;
}

void ListWorkItemAllFieldsRequest::setOrganizationId(const std::string &organizationId) {
  organizationId_ = organizationId;
  setParameter(std::string("organizationId"), organizationId);
}

std::string ListWorkItemAllFieldsRequest::getSpaceType() const {
  return spaceType_;
}

void ListWorkItemAllFieldsRequest::setSpaceType(const std::string &spaceType) {
  spaceType_ = spaceType;
  setParameter(std::string("spaceType"), spaceType);
}

std::string ListWorkItemAllFieldsRequest::getWorkitemTypeIdentifier() const {
  return workitemTypeIdentifier_;
}

void ListWorkItemAllFieldsRequest::setWorkitemTypeIdentifier(const std::string &workitemTypeIdentifier) {
  workitemTypeIdentifier_ = workitemTypeIdentifier;
  setParameter(std::string("workitemTypeIdentifier"), workitemTypeIdentifier);
}

std::string ListWorkItemAllFieldsRequest::getSpaceIdentifier() const {
  return spaceIdentifier_;
}

void ListWorkItemAllFieldsRequest::setSpaceIdentifier(const std::string &spaceIdentifier) {
  spaceIdentifier_ = spaceIdentifier;
  setParameter(std::string("spaceIdentifier"), spaceIdentifier);
}

