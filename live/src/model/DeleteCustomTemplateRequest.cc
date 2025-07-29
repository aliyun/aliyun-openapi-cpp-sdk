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

#include <alibabacloud/live/model/DeleteCustomTemplateRequest.h>

using AlibabaCloud::Live::Model::DeleteCustomTemplateRequest;

DeleteCustomTemplateRequest::DeleteCustomTemplateRequest()
    : RpcServiceRequest("live", "2016-11-01", "DeleteCustomTemplate") {
  setMethod(HttpRequest::Method::Post);
}

DeleteCustomTemplateRequest::~DeleteCustomTemplateRequest() {}

std::string DeleteCustomTemplateRequest::get_Template() const {
  return _template_;
}

void DeleteCustomTemplateRequest::set_Template(const std::string &_template) {
  _template_ = _template;
  setParameter(std::string("Template"), _template);
}

std::string DeleteCustomTemplateRequest::getRegionId() const {
  return regionId_;
}

void DeleteCustomTemplateRequest::setRegionId(const std::string &regionId) {
  regionId_ = regionId;
  setParameter(std::string("RegionId"), regionId);
}

long DeleteCustomTemplateRequest::getOwnerId() const {
  return ownerId_;
}

void DeleteCustomTemplateRequest::setOwnerId(long ownerId) {
  ownerId_ = ownerId;
  setParameter(std::string("OwnerId"), std::to_string(ownerId));
}

