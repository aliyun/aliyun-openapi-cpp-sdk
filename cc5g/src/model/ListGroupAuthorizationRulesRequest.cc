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

#include <alibabacloud/cc5g/model/ListGroupAuthorizationRulesRequest.h>

using AlibabaCloud::CC5G::Model::ListGroupAuthorizationRulesRequest;

ListGroupAuthorizationRulesRequest::ListGroupAuthorizationRulesRequest()
    : RpcServiceRequest("cc5g", "2022-03-14", "ListGroupAuthorizationRules") {
  setMethod(HttpRequest::Method::Get);
}

ListGroupAuthorizationRulesRequest::~ListGroupAuthorizationRulesRequest() {}

std::string ListGroupAuthorizationRulesRequest::getWirelessCloudConnectorGroupId() const {
  return wirelessCloudConnectorGroupId_;
}

void ListGroupAuthorizationRulesRequest::setWirelessCloudConnectorGroupId(const std::string &wirelessCloudConnectorGroupId) {
  wirelessCloudConnectorGroupId_ = wirelessCloudConnectorGroupId;
  setParameter(std::string("WirelessCloudConnectorGroupId"), wirelessCloudConnectorGroupId);
}

std::string ListGroupAuthorizationRulesRequest::getDestinationType() const {
  return destinationType_;
}

void ListGroupAuthorizationRulesRequest::setDestinationType(const std::string &destinationType) {
  destinationType_ = destinationType;
  setParameter(std::string("DestinationType"), destinationType);
}

std::string ListGroupAuthorizationRulesRequest::getDestination() const {
  return destination_;
}

void ListGroupAuthorizationRulesRequest::setDestination(const std::string &destination) {
  destination_ = destination;
  setParameter(std::string("Destination"), destination);
}

std::string ListGroupAuthorizationRulesRequest::getType() const {
  return type_;
}

void ListGroupAuthorizationRulesRequest::setType(const std::string &type) {
  type_ = type;
  setParameter(std::string("Type"), type);
}

std::string ListGroupAuthorizationRulesRequest::getProtocol() const {
  return protocol_;
}

void ListGroupAuthorizationRulesRequest::setProtocol(const std::string &protocol) {
  protocol_ = protocol;
  setParameter(std::string("Protocol"), protocol);
}

std::vector<ListGroupAuthorizationRulesRequest::std::string> ListGroupAuthorizationRulesRequest::getAuthorizationRuleIds() const {
  return authorizationRuleIds_;
}

void ListGroupAuthorizationRulesRequest::setAuthorizationRuleIds(const std::vector<ListGroupAuthorizationRulesRequest::std::string> &authorizationRuleIds) {
  authorizationRuleIds_ = authorizationRuleIds;
  for(int dep1 = 0; dep1 != authorizationRuleIds.size(); dep1++) {
    setParameter(std::string("AuthorizationRuleIds") + "." + std::to_string(dep1 + 1), authorizationRuleIds[dep1]);
  }
}

std::string ListGroupAuthorizationRulesRequest::getNextToken() const {
  return nextToken_;
}

void ListGroupAuthorizationRulesRequest::setNextToken(const std::string &nextToken) {
  nextToken_ = nextToken;
  setParameter(std::string("NextToken"), nextToken);
}

std::string ListGroupAuthorizationRulesRequest::getPolicy() const {
  return policy_;
}

void ListGroupAuthorizationRulesRequest::setPolicy(const std::string &policy) {
  policy_ = policy;
  setParameter(std::string("Policy"), policy);
}

bool ListGroupAuthorizationRulesRequest::getDns() const {
  return dns_;
}

void ListGroupAuthorizationRulesRequest::setDns(bool dns) {
  dns_ = dns;
  setParameter(std::string("Dns"), dns ? "true" : "false");
}

std::string ListGroupAuthorizationRulesRequest::getDestinationPort() const {
  return destinationPort_;
}

void ListGroupAuthorizationRulesRequest::setDestinationPort(const std::string &destinationPort) {
  destinationPort_ = destinationPort;
  setParameter(std::string("DestinationPort"), destinationPort);
}

std::vector<ListGroupAuthorizationRulesRequest::std::string> ListGroupAuthorizationRulesRequest::getNames() const {
  return names_;
}

void ListGroupAuthorizationRulesRequest::setNames(const std::vector<ListGroupAuthorizationRulesRequest::std::string> &names) {
  names_ = names;
  for(int dep1 = 0; dep1 != names.size(); dep1++) {
    setParameter(std::string("Names") + "." + std::to_string(dep1 + 1), names[dep1]);
  }
}

long ListGroupAuthorizationRulesRequest::getMaxResults() const {
  return maxResults_;
}

void ListGroupAuthorizationRulesRequest::setMaxResults(long maxResults) {
  maxResults_ = maxResults;
  setParameter(std::string("MaxResults"), std::to_string(maxResults));
}

std::vector<ListGroupAuthorizationRulesRequest::std::string> ListGroupAuthorizationRulesRequest::getStatuses() const {
  return statuses_;
}

void ListGroupAuthorizationRulesRequest::setStatuses(const std::vector<ListGroupAuthorizationRulesRequest::std::string> &statuses) {
  statuses_ = statuses;
  for(int dep1 = 0; dep1 != statuses.size(); dep1++) {
    setParameter(std::string("Statuses") + "." + std::to_string(dep1 + 1), statuses[dep1]);
  }
}

