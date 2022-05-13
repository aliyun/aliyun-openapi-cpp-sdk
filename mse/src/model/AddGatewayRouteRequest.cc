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

#include <alibabacloud/mse/model/AddGatewayRouteRequest.h>

using AlibabaCloud::Mse::Model::AddGatewayRouteRequest;

AddGatewayRouteRequest::AddGatewayRouteRequest()
    : RpcServiceRequest("mse", "2019-05-31", "AddGatewayRoute") {
  setMethod(HttpRequest::Method::Post);
}

AddGatewayRouteRequest::~AddGatewayRouteRequest() {}

std::string AddGatewayRouteRequest::getGatewayUniqueId() const {
  return gatewayUniqueId_;
}

void AddGatewayRouteRequest::setGatewayUniqueId(const std::string &gatewayUniqueId) {
  gatewayUniqueId_ = gatewayUniqueId;
  setParameter(std::string("GatewayUniqueId"), gatewayUniqueId);
}

std::string AddGatewayRouteRequest::getDestinationType() const {
  return destinationType_;
}

void AddGatewayRouteRequest::setDestinationType(const std::string &destinationType) {
  destinationType_ = destinationType;
  setParameter(std::string("DestinationType"), destinationType);
}

std::string AddGatewayRouteRequest::getDomainIdListJSON() const {
  return domainIdListJSON_;
}

void AddGatewayRouteRequest::setDomainIdListJSON(const std::string &domainIdListJSON) {
  domainIdListJSON_ = domainIdListJSON;
  setParameter(std::string("DomainIdListJSON"), domainIdListJSON);
}

long AddGatewayRouteRequest::getDomainId() const {
  return domainId_;
}

void AddGatewayRouteRequest::setDomainId(long domainId) {
  domainId_ = domainId;
  setParameter(std::string("DomainId"), std::to_string(domainId));
}

long AddGatewayRouteRequest::getGatewayId() const {
  return gatewayId_;
}

void AddGatewayRouteRequest::setGatewayId(long gatewayId) {
  gatewayId_ = gatewayId;
  setParameter(std::string("GatewayId"), std::to_string(gatewayId));
}

int AddGatewayRouteRequest::getRouteOrder() const {
  return routeOrder_;
}

void AddGatewayRouteRequest::setRouteOrder(int routeOrder) {
  routeOrder_ = routeOrder;
  setParameter(std::string("RouteOrder"), std::to_string(routeOrder));
}

bool AddGatewayRouteRequest::getEnableWaf() const {
  return enableWaf_;
}

void AddGatewayRouteRequest::setEnableWaf(bool enableWaf) {
  enableWaf_ = enableWaf;
  setParameter(std::string("EnableWaf"), enableWaf ? "true" : "false");
}

std::vector<AddGatewayRouteRequest::Services> AddGatewayRouteRequest::getServices() const {
  return services_;
}

void AddGatewayRouteRequest::setServices(const std::vector<AddGatewayRouteRequest::Services> &services) {
  services_ = services;
  for(int dep1 = 0; dep1 != services.size(); dep1++) {
    setParameter(std::string("Services") + "." + std::to_string(dep1 + 1) + ".Name", services[dep1].name);
    setParameter(std::string("Services") + "." + std::to_string(dep1 + 1) + ".Namespace", services[dep1]._namespace);
    setParameter(std::string("Services") + "." + std::to_string(dep1 + 1) + ".SourceType", services[dep1].sourceType);
    setParameter(std::string("Services") + "." + std::to_string(dep1 + 1) + ".ServiceId", std::to_string(services[dep1].serviceId));
    setParameter(std::string("Services") + "." + std::to_string(dep1 + 1) + ".Percent", std::to_string(services[dep1].percent));
    setParameter(std::string("Services") + "." + std::to_string(dep1 + 1) + ".Version", services[dep1].version);
    setParameter(std::string("Services") + "." + std::to_string(dep1 + 1) + ".GroupName", services[dep1].groupName);
  }
}

