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

#include <alibabacloud/privatelink/model/UpdateVpcEndpointServiceAttributeRequest.h>

using AlibabaCloud::Privatelink::Model::UpdateVpcEndpointServiceAttributeRequest;

UpdateVpcEndpointServiceAttributeRequest::UpdateVpcEndpointServiceAttributeRequest()
    : RpcServiceRequest("privatelink", "2020-04-15", "UpdateVpcEndpointServiceAttribute") {
  setMethod(HttpRequest::Method::Post);
}

UpdateVpcEndpointServiceAttributeRequest::~UpdateVpcEndpointServiceAttributeRequest() {}

bool UpdateVpcEndpointServiceAttributeRequest::getPrivateServiceDomainEnabled() const {
  return privateServiceDomainEnabled_;
}

void UpdateVpcEndpointServiceAttributeRequest::setPrivateServiceDomainEnabled(bool privateServiceDomainEnabled) {
  privateServiceDomainEnabled_ = privateServiceDomainEnabled;
  setParameter(std::string("PrivateServiceDomainEnabled"), privateServiceDomainEnabled ? "true" : "false");
}

std::string UpdateVpcEndpointServiceAttributeRequest::getPrivateServiceDomain() const {
  return privateServiceDomain_;
}

void UpdateVpcEndpointServiceAttributeRequest::setPrivateServiceDomain(const std::string &privateServiceDomain) {
  privateServiceDomain_ = privateServiceDomain;
  setParameter(std::string("PrivateServiceDomain"), privateServiceDomain);
}

bool UpdateVpcEndpointServiceAttributeRequest::getAutoAcceptEnabled() const {
  return autoAcceptEnabled_;
}

void UpdateVpcEndpointServiceAttributeRequest::setAutoAcceptEnabled(bool autoAcceptEnabled) {
  autoAcceptEnabled_ = autoAcceptEnabled;
  setParameter(std::string("AutoAcceptEnabled"), autoAcceptEnabled ? "true" : "false");
}

std::string UpdateVpcEndpointServiceAttributeRequest::getClientToken() const {
  return clientToken_;
}

void UpdateVpcEndpointServiceAttributeRequest::setClientToken(const std::string &clientToken) {
  clientToken_ = clientToken;
  setParameter(std::string("ClientToken"), clientToken);
}

int UpdateVpcEndpointServiceAttributeRequest::getConnectBandwidth() const {
  return connectBandwidth_;
}

void UpdateVpcEndpointServiceAttributeRequest::setConnectBandwidth(int connectBandwidth) {
  connectBandwidth_ = connectBandwidth;
  setParameter(std::string("ConnectBandwidth"), std::to_string(connectBandwidth));
}

std::string UpdateVpcEndpointServiceAttributeRequest::getRegionId() const {
  return regionId_;
}

void UpdateVpcEndpointServiceAttributeRequest::setRegionId(const std::string &regionId) {
  regionId_ = regionId;
  setParameter(std::string("RegionId"), regionId);
}

bool UpdateVpcEndpointServiceAttributeRequest::getZoneAffinityEnabled() const {
  return zoneAffinityEnabled_;
}

void UpdateVpcEndpointServiceAttributeRequest::setZoneAffinityEnabled(bool zoneAffinityEnabled) {
  zoneAffinityEnabled_ = zoneAffinityEnabled;
  setParameter(std::string("ZoneAffinityEnabled"), zoneAffinityEnabled ? "true" : "false");
}

bool UpdateVpcEndpointServiceAttributeRequest::getDryRun() const {
  return dryRun_;
}

void UpdateVpcEndpointServiceAttributeRequest::setDryRun(bool dryRun) {
  dryRun_ = dryRun;
  setParameter(std::string("DryRun"), dryRun ? "true" : "false");
}

bool UpdateVpcEndpointServiceAttributeRequest::getServiceSupportIPv6() const {
  return serviceSupportIPv6_;
}

void UpdateVpcEndpointServiceAttributeRequest::setServiceSupportIPv6(bool serviceSupportIPv6) {
  serviceSupportIPv6_ = serviceSupportIPv6;
  setParameter(std::string("ServiceSupportIPv6"), serviceSupportIPv6 ? "true" : "false");
}

std::string UpdateVpcEndpointServiceAttributeRequest::getServiceDescription() const {
  return serviceDescription_;
}

void UpdateVpcEndpointServiceAttributeRequest::setServiceDescription(const std::string &serviceDescription) {
  serviceDescription_ = serviceDescription;
  setParameter(std::string("ServiceDescription"), serviceDescription);
}

std::string UpdateVpcEndpointServiceAttributeRequest::getServiceId() const {
  return serviceId_;
}

void UpdateVpcEndpointServiceAttributeRequest::setServiceId(const std::string &serviceId) {
  serviceId_ = serviceId;
  setParameter(std::string("ServiceId"), serviceId);
}

