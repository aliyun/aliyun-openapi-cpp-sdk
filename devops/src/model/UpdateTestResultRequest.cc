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

#include <alibabacloud/devops/model/UpdateTestResultRequest.h>

using AlibabaCloud::Devops::Model::UpdateTestResultRequest;

UpdateTestResultRequest::UpdateTestResultRequest()
    : RoaServiceRequest("devops", "2021-06-25") {
  setResourcePath("/organization/[organizationId]/testhub/testplan/[testPlanIdentifier]/testresult/[testcaseIdentifier]"};
  setMethod(HttpRequest::Method::Put);
}

UpdateTestResultRequest::~UpdateTestResultRequest() {}

std::string UpdateTestResultRequest::getTestcaseIdentifier() const {
  return testcaseIdentifier_;
}

void UpdateTestResultRequest::setTestcaseIdentifier(const std::string &testcaseIdentifier) {
  testcaseIdentifier_ = testcaseIdentifier;
  setParameter(std::string("testcaseIdentifier"), testcaseIdentifier);
}

UpdateTestResultRequest::body UpdateTestResultRequest::getBody() const {
  return body_;
}

void UpdateTestResultRequest::setBody(const UpdateTestResultRequest::body &body) {
  body_ = body;
  setBodyParameter(std::string("body") + ".executor", body.executor);
  setBodyParameter(std::string("body") + ".status", body.status);
}

std::string UpdateTestResultRequest::getOrganizationId() const {
  return organizationId_;
}

void UpdateTestResultRequest::setOrganizationId(const std::string &organizationId) {
  organizationId_ = organizationId;
  setParameter(std::string("organizationId"), organizationId);
}

std::string UpdateTestResultRequest::getTestPlanIdentifier() const {
  return testPlanIdentifier_;
}

void UpdateTestResultRequest::setTestPlanIdentifier(const std::string &testPlanIdentifier) {
  testPlanIdentifier_ = testPlanIdentifier;
  setParameter(std::string("testPlanIdentifier"), testPlanIdentifier);
}

