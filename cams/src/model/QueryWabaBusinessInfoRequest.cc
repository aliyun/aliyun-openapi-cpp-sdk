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

#include <alibabacloud/cams/model/QueryWabaBusinessInfoRequest.h>

using AlibabaCloud::Cams::Model::QueryWabaBusinessInfoRequest;

QueryWabaBusinessInfoRequest::QueryWabaBusinessInfoRequest()
    : RpcServiceRequest("cams", "2020-06-06", "QueryWabaBusinessInfo") {
  setMethod(HttpRequest::Method::Post);
}

QueryWabaBusinessInfoRequest::~QueryWabaBusinessInfoRequest() {}

long QueryWabaBusinessInfoRequest::getResourceOwnerId() const {
  return resourceOwnerId_;
}

void QueryWabaBusinessInfoRequest::setResourceOwnerId(long resourceOwnerId) {
  resourceOwnerId_ = resourceOwnerId;
  setParameter(std::string("ResourceOwnerId"), std::to_string(resourceOwnerId));
}

std::string QueryWabaBusinessInfoRequest::getLowcodeTenantId() const {
  return lowcodeTenantId_;
}

void QueryWabaBusinessInfoRequest::setLowcodeTenantId(const std::string &lowcodeTenantId) {
  lowcodeTenantId_ = lowcodeTenantId;
  setParameter(std::string("LowcodeTenantId"), lowcodeTenantId);
}

std::string QueryWabaBusinessInfoRequest::getExtendFunction() const {
  return extendFunction_;
}

void QueryWabaBusinessInfoRequest::setExtendFunction(const std::string &extendFunction) {
  extendFunction_ = extendFunction;
  setParameter(std::string("ExtendFunction"), extendFunction);
}

std::string QueryWabaBusinessInfoRequest::getAccessKeyId() const {
  return accessKeyId_;
}

void QueryWabaBusinessInfoRequest::setAccessKeyId(const std::string &accessKeyId) {
  accessKeyId_ = accessKeyId;
  setParameter(std::string("AccessKeyId"), accessKeyId);
}

std::string QueryWabaBusinessInfoRequest::getLowcodePhysicAppName() const {
  return lowcodePhysicAppName_;
}

void QueryWabaBusinessInfoRequest::setLowcodePhysicAppName(const std::string &lowcodePhysicAppName) {
  lowcodePhysicAppName_ = lowcodePhysicAppName;
  setParameter(std::string("LowcodePhysicAppName"), lowcodePhysicAppName);
}

std::string QueryWabaBusinessInfoRequest::getRouteName() const {
  return routeName_;
}

void QueryWabaBusinessInfoRequest::setRouteName(const std::string &routeName) {
  routeName_ = routeName;
  setParameter(std::string("RouteName"), routeName);
}

std::string QueryWabaBusinessInfoRequest::getResourceOwnerAccount() const {
  return resourceOwnerAccount_;
}

void QueryWabaBusinessInfoRequest::setResourceOwnerAccount(const std::string &resourceOwnerAccount) {
  resourceOwnerAccount_ = resourceOwnerAccount;
  setParameter(std::string("ResourceOwnerAccount"), resourceOwnerAccount);
}

long QueryWabaBusinessInfoRequest::getOwnerId() const {
  return ownerId_;
}

void QueryWabaBusinessInfoRequest::setOwnerId(long ownerId) {
  ownerId_ = ownerId;
  setParameter(std::string("OwnerId"), std::to_string(ownerId));
}

std::string QueryWabaBusinessInfoRequest::getLowcodeLogicAppName() const {
  return lowcodeLogicAppName_;
}

void QueryWabaBusinessInfoRequest::setLowcodeLogicAppName(const std::string &lowcodeLogicAppName) {
  lowcodeLogicAppName_ = lowcodeLogicAppName;
  setParameter(std::string("LowcodeLogicAppName"), lowcodeLogicAppName);
}

std::string QueryWabaBusinessInfoRequest::getWabaId() const {
  return wabaId_;
}

void QueryWabaBusinessInfoRequest::setWabaId(const std::string &wabaId) {
  wabaId_ = wabaId;
  setParameter(std::string("WabaId"), wabaId);
}

std::string QueryWabaBusinessInfoRequest::getCustSpaceId() const {
  return custSpaceId_;
}

void QueryWabaBusinessInfoRequest::setCustSpaceId(const std::string &custSpaceId) {
  custSpaceId_ = custSpaceId;
  setParameter(std::string("CustSpaceId"), custSpaceId);
}

