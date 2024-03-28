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

#include <alibabacloud/devops/model/CreateWorkitemRecordRequest.h>

using AlibabaCloud::Devops::Model::CreateWorkitemRecordRequest;

CreateWorkitemRecordRequest::CreateWorkitemRecordRequest()
    : RoaServiceRequest("devops", "2021-06-25") {
  setResourcePath("/organization/[organizationId]/workitems/record"};
  setMethod(HttpRequest::Method::Post);
}

CreateWorkitemRecordRequest::~CreateWorkitemRecordRequest() {}

CreateWorkitemRecordRequest::body CreateWorkitemRecordRequest::getBody() const {
  return body_;
}

void CreateWorkitemRecordRequest::setBody(const CreateWorkitemRecordRequest::body &body) {
  body_ = body;
  setBodyParameter(std::string("body") + ".recordUserIdentifier", body.recordUserIdentifier);
  setBodyParameter(std::string("body") + ".actualTime", body.actualTime);
  setBodyParameter(std::string("body") + ".gmtEnd", body.gmtEnd);
  setBodyParameter(std::string("body") + ".description", body.description);
  setBodyParameter(std::string("body") + ".gmtStart", body.gmtStart);
  setBodyParameter(std::string("body") + ".workitemIdentifier", body.workitemIdentifier);
  setBodyParameter(std::string("body") + ".type", body.type);
}

std::string CreateWorkitemRecordRequest::getOrganizationId() const {
  return organizationId_;
}

void CreateWorkitemRecordRequest::setOrganizationId(const std::string &organizationId) {
  organizationId_ = organizationId;
  setParameter(std::string("organizationId"), organizationId);
}

