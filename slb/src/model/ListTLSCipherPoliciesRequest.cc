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

#include <alibabacloud/slb/model/ListTLSCipherPoliciesRequest.h>

using AlibabaCloud::Slb::Model::ListTLSCipherPoliciesRequest;

ListTLSCipherPoliciesRequest::ListTLSCipherPoliciesRequest()
    : RpcServiceRequest("slb", "2014-05-15", "ListTLSCipherPolicies") {
  setMethod(HttpRequest::Method::Post);
}

ListTLSCipherPoliciesRequest::~ListTLSCipherPoliciesRequest() {}

std::string ListTLSCipherPoliciesRequest::getAccess_key_id() const {
  return access_key_id_;
}

void ListTLSCipherPoliciesRequest::setAccess_key_id(const std::string &access_key_id) {
  access_key_id_ = access_key_id;
  setParameter(std::string("access_key_id"), access_key_id);
}

long ListTLSCipherPoliciesRequest::getResourceOwnerId() const {
  return resourceOwnerId_;
}

void ListTLSCipherPoliciesRequest::setResourceOwnerId(long resourceOwnerId) {
  resourceOwnerId_ = resourceOwnerId;
  setParameter(std::string("ResourceOwnerId"), std::to_string(resourceOwnerId));
}

bool ListTLSCipherPoliciesRequest::getIncludeListener() const {
  return includeListener_;
}

void ListTLSCipherPoliciesRequest::setIncludeListener(bool includeListener) {
  includeListener_ = includeListener;
  setParameter(std::string("IncludeListener"), includeListener ? "true" : "false");
}

std::string ListTLSCipherPoliciesRequest::getAccessKeyId() const {
  return accessKeyId_;
}

void ListTLSCipherPoliciesRequest::setAccessKeyId(const std::string &accessKeyId) {
  accessKeyId_ = accessKeyId;
  setParameter(std::string("AccessKeyId"), accessKeyId);
}

std::string ListTLSCipherPoliciesRequest::getTLSCipherPolicyId() const {
  return tLSCipherPolicyId_;
}

void ListTLSCipherPoliciesRequest::setTLSCipherPolicyId(const std::string &tLSCipherPolicyId) {
  tLSCipherPolicyId_ = tLSCipherPolicyId;
  setParameter(std::string("TLSCipherPolicyId"), tLSCipherPolicyId);
}

std::string ListTLSCipherPoliciesRequest::getRegionId() const {
  return regionId_;
}

void ListTLSCipherPoliciesRequest::setRegionId(const std::string &regionId) {
  regionId_ = regionId;
  setParameter(std::string("RegionId"), regionId);
}

std::string ListTLSCipherPoliciesRequest::getNextToken() const {
  return nextToken_;
}

void ListTLSCipherPoliciesRequest::setNextToken(const std::string &nextToken) {
  nextToken_ = nextToken;
  setParameter(std::string("NextToken"), nextToken);
}

std::string ListTLSCipherPoliciesRequest::getResourceOwnerAccount() const {
  return resourceOwnerAccount_;
}

void ListTLSCipherPoliciesRequest::setResourceOwnerAccount(const std::string &resourceOwnerAccount) {
  resourceOwnerAccount_ = resourceOwnerAccount;
  setParameter(std::string("ResourceOwnerAccount"), resourceOwnerAccount);
}

std::string ListTLSCipherPoliciesRequest::getOwnerAccount() const {
  return ownerAccount_;
}

void ListTLSCipherPoliciesRequest::setOwnerAccount(const std::string &ownerAccount) {
  ownerAccount_ = ownerAccount;
  setParameter(std::string("OwnerAccount"), ownerAccount);
}

long ListTLSCipherPoliciesRequest::getOwnerId() const {
  return ownerId_;
}

void ListTLSCipherPoliciesRequest::setOwnerId(long ownerId) {
  ownerId_ = ownerId;
  setParameter(std::string("OwnerId"), std::to_string(ownerId));
}

std::string ListTLSCipherPoliciesRequest::getName() const {
  return name_;
}

void ListTLSCipherPoliciesRequest::setName(const std::string &name) {
  name_ = name;
  setParameter(std::string("Name"), name);
}

int ListTLSCipherPoliciesRequest::getMaxItems() const {
  return maxItems_;
}

void ListTLSCipherPoliciesRequest::setMaxItems(int maxItems) {
  maxItems_ = maxItems;
  setParameter(std::string("MaxItems"), std::to_string(maxItems));
}

