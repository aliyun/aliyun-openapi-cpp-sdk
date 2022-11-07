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

#include <alibabacloud/cc5g/model/ListCardsRequest.h>

using AlibabaCloud::CC5G::Model::ListCardsRequest;

ListCardsRequest::ListCardsRequest()
    : RpcServiceRequest("cc5g", "2022-03-14", "ListCards") {
  setMethod(HttpRequest::Method::Get);
}

ListCardsRequest::~ListCardsRequest() {}

std::string ListCardsRequest::getIpAddress() const {
  return ipAddress_;
}

void ListCardsRequest::setIpAddress(const std::string &ipAddress) {
  ipAddress_ = ipAddress;
  setParameter(std::string("IpAddress"), ipAddress);
}

std::vector<ListCardsRequest::std::string> ListCardsRequest::getIccids() const {
  return iccids_;
}

void ListCardsRequest::setIccids(const std::vector<ListCardsRequest::std::string> &iccids) {
  iccids_ = iccids;
  for(int dep1 = 0; dep1 != iccids.size(); dep1++) {
    setParameter(std::string("Iccids") + "." + std::to_string(dep1 + 1), iccids[dep1]);
  }
}

std::string ListCardsRequest::getIccid() const {
  return iccid_;
}

void ListCardsRequest::setIccid(const std::string &iccid) {
  iccid_ = iccid;
  setParameter(std::string("Iccid"), iccid);
}

std::string ListCardsRequest::getNextToken() const {
  return nextToken_;
}

void ListCardsRequest::setNextToken(const std::string &nextToken) {
  nextToken_ = nextToken;
  setParameter(std::string("NextToken"), nextToken);
}

bool ListCardsRequest::getLock() const {
  return lock_;
}

void ListCardsRequest::setLock(bool lock) {
  lock_ = lock;
  setParameter(std::string("Lock"), lock ? "true" : "false");
}

std::string ListCardsRequest::getMsisdn() const {
  return msisdn_;
}

void ListCardsRequest::setMsisdn(const std::string &msisdn) {
  msisdn_ = msisdn;
  setParameter(std::string("Msisdn"), msisdn);
}

std::string ListCardsRequest::getApn() const {
  return apn_;
}

void ListCardsRequest::setApn(const std::string &apn) {
  apn_ = apn;
  setParameter(std::string("Apn"), apn);
}

std::string ListCardsRequest::getNetLinkId() const {
  return netLinkId_;
}

void ListCardsRequest::setNetLinkId(const std::string &netLinkId) {
  netLinkId_ = netLinkId;
  setParameter(std::string("NetLinkId"), netLinkId);
}

std::string ListCardsRequest::getWirelessCloudConnectorId() const {
  return wirelessCloudConnectorId_;
}

void ListCardsRequest::setWirelessCloudConnectorId(const std::string &wirelessCloudConnectorId) {
  wirelessCloudConnectorId_ = wirelessCloudConnectorId;
  setParameter(std::string("WirelessCloudConnectorId"), wirelessCloudConnectorId);
}

bool ListCardsRequest::getOnline() const {
  return online_;
}

void ListCardsRequest::setOnline(bool online) {
  online_ = online;
  setParameter(std::string("Online"), online ? "true" : "false");
}

long ListCardsRequest::getMaxResults() const {
  return maxResults_;
}

void ListCardsRequest::setMaxResults(long maxResults) {
  maxResults_ = maxResults;
  setParameter(std::string("MaxResults"), std::to_string(maxResults));
}

std::vector<ListCardsRequest::std::string> ListCardsRequest::getStatuses() const {
  return statuses_;
}

void ListCardsRequest::setStatuses(const std::vector<ListCardsRequest::std::string> &statuses) {
  statuses_ = statuses;
  for(int dep1 = 0; dep1 != statuses.size(); dep1++) {
    setParameter(std::string("Statuses") + "." + std::to_string(dep1 + 1), statuses[dep1]);
  }
}

