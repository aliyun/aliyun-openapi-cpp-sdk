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

#include <alibabacloud/dms-enterprise/model/CreateProxyAccessRequest.h>

using AlibabaCloud::Dms_enterprise::Model::CreateProxyAccessRequest;

CreateProxyAccessRequest::CreateProxyAccessRequest()
    : RpcServiceRequest("dms-enterprise", "2018-11-01", "CreateProxyAccess") {
  setMethod(HttpRequest::Method::Post);
}

CreateProxyAccessRequest::~CreateProxyAccessRequest() {}

std::string CreateProxyAccessRequest::getIndepAccount() const {
  return indepAccount_;
}

void CreateProxyAccessRequest::setIndepAccount(const std::string &indepAccount) {
  indepAccount_ = indepAccount;
  setParameter(std::string("IndepAccount"), indepAccount);
}

long CreateProxyAccessRequest::getUserId() const {
  return userId_;
}

void CreateProxyAccessRequest::setUserId(long userId) {
  userId_ = userId;
  setParameter(std::string("UserId"), std::to_string(userId));
}

long CreateProxyAccessRequest::getTid() const {
  return tid_;
}

void CreateProxyAccessRequest::setTid(long tid) {
  tid_ = tid;
  setParameter(std::string("Tid"), std::to_string(tid));
}

long CreateProxyAccessRequest::getProxyId() const {
  return proxyId_;
}

void CreateProxyAccessRequest::setProxyId(long proxyId) {
  proxyId_ = proxyId;
  setParameter(std::string("ProxyId"), std::to_string(proxyId));
}

std::string CreateProxyAccessRequest::getIndepPassword() const {
  return indepPassword_;
}

void CreateProxyAccessRequest::setIndepPassword(const std::string &indepPassword) {
  indepPassword_ = indepPassword;
  setParameter(std::string("IndepPassword"), indepPassword);
}

