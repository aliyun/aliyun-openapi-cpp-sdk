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

#include <alibabacloud/ess/model/ListTagValuesRequest.h>

using AlibabaCloud::Ess::Model::ListTagValuesRequest;

ListTagValuesRequest::ListTagValuesRequest()
    : RpcServiceRequest("ess", "2014-08-28", "ListTagValues") {
  setMethod(HttpRequest::Method::Post);
}

ListTagValuesRequest::~ListTagValuesRequest() {}

std::string ListTagValuesRequest::getAccessKeyId() const {
  return accessKeyId_;
}

void ListTagValuesRequest::setAccessKeyId(const std::string &accessKeyId) {
  accessKeyId_ = accessKeyId;
  setParameter(std::string("AccessKeyId"), accessKeyId);
}

std::string ListTagValuesRequest::getRegionId() const {
  return regionId_;
}

void ListTagValuesRequest::setRegionId(const std::string &regionId) {
  regionId_ = regionId;
  setParameter(std::string("RegionId"), regionId);
}

std::string ListTagValuesRequest::getNextToken() const {
  return nextToken_;
}

void ListTagValuesRequest::setNextToken(const std::string &nextToken) {
  nextToken_ = nextToken;
  setParameter(std::string("NextToken"), nextToken);
}

int ListTagValuesRequest::getPageSize() const {
  return pageSize_;
}

void ListTagValuesRequest::setPageSize(int pageSize) {
  pageSize_ = pageSize;
  setParameter(std::string("PageSize"), std::to_string(pageSize));
}

std::string ListTagValuesRequest::getKey() const {
  return key_;
}

void ListTagValuesRequest::setKey(const std::string &key) {
  key_ = key;
  setParameter(std::string("Key"), key);
}

std::string ListTagValuesRequest::getResourceOwnerAccount() const {
  return resourceOwnerAccount_;
}

void ListTagValuesRequest::setResourceOwnerAccount(const std::string &resourceOwnerAccount) {
  resourceOwnerAccount_ = resourceOwnerAccount;
  setParameter(std::string("ResourceOwnerAccount"), resourceOwnerAccount);
}

long ListTagValuesRequest::getOwnerId() const {
  return ownerId_;
}

void ListTagValuesRequest::setOwnerId(long ownerId) {
  ownerId_ = ownerId;
  setParameter(std::string("OwnerId"), std::to_string(ownerId));
}

std::string ListTagValuesRequest::getResourceType() const {
  return resourceType_;
}

void ListTagValuesRequest::setResourceType(const std::string &resourceType) {
  resourceType_ = resourceType;
  setParameter(std::string("ResourceType"), resourceType);
}

