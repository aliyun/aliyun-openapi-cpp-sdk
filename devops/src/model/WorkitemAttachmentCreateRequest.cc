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

#include <alibabacloud/devops/model/WorkitemAttachmentCreateRequest.h>

using AlibabaCloud::Devops::Model::WorkitemAttachmentCreateRequest;

WorkitemAttachmentCreateRequest::WorkitemAttachmentCreateRequest()
    : RoaServiceRequest("devops", "2021-06-25") {
  setResourcePath("/organization/[organizationId]/workitem/[workitemIdentifier]/attachment"};
  setMethod(HttpRequest::Method::Post);
}

WorkitemAttachmentCreateRequest::~WorkitemAttachmentCreateRequest() {}

WorkitemAttachmentCreateRequest::body WorkitemAttachmentCreateRequest::getBody() const {
  return body_;
}

void WorkitemAttachmentCreateRequest::setBody(const WorkitemAttachmentCreateRequest::body &body) {
  body_ = body;
  setBodyParameter(std::string("body") + ".originalFilename", body.originalFilename);
  setBodyParameter(std::string("body") + ".fileKey", body.fileKey);
}

std::string WorkitemAttachmentCreateRequest::getOrganizationId() const {
  return organizationId_;
}

void WorkitemAttachmentCreateRequest::setOrganizationId(const std::string &organizationId) {
  organizationId_ = organizationId;
  setParameter(std::string("organizationId"), organizationId);
}

std::string WorkitemAttachmentCreateRequest::getWorkitemIdentifier() const {
  return workitemIdentifier_;
}

void WorkitemAttachmentCreateRequest::setWorkitemIdentifier(const std::string &workitemIdentifier) {
  workitemIdentifier_ = workitemIdentifier;
  setParameter(std::string("workitemIdentifier"), workitemIdentifier);
}

