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

#include <alibabacloud/cc5g/model/ListWirelessCloudConnectorGroupsRequest.h>

using AlibabaCloud::CC5G::Model::ListWirelessCloudConnectorGroupsRequest;

ListWirelessCloudConnectorGroupsRequest::ListWirelessCloudConnectorGroupsRequest()
    : RpcServiceRequest("cc5g", "2022-03-14", "ListWirelessCloudConnectorGroups") {
  setMethod(HttpRequest::Method::Get);
}

ListWirelessCloudConnectorGroupsRequest::~ListWirelessCloudConnectorGroupsRequest() {}

std::vector<ListWirelessCloudConnectorGroupsRequest::std::string> ListWirelessCloudConnectorGroupsRequest::getWirelessCloudConnectorGroupStatus() const {
  return wirelessCloudConnectorGroupStatus_;
}

void ListWirelessCloudConnectorGroupsRequest::setWirelessCloudConnectorGroupStatus(const std::vector<ListWirelessCloudConnectorGroupsRequest::std::string> &wirelessCloudConnectorGroupStatus) {
  wirelessCloudConnectorGroupStatus_ = wirelessCloudConnectorGroupStatus;
  for(int dep1 = 0; dep1 != wirelessCloudConnectorGroupStatus.size(); dep1++) {
    setParameter(std::string("WirelessCloudConnectorGroupStatus") + "." + std::to_string(dep1 + 1), wirelessCloudConnectorGroupStatus[dep1]);
  }
}

std::vector<ListWirelessCloudConnectorGroupsRequest::std::string> ListWirelessCloudConnectorGroupsRequest::getWirelessCloudConnectorGroupIds() const {
  return wirelessCloudConnectorGroupIds_;
}

void ListWirelessCloudConnectorGroupsRequest::setWirelessCloudConnectorGroupIds(const std::vector<ListWirelessCloudConnectorGroupsRequest::std::string> &wirelessCloudConnectorGroupIds) {
  wirelessCloudConnectorGroupIds_ = wirelessCloudConnectorGroupIds;
  for(int dep1 = 0; dep1 != wirelessCloudConnectorGroupIds.size(); dep1++) {
    setParameter(std::string("WirelessCloudConnectorGroupIds") + "." + std::to_string(dep1 + 1), wirelessCloudConnectorGroupIds[dep1]);
  }
}

std::string ListWirelessCloudConnectorGroupsRequest::getRegionId() const {
  return regionId_;
}

void ListWirelessCloudConnectorGroupsRequest::setRegionId(const std::string &regionId) {
  regionId_ = regionId;
  setParameter(std::string("RegionId"), regionId);
}

std::string ListWirelessCloudConnectorGroupsRequest::getNextToken() const {
  return nextToken_;
}

void ListWirelessCloudConnectorGroupsRequest::setNextToken(const std::string &nextToken) {
  nextToken_ = nextToken;
  setParameter(std::string("NextToken"), nextToken);
}

std::vector<ListWirelessCloudConnectorGroupsRequest::std::string> ListWirelessCloudConnectorGroupsRequest::getWirelessCloudConnectorGroupNames() const {
  return wirelessCloudConnectorGroupNames_;
}

void ListWirelessCloudConnectorGroupsRequest::setWirelessCloudConnectorGroupNames(const std::vector<ListWirelessCloudConnectorGroupsRequest::std::string> &wirelessCloudConnectorGroupNames) {
  wirelessCloudConnectorGroupNames_ = wirelessCloudConnectorGroupNames;
  for(int dep1 = 0; dep1 != wirelessCloudConnectorGroupNames.size(); dep1++) {
    setParameter(std::string("WirelessCloudConnectorGroupNames") + "." + std::to_string(dep1 + 1), wirelessCloudConnectorGroupNames[dep1]);
  }
}

long ListWirelessCloudConnectorGroupsRequest::getMaxResults() const {
  return maxResults_;
}

void ListWirelessCloudConnectorGroupsRequest::setMaxResults(long maxResults) {
  maxResults_ = maxResults;
  setParameter(std::string("MaxResults"), std::to_string(maxResults));
}

