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

#include <alibabacloud/dms-enterprise/model/ListSensitivityLevelRequest.h>

using AlibabaCloud::Dms_enterprise::Model::ListSensitivityLevelRequest;

ListSensitivityLevelRequest::ListSensitivityLevelRequest()
    : RpcServiceRequest("dms-enterprise", "2018-11-01", "ListSensitivityLevel") {
  setMethod(HttpRequest::Method::Get);
}

ListSensitivityLevelRequest::~ListSensitivityLevelRequest() {}

long ListSensitivityLevelRequest::getTid() const {
  return tid_;
}

void ListSensitivityLevelRequest::setTid(long tid) {
  tid_ = tid;
  setParameter(std::string("Tid"), std::to_string(tid));
}

std::string ListSensitivityLevelRequest::getTemplateType() const {
  return templateType_;
}

void ListSensitivityLevelRequest::setTemplateType(const std::string &templateType) {
  templateType_ = templateType;
  setParameter(std::string("TemplateType"), templateType);
}

long ListSensitivityLevelRequest::getTemplateId() const {
  return templateId_;
}

void ListSensitivityLevelRequest::setTemplateId(long templateId) {
  templateId_ = templateId;
  setParameter(std::string("TemplateId"), std::to_string(templateId));
}

