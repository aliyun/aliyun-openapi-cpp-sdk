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

#include <alibabacloud/devops/model/UpdateTestCaseRequest.h>

using AlibabaCloud::Devops::Model::UpdateTestCaseRequest;

UpdateTestCaseRequest::UpdateTestCaseRequest()
    : RoaServiceRequest("devops", "2021-06-25") {
  setResourcePath("/organization/[organizationId]/testhub/testcase/[testcaseIdentifier]"};
  setMethod(HttpRequest::Method::Put);
}

UpdateTestCaseRequest::~UpdateTestCaseRequest() {}

std::string UpdateTestCaseRequest::getTestcaseIdentifier() const {
  return testcaseIdentifier_;
}

void UpdateTestCaseRequest::setTestcaseIdentifier(const std::string &testcaseIdentifier) {
  testcaseIdentifier_ = testcaseIdentifier;
  setParameter(std::string("testcaseIdentifier"), testcaseIdentifier);
}

UpdateTestCaseRequest::body UpdateTestCaseRequest::getBody() const {
  return body_;
}

void UpdateTestCaseRequest::setBody(const UpdateTestCaseRequest::body &body) {
  body_ = body;
  for(int dep1 = 0; dep1 != body.updateWorkitemPropertyRequest.size(); dep1++) {
    setBodyParameter(std::string("body") + ".updateWorkitemPropertyRequest." + std::to_string(dep1 + 1) + ".fieldIdentifier", body.updateWorkitemPropertyRequest[dep1].fieldIdentifier);
    setBodyParameter(std::string("body") + ".updateWorkitemPropertyRequest." + std::to_string(dep1 + 1) + ".fieldValue", body.updateWorkitemPropertyRequest[dep1].fieldValue);
  }
}

std::string UpdateTestCaseRequest::getOrganizationId() const {
  return organizationId_;
}

void UpdateTestCaseRequest::setOrganizationId(const std::string &organizationId) {
  organizationId_ = organizationId;
  setParameter(std::string("organizationId"), organizationId);
}

