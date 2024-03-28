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

#include <alibabacloud/devops/model/GetTestcaseListRequest.h>

using AlibabaCloud::Devops::Model::GetTestcaseListRequest;

GetTestcaseListRequest::GetTestcaseListRequest()
    : RoaServiceRequest("devops", "2021-06-25") {
  setResourcePath("/organization/[organizationId]/testhub/testcases"};
  setMethod(HttpRequest::Method::Post);
}

GetTestcaseListRequest::~GetTestcaseListRequest() {}

GetTestcaseListRequest::body GetTestcaseListRequest::getBody() const {
  return body_;
}

void GetTestcaseListRequest::setBody(const GetTestcaseListRequest::body &body) {
  body_ = body;
  setBodyParameter(std::string("body") + ".nextToken", body.nextToken);
  setBodyParameter(std::string("body") + ".spaceIdentifier", body.spaceIdentifier);
  setBodyParameter(std::string("body") + ".conditions", body.conditions);
  setBodyParameter(std::string("body") + ".directoryIdentifier", body.directoryIdentifier);
  setBodyParameter(std::string("body") + ".maxResult", body.maxResult);
}

std::string GetTestcaseListRequest::getOrganizationId() const {
  return organizationId_;
}

void GetTestcaseListRequest::setOrganizationId(const std::string &organizationId) {
  organizationId_ = organizationId;
  setParameter(std::string("organizationId"), organizationId);
}

