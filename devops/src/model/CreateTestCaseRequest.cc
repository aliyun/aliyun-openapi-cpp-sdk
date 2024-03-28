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

#include <alibabacloud/devops/model/CreateTestCaseRequest.h>

using AlibabaCloud::Devops::Model::CreateTestCaseRequest;

CreateTestCaseRequest::CreateTestCaseRequest()
    : RoaServiceRequest("devops", "2021-06-25") {
  setResourcePath("/organization/[organizationId]/testhub/testcase"};
  setMethod(HttpRequest::Method::Post);
}

CreateTestCaseRequest::~CreateTestCaseRequest() {}

CreateTestCaseRequest::body CreateTestCaseRequest::getBody() const {
  return body_;
}

void CreateTestCaseRequest::setBody(const CreateTestCaseRequest::body &body) {
  body_ = body;
  for(int dep1 = 0; dep1 != body.fieldValueList.size(); dep1++) {
    setBodyParameter(std::string("body") + ".fieldValueList." + std::to_string(dep1 + 1) + ".fieldIdentifier", body.fieldValueList[dep1].fieldIdentifier);
    setBodyParameter(std::string("body") + ".fieldValueList." + std::to_string(dep1 + 1) + ".value", body.fieldValueList[dep1].value);
  }
  setBodyParameter(std::string("body") + ".subject", body.subject);
  setBodyParameter(std::string("body") + ".testcaseStepContentInfo.stepType", body.testcaseStepContentInfo.stepType);
  setBodyParameter(std::string("body") + ".testcaseStepContentInfo.precondition", body.testcaseStepContentInfo.precondition);
  for(int dep1 = 0; dep1 != body.testcaseStepContentInfo.stepResultList.size(); dep1++) {
    setBodyParameter(std::string("body") + ".testcaseStepContentInfo.stepResultList." + std::to_string(dep1 + 1) + ".expected", body.testcaseStepContentInfo.stepResultList[dep1].expected);
    setBodyParameter(std::string("body") + ".testcaseStepContentInfo.stepResultList." + std::to_string(dep1 + 1) + ".step", body.testcaseStepContentInfo.stepResultList[dep1].step);
  }
  setBodyParameter(std::string("body") + ".spaceIdentifier", body.spaceIdentifier);
  setBodyParameter(std::string("body") + ".priority", body.priority);
  setBodyParameter(std::string("body") + ".directoryIdentifier", body.directoryIdentifier);
  setBodyParameter(std::string("body") + ".assignedTo", body.assignedTo);
  for(int dep1 = 0; dep1 != body.tags.size(); dep1++) {
    setBodyParameter(std::string("body") + ".tags." + std::to_string(dep1 + 1), body.tags[dep1]);
  }
}

std::string CreateTestCaseRequest::getOrganizationId() const {
  return organizationId_;
}

void CreateTestCaseRequest::setOrganizationId(const std::string &organizationId) {
  organizationId_ = organizationId;
  setParameter(std::string("organizationId"), organizationId);
}

