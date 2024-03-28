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

#include <alibabacloud/devops/model/GetTestResultListRequest.h>

using AlibabaCloud::Devops::Model::GetTestResultListRequest;

GetTestResultListRequest::GetTestResultListRequest()
    : RoaServiceRequest("devops", "2021-06-25") {
  setResourcePath("/organization/[organizationId]/testhub/testplan/[testPlanIdentifier]/testresults"};
  setMethod(HttpRequest::Method::Post);
}

GetTestResultListRequest::~GetTestResultListRequest() {}

GetTestResultListRequest::body GetTestResultListRequest::getBody() const {
  return body_;
}

void GetTestResultListRequest::setBody(const GetTestResultListRequest::body &body) {
  body_ = body;
  setBodyParameter(std::string("body") + ".conditions", body.conditions);
  setBodyParameter(std::string("body") + ".directoryIdentifier", body.directoryIdentifier);
}

std::string GetTestResultListRequest::getOrganizationId() const {
  return organizationId_;
}

void GetTestResultListRequest::setOrganizationId(const std::string &organizationId) {
  organizationId_ = organizationId;
  setParameter(std::string("organizationId"), organizationId);
}

std::string GetTestResultListRequest::getTestPlanIdentifier() const {
  return testPlanIdentifier_;
}

void GetTestResultListRequest::setTestPlanIdentifier(const std::string &testPlanIdentifier) {
  testPlanIdentifier_ = testPlanIdentifier;
  setParameter(std::string("testPlanIdentifier"), testPlanIdentifier);
}

