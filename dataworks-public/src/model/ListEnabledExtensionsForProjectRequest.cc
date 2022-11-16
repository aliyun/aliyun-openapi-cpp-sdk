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

#include <alibabacloud/dataworks-public/model/ListEnabledExtensionsForProjectRequest.h>

using AlibabaCloud::Dataworks_public::Model::ListEnabledExtensionsForProjectRequest;

ListEnabledExtensionsForProjectRequest::ListEnabledExtensionsForProjectRequest()
    : RpcServiceRequest("dataworks-public", "2020-05-18", "ListEnabledExtensionsForProject") {
  setMethod(HttpRequest::Method::Post);
}

ListEnabledExtensionsForProjectRequest::~ListEnabledExtensionsForProjectRequest() {}

std::string ListEnabledExtensionsForProjectRequest::getEventCode() const {
  return eventCode_;
}

void ListEnabledExtensionsForProjectRequest::setEventCode(const std::string &eventCode) {
  eventCode_ = eventCode;
  setBodyParameter(std::string("EventCode"), eventCode);
}

std::string ListEnabledExtensionsForProjectRequest::getFileType() const {
  return fileType_;
}

void ListEnabledExtensionsForProjectRequest::setFileType(const std::string &fileType) {
  fileType_ = fileType;
  setBodyParameter(std::string("FileType"), fileType);
}

long ListEnabledExtensionsForProjectRequest::getProjectId() const {
  return projectId_;
}

void ListEnabledExtensionsForProjectRequest::setProjectId(long projectId) {
  projectId_ = projectId;
  setBodyParameter(std::string("ProjectId"), std::to_string(projectId));
}

