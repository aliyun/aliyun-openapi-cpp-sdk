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

#include <alibabacloud/dcdn/model/RefreshErObjectCachesRequest.h>

using AlibabaCloud::Dcdn::Model::RefreshErObjectCachesRequest;

RefreshErObjectCachesRequest::RefreshErObjectCachesRequest()
    : RpcServiceRequest("dcdn", "2018-01-15", "RefreshErObjectCaches") {
  setMethod(HttpRequest::Method::Post);
}

RefreshErObjectCachesRequest::~RefreshErObjectCachesRequest() {}

std::string RefreshErObjectCachesRequest::getMergeDomainName() const {
  return mergeDomainName_;
}

void RefreshErObjectCachesRequest::setMergeDomainName(const std::string &mergeDomainName) {
  mergeDomainName_ = mergeDomainName;
  setParameter(std::string("MergeDomainName"), mergeDomainName);
}

std::string RefreshErObjectCachesRequest::getObjectPath() const {
  return objectPath_;
}

void RefreshErObjectCachesRequest::setObjectPath(const std::string &objectPath) {
  objectPath_ = objectPath;
  setParameter(std::string("ObjectPath"), objectPath);
}

bool RefreshErObjectCachesRequest::getForce() const {
  return force_;
}

void RefreshErObjectCachesRequest::setForce(bool force) {
  force_ = force;
  setParameter(std::string("Force"), force ? "true" : "false");
}

std::string RefreshErObjectCachesRequest::getObjectType() const {
  return objectType_;
}

void RefreshErObjectCachesRequest::setObjectType(const std::string &objectType) {
  objectType_ = objectType;
  setParameter(std::string("ObjectType"), objectType);
}

std::string RefreshErObjectCachesRequest::getRoutineId() const {
  return routineId_;
}

void RefreshErObjectCachesRequest::setRoutineId(const std::string &routineId) {
  routineId_ = routineId;
  setParameter(std::string("RoutineId"), routineId);
}

