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

#include <alibabacloud/cams/model/QueryPhoneBusinessProfileRequest.h>

using AlibabaCloud::Cams::Model::QueryPhoneBusinessProfileRequest;

QueryPhoneBusinessProfileRequest::QueryPhoneBusinessProfileRequest()
    : RpcServiceRequest("cams", "2020-06-06", "QueryPhoneBusinessProfile") {
  setMethod(HttpRequest::Method::Post);
}

QueryPhoneBusinessProfileRequest::~QueryPhoneBusinessProfileRequest() {}

long QueryPhoneBusinessProfileRequest::getResourceOwnerId() const {
  return resourceOwnerId_;
}

void QueryPhoneBusinessProfileRequest::setResourceOwnerId(long resourceOwnerId) {
  resourceOwnerId_ = resourceOwnerId;
  setParameter(std::string("ResourceOwnerId"), std::to_string(resourceOwnerId));
}

std::string QueryPhoneBusinessProfileRequest::getPhoneNumber() const {
  return phoneNumber_;
}

void QueryPhoneBusinessProfileRequest::setPhoneNumber(const std::string &phoneNumber) {
  phoneNumber_ = phoneNumber;
  setParameter(std::string("PhoneNumber"), phoneNumber);
}

std::string QueryPhoneBusinessProfileRequest::getLowcodeTenantId() const {
  return lowcodeTenantId_;
}

void QueryPhoneBusinessProfileRequest::setLowcodeTenantId(const std::string &lowcodeTenantId) {
  lowcodeTenantId_ = lowcodeTenantId;
  setParameter(std::string("LowcodeTenantId"), lowcodeTenantId);
}

std::string QueryPhoneBusinessProfileRequest::getExtendFunction() const {
  return extendFunction_;
}

void QueryPhoneBusinessProfileRequest::setExtendFunction(const std::string &extendFunction) {
  extendFunction_ = extendFunction;
  setParameter(std::string("ExtendFunction"), extendFunction);
}

std::string QueryPhoneBusinessProfileRequest::getAccessKeyId() const {
  return accessKeyId_;
}

void QueryPhoneBusinessProfileRequest::setAccessKeyId(const std::string &accessKeyId) {
  accessKeyId_ = accessKeyId;
  setParameter(std::string("AccessKeyId"), accessKeyId);
}

std::string QueryPhoneBusinessProfileRequest::getLowcodePhysicAppName() const {
  return lowcodePhysicAppName_;
}

void QueryPhoneBusinessProfileRequest::setLowcodePhysicAppName(const std::string &lowcodePhysicAppName) {
  lowcodePhysicAppName_ = lowcodePhysicAppName;
  setParameter(std::string("LowcodePhysicAppName"), lowcodePhysicAppName);
}

std::string QueryPhoneBusinessProfileRequest::getRouteName() const {
  return routeName_;
}

void QueryPhoneBusinessProfileRequest::setRouteName(const std::string &routeName) {
  routeName_ = routeName;
  setParameter(std::string("RouteName"), routeName);
}

std::string QueryPhoneBusinessProfileRequest::getResourceOwnerAccount() const {
  return resourceOwnerAccount_;
}

void QueryPhoneBusinessProfileRequest::setResourceOwnerAccount(const std::string &resourceOwnerAccount) {
  resourceOwnerAccount_ = resourceOwnerAccount;
  setParameter(std::string("ResourceOwnerAccount"), resourceOwnerAccount);
}

long QueryPhoneBusinessProfileRequest::getOwnerId() const {
  return ownerId_;
}

void QueryPhoneBusinessProfileRequest::setOwnerId(long ownerId) {
  ownerId_ = ownerId;
  setParameter(std::string("OwnerId"), std::to_string(ownerId));
}

std::string QueryPhoneBusinessProfileRequest::getLowcodeLogicAppName() const {
  return lowcodeLogicAppName_;
}

void QueryPhoneBusinessProfileRequest::setLowcodeLogicAppName(const std::string &lowcodeLogicAppName) {
  lowcodeLogicAppName_ = lowcodeLogicAppName;
  setParameter(std::string("LowcodeLogicAppName"), lowcodeLogicAppName);
}

std::string QueryPhoneBusinessProfileRequest::getCustSpaceId() const {
  return custSpaceId_;
}

void QueryPhoneBusinessProfileRequest::setCustSpaceId(const std::string &custSpaceId) {
  custSpaceId_ = custSpaceId;
  setParameter(std::string("CustSpaceId"), custSpaceId);
}

