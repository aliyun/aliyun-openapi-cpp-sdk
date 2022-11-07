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

#include <alibabacloud/cc5g/model/ListAuthorizationRulesRequest.h>

using AlibabaCloud::CC5G::Model::ListAuthorizationRulesRequest;

ListAuthorizationRulesRequest::ListAuthorizationRulesRequest()
    : RpcServiceRequest("cc5g", "2022-03-14", "ListAuthorizationRules") {
  setMethod(HttpRequest::Method::Get);
}

ListAuthorizationRulesRequest::~ListAuthorizationRulesRequest() {}

std::string ListAuthorizationRulesRequest::getDestinationType() const {
  return destinationType_;
}

void ListAuthorizationRulesRequest::setDestinationType(const std::string &destinationType) {
  destinationType_ = destinationType;
  setParameter(std::string("DestinationType"), destinationType);
}

std::string ListAuthorizationRulesRequest::getDestination() const {
  return destination_;
}

void ListAuthorizationRulesRequest::setDestination(const std::string &destination) {
  destination_ = destination;
  setParameter(std::string("Destination"), destination);
}

std::string ListAuthorizationRulesRequest::getType() const {
  return type_;
}

void ListAuthorizationRulesRequest::setType(const std::string &type) {
  type_ = type;
  setParameter(std::string("Type"), type);
}

std::string ListAuthorizationRulesRequest::getProtocol() const {
  return protocol_;
}

void ListAuthorizationRulesRequest::setProtocol(const std::string &protocol) {
  protocol_ = protocol;
  setParameter(std::string("Protocol"), protocol);
}

std::vector<ListAuthorizationRulesRequest::std::string> ListAuthorizationRulesRequest::getAuthorizationRuleIds() const {
  return authorizationRuleIds_;
}

void ListAuthorizationRulesRequest::setAuthorizationRuleIds(const std::vector<ListAuthorizationRulesRequest::std::string> &authorizationRuleIds) {
  authorizationRuleIds_ = authorizationRuleIds;
  for(int dep1 = 0; dep1 != authorizationRuleIds.size(); dep1++) {
    setParameter(std::string("AuthorizationRuleIds") + "." + std::to_string(dep1 + 1), authorizationRuleIds[dep1]);
  }
}

std::string ListAuthorizationRulesRequest::getNextToken() const {
  return nextToken_;
}

void ListAuthorizationRulesRequest::setNextToken(const std::string &nextToken) {
  nextToken_ = nextToken;
  setParameter(std::string("NextToken"), nextToken);
}

std::string ListAuthorizationRulesRequest::getPolicy() const {
  return policy_;
}

void ListAuthorizationRulesRequest::setPolicy(const std::string &policy) {
  policy_ = policy;
  setParameter(std::string("Policy"), policy);
}

bool ListAuthorizationRulesRequest::getDns() const {
  return dns_;
}

void ListAuthorizationRulesRequest::setDns(bool dns) {
  dns_ = dns;
  setParameter(std::string("Dns"), dns ? "true" : "false");
}

std::string ListAuthorizationRulesRequest::getDestinationPort() const {
  return destinationPort_;
}

void ListAuthorizationRulesRequest::setDestinationPort(const std::string &destinationPort) {
  destinationPort_ = destinationPort;
  setParameter(std::string("DestinationPort"), destinationPort);
}

std::vector<ListAuthorizationRulesRequest::std::string> ListAuthorizationRulesRequest::getNames() const {
  return names_;
}

void ListAuthorizationRulesRequest::setNames(const std::vector<ListAuthorizationRulesRequest::std::string> &names) {
  names_ = names;
  for(int dep1 = 0; dep1 != names.size(); dep1++) {
    setParameter(std::string("Names") + "." + std::to_string(dep1 + 1), names[dep1]);
  }
}

std::string ListAuthorizationRulesRequest::getWirelessCloudConnectorId() const {
  return wirelessCloudConnectorId_;
}

void ListAuthorizationRulesRequest::setWirelessCloudConnectorId(const std::string &wirelessCloudConnectorId) {
  wirelessCloudConnectorId_ = wirelessCloudConnectorId;
  setParameter(std::string("WirelessCloudConnectorId"), wirelessCloudConnectorId);
}

long ListAuthorizationRulesRequest::getMaxResults() const {
  return maxResults_;
}

void ListAuthorizationRulesRequest::setMaxResults(long maxResults) {
  maxResults_ = maxResults;
  setParameter(std::string("MaxResults"), std::to_string(maxResults));
}

std::vector<ListAuthorizationRulesRequest::std::string> ListAuthorizationRulesRequest::getStatuses() const {
  return statuses_;
}

void ListAuthorizationRulesRequest::setStatuses(const std::vector<ListAuthorizationRulesRequest::std::string> &statuses) {
  statuses_ = statuses;
  for(int dep1 = 0; dep1 != statuses.size(); dep1++) {
    setParameter(std::string("Statuses") + "." + std::to_string(dep1 + 1), statuses[dep1]);
  }
}

