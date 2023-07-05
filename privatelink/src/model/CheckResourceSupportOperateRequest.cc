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

#include <alibabacloud/privatelink/model/CheckResourceSupportOperateRequest.h>

using AlibabaCloud::Privatelink::Model::CheckResourceSupportOperateRequest;

CheckResourceSupportOperateRequest::CheckResourceSupportOperateRequest()
    : RpcServiceRequest("privatelink", "2020-04-15", "CheckResourceSupportOperate") {
  setMethod(HttpRequest::Method::Post);
}

CheckResourceSupportOperateRequest::~CheckResourceSupportOperateRequest() {}

std::string CheckResourceSupportOperateRequest::getResourceId() const {
  return resourceId_;
}

void CheckResourceSupportOperateRequest::setResourceId(const std::string &resourceId) {
  resourceId_ = resourceId;
  setParameter(std::string("ResourceId"), resourceId);
}

std::string CheckResourceSupportOperateRequest::getZoneId() const {
  return zoneId_;
}

void CheckResourceSupportOperateRequest::setZoneId(const std::string &zoneId) {
  zoneId_ = zoneId;
  setParameter(std::string("ZoneId"), zoneId);
}

std::string CheckResourceSupportOperateRequest::getResourceType() const {
  return resourceType_;
}

void CheckResourceSupportOperateRequest::setResourceType(const std::string &resourceType) {
  resourceType_ = resourceType;
  setParameter(std::string("ResourceType"), resourceType);
}

