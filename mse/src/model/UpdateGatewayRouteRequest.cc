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

#include <alibabacloud/mse/model/UpdateGatewayRouteRequest.h>

using AlibabaCloud::Mse::Model::UpdateGatewayRouteRequest;

UpdateGatewayRouteRequest::UpdateGatewayRouteRequest()
    : RpcServiceRequest("mse", "2019-05-31", "UpdateGatewayRoute") {
  setMethod(HttpRequest::Method::Post);
}

UpdateGatewayRouteRequest::~UpdateGatewayRouteRequest() {}

std::string UpdateGatewayRouteRequest::getGatewayUniqueId() const {
  return gatewayUniqueId_;
}

void UpdateGatewayRouteRequest::setGatewayUniqueId(const std::string &gatewayUniqueId) {
  gatewayUniqueId_ = gatewayUniqueId;
  setParameter(std::string("GatewayUniqueId"), gatewayUniqueId);
}

std::string UpdateGatewayRouteRequest::getDestinationType() const {
  return destinationType_;
}

void UpdateGatewayRouteRequest::setDestinationType(const std::string &destinationType) {
  destinationType_ = destinationType;
  setParameter(std::string("DestinationType"), destinationType);
}

std::string UpdateGatewayRouteRequest::getDomainIdListJSON() const {
  return domainIdListJSON_;
}

void UpdateGatewayRouteRequest::setDomainIdListJSON(const std::string &domainIdListJSON) {
  domainIdListJSON_ = domainIdListJSON;
  setParameter(std::string("DomainIdListJSON"), domainIdListJSON);
}

long UpdateGatewayRouteRequest::getId() const {
  return id_;
}

void UpdateGatewayRouteRequest::setId(long id) {
  id_ = id;
  setParameter(std::string("Id"), std::to_string(id));
}

long UpdateGatewayRouteRequest::getGatewayId() const {
  return gatewayId_;
}

void UpdateGatewayRouteRequest::setGatewayId(long gatewayId) {
  gatewayId_ = gatewayId;
  setParameter(std::string("GatewayId"), std::to_string(gatewayId));
}

int UpdateGatewayRouteRequest::getRouteOrder() const {
  return routeOrder_;
}

void UpdateGatewayRouteRequest::setRouteOrder(int routeOrder) {
  routeOrder_ = routeOrder;
  setParameter(std::string("RouteOrder"), std::to_string(routeOrder));
}

std::vector<UpdateGatewayRouteRequest::Services> UpdateGatewayRouteRequest::getServices() const {
  return services_;
}

void UpdateGatewayRouteRequest::setServices(const std::vector<UpdateGatewayRouteRequest::Services> &services) {
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

UpdateGatewayRouteRequest::Predicates UpdateGatewayRouteRequest::getPredicates() const {
  return predicates_;
}

void UpdateGatewayRouteRequest::setPredicates(const UpdateGatewayRouteRequest::Predicates &predicates) {
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

UpdateGatewayRouteRequest::RedirectJSON UpdateGatewayRouteRequest::getRedirectJSON() const {
  return redirectJSON_;
}

void UpdateGatewayRouteRequest::setRedirectJSON(const UpdateGatewayRouteRequest::RedirectJSON &redirectJSON) {
  redirectJSON_ = redirectJSON;
  setParameter(std::string("RedirectJSON") + ".Path", redirectJSON.path);
  setParameter(std::string("RedirectJSON") + ".Code", std::to_string(redirectJSON.code));
  setParameter(std::string("RedirectJSON") + ".Host", redirectJSON.host);
}

UpdateGatewayRouteRequest::DirectResponseJSON UpdateGatewayRouteRequest::getDirectResponseJSON() const {
  return directResponseJSON_;
}

void UpdateGatewayRouteRequest::setDirectResponseJSON(const UpdateGatewayRouteRequest::DirectResponseJSON &directResponseJSON) {
  directResponseJSON_ = directResponseJSON;
  setParameter(std::string("DirectResponseJSON") + ".Code", std::to_string(directResponseJSON.code));
  setParameter(std::string("DirectResponseJSON") + ".Body", directResponseJSON.body);
}

std::string UpdateGatewayRouteRequest::getName() const {
  return name_;
}

void UpdateGatewayRouteRequest::setName(const std::string &name) {
  name_ = name;
  setParameter(std::string("Name"), name);
}

std::string UpdateGatewayRouteRequest::getAcceptLanguage() const {
  return acceptLanguage_;
}

void UpdateGatewayRouteRequest::setAcceptLanguage(const std::string &acceptLanguage) {
  acceptLanguage_ = acceptLanguage;
  setParameter(std::string("AcceptLanguage"), acceptLanguage);
}

