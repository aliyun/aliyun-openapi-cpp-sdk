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

#include <alibabacloud/live/model/SetShowListBackgroundRequest.h>

using AlibabaCloud::Live::Model::SetShowListBackgroundRequest;

SetShowListBackgroundRequest::SetShowListBackgroundRequest()
    : RpcServiceRequest("live", "2016-11-01", "SetShowListBackground") {
  setMethod(HttpRequest::Method::Post);
}

SetShowListBackgroundRequest::~SetShowListBackgroundRequest() {}

std::string SetShowListBackgroundRequest::getMaterialId() const {
  return materialId_;
}

void SetShowListBackgroundRequest::setMaterialId(const std::string &materialId) {
  materialId_ = materialId;
  setParameter(std::string("MaterialId"), materialId);
}

std::string SetShowListBackgroundRequest::getRegionId() const {
  return regionId_;
}

void SetShowListBackgroundRequest::setRegionId(const std::string &regionId) {
  regionId_ = regionId;
  setParameter(std::string("RegionId"), regionId);
}

std::string SetShowListBackgroundRequest::getCasterId() const {
  return casterId_;
}

void SetShowListBackgroundRequest::setCasterId(const std::string &casterId) {
  casterId_ = casterId;
  setParameter(std::string("CasterId"), casterId);
}

long SetShowListBackgroundRequest::getOwnerId() const {
  return ownerId_;
}

void SetShowListBackgroundRequest::setOwnerId(long ownerId) {
  ownerId_ = ownerId;
  setParameter(std::string("OwnerId"), std::to_string(ownerId));
}

std::string SetShowListBackgroundRequest::getResourceType() const {
  return resourceType_;
}

void SetShowListBackgroundRequest::setResourceType(const std::string &resourceType) {
  resourceType_ = resourceType;
  setParameter(std::string("ResourceType"), resourceType);
}

std::string SetShowListBackgroundRequest::getResourceUrl() const {
  return resourceUrl_;
}

void SetShowListBackgroundRequest::setResourceUrl(const std::string &resourceUrl) {
  resourceUrl_ = resourceUrl;
  setParameter(std::string("ResourceUrl"), resourceUrl);
}

