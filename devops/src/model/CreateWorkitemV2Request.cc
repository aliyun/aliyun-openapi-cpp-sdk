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

#include <alibabacloud/devops/model/CreateWorkitemV2Request.h>

using AlibabaCloud::Devops::Model::CreateWorkitemV2Request;

CreateWorkitemV2Request::CreateWorkitemV2Request()
    : RoaServiceRequest("devops", "2021-06-25") {
  setResourcePath("/organization/[organizationId]/workitem"};
  setMethod(HttpRequest::Method::Post);
}

CreateWorkitemV2Request::~CreateWorkitemV2Request() {}

CreateWorkitemV2Request::body CreateWorkitemV2Request::getBody() const {
  return body_;
}

void CreateWorkitemV2Request::setBody(const CreateWorkitemV2Request::body &body) {
  body_ = body;
  for(int dep1 = 0; dep1 != body.trackers.size(); dep1++) {
    setBodyParameter(std::string("body") + ".trackers." + std::to_string(dep1 + 1), body.trackers[dep1]);
  }
  setBodyParameter(std::string("body") + ".subject", body.subject);
  setBodyParameter(std::string("body") + ".sprintIdentifier", body.sprintIdentifier);
  setBodyParameter(std::string("body") + ".description", body.description);
  setBodyParameter(std::string("body") + ".assignedTo", body.assignedTo);
  for(int dep1 = 0; dep1 != body.tags.size(); dep1++) {
    setBodyParameter(std::string("body") + ".tags." + std::to_string(dep1 + 1), body.tags[dep1]);
  }
  for(int dep1 = 0; dep1 != body.fieldValueList.size(); dep1++) {
    setBodyParameter(std::string("body") + ".fieldValueList." + std::to_string(dep1 + 1) + ".fieldIdentifier", body.fieldValueList[dep1].fieldIdentifier);
    setBodyParameter(std::string("body") + ".fieldValueList." + std::to_string(dep1 + 1) + ".value", body.fieldValueList[dep1].value);
  }
  setBodyParameter(std::string("body") + ".workitemTypeIdentifier", body.workitemTypeIdentifier);
  for(int dep1 = 0; dep1 != body.versions.size(); dep1++) {
    setBodyParameter(std::string("body") + ".versions." + std::to_string(dep1 + 1), body.versions[dep1]);
  }
  setBodyParameter(std::string("body") + ".verifier", body.verifier);
  setBodyParameter(std::string("body") + ".spaceIdentifier", body.spaceIdentifier);
  setBodyParameter(std::string("body") + ".parentIdentifier", body.parentIdentifier);
  setBodyParameter(std::string("body") + ".category", body.category);
  for(int dep1 = 0; dep1 != body.participants.size(); dep1++) {
    setBodyParameter(std::string("body") + ".participants." + std::to_string(dep1 + 1), body.participants[dep1]);
  }
}

std::string CreateWorkitemV2Request::getOrganizationId() const {
  return organizationId_;
}

void CreateWorkitemV2Request::setOrganizationId(const std::string &organizationId) {
  organizationId_ = organizationId;
  setParameter(std::string("organizationId"), organizationId);
}