AddGatewayRouteRequest::Predicates AddGatewayRouteRequest::getPredicates() const {
  return predicates_;
}

void AddGatewayRouteRequest::setPredicates(const AddGatewayRouteRequest::Predicates &predicates) {
  predicates_ = predicates;
  setParameter(std::string("Predicates") + ".PathPredicates.Path", predicates.pathPredicates.path);
  setParameter(std::string("Predicates") + ".PathPredicates.IgnoreCase", predicates.pathPredicates.ignoreCase ? "true" : "false");
  setParameter(std::string("Predicates") + ".PathPredicates.Type", predicates.pathPredicates.type);
  for(int dep1 = 0; dep1 != predicates.methodPredicates.size(); dep1++) {
    setParameter(std::string("Predicates") + ".MethodPredicates." + std::to_string(dep1 + 1), predicates.methodPredicates[dep1]);
  }
  for(int dep1 = 0; dep1 != predicates.headerPredicates.size(); dep1++) {
    setParameter(std::string("Predicates") + ".HeaderPredicates." + std::to_string(dep1 + 1) + ".Type", predicates.headerPredicates[dep1].type);
    setParameter(std::string("Predicates") + ".HeaderPredicates." + std::to_string(dep1 + 1) + ".Value", predicates.headerPredicates[dep1].value);
    setParameter(std::string("Predicates") + ".HeaderPredicates." + std::to_string(dep1 + 1) + ".Key", predicates.headerPredicates[dep1].key);
  }
  for(int dep1 = 0; dep1 != predicates.queryPredicates.size(); dep1++) {
    setParameter(std::string("Predicates") + ".QueryPredicates." + std::to_string(dep1 + 1) + ".Type", predicates.queryPredicates[dep1].type);
    setParameter(std::string("Predicates") + ".QueryPredicates." + std::to_string(dep1 + 1) + ".Value", predicates.queryPredicates[dep1].value);
    setParameter(std::string("Predicates") + ".QueryPredicates." + std::to_string(dep1 + 1) + ".Key", predicates.queryPredicates[dep1].key);
  }
}

AddGatewayRouteRequest::RedirectJSON AddGatewayRouteRequest::getRedirectJSON() const {
  return redirectJSON_;
}

void AddGatewayRouteRequest::setRedirectJSON(const AddGatewayRouteRequest::RedirectJSON &redirectJSON) {
  redirectJSON_ = redirectJSON;
  setParameter(std::string("RedirectJSON") + ".Path", redirectJSON.path);
  setParameter(std::string("RedirectJSON") + ".Code", std::to_string(redirectJSON.code));
  setParameter(std::string("RedirectJSON") + ".Host", redirectJSON.host);
}

AddGatewayRouteRequest::DirectResponseJSON AddGatewayRouteRequest::getDirectResponseJSON() const {
  return directResponseJSON_;
}

void AddGatewayRouteRequest::setDirectResponseJSON(const AddGatewayRouteRequest::DirectResponseJSON &directResponseJSON) {
  directResponseJSON_ = directResponseJSON;
  setParameter(std::string("DirectResponseJSON") + ".Code", std::to_string(directResponseJSON.code));
  setParameter(std::string("DirectResponseJSON") + ".Body", directResponseJSON.body);
}

std::string AddGatewayRouteRequest::getName() const {
  return name_;
}

void AddGatewayRouteRequest::setName(const std::string &name) {
  name_ = name;
  setParameter(std::string("Name"), name);
}

std::string AddGatewayRouteRequest::getAcceptLanguage() const {
  return acceptLanguage_;
}

void AddGatewayRouteRequest::setAcceptLanguage(const std::string &acceptLanguage) {
  acceptLanguage_ = acceptLanguage;
  setParameter(std::string("AcceptLanguage"), acceptLanguage);
}

