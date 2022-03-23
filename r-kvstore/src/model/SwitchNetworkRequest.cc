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

#include <alibabacloud/r-kvstore/model/SwitchNetworkRequest.h>

using AlibabaCloud::R_kvstore::Model::SwitchNetworkRequest;

SwitchNetworkRequest::SwitchNetworkRequest()
    : RpcServiceRequest("r-kvstore", "2015-01-01", "SwitchNetwork") {
  setMethod(HttpRequest::Method::Post);
}

SwitchNetworkRequest::~SwitchNetworkRequest() {}

long SwitchNetworkRequest::getResourceOwnerId() const {
  return resourceOwnerId_;
}

void SwitchNetworkRequest::setResourceOwnerId(long resourceOwnerId) {
  resourceOwnerId_ = resourceOwnerId;
  setParameter(std::string("ResourceOwnerId"), std::to_string(resourceOwnerId));
}

std::string SwitchNetworkRequest::getAccessKeyId() const {
  return accessKeyId_;
}

void SwitchNetworkRequest::setAccessKeyId(const std::string &accessKeyId) {
  accessKeyId_ = accessKeyId;
  setParameter(std::string("AccessKeyId"), accessKeyId);
}

std::string SwitchNetworkRequest::getSecurityToken() const {
  return securityToken_;
}

void SwitchNetworkRequest::setSecurityToken(const std::string &securityToken) {
  securityToken_ = securityToken;
  setParameter(std::string("SecurityToken"), securityToken);
}

std::string SwitchNetworkRequest::getClassicExpiredDays() const {
  return classicExpiredDays_;
}

void SwitchNetworkRequest::setClassicExpiredDays(const std::string &classicExpiredDays) {
  classicExpiredDays_ = classicExpiredDays;
  setParameter(std::string("ClassicExpiredDays"), classicExpiredDays);
}

std::string SwitchNetworkRequest::getResourceOwnerAccount() const {
  return resourceOwnerAccount_;
}

void SwitchNetworkRequest::setResourceOwnerAccount(const std::string &resourceOwnerAccount) {
  resourceOwnerAccount_ = resourceOwnerAccount;
  setParameter(std::string("ResourceOwnerAccount"), resourceOwnerAccount);
}

std::string SwitchNetworkRequest::getOwnerAccount() const {
  return ownerAccount_;
}

void SwitchNetworkRequest::setOwnerAccount(const std::string &ownerAccount) {
  ownerAccount_ = ownerAccount;
  setParameter(std::string("OwnerAccount"), ownerAccount);
}

long SwitchNetworkRequest::getOwnerId() const {
  return ownerId_;
}

void SwitchNetworkRequest::setOwnerId(long ownerId) {
  ownerId_ = ownerId;
  setParameter(std::string("OwnerId"), std::to_string(ownerId));
}

std::string SwitchNetworkRequest::getVSwitchId() const {
  return vSwitchId_;
}

void SwitchNetworkRequest::setVSwitchId(const std::string &vSwitchId) {
  vSwitchId_ = vSwitchId;
  setParameter(std::string("VSwitchId"), vSwitchId);
}

std::string SwitchNetworkRequest::getInstanceId() const {
  return instanceId_;
}

void SwitchNetworkRequest::setInstanceId(const std::string &instanceId) {
  instanceId_ = instanceId;
  setParameter(std::string("InstanceId"), instanceId);
}

std::string SwitchNetworkRequest::getTargetNetworkType() const {
  return targetNetworkType_;
}

void SwitchNetworkRequest::setTargetNetworkType(const std::string &targetNetworkType) {
  targetNetworkType_ = targetNetworkType;
  setParameter(std::string("TargetNetworkType"), targetNetworkType);
}

std::string SwitchNetworkRequest::getRetainClassic() const {
  return retainClassic_;
}

void SwitchNetworkRequest::setRetainClassic(const std::string &retainClassic) {
  retainClassic_ = retainClassic;
  setParameter(std::string("RetainClassic"), retainClassic);
}

std::string SwitchNetworkRequest::getVpcId() const {
  return vpcId_;
}

void SwitchNetworkRequest::setVpcId(const std::string &vpcId) {
  vpcId_ = vpcId;
  setParameter(std::string("VpcId"), vpcId);
}

