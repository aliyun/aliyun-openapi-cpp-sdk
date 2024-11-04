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

#include <alibabacloud/alb/model/ListAclsRequest.h>

using AlibabaCloud::Alb::Model::ListAclsRequest;

ListAclsRequest::ListAclsRequest()
    : RpcServiceRequest("alb", "2020-06-16", "ListAcls") {
  setMethod(HttpRequest::Method::Post);
}

ListAclsRequest::~ListAclsRequest() {}

std::vector<ListAclsRequest::std::string> ListAclsRequest::getAclIds() const {
  return aclIds_;
}

void ListAclsRequest::setAclIds(const std::vector<ListAclsRequest::std::string> &aclIds) {
  aclIds_ = aclIds;
  for(int dep1 = 0; dep1 != aclIds.size(); dep1++) {
    setParameter(std::string("AclIds") + "." + std::to_string(dep1 + 1), aclIds[dep1]);
  }
}

std::string ListAclsRequest::getAddressIPVersion() const {
  return addressIPVersion_;
}

void ListAclsRequest::setAddressIPVersion(const std::string &addressIPVersion) {
  addressIPVersion_ = addressIPVersion;
  setParameter(std::string("AddressIPVersion"), addressIPVersion);
}

std::string ListAclsRequest::getResourceGroupId() const {
  return resourceGroupId_;
}

void ListAclsRequest::setResourceGroupId(const std::string &resourceGroupId) {
  resourceGroupId_ = resourceGroupId;
  setParameter(std::string("ResourceGroupId"), resourceGroupId);
}

std::string ListAclsRequest::getNextToken() const {
  return nextToken_;
}

void ListAclsRequest::setNextToken(const std::string &nextToken) {
  nextToken_ = nextToken;
  setParameter(std::string("NextToken"), nextToken);
}

std::vector<ListAclsRequest::Tag> ListAclsRequest::getTag() const {
  return tag_;
}

void ListAclsRequest::setTag(const std::vector<ListAclsRequest::Tag> &tag) {
  tag_ = tag;
  for(int dep1 = 0; dep1 != tag.size(); dep1++) {
    setParameter(std::string("Tag") + "." + std::to_string(dep1 + 1) + ".Value", tag[dep1].value);
    setParameter(std::string("Tag") + "." + std::to_string(dep1 + 1) + ".Key", tag[dep1].key);
  }
}

std::vector<ListAclsRequest::std::string> ListAclsRequest::getAclNames() const {
  return aclNames_;
}

void ListAclsRequest::setAclNames(const std::vector<ListAclsRequest::std::string> &aclNames) {
  aclNames_ = aclNames;
  for(int dep1 = 0; dep1 != aclNames.size(); dep1++) {
    setParameter(std::string("AclNames") + "." + std::to_string(dep1 + 1), aclNames[dep1]);
  }
}

int ListAclsRequest::getMaxResults() const {
  return maxResults_;
}

void ListAclsRequest::setMaxResults(int maxResults) {
  maxResults_ = maxResults;
  setParameter(std::string("MaxResults"), std::to_string(maxResults));
}

