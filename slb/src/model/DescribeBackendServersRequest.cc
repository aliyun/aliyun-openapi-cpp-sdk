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

#include <alibabacloud/slb/model/DescribeBackendServersRequest.h>

using AlibabaCloud::Slb::Model::DescribeBackendServersRequest;

DescribeBackendServersRequest::DescribeBackendServersRequest()
    : RpcServiceRequest("slb", "2013-02-21", "DescribeBackendServers") {
  setMethod(HttpRequest::Method::Post);
}

DescribeBackendServersRequest::~DescribeBackendServersRequest() {}

std::string DescribeBackendServersRequest::getAccess_key_id() const {
  return access_key_id_;
}

void DescribeBackendServersRequest::setAccess_key_id(const std::string &access_key_id) {
  access_key_id_ = access_key_id;
  setParameter(std::string("access_key_id"), access_key_id);
}

long DescribeBackendServersRequest::getResourceOwnerId() const {
  return resourceOwnerId_;
}

void DescribeBackendServersRequest::setResourceOwnerId(long resourceOwnerId) {
  resourceOwnerId_ = resourceOwnerId;
  setParameter(std::string("ResourceOwnerId"), std::to_string(resourceOwnerId));
}

std::string DescribeBackendServersRequest::getAccessKeyId() const {
  return accessKeyId_;
}

void DescribeBackendServersRequest::setAccessKeyId(const std::string &accessKeyId) {
  accessKeyId_ = accessKeyId;
  setParameter(std::string("AccessKeyId"), accessKeyId);
}

std::string DescribeBackendServersRequest::getRegionId() const {
  return regionId_;
}

void DescribeBackendServersRequest::setRegionId(const std::string &regionId) {
  regionId_ = regionId;
  setParameter(std::string("RegionId"), regionId);
}

int DescribeBackendServersRequest::getListenerPort() const {
  return listenerPort_;
}

void DescribeBackendServersRequest::setListenerPort(int listenerPort) {
  listenerPort_ = listenerPort;
  setParameter(std::string("ListenerPort"), std::to_string(listenerPort));
}

std::string DescribeBackendServersRequest::getResourceOwnerAccount() const {
  return resourceOwnerAccount_;
}

void DescribeBackendServersRequest::setResourceOwnerAccount(const std::string &resourceOwnerAccount) {
  resourceOwnerAccount_ = resourceOwnerAccount;
  setParameter(std::string("ResourceOwnerAccount"), resourceOwnerAccount);
}

std::string DescribeBackendServersRequest::getOwnerAccount() const {
  return ownerAccount_;
}

void DescribeBackendServersRequest::setOwnerAccount(const std::string &ownerAccount) {
  ownerAccount_ = ownerAccount;
  setParameter(std::string("OwnerAccount"), ownerAccount);
}

long DescribeBackendServersRequest::getOwnerId() const {
  return ownerId_;
}

void DescribeBackendServersRequest::setOwnerId(long ownerId) {
  ownerId_ = ownerId;
  setParameter(std::string("OwnerId"), std::to_string(ownerId));
}

std::string DescribeBackendServersRequest::getTags() const {
  return tags_;
}

void DescribeBackendServersRequest::setTags(const std::string &tags) {
  tags_ = tags;
  setParameter(std::string("Tags"), tags);
}

std::string DescribeBackendServersRequest::getLoadBalancerId() const {
  return loadBalancerId_;
}

void DescribeBackendServersRequest::setLoadBalancerId(const std::string &loadBalancerId) {
  loadBalancerId_ = loadBalancerId;
  setParameter(std::string("LoadBalancerId"), loadBalancerId);
}

