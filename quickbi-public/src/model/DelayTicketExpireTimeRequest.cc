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

#include <alibabacloud/quickbi-public/model/DelayTicketExpireTimeRequest.h>

using AlibabaCloud::Quickbi_public::Model::DelayTicketExpireTimeRequest;

DelayTicketExpireTimeRequest::DelayTicketExpireTimeRequest()
    : RpcServiceRequest("quickbi-public", "2022-01-01", "DelayTicketExpireTime") {
  setMethod(HttpRequest::Method::Post);
}

DelayTicketExpireTimeRequest::~DelayTicketExpireTimeRequest() {}

std::string DelayTicketExpireTimeRequest::getAccessPoint() const {
  return accessPoint_;
}

void DelayTicketExpireTimeRequest::setAccessPoint(const std::string &accessPoint) {
  accessPoint_ = accessPoint;
  setParameter(std::string("AccessPoint"), accessPoint);
}

int DelayTicketExpireTimeRequest::getExpireTime() const {
  return expireTime_;
}

void DelayTicketExpireTimeRequest::setExpireTime(int expireTime) {
  expireTime_ = expireTime;
  setParameter(std::string("ExpireTime"), std::to_string(expireTime));
}

std::string DelayTicketExpireTimeRequest::getTicket() const {
  return ticket_;
}

void DelayTicketExpireTimeRequest::setTicket(const std::string &ticket) {
  ticket_ = ticket;
  setParameter(std::string("Ticket"), ticket);
}

std::string DelayTicketExpireTimeRequest::getSignType() const {
  return signType_;
}

void DelayTicketExpireTimeRequest::setSignType(const std::string &signType) {
  signType_ = signType;
  setParameter(std::string("SignType"), signType);
}

