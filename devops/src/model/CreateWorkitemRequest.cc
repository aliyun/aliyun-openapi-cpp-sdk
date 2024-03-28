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

#include <alibabacloud/devops/model/CreateWorkitemRequest.h>

using AlibabaCloud::Devops::Model::CreateWorkitemRequest;

CreateWorkitemRequest::CreateWorkitemRequest()
    : RoaServiceRequest("devops", "2021-06-25") {
  setResourcePath("/organization/[organizationId]/workitems/create"};
  setMethod(HttpRequest::Method::Post);
}

CreateWorkitemRequest::~CreateWorkitemRequest() {}

CreateWorkitemRequest::body CreateWorkitemRequest::getBody() const {
  return body_;
}

void CreateWorkitemRequest::setBody(const CreateWorkitemRequest::body &body) {
  body_ = body;
  setBodyParameter(std::string("body") + ".parent", body.parent);
  setBodyParameter(std::string("body") + ".subject", body.subject);
  for(int dep1 = 0; dep1 != body.sprint.size(); dep1++) {
    setBodyParameter(std::string("body") + ".sprint." + std::to_string(dep1 + 1), body.sprint[dep1]);
  }
  setBodyParameter(std::string("body") + ".description", body.description);
  setBodyParameter(std::string("body") + ".assignedTo", body.assignedTo);
  setBodyParameter(std::string("body") + ".space", body.space);
  for(int dep1 = 0; dep1 != body.participant.size(); dep1++) {
    setBodyParameter(std::string("body") + ".participant." + std::to_string(dep1 + 1), body.participant[dep1]);
  }
  for(int dep1 = 0; dep1 != body.fieldValueList.size(); dep1++) {
    setBodyParameter(std::string("body") + ".fieldValueList." + std::to_string(dep1 + 1) + ".fieldIdentifier", body.fieldValueList[dep1].fieldIdentifier);
    setBodyParameter(std::string("body") + ".fieldValueList." + std::to_string(dep1 + 1) + ".workitemIdentifier", body.fieldValueList[dep1].workitemIdentifier);
    setBodyParameter(std::string("body") + ".fieldValueList." + std::to_string(dep1 + 1) + ".value", body.fieldValueList[dep1].value);
  }
  setBodyParameter(std::string("body") + ".spaceType", body.spaceType);
  setBodyParameter(std::string("body") + ".workitemType", body.workitemType);
  for(int dep1 = 0; dep1 != body.verifier.size(); dep1++) {
    setBodyParameter(std::string("body") + ".verifier." + std::to_string(dep1 + 1), body.verifier[dep1]);
  }
  for(int dep1 = 0; dep1 != body.tracker.size(); dep1++) {
    setBodyParameter(std::string("body") + ".tracker." + std::to_string(dep1 + 1), body.tracker[dep1]);
  }
  setBodyParameter(std::string("body") + ".descriptionFormat", body.descriptionFormat);
  setBodyParameter(std::string("body") + ".spaceIdentifier", body.spaceIdentifier);
  setBodyParameter(std::string("body") + ".category", body.category);
}

std::string CreateWorkitemRequest::getOrganizationId() const {
  return organizationId_;
}

void CreateWorkitemRequest::setOrganizationId(const std::string &organizationId) {
  organizationId_ = organizationId;
  setParameter(std::string("organizationId"), organizationId);
}

