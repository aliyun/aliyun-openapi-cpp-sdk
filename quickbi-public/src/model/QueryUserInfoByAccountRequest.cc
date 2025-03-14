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

#include <alibabacloud/quickbi-public/model/QueryUserInfoByAccountRequest.h>

using AlibabaCloud::Quickbi_public::Model::QueryUserInfoByAccountRequest;

QueryUserInfoByAccountRequest::QueryUserInfoByAccountRequest()
    : RpcServiceRequest("quickbi-public", "2022-01-01", "QueryUserInfoByAccount") {
  setMethod(HttpRequest::Method::Post);
}

QueryUserInfoByAccountRequest::~QueryUserInfoByAccountRequest() {}

std::string QueryUserInfoByAccountRequest::getAccessPoint() const {
  return accessPoint_;
}

void QueryUserInfoByAccountRequest::setAccessPoint(const std::string &accessPoint) {
  accessPoint_ = accessPoint;
  setParameter(std::string("AccessPoint"), accessPoint);
}

int QueryUserInfoByAccountRequest::getAccountType() const {
  return accountType_;
}

void QueryUserInfoByAccountRequest::setAccountType(int accountType) {
  accountType_ = accountType;
  setParameter(std::string("AccountType"), std::to_string(accountType));
}

std::string QueryUserInfoByAccountRequest::getParentAccountName() const {
  return parentAccountName_;
}

void QueryUserInfoByAccountRequest::setParentAccountName(const std::string &parentAccountName) {
  parentAccountName_ = parentAccountName;
  setParameter(std::string("ParentAccountName"), parentAccountName);
}

std::string QueryUserInfoByAccountRequest::getSignType() const {
  return signType_;
}

void QueryUserInfoByAccountRequest::setSignType(const std::string &signType) {
  signType_ = signType;
  setParameter(std::string("SignType"), signType);
}

std::string QueryUserInfoByAccountRequest::getAccount() const {
  return account_;
}

void QueryUserInfoByAccountRequest::setAccount(const std::string &account) {
  account_ = account;
  setParameter(std::string("Account"), account);
}

