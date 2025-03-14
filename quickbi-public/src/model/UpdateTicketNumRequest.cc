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

#include <alibabacloud/quickbi-public/model/UpdateTicketNumRequest.h>

using AlibabaCloud::Quickbi_public::Model::UpdateTicketNumRequest;

UpdateTicketNumRequest::UpdateTicketNumRequest()
    : RpcServiceRequest("quickbi-public", "2022-01-01", "UpdateTicketNum") {
  setMethod(HttpRequest::Method::Post);
}

UpdateTicketNumRequest::~UpdateTicketNumRequest() {}

std::string UpdateTicketNumRequest::getAccessPoint() const {
  return accessPoint_;
}

void UpdateTicketNumRequest::setAccessPoint(const std::string &accessPoint) {
  accessPoint_ = accessPoint;
  setParameter(std::string("AccessPoint"), accessPoint);
}

std::string UpdateTicketNumRequest::getTicket() const {
  return ticket_;
}

void UpdateTicketNumRequest::setTicket(const std::string &ticket) {
  ticket_ = ticket;
  setParameter(std::string("Ticket"), ticket);
}

std::string UpdateTicketNumRequest::getSignType() const {
  return signType_;
}

void UpdateTicketNumRequest::setSignType(const std::string &signType) {
  signType_ = signType;
  setParameter(std::string("SignType"), signType);
}

int UpdateTicketNumRequest::getTicketNum() const {
  return ticketNum_;
}

void UpdateTicketNumRequest::setTicketNum(int ticketNum) {
  ticketNum_ = ticketNum;
  setParameter(std::string("TicketNum"), std::to_string(ticketNum));
}

