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

#include <alibabacloud/ddosbgp/model/ListTagResourcesRequest.h>

using AlibabaCloud::Ddosbgp::Model::ListTagResourcesRequest;

ListTagResourcesRequest::ListTagResourcesRequest()
    : RpcServiceRequest("ddosbgp", "2018-07-20", "ListTagResources") {
  setMethod(HttpRequest::Method::Post);
}

ListTagResourcesRequest::~ListTagResourcesRequest() {}

std::string ListTagResourcesRequest::getTagOwnerUid() const {
  return tagOwnerUid_;
}

void ListTagResourcesRequest::setTagOwnerUid(const std::string &tagOwnerUid) {
  tagOwnerUid_ = tagOwnerUid;
  setParameter(std::string("TagOwnerUid"), tagOwnerUid);
}

std::string ListTagResourcesRequest::getResourceGroupId() const {
  return resourceGroupId_;
}

void ListTagResourcesRequest::setResourceGroupId(const std::string &resourceGroupId) {
  resourceGroupId_ = resourceGroupId;
  setParameter(std::string("ResourceGroupId"), resourceGroupId);
}

std::string ListTagResourcesRequest::getSourceIp() const {
  return sourceIp_;
}

void ListTagResourcesRequest::setSourceIp(const std::string &sourceIp) {
  sourceIp_ = sourceIp;
  setParameter(std::string("SourceIp"), sourceIp);
}

std::string ListTagResourcesRequest::getRegionId() const {
  return regionId_;
}

void ListTagResourcesRequest::setRegionId(const std::string &regionId) {
  regionId_ = regionId;
  setParameter(std::string("RegionId"), regionId);
}

std::string ListTagResourcesRequest::getNextToken() const {
  return nextToken_;
}

void ListTagResourcesRequest::setNextToken(const std::string &nextToken) {
  nextToken_ = nextToken;
  setParameter(std::string("NextToken"), nextToken);
}

std::string ListTagResourcesRequest::getScope() const {
  return scope_;
}

void ListTagResourcesRequest::setScope(const std::string &scope) {
  scope_ = scope;
  setParameter(std::string("Scope"), scope);
}

std::string ListTagResourcesRequest::getTagOwnerBid() const {
  return tagOwnerBid_;
}

void ListTagResourcesRequest::setTagOwnerBid(const std::string &tagOwnerBid) {
  tagOwnerBid_ = tagOwnerBid;
  setParameter(std::string("TagOwnerBid"), tagOwnerBid);
}

std::vector<ListTagResourcesRequest::Tag> ListTagResourcesRequest::getTag() const {
  return tag_;
}

void ListTagResourcesRequest::setTag(const std::vector<ListTagResourcesRequest::Tag> &tag) {
  tag_ = tag;
  for(int dep1 = 0; dep1 != tag.size(); dep1++) {
  auto tagObj = tag.at(dep1);
  std::string tagObjStr = std::string("Tag") + "." + std::to_string(dep1 + 1);
    setParameter(tagObjStr + ".Value", tagObj.value);
    setParameter(tagObjStr + ".Key", tagObj.key);
  }
}

std::vector<std::string> ListTagResourcesRequest::getResourceId() const {
  return resourceId_;
}

void ListTagResourcesRequest::setResourceId(const std::vector<std::string> &resourceId) {
  resourceId_ = resourceId;
}

std::string ListTagResourcesRequest::getResourceType() const {
  return resourceType_;
}

void ListTagResourcesRequest::setResourceType(const std::string &resourceType) {
  resourceType_ = resourceType;
  setParameter(std::string("ResourceType"), resourceType);
}

