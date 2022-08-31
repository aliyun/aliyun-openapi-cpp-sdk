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

#include <alibabacloud/cdn/model/PushObjectCacheRequest.h>

using AlibabaCloud::Cdn::Model::PushObjectCacheRequest;

PushObjectCacheRequest::PushObjectCacheRequest()
    : RpcServiceRequest("cdn", "2014-11-11", "PushObjectCache") {
  setMethod(HttpRequest::Method::Post);
}

PushObjectCacheRequest::~PushObjectCacheRequest() {}

std::string PushObjectCacheRequest::getObjectPath() const {
  return objectPath_;
}

void PushObjectCacheRequest::setObjectPath(const std::string &objectPath) {
  objectPath_ = objectPath;
  setParameter(std::string("ObjectPath"), objectPath);
}

std::string PushObjectCacheRequest::getSecurityToken() const {
  return securityToken_;
}

void PushObjectCacheRequest::setSecurityToken(const std::string &securityToken) {
  securityToken_ = securityToken;
  setParameter(std::string("SecurityToken"), securityToken);
}

std::string PushObjectCacheRequest::getArea() const {
  return area_;
}

void PushObjectCacheRequest::setArea(const std::string &area) {
  area_ = area;
  setParameter(std::string("Area"), area);
}

long PushObjectCacheRequest::getOwnerId() const {
  return ownerId_;
}

void PushObjectCacheRequest::setOwnerId(long ownerId) {
  ownerId_ = ownerId;
  setParameter(std::string("OwnerId"), std::to_string(ownerId));
}

