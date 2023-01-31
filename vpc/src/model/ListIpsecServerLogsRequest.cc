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

#include <alibabacloud/vpc/model/ListIpsecServerLogsRequest.h>

using AlibabaCloud::Vpc::Model::ListIpsecServerLogsRequest;

ListIpsecServerLogsRequest::ListIpsecServerLogsRequest()
    : RpcServiceRequest("vpc", "2016-04-28", "ListIpsecServerLogs") {
  setMethod(HttpRequest::Method::Post);
}

ListIpsecServerLogsRequest::~ListIpsecServerLogsRequest() {}

long ListIpsecServerLogsRequest::getResourceOwnerId() const {
  return resourceOwnerId_;
}

void ListIpsecServerLogsRequest::setResourceOwnerId(long resourceOwnerId) {
  resourceOwnerId_ = resourceOwnerId;
  setParameter(std::string("ResourceOwnerId"), std::to_string(resourceOwnerId));
}

std::string ListIpsecServerLogsRequest::getCallerBid() const {
  return callerBid_;
}

void ListIpsecServerLogsRequest::setCallerBid(const std::string &callerBid) {
  callerBid_ = callerBid;
  setParameter(std::string("callerBid"), callerBid);
}

int ListIpsecServerLogsRequest::getPageNumber() const {
  return pageNumber_;
}

void ListIpsecServerLogsRequest::setPageNumber(int pageNumber) {
  pageNumber_ = pageNumber;
  setParameter(std::string("PageNumber"), std::to_string(pageNumber));
}

int ListIpsecServerLogsRequest::getMinutePeriod() const {
  return minutePeriod_;
}

void ListIpsecServerLogsRequest::setMinutePeriod(int minutePeriod) {
  minutePeriod_ = minutePeriod;
  setParameter(std::string("MinutePeriod"), std::to_string(minutePeriod));
}

std::string ListIpsecServerLogsRequest::getRegionId() const {
  return regionId_;
}

void ListIpsecServerLogsRequest::setRegionId(const std::string &regionId) {
  regionId_ = regionId;
  setParameter(std::string("RegionId"), regionId);
}

int ListIpsecServerLogsRequest::getPageSize() const {
  return pageSize_;
}

void ListIpsecServerLogsRequest::setPageSize(int pageSize) {
  pageSize_ = pageSize;
  setParameter(std::string("PageSize"), std::to_string(pageSize));
}

int ListIpsecServerLogsRequest::getFrom() const {
  return from_;
}

void ListIpsecServerLogsRequest::setFrom(int from) {
  from_ = from;
  setParameter(std::string("From"), std::to_string(from));
}

int ListIpsecServerLogsRequest::getTo() const {
  return to_;
}

void ListIpsecServerLogsRequest::setTo(int to) {
  to_ = to;
  setParameter(std::string("To"), std::to_string(to));
}

std::string ListIpsecServerLogsRequest::getIpsecServerId() const {
  return ipsecServerId_;
}

void ListIpsecServerLogsRequest::setIpsecServerId(const std::string &ipsecServerId) {
  ipsecServerId_ = ipsecServerId;
  setParameter(std::string("IpsecServerId"), ipsecServerId);
}

