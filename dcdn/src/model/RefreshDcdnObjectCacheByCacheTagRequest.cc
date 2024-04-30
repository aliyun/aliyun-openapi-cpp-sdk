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

#include <alibabacloud/dcdn/model/RefreshDcdnObjectCacheByCacheTagRequest.h>

using AlibabaCloud::Dcdn::Model::RefreshDcdnObjectCacheByCacheTagRequest;

RefreshDcdnObjectCacheByCacheTagRequest::RefreshDcdnObjectCacheByCacheTagRequest()
    : RpcServiceRequest("dcdn", "2018-01-15", "RefreshDcdnObjectCacheByCacheTag") {
  setMethod(HttpRequest::Method::Post);
}

RefreshDcdnObjectCacheByCacheTagRequest::~RefreshDcdnObjectCacheByCacheTagRequest() {}

std::string RefreshDcdnObjectCacheByCacheTagRequest::getCacheTag() const {
  return cacheTag_;
}

void RefreshDcdnObjectCacheByCacheTagRequest::setCacheTag(const std::string &cacheTag) {
  cacheTag_ = cacheTag;
  setParameter(std::string("CacheTag"), cacheTag);
}

std::string RefreshDcdnObjectCacheByCacheTagRequest::getDomainName() const {
  return domainName_;
}

void RefreshDcdnObjectCacheByCacheTagRequest::setDomainName(const std::string &domainName) {
  domainName_ = domainName;
  setParameter(std::string("DomainName"), domainName);
}

bool RefreshDcdnObjectCacheByCacheTagRequest::getForce() const {
  return force_;
}

void RefreshDcdnObjectCacheByCacheTagRequest::setForce(bool force) {
  force_ = force;
  setParameter(std::string("Force"), force ? "true" : "false");
}

