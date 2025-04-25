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

#include <alibabacloud/ess/model/ListTagKeysRequest.h>

using AlibabaCloud::Ess::Model::ListTagKeysRequest;

ListTagKeysRequest::ListTagKeysRequest()
    : RpcServiceRequest("ess", "2014-08-28", "ListTagKeys") {
  setMethod(HttpRequest::Method::Post);
}

ListTagKeysRequest::~ListTagKeysRequest() {}

std::string ListTagKeysRequest::getAccessKeyId() const {
  return accessKeyId_;
}

void ListTagKeysRequest::setAccessKeyId(const std::string &accessKeyId) {
  accessKeyId_ = accessKeyId;
  setParameter(std::string("AccessKeyId"), accessKeyId);
}

std::string ListTagKeysRequest::getRegionId() const {
  return regionId_;
}

void ListTagKeysRequest::setRegionId(const std::string &regionId) {
  regionId_ = regionId;
  setParameter(std::string("RegionId"), regionId);
}

std::string ListTagKeysRequest::getNextToken() const {
  return nextToken_;
}

void ListTagKeysRequest::setNextToken(const std::string &nextToken) {
  nextToken_ = nextToken;
  setParameter(std::string("NextToken"), nextToken);
}

int ListTagKeysRequest::getPageSize() const {
  return pageSize_;
}

void ListTagKeysRequest::setPageSize(int pageSize) {
  pageSize_ = pageSize;
  setParameter(std::string("PageSize"), std::to_string(pageSize));
}

std::string ListTagKeysRequest::getResourceOwnerAccount() const {
  return resourceOwnerAccount_;
}

void ListTagKeysRequest::setResourceOwnerAccount(const std::string &resourceOwnerAccount) {
  resourceOwnerAccount_ = resourceOwnerAccount;
  setParameter(std::string("ResourceOwnerAccount"), resourceOwnerAccount);
}

long ListTagKeysRequest::getOwnerId() const {
  return ownerId_;
}

void ListTagKeysRequest::setOwnerId(long ownerId) {
  ownerId_ = ownerId;
  setParameter(std::string("OwnerId"), std::to_string(ownerId));
}

std::string ListTagKeysRequest::getResourceType() const {
  return resourceType_;
}

void ListTagKeysRequest::setResourceType(const std::string &resourceType) {
  resourceType_ = resourceType;
  setParameter(std::string("ResourceType"), resourceType);
}

