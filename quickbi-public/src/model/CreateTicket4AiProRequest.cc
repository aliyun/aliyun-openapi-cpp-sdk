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

#include <alibabacloud/quickbi-public/model/CreateTicket4AiProRequest.h>

using AlibabaCloud::Quickbi_public::Model::CreateTicket4AiProRequest;

CreateTicket4AiProRequest::CreateTicket4AiProRequest()
    : RpcServiceRequest("quickbi-public", "2022-01-01", "CreateTicket4AiPro") {
  setMethod(HttpRequest::Method::Post);
}

CreateTicket4AiProRequest::~CreateTicket4AiProRequest() {}

std::string CreateTicket4AiProRequest::getAccessPoint() const {
  return accessPoint_;
}

void CreateTicket4AiProRequest::setAccessPoint(const std::string &accessPoint) {
  accessPoint_ = accessPoint;
  setParameter(std::string("AccessPoint"), accessPoint);
}

int CreateTicket4AiProRequest::getAccountType() const {
  return accountType_;
}

void CreateTicket4AiProRequest::setAccountType(int accountType) {
  accountType_ = accountType;
  setParameter(std::string("AccountType"), std::to_string(accountType));
}

std::string CreateTicket4AiProRequest::getCustomParam() const {
  return customParam_;
}

void CreateTicket4AiProRequest::setCustomParam(const std::string &customParam) {
  customParam_ = customParam;
  setParameter(std::string("CustomParam"), customParam);
}

std::string CreateTicket4AiProRequest::getSystemUid() const {
  return systemUid_;
}

void CreateTicket4AiProRequest::setSystemUid(const std::string &systemUid) {
  systemUid_ = systemUid;
  setParameter(std::string("SystemUid"), systemUid);
}

std::string CreateTicket4AiProRequest::getAccountName() const {
  return accountName_;
}

void CreateTicket4AiProRequest::setAccountName(const std::string &accountName) {
  accountName_ = accountName;
  setParameter(std::string("AccountName"), accountName);
}

int CreateTicket4AiProRequest::getExpireTime() const {
  return expireTime_;
}

void CreateTicket4AiProRequest::setExpireTime(int expireTime) {
  expireTime_ = expireTime;
  setParameter(std::string("ExpireTime"), std::to_string(expireTime));
}

std::string CreateTicket4AiProRequest::getAiProId() const {
  return aiProId_;
}

void CreateTicket4AiProRequest::setAiProId(const std::string &aiProId) {
  aiProId_ = aiProId;
  setParameter(std::string("AiProId"), aiProId);
}

std::string CreateTicket4AiProRequest::getSignType() const {
  return signType_;
}

void CreateTicket4AiProRequest::setSignType(const std::string &signType) {
  signType_ = signType;
  setParameter(std::string("SignType"), signType);
}

int CreateTicket4AiProRequest::getTicketNum() const {
  return ticketNum_;
}

void CreateTicket4AiProRequest::setTicketNum(int ticketNum) {
  ticketNum_ = ticketNum;
  setParameter(std::string("TicketNum"), std::to_string(ticketNum));
}

std::string CreateTicket4AiProRequest::getQuickBIUserId() const {
  return quickBIUserId_;
}

void CreateTicket4AiProRequest::setQuickBIUserId(const std::string &quickBIUserId) {
  quickBIUserId_ = quickBIUserId;
  setParameter(std::string("QuickBIUserId"), quickBIUserId);
}

