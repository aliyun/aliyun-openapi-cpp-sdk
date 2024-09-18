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

#include <alibabacloud/quickbi-public/model/CreateTicketRequest.h>

using AlibabaCloud::Quickbi_public::Model::CreateTicketRequest;

CreateTicketRequest::CreateTicketRequest()
    : RpcServiceRequest("quickbi-public", "2022-01-01", "CreateTicket") {
  setMethod(HttpRequest::Method::Post);
}

CreateTicketRequest::~CreateTicketRequest() {}

std::string CreateTicketRequest::getAccessPoint() const {
  return accessPoint_;
}

void CreateTicketRequest::setAccessPoint(const std::string &accessPoint) {
  accessPoint_ = accessPoint;
  setParameter(std::string("AccessPoint"), accessPoint);
}

int CreateTicketRequest::getAccountType() const {
  return accountType_;
}

void CreateTicketRequest::setAccountType(int accountType) {
  accountType_ = accountType;
  setParameter(std::string("AccountType"), std::to_string(accountType));
}

std::string CreateTicketRequest::getUserId() const {
  return userId_;
}

void CreateTicketRequest::setUserId(const std::string &userId) {
  userId_ = userId;
  setParameter(std::string("UserId"), userId);
}

std::string CreateTicketRequest::getAccountName() const {
  return accountName_;
}

void CreateTicketRequest::setAccountName(const std::string &accountName) {
  accountName_ = accountName;
  setParameter(std::string("AccountName"), accountName);
}

int CreateTicketRequest::getExpireTime() const {
  return expireTime_;
}

void CreateTicketRequest::setExpireTime(int expireTime) {
  expireTime_ = expireTime;
  setParameter(std::string("ExpireTime"), std::to_string(expireTime));
}

std::string CreateTicketRequest::getSignType() const {
  return signType_;
}

void CreateTicketRequest::setSignType(const std::string &signType) {
  signType_ = signType;
  setParameter(std::string("SignType"), signType);
}

std::string CreateTicketRequest::getCmptId() const {
  return cmptId_;
}

void CreateTicketRequest::setCmptId(const std::string &cmptId) {
  cmptId_ = cmptId;
  setParameter(std::string("CmptId"), cmptId);
}

std::string CreateTicketRequest::getGlobalParam() const {
  return globalParam_;
}

void CreateTicketRequest::setGlobalParam(const std::string &globalParam) {
  globalParam_ = globalParam;
  setParameter(std::string("GlobalParam"), globalParam);
}

std::string CreateTicketRequest::getWorksId() const {
  return worksId_;
}

void CreateTicketRequest::setWorksId(const std::string &worksId) {
  worksId_ = worksId;
  setParameter(std::string("WorksId"), worksId);
}

int CreateTicketRequest::getTicketNum() const {
  return ticketNum_;
}

void CreateTicketRequest::setTicketNum(int ticketNum) {
  ticketNum_ = ticketNum;
  setParameter(std::string("TicketNum"), std::to_string(ticketNum));
}

std::string CreateTicketRequest::getWatermarkParam() const {
  return watermarkParam_;
}

void CreateTicketRequest::setWatermarkParam(const std::string &watermarkParam) {
  watermarkParam_ = watermarkParam;
  setParameter(std::string("WatermarkParam"), watermarkParam);
}

