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

#include <alibabacloud/devops/model/UpdateWorkitemCommentRequest.h>

using AlibabaCloud::Devops::Model::UpdateWorkitemCommentRequest;

UpdateWorkitemCommentRequest::UpdateWorkitemCommentRequest()
    : RoaServiceRequest("devops", "2021-06-25") {
  setResourcePath("/organization/[organizationId]/workitems/commentUpdate"};
  setMethod(HttpRequest::Method::Post);
}

UpdateWorkitemCommentRequest::~UpdateWorkitemCommentRequest() {}

UpdateWorkitemCommentRequest::body UpdateWorkitemCommentRequest::getBody() const {
  return body_;
}

void UpdateWorkitemCommentRequest::setBody(const UpdateWorkitemCommentRequest::body &body) {
  body_ = body;
  setBodyParameter(std::string("body") + ".commentId", std::to_string(body.commentId));
  setBodyParameter(std::string("body") + ".formatType", body.formatType);
  setBodyParameter(std::string("body") + ".workitemIdentifier", body.workitemIdentifier);
  setBodyParameter(std::string("body") + ".content", body.content);
}

std::string UpdateWorkitemCommentRequest::getOrganizationId() const {
  return organizationId_;
}

void UpdateWorkitemCommentRequest::setOrganizationId(const std::string &organizationId) {
  organizationId_ = organizationId;
  setParameter(std::string("organizationId"), organizationId);
}

