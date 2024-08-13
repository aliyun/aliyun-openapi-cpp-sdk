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

#include <alibabacloud/vod/model/PreloadVodObjectCachesRequest.h>

using AlibabaCloud::Vod::Model::PreloadVodObjectCachesRequest;

PreloadVodObjectCachesRequest::PreloadVodObjectCachesRequest()
    : RpcServiceRequest("vod", "2017-03-21", "PreloadVodObjectCaches") {
  setMethod(HttpRequest::Method::Post);
}

PreloadVodObjectCachesRequest::~PreloadVodObjectCachesRequest() {}

std::string PreloadVodObjectCachesRequest::getObjectPath() const {
  return objectPath_;
}

void PreloadVodObjectCachesRequest::setObjectPath(const std::string &objectPath) {
  objectPath_ = objectPath;
  setParameter(std::string("ObjectPath"), objectPath);
}

std::string PreloadVodObjectCachesRequest::getSecurityToken() const {
  return securityToken_;
}

void PreloadVodObjectCachesRequest::setSecurityToken(const std::string &securityToken) {
  securityToken_ = securityToken;
  setParameter(std::string("SecurityToken"), securityToken);
}

bool PreloadVodObjectCachesRequest::getL2Preload() const {
  return l2Preload_;
}

void PreloadVodObjectCachesRequest::setL2Preload(bool l2Preload) {
  l2Preload_ = l2Preload;
  setParameter(std::string("L2Preload"), l2Preload ? "true" : "false");
}

std::string PreloadVodObjectCachesRequest::getArea() const {
  return area_;
}

void PreloadVodObjectCachesRequest::setArea(const std::string &area) {
  area_ = area;
  setParameter(std::string("Area"), area);
}

std::string PreloadVodObjectCachesRequest::getWithHeader() const {
  return withHeader_;
}

void PreloadVodObjectCachesRequest::setWithHeader(const std::string &withHeader) {
  withHeader_ = withHeader;
  setParameter(std::string("WithHeader"), withHeader);
}

long PreloadVodObjectCachesRequest::getOwnerId() const {
  return ownerId_;
}

void PreloadVodObjectCachesRequest::setOwnerId(long ownerId) {
  ownerId_ = ownerId;
  setParameter(std::string("OwnerId"), std::to_string(ownerId));
}

