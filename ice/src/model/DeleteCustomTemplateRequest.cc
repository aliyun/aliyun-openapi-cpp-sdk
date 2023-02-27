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

#include <alibabacloud/ice/model/DeleteCustomTemplateRequest.h>

using AlibabaCloud::ICE::Model::DeleteCustomTemplateRequest;

DeleteCustomTemplateRequest::DeleteCustomTemplateRequest()
    : RpcServiceRequest("ice", "2020-11-09", "DeleteCustomTemplate") {
  setMethod(HttpRequest::Method::Post);
}

DeleteCustomTemplateRequest::~DeleteCustomTemplateRequest() {}

std::string DeleteCustomTemplateRequest::getTemplateId() const {
  return templateId_;
}

void DeleteCustomTemplateRequest::setTemplateId(const std::string &templateId) {
  templateId_ = templateId;
  setParameter(std::string("TemplateId"), templateId);
}

