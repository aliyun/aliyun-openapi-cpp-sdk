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

#include <alibabacloud/dataworks-public/model/QuerySensLevelRequest.h>

using AlibabaCloud::Dataworks_public::Model::QuerySensLevelRequest;

QuerySensLevelRequest::QuerySensLevelRequest()
    : RpcServiceRequest("dataworks-public", "2020-05-18", "QuerySensLevel") {
  setMethod(HttpRequest::Method::Post);
}

QuerySensLevelRequest::~QuerySensLevelRequest() {}

std::string QuerySensLevelRequest::getTenantId() const {
  return tenantId_;
}

void QuerySensLevelRequest::setTenantId(const std::string &tenantId) {
  tenantId_ = tenantId;
  setBodyParameter(std::string("tenantId"), tenantId);
}

std::string QuerySensLevelRequest::getTemplateId() const {
  return templateId_;
}

void QuerySensLevelRequest::setTemplateId(const std::string &templateId) {
  templateId_ = templateId;
  setBodyParameter(std::string("TemplateId"), templateId);
}

