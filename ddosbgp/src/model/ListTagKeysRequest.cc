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

#include <alibabacloud/ddosbgp/model/ListTagKeysRequest.h>

using AlibabaCloud::Ddosbgp::Model::ListTagKeysRequest;

ListTagKeysRequest::ListTagKeysRequest()
    : RpcServiceRequest("ddosbgp", "2018-07-20", "ListTagKeys") {
  setMethod(HttpRequest::Method::Post);
}

ListTagKeysRequest::~ListTagKeysRequest() {}

std::string ListTagKeysRequest::getTagOwnerUid() const {
  return tagOwnerUid_;
}

void ListTagKeysRequest::setTagOwnerUid(const std::string &tagOwnerUid) {
  tagOwnerUid_ = tagOwnerUid;
  setParameter(std::string("TagOwnerUid"), tagOwnerUid);
}

std::string ListTagKeysRequest::getResourceGroupId() const {
  return resourceGroupId_;
}

void ListTagKeysRequest::setResourceGroupId(const std::string &resourceGroupId) {
  resourceGroupId_ = resourceGroupId;
  setParameter(std::string("ResourceGroupId"), resourceGroupId);
}

std::string ListTagKeysRequest::getSourceIp() const {
  return sourceIp_;
}

void ListTagKeysRequest::setSourceIp(const std::string &sourceIp) {
  sourceIp_ = sourceIp;
  setParameter(std::string("SourceIp"), sourceIp);
}

std::string ListTagKeysRequest::getRegionId() const {
  return regionId_;
}

void ListTagKeysRequest::setRegionId(const std::string &regionId) {
  regionId_ = regionId;
  setParameter(std::string("RegionId"), regionId);
}

std::string ListTagKeysRequest::getScope() const {
  return scope_;
}

void ListTagKeysRequest::setScope(const std::string &scope) {
  scope_ = scope;
  setParameter(std::string("Scope"), scope);
}

int ListTagKeysRequest::getPageSize() const {
  return pageSize_;
}

void ListTagKeysRequest::setPageSize(int pageSize) {
  pageSize_ = pageSize;
  setParameter(std::string("PageSize"), std::to_string(pageSize));
}

std::string ListTagKeysRequest::getTagOwnerBid() const {
  return tagOwnerBid_;
}

void ListTagKeysRequest::setTagOwnerBid(const std::string &tagOwnerBid) {
  tagOwnerBid_ = tagOwnerBid;
  setParameter(std::string("TagOwnerBid"), tagOwnerBid);
}

int ListTagKeysRequest::getCurrentPage() const {
  return currentPage_;
}

void ListTagKeysRequest::setCurrentPage(int currentPage) {
  currentPage_ = currentPage;
  setParameter(std::string("CurrentPage"), std::to_string(currentPage));
}

std::string ListTagKeysRequest::getResourceType() const {
  return resourceType_;
}

void ListTagKeysRequest::setResourceType(const std::string &resourceType) {
  resourceType_ = resourceType;
  setParameter(std::string("ResourceType"), resourceType);
}

