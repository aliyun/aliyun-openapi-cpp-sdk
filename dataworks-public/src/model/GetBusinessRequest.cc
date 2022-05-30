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

#include <alibabacloud/dataworks-public/model/GetBusinessRequest.h>

using AlibabaCloud::Dataworks_public::Model::GetBusinessRequest;

GetBusinessRequest::GetBusinessRequest()
    : RpcServiceRequest("dataworks-public", "2020-05-18", "GetBusiness") {
  setMethod(HttpRequest::Method::Post);
}

GetBusinessRequest::~GetBusinessRequest() {}

long GetBusinessRequest::getBusinessId() const {
  return businessId_;
}

void GetBusinessRequest::setBusinessId(long businessId) {
  businessId_ = businessId;
  setBodyParameter(std::string("BusinessId"), std::to_string(businessId));
}

long GetBusinessRequest::getProjectId() const {
  return projectId_;
}

void GetBusinessRequest::setProjectId(long projectId) {
  projectId_ = projectId;
  setBodyParameter(std::string("ProjectId"), std::to_string(projectId));
}

std::string GetBusinessRequest::getProjectIdentifier() const {
  return projectIdentifier_;
}

void GetBusinessRequest::setProjectIdentifier(const std::string &projectIdentifier) {
  projectIdentifier_ = projectIdentifier;
  setBodyParameter(std::string("ProjectIdentifier"), projectIdentifier);
}

