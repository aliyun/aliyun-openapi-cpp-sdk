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

#include <alibabacloud/oos/model/DeleteTemplateRequest.h>

using AlibabaCloud::Oos::Model::DeleteTemplateRequest;

DeleteTemplateRequest::DeleteTemplateRequest()
    : RpcServiceRequest("oos", "2019-06-01", "DeleteTemplate") {
  setMethod(HttpRequest::Method::Post);
}

DeleteTemplateRequest::~DeleteTemplateRequest() {}

std::string DeleteTemplateRequest::getRegionId() const {
  return regionId_;
}

void DeleteTemplateRequest::setRegionId(const std::string &regionId) {
  regionId_ = regionId;
  setParameter(std::string("RegionId"), regionId);
}

bool DeleteTemplateRequest::getAutoDeleteExecutions() const {
  return autoDeleteExecutions_;
}

void DeleteTemplateRequest::setAutoDeleteExecutions(bool autoDeleteExecutions) {
  autoDeleteExecutions_ = autoDeleteExecutions;
  setParameter(std::string("AutoDeleteExecutions"), autoDeleteExecutions ? "true" : "false");
}

std::string DeleteTemplateRequest::getTemplateName() const {
  return templateName_;
}

void DeleteTemplateRequest::setTemplateName(const std::string &templateName) {
  templateName_ = templateName;
  setParameter(std::string("TemplateName"), templateName);
}

