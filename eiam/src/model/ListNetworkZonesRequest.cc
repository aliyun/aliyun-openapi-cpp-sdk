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

#include <alibabacloud/eiam/model/ListNetworkZonesRequest.h>

using AlibabaCloud::Eiam::Model::ListNetworkZonesRequest;

ListNetworkZonesRequest::ListNetworkZonesRequest()
    : RpcServiceRequest("eiam", "2021-12-01", "ListNetworkZones") {
  setMethod(HttpRequest::Method::Post);
}

ListNetworkZonesRequest::~ListNetworkZonesRequest() {}

std::vector<ListNetworkZonesRequest::std::string> ListNetworkZonesRequest::getNetworkZoneIds() const {
  return networkZoneIds_;
}

void ListNetworkZonesRequest::setNetworkZoneIds(const std::vector<ListNetworkZonesRequest::std::string> &networkZoneIds) {
  networkZoneIds_ = networkZoneIds;
  for(int dep1 = 0; dep1 != networkZoneIds.size(); dep1++) {
    setParameter(std::string("NetworkZoneIds") + "." + std::to_string(dep1 + 1), networkZoneIds[dep1]);
  }
}

std::string ListNetworkZonesRequest::getNextToken() const {
  return nextToken_;
}

void ListNetworkZonesRequest::setNextToken(const std::string &nextToken) {
  nextToken_ = nextToken;
  setParameter(std::string("NextToken"), nextToken);
}

std::string ListNetworkZonesRequest::getPreviousToken() const {
  return previousToken_;
}

void ListNetworkZonesRequest::setPreviousToken(const std::string &previousToken) {
  previousToken_ = previousToken;
  setParameter(std::string("PreviousToken"), previousToken);
}

std::string ListNetworkZonesRequest::getInstanceId() const {
  return instanceId_;
}

void ListNetworkZonesRequest::setInstanceId(const std::string &instanceId) {
  instanceId_ = instanceId;
  setParameter(std::string("InstanceId"), instanceId);
}

long ListNetworkZonesRequest::getMaxResults() const {
  return maxResults_;
}

void ListNetworkZonesRequest::setMaxResults(long maxResults) {
  maxResults_ = maxResults;
  setParameter(std::string("MaxResults"), std::to_string(maxResults));
}

