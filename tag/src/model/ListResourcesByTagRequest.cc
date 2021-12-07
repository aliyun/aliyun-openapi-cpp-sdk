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

#include <alibabacloud/tag/model/ListResourcesByTagRequest.h>

using AlibabaCloud::Tag::Model::ListResourcesByTagRequest;

ListResourcesByTagRequest::ListResourcesByTagRequest()
    : RpcServiceRequest("tag", "2018-08-28", "ListResourcesByTag") {
  setMethod(HttpRequest::Method::Post);
}

ListResourcesByTagRequest::~ListResourcesByTagRequest() {}

std::string ListResourcesByTagRequest::getTagFilterKey() const {
  return tagFilterKey_;
}

void ListResourcesByTagRequest::setTagFilterKey(const std::string &tagFilterKey) {
  tagFilterKey_ = tagFilterKey;
  setParameter(std::string("TagFilter.Key"), tagFilterKey);
}

std::string ListResourcesByTagRequest::getRegionId() const {
  return regionId_;
}

void ListResourcesByTagRequest::setRegionId(const std::string &regionId) {
  regionId_ = regionId;
  setParameter(std::string("RegionId"), regionId);
}

std::string ListResourcesByTagRequest::getNextToken() const {
  return nextToken_;
}

void ListResourcesByTagRequest::setNextToken(const std::string &nextToken) {
  nextToken_ = nextToken;
  setParameter(std::string("NextToken"), nextToken);
}

bool ListResourcesByTagRequest::getIncludeAllTags() const {
  return includeAllTags_;
}

void ListResourcesByTagRequest::setIncludeAllTags(bool includeAllTags) {
  includeAllTags_ = includeAllTags;
  setParameter(std::string("IncludeAllTags"), includeAllTags ? "true" : "false");
}

std::string ListResourcesByTagRequest::getTagFilterValue() const {
  return tagFilterValue_;
}

void ListResourcesByTagRequest::setTagFilterValue(const std::string &tagFilterValue) {
  tagFilterValue_ = tagFilterValue;
  setParameter(std::string("TagFilter.Value"), tagFilterValue);
}

std::string ListResourcesByTagRequest::getResourceOwnerAccount() const {
  return resourceOwnerAccount_;
}

void ListResourcesByTagRequest::setResourceOwnerAccount(const std::string &resourceOwnerAccount) {
  resourceOwnerAccount_ = resourceOwnerAccount;
  setParameter(std::string("ResourceOwnerAccount"), resourceOwnerAccount);
}

std::string ListResourcesByTagRequest::getOwnerAccount() const {
  return ownerAccount_;
}

void ListResourcesByTagRequest::setOwnerAccount(const std::string &ownerAccount) {
  ownerAccount_ = ownerAccount;
  setParameter(std::string("OwnerAccount"), ownerAccount);
}

long ListResourcesByTagRequest::getOwnerId() const {
  return ownerId_;
}

void ListResourcesByTagRequest::setOwnerId(long ownerId) {
  ownerId_ = ownerId;
  setParameter(std::string("OwnerId"), std::to_string(ownerId));
}

std::string ListResourcesByTagRequest::getResourceType() const {
  return resourceType_;
}

void ListResourcesByTagRequest::setResourceType(const std::string &resourceType) {
  resourceType_ = resourceType;
  setParameter(std::string("ResourceType"), resourceType);
}

int ListResourcesByTagRequest::getMaxResult() const {
  return maxResult_;
}

void ListResourcesByTagRequest::setMaxResult(int maxResult) {
  maxResult_ = maxResult;
  setParameter(std::string("MaxResult"), std::to_string(maxResult));
}

std::string ListResourcesByTagRequest::getFuzzyType() const {
  return fuzzyType_;
}

void ListResourcesByTagRequest::setFuzzyType(const std::string &fuzzyType) {
  fuzzyType_ = fuzzyType;
  setParameter(std::string("FuzzyType"), fuzzyType);
}

