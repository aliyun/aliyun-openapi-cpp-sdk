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

#include <alibabacloud/dcdn/model/PreloadDcdnObjectCachesRequest.h>

using AlibabaCloud::Dcdn::Model::PreloadDcdnObjectCachesRequest;

PreloadDcdnObjectCachesRequest::PreloadDcdnObjectCachesRequest()
    : RpcServiceRequest("dcdn", "2018-01-15", "PreloadDcdnObjectCaches") {
  setMethod(HttpRequest::Method::Post);
}

PreloadDcdnObjectCachesRequest::~PreloadDcdnObjectCachesRequest() {}

std::string PreloadDcdnObjectCachesRequest::getObjectPath() const {
  return objectPath_;
}

void PreloadDcdnObjectCachesRequest::setObjectPath(const std::string &objectPath) {
  objectPath_ = objectPath;
  setParameter(std::string("ObjectPath"), objectPath);
}

std::string PreloadDcdnObjectCachesRequest::getSecurityToken() const {
  return securityToken_;
}

void PreloadDcdnObjectCachesRequest::setSecurityToken(const std::string &securityToken) {
  securityToken_ = securityToken;
  setParameter(std::string("SecurityToken"), securityToken);
}

bool PreloadDcdnObjectCachesRequest::getL2Preload() const {
  return l2Preload_;
}

void PreloadDcdnObjectCachesRequest::setL2Preload(bool l2Preload) {
  l2Preload_ = l2Preload;
  setParameter(std::string("L2Preload"), l2Preload ? "true" : "false");
}

std::string PreloadDcdnObjectCachesRequest::getArea() const {
  return area_;
}

void PreloadDcdnObjectCachesRequest::setArea(const std::string &area) {
  area_ = area;
  setParameter(std::string("Area"), area);
}

std::string PreloadDcdnObjectCachesRequest::getWithHeader() const {
  return withHeader_;
}

void PreloadDcdnObjectCachesRequest::setWithHeader(const std::string &withHeader) {
  withHeader_ = withHeader;
  setParameter(std::string("WithHeader"), withHeader);
}

long PreloadDcdnObjectCachesRequest::getOwnerId() const {
  return ownerId_;
}

void PreloadDcdnObjectCachesRequest::setOwnerId(long ownerId) {
  ownerId_ = ownerId;
  setParameter(std::string("OwnerId"), std::to_string(ownerId));
}

