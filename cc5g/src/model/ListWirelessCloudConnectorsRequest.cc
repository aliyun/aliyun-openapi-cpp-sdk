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

#include <alibabacloud/cc5g/model/ListWirelessCloudConnectorsRequest.h>

using AlibabaCloud::CC5G::Model::ListWirelessCloudConnectorsRequest;

ListWirelessCloudConnectorsRequest::ListWirelessCloudConnectorsRequest()
    : RpcServiceRequest("cc5g", "2022-03-14", "ListWirelessCloudConnectors") {
  setMethod(HttpRequest::Method::Get);
}

ListWirelessCloudConnectorsRequest::~ListWirelessCloudConnectorsRequest() {}

std::string ListWirelessCloudConnectorsRequest::getWirelessCloudConnectorGroupId() const {
  return wirelessCloudConnectorGroupId_;
}

void ListWirelessCloudConnectorsRequest::setWirelessCloudConnectorGroupId(const std::string &wirelessCloudConnectorGroupId) {
  wirelessCloudConnectorGroupId_ = wirelessCloudConnectorGroupId;
  setParameter(std::string("WirelessCloudConnectorGroupId"), wirelessCloudConnectorGroupId);
}

std::string ListWirelessCloudConnectorsRequest::getBusinessType() const {
  return businessType_;
}

void ListWirelessCloudConnectorsRequest::setBusinessType(const std::string &businessType) {
  businessType_ = businessType;
  setParameter(std::string("BusinessType"), businessType);
}

std::string ListWirelessCloudConnectorsRequest::getRegionId() const {
  return regionId_;
}

void ListWirelessCloudConnectorsRequest::setRegionId(const std::string &regionId) {
  regionId_ = regionId;
  setParameter(std::string("RegionId"), regionId);
}

std::string ListWirelessCloudConnectorsRequest::getNextToken() const {
  return nextToken_;
}

void ListWirelessCloudConnectorsRequest::setNextToken(const std::string &nextToken) {
  nextToken_ = nextToken;
  setParameter(std::string("NextToken"), nextToken);
}

std::vector<ListWirelessCloudConnectorsRequest::std::string> ListWirelessCloudConnectorsRequest::getWirelessCloudConnectorIds() const {
  return wirelessCloudConnectorIds_;
}

void ListWirelessCloudConnectorsRequest::setWirelessCloudConnectorIds(const std::vector<ListWirelessCloudConnectorsRequest::std::string> &wirelessCloudConnectorIds) {
  wirelessCloudConnectorIds_ = wirelessCloudConnectorIds;
  for(int dep1 = 0; dep1 != wirelessCloudConnectorIds.size(); dep1++) {
    setParameter(std::string("WirelessCloudConnectorIds") + "." + std::to_string(dep1 + 1), wirelessCloudConnectorIds[dep1]);
  }
}

std::string ListWirelessCloudConnectorsRequest::getIsInGroup() const {
  return isInGroup_;
}

void ListWirelessCloudConnectorsRequest::setIsInGroup(const std::string &isInGroup) {
  isInGroup_ = isInGroup;
  setParameter(std::string("IsInGroup"), isInGroup);
}

std::vector<ListWirelessCloudConnectorsRequest::std::string> ListWirelessCloudConnectorsRequest::getNames() const {
  return names_;
}

void ListWirelessCloudConnectorsRequest::setNames(const std::vector<ListWirelessCloudConnectorsRequest::std::string> &names) {
  names_ = names;
  for(int dep1 = 0; dep1 != names.size(); dep1++) {
    setParameter(std::string("Names") + "." + std::to_string(dep1 + 1), names[dep1]);
  }
}

long ListWirelessCloudConnectorsRequest::getMaxResults() const {
  return maxResults_;
}

void ListWirelessCloudConnectorsRequest::setMaxResults(long maxResults) {
  maxResults_ = maxResults;
  setParameter(std::string("MaxResults"), std::to_string(maxResults));
}

std::vector<ListWirelessCloudConnectorsRequest::std::string> ListWirelessCloudConnectorsRequest::getStatuses() const {
  return statuses_;
}

void ListWirelessCloudConnectorsRequest::setStatuses(const std::vector<ListWirelessCloudConnectorsRequest::std::string> &statuses) {
  statuses_ = statuses;
  for(int dep1 = 0; dep1 != statuses.size(); dep1++) {
    setParameter(std::string("Statuses") + "." + std::to_string(dep1 + 1), statuses[dep1]);
  }
}

