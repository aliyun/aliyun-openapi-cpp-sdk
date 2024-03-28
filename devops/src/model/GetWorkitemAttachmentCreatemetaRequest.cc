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

#include <alibabacloud/devops/model/GetWorkitemAttachmentCreatemetaRequest.h>

using AlibabaCloud::Devops::Model::GetWorkitemAttachmentCreatemetaRequest;

GetWorkitemAttachmentCreatemetaRequest::GetWorkitemAttachmentCreatemetaRequest()
    : RoaServiceRequest("devops", "2021-06-25") {
  setResourcePath("/organization/[organizationId]/workitem/[workitemIdentifier]/attachment/createmeta"};
  setMethod(HttpRequest::Method::Get);
}

GetWorkitemAttachmentCreatemetaRequest::~GetWorkitemAttachmentCreatemetaRequest() {}

std::string GetWorkitemAttachmentCreatemetaRequest::getOrganizationId() const {
  return organizationId_;
}

void GetWorkitemAttachmentCreatemetaRequest::setOrganizationId(const std::string &organizationId) {
  organizationId_ = organizationId;
  setParameter(std::string("organizationId"), organizationId);
}

std::string GetWorkitemAttachmentCreatemetaRequest::getFileName() const {
  return fileName_;
}

void GetWorkitemAttachmentCreatemetaRequest::setFileName(const std::string &fileName) {
  fileName_ = fileName;
  setParameter(std::string("fileName"), fileName);
}

std::string GetWorkitemAttachmentCreatemetaRequest::getWorkitemIdentifier() const {
  return workitemIdentifier_;
}

void GetWorkitemAttachmentCreatemetaRequest::setWorkitemIdentifier(const std::string &workitemIdentifier) {
  workitemIdentifier_ = workitemIdentifier;
  setParameter(std::string("workitemIdentifier"), workitemIdentifier);
}

