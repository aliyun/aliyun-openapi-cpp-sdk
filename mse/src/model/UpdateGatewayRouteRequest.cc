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

std::string UpdateGatewayRouteRequest::getMseSessionId() const {
  return mseSessionId_;
}

void UpdateGatewayRouteRequest::setMseSessionId(const std::string &mseSessionId) {
  mseSessionId_ = mseSessionId;
  setParameter(std::string("MseSessionId"), mseSessionId);
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

bool UpdateGatewayRouteRequest::getEnableWaf() const {
  return enableWaf_;
}

void UpdateGatewayRouteRequest::setEnableWaf(bool enableWaf) {
  enableWaf_ = enableWaf;
  setParameter(std::string("EnableWaf"), enableWaf ? "true" : "false");
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

std::vector<UpdateGatewayRouteRequest::FallbackServices> UpdateGatewayRouteRequest::getFallbackServices() const {
  return fallbackServices_;
}

void UpdateGatewayRouteRequest::setFallbackServices(const std::vector<UpdateGatewayRouteRequest::FallbackServices> &fallbackServices) {
  fallbackServices_ = fallbackServices;
  for(int dep1 = 0; dep1 != fallbackServices.size(); dep1++) {
    setParameter(std::string("FallbackServices") + "." + std::to_string(dep1 + 1) + ".AgreementType", fallbackServices[dep1].agreementType);
    setParameter(std::string("FallbackServices") + "." + std::to_string(dep1 + 1) + ".Name", fallbackServices[dep1].name);
    setParameter(std::string("FallbackServices") + "." + std::to_string(dep1 + 1) + ".Namespace", fallbackServices[dep1]._namespace);
    setParameter(std::string("FallbackServices") + "." + std::to_string(dep1 + 1) + ".SourceType", fallbackServices[dep1].sourceType);
    setParameter(std::string("FallbackServices") + "." + std::to_string(dep1 + 1) + ".ServiceId", std::to_string(fallbackServices[dep1].serviceId));
    setParameter(std::string("FallbackServices") + "." + std::to_string(dep1 + 1) + ".Percent", std::to_string(fallbackServices[dep1].percent));
    setParameter(std::string("FallbackServices") + "." + std::to_string(dep1 + 1) + ".Version", fallbackServices[dep1].version);
    setParameter(std::string("FallbackServices") + "." + std::to_string(dep1 + 1) + ".GroupName", fallbackServices[dep1].groupName);
    setParameter(std::string("FallbackServices") + "." + std::to_string(dep1 + 1) + ".ServicePort", std::to_string(fallbackServices[dep1].servicePort));
  }
}

bool UpdateGatewayRouteRequest::getFallback() const {
  return fallback_;
}

void UpdateGatewayRouteRequest::setFallback(bool fallback) {
  fallback_ = fallback;
  setParameter(std::string("Fallback"), fallback ? "true" : "false");
}

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
    setParameter(std::string("Services") + "." + std::to_string(dep1 + 1) + ".HttpDubboTranscoder.DubboServiceName", services[dep1].httpDubboTranscoder.dubboServiceName);
    for(int dep2 = 0; dep2 != services[dep1].httpDubboTranscoder.mothedMapList.size(); dep2++) {
      setParameter(std::string("Services") + "." + std::to_string(dep1 + 1) + ".HttpDubboTranscoder.MothedMapList." + std::to_string(dep2 + 1) + ".HttpMothed", services[dep1].httpDubboTranscoder.mothedMapList[dep2].httpMothed);
      for(int dep3 = 0; dep3 != services[dep1].httpDubboTranscoder.mothedMapList[dep2].paramMapsList.size(); dep3++) {
        setParameter(std::string("Services") + "." + std::to_string(dep1 + 1) + ".HttpDubboTranscoder.MothedMapList." + std::to_string(dep2 + 1) + ".ParamMapsList." + std::to_string(dep3 + 1) + ".ExtractKeySpec", services[dep1].httpDubboTranscoder.mothedMapList[dep2].paramMapsList[dep3].extractKeySpec);
        setParameter(std::string("Services") + "." + std::to_string(dep1 + 1) + ".HttpDubboTranscoder.MothedMapList." + std::to_string(dep2 + 1) + ".ParamMapsList." + std::to_string(dep3 + 1) + ".ExtractKey", services[dep1].httpDubboTranscoder.mothedMapList[dep2].paramMapsList[dep3].extractKey);
        setParameter(std::string("Services") + "." + std::to_string(dep1 + 1) + ".HttpDubboTranscoder.MothedMapList." + std::to_string(dep2 + 1) + ".ParamMapsList." + std::to_string(dep3 + 1) + ".MappingType", services[dep1].httpDubboTranscoder.mothedMapList[dep2].paramMapsList[dep3].mappingType);
      }
      setParameter(std::string("Services") + "." + std::to_string(dep1 + 1) + ".HttpDubboTranscoder.MothedMapList." + std::to_string(dep2 + 1) + ".Mothedpath", services[dep1].httpDubboTranscoder.mothedMapList[dep2].mothedpath);
      setParameter(std::string("Services") + "." + std::to_string(dep1 + 1) + ".HttpDubboTranscoder.MothedMapList." + std::to_string(dep2 + 1) + ".DubboMothedName", services[dep1].httpDubboTranscoder.mothedMapList[dep2].dubboMothedName);
      setParameter(std::string("Services") + "." + std::to_string(dep1 + 1) + ".HttpDubboTranscoder.MothedMapList." + std::to_string(dep2 + 1) + ".PassThroughAllHeaders", services[dep1].httpDubboTranscoder.mothedMapList[dep2].passThroughAllHeaders);
      for(int dep3 = 0; dep3 != services[dep1].httpDubboTranscoder.mothedMapList[dep2].passThroughList.size(); dep3++) {
        setParameter(std::string("Services") + "." + std::to_string(dep1 + 1) + ".HttpDubboTranscoder.MothedMapList." + std::to_string(dep2 + 1) + ".PassThroughList." + std::to_string(dep3 + 1), services[dep1].httpDubboTranscoder.mothedMapList[dep2].passThroughList[dep3]);
      }
    }
    setParameter(std::string("Services") + "." + std::to_string(dep1 + 1) + ".HttpDubboTranscoder.DubboServiceVersion", services[dep1].httpDubboTranscoder.dubboServiceVersion);
    setParameter(std::string("Services") + "." + std::to_string(dep1 + 1) + ".HttpDubboTranscoder.DubboServiceGroup", services[dep1].httpDubboTranscoder.dubboServiceGroup);
    setParameter(std::string("Services") + "." + std::to_string(dep1 + 1) + ".AgreementType", services[dep1].agreementType);
    setParameter(std::string("Services") + "." + std::to_string(dep1 + 1) + ".Name", services[dep1].name);
    setParameter(std::string("Services") + "." + std::to_string(dep1 + 1) + ".Namespace", services[dep1]._namespace);
    setParameter(std::string("Services") + "." + std::to_string(dep1 + 1) + ".SourceType", services[dep1].sourceType);
    setParameter(std::string("Services") + "." + std::to_string(dep1 + 1) + ".ServiceId", std::to_string(services[dep1].serviceId));
    setParameter(std::string("Services") + "." + std::to_string(dep1 + 1) + ".Percent", std::to_string(services[dep1].percent));
    setParameter(std::string("Services") + "." + std::to_string(dep1 + 1) + ".Version", services[dep1].version);
    setParameter(std::string("Services") + "." + std::to_string(dep1 + 1) + ".GroupName", services[dep1].groupName);
    setParameter(std::string("Services") + "." + std::to_string(dep1 + 1) + ".ServicePort", std::to_string(services[dep1].servicePort));
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

std::string UpdateGatewayRouteRequest::getAcceptLanguage() const {
  return acceptLanguage_;
}

void UpdateGatewayRouteRequest::setAcceptLanguage(const std::string &acceptLanguage) {
  acceptLanguage_ = acceptLanguage;
  setParameter(std::string("AcceptLanguage"), acceptLanguage);
}

