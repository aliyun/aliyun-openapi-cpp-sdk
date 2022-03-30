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

#include <alibabacloud/live/model/GetCustomTemplateRequest.h>

using AlibabaCloud::Live::Model::GetCustomTemplateRequest;

GetCustomTemplateRequest::GetCustomTemplateRequest()
    : RpcServiceRequest("live", "2016-11-01", "GetCustomTemplate") {
  setMethod(HttpRequest::Method::Post);
}

GetCustomTemplateRequest::~GetCustomTemplateRequest() {}

std::string GetCustomTemplateRequest::get_Template() const {
  return _template_;
}

void GetCustomTemplateRequest::set_Template(const std::string &_template) {
  _template_ = _template;
  setParameter(std::string("Template"), _template);
}

long GetCustomTemplateRequest::getOwnerId() const {
  return ownerId_;
}

void GetCustomTemplateRequest::setOwnerId(long ownerId) {
  ownerId_ = ownerId;
  setParameter(std::string("OwnerId"), std::to_string(ownerId));
}

