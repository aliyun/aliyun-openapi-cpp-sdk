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

#include <alibabacloud/quickbi-public/model/CreateTicket4CopilotRequest.h>

using AlibabaCloud::Quickbi_public::Model::CreateTicket4CopilotRequest;

CreateTicket4CopilotRequest::CreateTicket4CopilotRequest()
    : RpcServiceRequest("quickbi-public", "2022-01-01", "CreateTicket4Copilot") {
  setMethod(HttpRequest::Method::Post);
}

CreateTicket4CopilotRequest::~CreateTicket4CopilotRequest() {}

std::string CreateTicket4CopilotRequest::getCopilotId() const {
  return copilotId_;
}

void CreateTicket4CopilotRequest::setCopilotId(const std::string &copilotId) {
  copilotId_ = copilotId;
  setParameter(std::string("CopilotId"), copilotId);
}

std::string CreateTicket4CopilotRequest::getAccessPoint() const {
  return accessPoint_;
}

void CreateTicket4CopilotRequest::setAccessPoint(const std::string &accessPoint) {
  accessPoint_ = accessPoint;
  setParameter(std::string("AccessPoint"), accessPoint);
}

int CreateTicket4CopilotRequest::getAccountType() const {
  return accountType_;
}

void CreateTicket4CopilotRequest::setAccountType(int accountType) {
  accountType_ = accountType;
  setParameter(std::string("AccountType"), std::to_string(accountType));
}

std::string CreateTicket4CopilotRequest::getUserId() const {
  return userId_;
}

void CreateTicket4CopilotRequest::setUserId(const std::string &userId) {
  userId_ = userId;
  setParameter(std::string("UserId"), userId);
}

std::string CreateTicket4CopilotRequest::getAccountName() const {
  return accountName_;
}

void CreateTicket4CopilotRequest::setAccountName(const std::string &accountName) {
  accountName_ = accountName;
  setParameter(std::string("AccountName"), accountName);
}

int CreateTicket4CopilotRequest::getExpireTime() const {
  return expireTime_;
}

void CreateTicket4CopilotRequest::setExpireTime(int expireTime) {
  expireTime_ = expireTime;
  setParameter(std::string("ExpireTime"), std::to_string(expireTime));
}

std::string CreateTicket4CopilotRequest::getSignType() const {
  return signType_;
}

void CreateTicket4CopilotRequest::setSignType(const std::string &signType) {
  signType_ = signType;
  setParameter(std::string("SignType"), signType);
}

int CreateTicket4CopilotRequest::getTicketNum() const {
  return ticketNum_;
}

void CreateTicket4CopilotRequest::setTicketNum(int ticketNum) {
  ticketNum_ = ticketNum;
  setParameter(std::string("TicketNum"), std::to_string(ticketNum));
}

