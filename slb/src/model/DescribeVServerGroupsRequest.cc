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

#include <alibabacloud/slb/model/DescribeVServerGroupsRequest.h>

using AlibabaCloud::Slb::Model::DescribeVServerGroupsRequest;

DescribeVServerGroupsRequest::DescribeVServerGroupsRequest()
    : RpcServiceRequest("slb", "2014-05-15", "DescribeVServerGroups") {
  setMethod(HttpRequest::Method::Post);
}

DescribeVServerGroupsRequest::~DescribeVServerGroupsRequest() {}

std::string DescribeVServerGroupsRequest::getAccess_key_id() const {
  return access_key_id_;
}

void DescribeVServerGroupsRequest::setAccess_key_id(const std::string &access_key_id) {
  access_key_id_ = access_key_id;
  setParameter(std::string("access_key_id"), access_key_id);
}

long DescribeVServerGroupsRequest::getResourceOwnerId() const {
  return resourceOwnerId_;
}

void DescribeVServerGroupsRequest::setResourceOwnerId(long resourceOwnerId) {
  resourceOwnerId_ = resourceOwnerId;
  setParameter(std::string("ResourceOwnerId"), std::to_string(resourceOwnerId));
}

bool DescribeVServerGroupsRequest::getIncludeListener() const {
  return includeListener_;
}

void DescribeVServerGroupsRequest::setIncludeListener(bool includeListener) {
  includeListener_ = includeListener;
  setParameter(std::string("IncludeListener"), includeListener ? "true" : "false");
}

std::string DescribeVServerGroupsRequest::getDescription() const {
  return description_;
}

void DescribeVServerGroupsRequest::setDescription(const std::string &description) {
  description_ = description;
  setParameter(std::string("Description"), description);
}

bool DescribeVServerGroupsRequest::getIncludeRule() const {
  return includeRule_;
}

void DescribeVServerGroupsRequest::setIncludeRule(bool includeRule) {
  includeRule_ = includeRule;
  setParameter(std::string("IncludeRule"), includeRule ? "true" : "false");
}

std::string DescribeVServerGroupsRequest::getRegionId() const {
  return regionId_;
}

void DescribeVServerGroupsRequest::setRegionId(const std::string &regionId) {
  regionId_ = regionId;
  setParameter(std::string("RegionId"), regionId);
}

std::vector<DescribeVServerGroupsRequest::Tag> DescribeVServerGroupsRequest::getTag() const {
  return tag_;
}

void DescribeVServerGroupsRequest::setTag(const std::vector<DescribeVServerGroupsRequest::Tag> &tag) {
  tag_ = tag;
  for(int dep1 = 0; dep1 != tag.size(); dep1++) {
  auto tagObj = tag.at(dep1);
  std::string tagObjStr = std::string("Tag") + "." + std::to_string(dep1 + 1);
    setParameter(tagObjStr + ".Value", tagObj.value);
    setParameter(tagObjStr + ".Key", tagObj.key);
  }
}

std::string DescribeVServerGroupsRequest::getResourceOwnerAccount() const {
  return resourceOwnerAccount_;
}

void DescribeVServerGroupsRequest::setResourceOwnerAccount(const std::string &resourceOwnerAccount) {
  resourceOwnerAccount_ = resourceOwnerAccount;
  setParameter(std::string("ResourceOwnerAccount"), resourceOwnerAccount);
}

std::string DescribeVServerGroupsRequest::getOwnerAccount() const {
  return ownerAccount_;
}

void DescribeVServerGroupsRequest::setOwnerAccount(const std::string &ownerAccount) {
  ownerAccount_ = ownerAccount;
  setParameter(std::string("OwnerAccount"), ownerAccount);
}

long DescribeVServerGroupsRequest::getOwnerId() const {
  return ownerId_;
}

void DescribeVServerGroupsRequest::setOwnerId(long ownerId) {
  ownerId_ = ownerId;
  setParameter(std::string("OwnerId"), std::to_string(ownerId));
}

std::string DescribeVServerGroupsRequest::getTags() const {
  return tags_;
}

void DescribeVServerGroupsRequest::setTags(const std::string &tags) {
  tags_ = tags;
  setParameter(std::string("Tags"), tags);
}

std::string DescribeVServerGroupsRequest::getLoadBalancerId() const {
  return loadBalancerId_;
}

void DescribeVServerGroupsRequest::setLoadBalancerId(const std::string &loadBalancerId) {
  loadBalancerId_ = loadBalancerId;
  setParameter(std::string("LoadBalancerId"), loadBalancerId);
}

