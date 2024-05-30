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

#include <alibabacloud/cams/model/QueryChatappBindWabaRequest.h>

using AlibabaCloud::Cams::Model::QueryChatappBindWabaRequest;

QueryChatappBindWabaRequest::QueryChatappBindWabaRequest()
    : RpcServiceRequest("cams", "2020-06-06", "QueryChatappBindWaba") {
  setMethod(HttpRequest::Method::Post);
}

QueryChatappBindWabaRequest::~QueryChatappBindWabaRequest() {}

long QueryChatappBindWabaRequest::getResourceOwnerId() const {
  return resourceOwnerId_;
}

void QueryChatappBindWabaRequest::setResourceOwnerId(long resourceOwnerId) {
  resourceOwnerId_ = resourceOwnerId;
  setParameter(std::string("ResourceOwnerId"), std::to_string(resourceOwnerId));
}

std::string QueryChatappBindWabaRequest::getLowcodeTenantId() const {
  return lowcodeTenantId_;
}

void QueryChatappBindWabaRequest::setLowcodeTenantId(const std::string &lowcodeTenantId) {
  lowcodeTenantId_ = lowcodeTenantId;
  setParameter(std::string("LowcodeTenantId"), lowcodeTenantId);
}

std::string QueryChatappBindWabaRequest::getExtendFunction() const {
  return extendFunction_;
}

void QueryChatappBindWabaRequest::setExtendFunction(const std::string &extendFunction) {
  extendFunction_ = extendFunction;
  setParameter(std::string("ExtendFunction"), extendFunction);
}

std::string QueryChatappBindWabaRequest::getAccessKeyId() const {
  return accessKeyId_;
}

void QueryChatappBindWabaRequest::setAccessKeyId(const std::string &accessKeyId) {
  accessKeyId_ = accessKeyId;
  setParameter(std::string("AccessKeyId"), accessKeyId);
}

std::string QueryChatappBindWabaRequest::getLowcodePhysicAppName() const {
  return lowcodePhysicAppName_;
}

void QueryChatappBindWabaRequest::setLowcodePhysicAppName(const std::string &lowcodePhysicAppName) {
  lowcodePhysicAppName_ = lowcodePhysicAppName;
  setParameter(std::string("LowcodePhysicAppName"), lowcodePhysicAppName);
}

std::string QueryChatappBindWabaRequest::getRouteName() const {
  return routeName_;
}

void QueryChatappBindWabaRequest::setRouteName(const std::string &routeName) {
  routeName_ = routeName;
  setParameter(std::string("RouteName"), routeName);
}

std::string QueryChatappBindWabaRequest::getIsvCode() const {
  return isvCode_;
}

void QueryChatappBindWabaRequest::setIsvCode(const std::string &isvCode) {
  isvCode_ = isvCode;
  setParameter(std::string("IsvCode"), isvCode);
}

std::string QueryChatappBindWabaRequest::getResourceOwnerAccount() const {
  return resourceOwnerAccount_;
}

void QueryChatappBindWabaRequest::setResourceOwnerAccount(const std::string &resourceOwnerAccount) {
  resourceOwnerAccount_ = resourceOwnerAccount;
  setParameter(std::string("ResourceOwnerAccount"), resourceOwnerAccount);
}

long QueryChatappBindWabaRequest::getOwnerId() const {
  return ownerId_;
}

void QueryChatappBindWabaRequest::setOwnerId(long ownerId) {
  ownerId_ = ownerId;
  setParameter(std::string("OwnerId"), std::to_string(ownerId));
}

std::string QueryChatappBindWabaRequest::getLowcodeLogicAppName() const {
  return lowcodeLogicAppName_;
}

void QueryChatappBindWabaRequest::setLowcodeLogicAppName(const std::string &lowcodeLogicAppName) {
  lowcodeLogicAppName_ = lowcodeLogicAppName;
  setParameter(std::string("LowcodeLogicAppName"), lowcodeLogicAppName);
}

std::string QueryChatappBindWabaRequest::getCustSpaceId() const {
  return custSpaceId_;
}

void QueryChatappBindWabaRequest::setCustSpaceId(const std::string &custSpaceId) {
  custSpaceId_ = custSpaceId;
  setParameter(std::string("CustSpaceId"), custSpaceId);
}

