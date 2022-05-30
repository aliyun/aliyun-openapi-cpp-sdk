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

#include <alibabacloud/dataworks-public/model/GetOptionValueForProjectRequest.h>

using AlibabaCloud::Dataworks_public::Model::GetOptionValueForProjectRequest;

GetOptionValueForProjectRequest::GetOptionValueForProjectRequest()
    : RpcServiceRequest("dataworks-public", "2020-05-18", "GetOptionValueForProject") {
  setMethod(HttpRequest::Method::Post);
}

GetOptionValueForProjectRequest::~GetOptionValueForProjectRequest() {}

std::string GetOptionValueForProjectRequest::getExtensionCode() const {
  return extensionCode_;
}

void GetOptionValueForProjectRequest::setExtensionCode(const std::string &extensionCode) {
  extensionCode_ = extensionCode;
  setBodyParameter(std::string("ExtensionCode"), extensionCode);
}

std::string GetOptionValueForProjectRequest::getProjectId() const {
  return projectId_;
}

void GetOptionValueForProjectRequest::setProjectId(const std::string &projectId) {
  projectId_ = projectId;
  setBodyParameter(std::string("ProjectId"), projectId);
}

