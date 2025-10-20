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

#include <alibabacloud/eiam/model/ListApplicationsForNetworkZoneRequest.h>

using AlibabaCloud::Eiam::Model::ListApplicationsForNetworkZoneRequest;

ListApplicationsForNetworkZoneRequest::ListApplicationsForNetworkZoneRequest()
    : RpcServiceRequest("eiam", "2021-12-01", "ListApplicationsForNetworkZone") {
  setMethod(HttpRequest::Method::Post);
}

ListApplicationsForNetworkZoneRequest::~ListApplicationsForNetworkZoneRequest() {}

std::string ListApplicationsForNetworkZoneRequest::getNextToken() const {
  return nextToken_;
}

void ListApplicationsForNetworkZoneRequest::setNextToken(const std::string &nextToken) {
  nextToken_ = nextToken;
  setParameter(std::string("NextToken"), nextToken);
}

std::string ListApplicationsForNetworkZoneRequest::getPreviousToken() const {
  return previousToken_;
}

void ListApplicationsForNetworkZoneRequest::setPreviousToken(const std::string &previousToken) {
  previousToken_ = previousToken;
  setParameter(std::string("PreviousToken"), previousToken);
}

std::string ListApplicationsForNetworkZoneRequest::getNetworkZoneId() const {
  return networkZoneId_;
}

void ListApplicationsForNetworkZoneRequest::setNetworkZoneId(const std::string &networkZoneId) {
  networkZoneId_ = networkZoneId;
  setParameter(std::string("NetworkZoneId"), networkZoneId);
}

std::string ListApplicationsForNetworkZoneRequest::getInstanceId() const {
  return instanceId_;
}

void ListApplicationsForNetworkZoneRequest::setInstanceId(const std::string &instanceId) {
  instanceId_ = instanceId;
  setParameter(std::string("InstanceId"), instanceId);
}

int ListApplicationsForNetworkZoneRequest::getMaxResults() const {
  return maxResults_;
}

void ListApplicationsForNetworkZoneRequest::setMaxResults(int maxResults) {
  maxResults_ = maxResults;
  setParameter(std::string("MaxResults"), std::to_string(maxResults));
}

