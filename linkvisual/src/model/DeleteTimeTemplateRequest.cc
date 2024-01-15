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

#include <alibabacloud/linkvisual/model/DeleteTimeTemplateRequest.h>

using AlibabaCloud::Linkvisual::Model::DeleteTimeTemplateRequest;

DeleteTimeTemplateRequest::DeleteTimeTemplateRequest()
    : RpcServiceRequest("linkvisual", "2018-01-20", "DeleteTimeTemplate") {
  setMethod(HttpRequest::Method::Post);
}

DeleteTimeTemplateRequest::~DeleteTimeTemplateRequest() {}

std::string DeleteTimeTemplateRequest::getTemplateId() const {
  return templateId_;
}

void DeleteTimeTemplateRequest::setTemplateId(const std::string &templateId) {
  templateId_ = templateId;
  setParameter(std::string("TemplateId"), templateId);
}

std::string DeleteTimeTemplateRequest::getApiProduct() const {
  return apiProduct_;
}

void DeleteTimeTemplateRequest::setApiProduct(const std::string &apiProduct) {
  apiProduct_ = apiProduct;
  setBodyParameter(std::string("ApiProduct"), apiProduct);
}

std::string DeleteTimeTemplateRequest::getApiRevision() const {
  return apiRevision_;
}

void DeleteTimeTemplateRequest::setApiRevision(const std::string &apiRevision) {
  apiRevision_ = apiRevision;
  setBodyParameter(std::string("ApiRevision"), apiRevision);
}

