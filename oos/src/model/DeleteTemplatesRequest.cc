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

#include <alibabacloud/oos/model/DeleteTemplatesRequest.h>

using AlibabaCloud::Oos::Model::DeleteTemplatesRequest;

DeleteTemplatesRequest::DeleteTemplatesRequest()
    : RpcServiceRequest("oos", "2019-06-01", "DeleteTemplates") {
  setMethod(HttpRequest::Method::Post);
}

DeleteTemplatesRequest::~DeleteTemplatesRequest() {}

std::string DeleteTemplatesRequest::getTemplateNames() const {
  return templateNames_;
}

void DeleteTemplatesRequest::setTemplateNames(const std::string &templateNames) {
  templateNames_ = templateNames;
  setParameter(std::string("TemplateNames"), templateNames);
}

std::string DeleteTemplatesRequest::getRegionId() const {
  return regionId_;
}

void DeleteTemplatesRequest::setRegionId(const std::string &regionId) {
  regionId_ = regionId;
  setParameter(std::string("RegionId"), regionId);
}

bool DeleteTemplatesRequest::getAutoDeleteExecutions() const {
  return autoDeleteExecutions_;
}

void DeleteTemplatesRequest::setAutoDeleteExecutions(bool autoDeleteExecutions) {
  autoDeleteExecutions_ = autoDeleteExecutions;
  setParameter(std::string("AutoDeleteExecutions"), autoDeleteExecutions ? "true" : "false");
}

