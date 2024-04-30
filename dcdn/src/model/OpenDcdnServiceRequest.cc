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

#include <alibabacloud/dcdn/model/OpenDcdnServiceRequest.h>

using AlibabaCloud::Dcdn::Model::OpenDcdnServiceRequest;

OpenDcdnServiceRequest::OpenDcdnServiceRequest()
    : RpcServiceRequest("dcdn", "2018-01-15", "OpenDcdnService") {
  setMethod(HttpRequest::Method::Post);
}

OpenDcdnServiceRequest::~OpenDcdnServiceRequest() {}

std::string OpenDcdnServiceRequest::getWebsocketBillType() const {
  return websocketBillType_;
}

void OpenDcdnServiceRequest::setWebsocketBillType(const std::string &websocketBillType) {
  websocketBillType_ = websocketBillType;
  setParameter(std::string("WebsocketBillType"), websocketBillType);
}

std::string OpenDcdnServiceRequest::getBillType() const {
  return billType_;
}

void OpenDcdnServiceRequest::setBillType(const std::string &billType) {
  billType_ = billType;
  setParameter(std::string("BillType"), billType);
}

std::string OpenDcdnServiceRequest::getSecurityToken() const {
  return securityToken_;
}

void OpenDcdnServiceRequest::setSecurityToken(const std::string &securityToken) {
  securityToken_ = securityToken;
  setParameter(std::string("SecurityToken"), securityToken);
}

long OpenDcdnServiceRequest::getOwnerId() const {
  return ownerId_;
}

void OpenDcdnServiceRequest::setOwnerId(long ownerId) {
  ownerId_ = ownerId;
  setParameter(std::string("OwnerId"), std::to_string(ownerId));
}

