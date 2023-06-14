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

#include <alibabacloud/ga/model/CreateListenerRequest.h>

using AlibabaCloud::Ga::Model::CreateListenerRequest;

CreateListenerRequest::CreateListenerRequest()
    : RpcServiceRequest("ga", "2019-11-20", "CreateListener") {
  setMethod(HttpRequest::Method::Post);
}

CreateListenerRequest::~CreateListenerRequest() {}

std::string CreateListenerRequest::getClientToken() const {
  return clientToken_;
}

void CreateListenerRequest::setClientToken(const std::string &clientToken) {
  clientToken_ = clientToken;
  setParameter(std::string("ClientToken"), clientToken);
}

std::string CreateListenerRequest::getDescription() const {
  return description_;
}

void CreateListenerRequest::setDescription(const std::string &description) {
  description_ = description;
  setParameter(std::string("Description"), description);
}

std::vector<CreateListenerRequest::CustomRoutingEndpointGroupConfigurations> CreateListenerRequest::getCustomRoutingEndpointGroupConfigurations() const {
  return customRoutingEndpointGroupConfigurations_;
}

void CreateListenerRequest::setCustomRoutingEndpointGroupConfigurations(const std::vector<CreateListenerRequest::CustomRoutingEndpointGroupConfigurations> &customRoutingEndpointGroupConfigurations) {
  customRoutingEndpointGroupConfigurations_ = customRoutingEndpointGroupConfigurations;
  for(int dep1 = 0; dep1 != customRoutingEndpointGroupConfigurations.size(); dep1++) {
    setParameter(std::string("CustomRoutingEndpointGroupConfigurations") + "." + std::to_string(dep1 + 1) + ".EndpointGroupRegion", customRoutingEndpointGroupConfigurations[dep1].endpointGroupRegion);
    setParameter(std::string("CustomRoutingEndpointGroupConfigurations") + "." + std::to_string(dep1 + 1) + ".Name", customRoutingEndpointGroupConfigurations[dep1].name);
    setParameter(std::string("CustomRoutingEndpointGroupConfigurations") + "." + std::to_string(dep1 + 1) + ".Description", customRoutingEndpointGroupConfigurations[dep1].description);
    for(int dep2 = 0; dep2 != customRoutingEndpointGroupConfigurations[dep1].destinationConfigurations.size(); dep2++) {
      for(int dep3 = 0; dep3 != customRoutingEndpointGroupConfigurations[dep1].destinationConfigurations[dep2].protocols.size(); dep3++) {
        setParameter(std::string("CustomRoutingEndpointGroupConfigurations") + "." + std::to_string(dep1 + 1) + ".DestinationConfigurations." + std::to_string(dep2 + 1) + ".Protocols." + std::to_string(dep3 + 1), customRoutingEndpointGroupConfigurations[dep1].destinationConfigurations[dep2].protocols[dep3]);
      }
      setParameter(std::string("CustomRoutingEndpointGroupConfigurations") + "." + std::to_string(dep1 + 1) + ".DestinationConfigurations." + std::to_string(dep2 + 1) + ".FromPort", std::to_string(customRoutingEndpointGroupConfigurations[dep1].destinationConfigurations[dep2].fromPort));
      setParameter(std::string("CustomRoutingEndpointGroupConfigurations") + "." + std::to_string(dep1 + 1) + ".DestinationConfigurations." + std::to_string(dep2 + 1) + ".ToPort", std::to_string(customRoutingEndpointGroupConfigurations[dep1].destinationConfigurations[dep2].toPort));
    }
    for(int dep2 = 0; dep2 != customRoutingEndpointGroupConfigurations[dep1].endpointConfigurations.size(); dep2++) {
      setParameter(std::string("CustomRoutingEndpointGroupConfigurations") + "." + std::to_string(dep1 + 1) + ".EndpointConfigurations." + std::to_string(dep2 + 1) + ".Type", customRoutingEndpointGroupConfigurations[dep1].endpointConfigurations[dep2].type);
      setParameter(std::string("CustomRoutingEndpointGroupConfigurations") + "." + std::to_string(dep1 + 1) + ".EndpointConfigurations." + std::to_string(dep2 + 1) + ".Endpoint", customRoutingEndpointGroupConfigurations[dep1].endpointConfigurations[dep2].endpoint);
      setParameter(std::string("CustomRoutingEndpointGroupConfigurations") + "." + std::to_string(dep1 + 1) + ".EndpointConfigurations." + std::to_string(dep2 + 1) + ".TrafficToEndpointPolicy", customRoutingEndpointGroupConfigurations[dep1].endpointConfigurations[dep2].trafficToEndpointPolicy);
      for(int dep3 = 0; dep3 != customRoutingEndpointGroupConfigurations[dep1].endpointConfigurations[dep2].policyConfigurations.size(); dep3++) {
        setParameter(std::string("CustomRoutingEndpointGroupConfigurations") + "." + std::to_string(dep1 + 1) + ".EndpointConfigurations." + std::to_string(dep2 + 1) + ".PolicyConfigurations." + std::to_string(dep3 + 1) + ".Address", customRoutingEndpointGroupConfigurations[dep1].endpointConfigurations[dep2].policyConfigurations[dep3].address);
        for(int dep4 = 0; dep4 != customRoutingEndpointGroupConfigurations[dep1].endpointConfigurations[dep2].policyConfigurations[dep3].portRanges.size(); dep4++) {
          setParameter(std::string("CustomRoutingEndpointGroupConfigurations") + "." + std::to_string(dep1 + 1) + ".EndpointConfigurations." + std::to_string(dep2 + 1) + ".PolicyConfigurations." + std::to_string(dep3 + 1) + ".PortRanges." + std::to_string(dep4 + 1) + ".FromPort", std::to_string(customRoutingEndpointGroupConfigurations[dep1].endpointConfigurations[dep2].policyConfigurations[dep3].portRanges[dep4].fromPort));
          setParameter(std::string("CustomRoutingEndpointGroupConfigurations") + "." + std::to_string(dep1 + 1) + ".EndpointConfigurations." + std::to_string(dep2 + 1) + ".PolicyConfigurations." + std::to_string(dep3 + 1) + ".PortRanges." + std::to_string(dep4 + 1) + ".ToPort", std::to_string(customRoutingEndpointGroupConfigurations[dep1].endpointConfigurations[dep2].policyConfigurations[dep3].portRanges[dep4].toPort));
        }
      }
    }
  }
}

std::string CreateListenerRequest::getType() const {
  return type_;
}

void CreateListenerRequest::setType(const std::string &type) {
  type_ = type;
  setParameter(std::string("Type"), type);
}

std::vector<CreateListenerRequest::BackendPorts> CreateListenerRequest::getBackendPorts() const {
  return backendPorts_;
}

void CreateListenerRequest::setBackendPorts(const std::vector<CreateListenerRequest::BackendPorts> &backendPorts) {
  backendPorts_ = backendPorts;
  for(int dep1 = 0; dep1 != backendPorts.size(); dep1++) {
  auto backendPortsObj = backendPorts.at(dep1);
  std::string backendPortsObjStr = std::string("BackendPorts") + "." + std::to_string(dep1 + 1);
    setParameter(backendPortsObjStr + ".FromPort", std::to_string(backendPortsObj.fromPort));
    setParameter(backendPortsObjStr + ".ToPort", std::to_string(backendPortsObj.toPort));
  }
}

std::string CreateListenerRequest::getProtocol() const {
  return protocol_;
}

void CreateListenerRequest::setProtocol(const std::string &protocol) {
  protocol_ = protocol;
  setParameter(std::string("Protocol"), protocol);
}

std::string CreateListenerRequest::getRegionId() const {
  return regionId_;
}

void CreateListenerRequest::setRegionId(const std::string &regionId) {
  regionId_ = regionId;
  setParameter(std::string("RegionId"), regionId);
}

std::string CreateListenerRequest::getAcceleratorId() const {
  return acceleratorId_;
}

void CreateListenerRequest::setAcceleratorId(const std::string &acceleratorId) {
  acceleratorId_ = acceleratorId;
  setParameter(std::string("AcceleratorId"), acceleratorId);
}

std::vector<CreateListenerRequest::EndpointGroupConfigurations> CreateListenerRequest::getEndpointGroupConfigurations() const {
  return endpointGroupConfigurations_;
}

void CreateListenerRequest::setEndpointGroupConfigurations(const std::vector<CreateListenerRequest::EndpointGroupConfigurations> &endpointGroupConfigurations) {
  endpointGroupConfigurations_ = endpointGroupConfigurations;
  for(int dep1 = 0; dep1 != endpointGroupConfigurations.size(); dep1++) {
    setParameter(std::string("EndpointGroupConfigurations") + "." + std::to_string(dep1 + 1) + ".EndpointGroupName", endpointGroupConfigurations[dep1].endpointGroupName);
    setParameter(std::string("EndpointGroupConfigurations") + "." + std::to_string(dep1 + 1) + ".EndpointGroupDescription", endpointGroupConfigurations[dep1].endpointGroupDescription);
    setParameter(std::string("EndpointGroupConfigurations") + "." + std::to_string(dep1 + 1) + ".EndpointGroupRegion", endpointGroupConfigurations[dep1].endpointGroupRegion);
    setParameter(std::string("EndpointGroupConfigurations") + "." + std::to_string(dep1 + 1) + ".TrafficPercentage", std::to_string(endpointGroupConfigurations[dep1].trafficPercentage));
    setParameter(std::string("EndpointGroupConfigurations") + "." + std::to_string(dep1 + 1) + ".HealthCheckEnabled", endpointGroupConfigurations[dep1].healthCheckEnabled ? "true" : "false");
    setParameter(std::string("EndpointGroupConfigurations") + "." + std::to_string(dep1 + 1) + ".HealthCheckIntervalSeconds", std::to_string(endpointGroupConfigurations[dep1].healthCheckIntervalSeconds));
    setParameter(std::string("EndpointGroupConfigurations") + "." + std::to_string(dep1 + 1) + ".HealthCheckPath", endpointGroupConfigurations[dep1].healthCheckPath);
    setParameter(std::string("EndpointGroupConfigurations") + "." + std::to_string(dep1 + 1) + ".HealthCheckPort", std::to_string(endpointGroupConfigurations[dep1].healthCheckPort));
    setParameter(std::string("EndpointGroupConfigurations") + "." + std::to_string(dep1 + 1) + ".HealthCheckProtocol", endpointGroupConfigurations[dep1].healthCheckProtocol);
    setParameter(std::string("EndpointGroupConfigurations") + "." + std::to_string(dep1 + 1) + ".ThresholdCount", std::to_string(endpointGroupConfigurations[dep1].thresholdCount));
    for(int dep2 = 0; dep2 != endpointGroupConfigurations[dep1].endpointConfigurations.size(); dep2++) {
      setParameter(std::string("EndpointGroupConfigurations") + "." + std::to_string(dep1 + 1) + ".EndpointConfigurations." + std::to_string(dep2 + 1) + ".Type", endpointGroupConfigurations[dep1].endpointConfigurations[dep2].type);
      setParameter(std::string("EndpointGroupConfigurations") + "." + std::to_string(dep1 + 1) + ".EndpointConfigurations." + std::to_string(dep2 + 1) + ".Weight", std::to_string(endpointGroupConfigurations[dep1].endpointConfigurations[dep2].weight));
      setParameter(std::string("EndpointGroupConfigurations") + "." + std::to_string(dep1 + 1) + ".EndpointConfigurations." + std::to_string(dep2 + 1) + ".Endpoint", endpointGroupConfigurations[dep1].endpointConfigurations[dep2].endpoint);
    }
    setParameter(std::string("EndpointGroupConfigurations") + "." + std::to_string(dep1 + 1) + ".EndpointRequestProtocol", endpointGroupConfigurations[dep1].endpointRequestProtocol);
    setParameter(std::string("EndpointGroupConfigurations") + "." + std::to_string(dep1 + 1) + ".EndpointGroupType", endpointGroupConfigurations[dep1].endpointGroupType);
    for(int dep2 = 0; dep2 != endpointGroupConfigurations[dep1].portOverrides.size(); dep2++) {
      setParameter(std::string("EndpointGroupConfigurations") + "." + std::to_string(dep1 + 1) + ".PortOverrides." + std::to_string(dep2 + 1) + ".ListenerPort", std::to_string(endpointGroupConfigurations[dep1].portOverrides[dep2].listenerPort));
      setParameter(std::string("EndpointGroupConfigurations") + "." + std::to_string(dep1 + 1) + ".PortOverrides." + std::to_string(dep2 + 1) + ".EndpointPort", std::to_string(endpointGroupConfigurations[dep1].portOverrides[dep2].endpointPort));
    }
    setParameter(std::string("EndpointGroupConfigurations") + "." + std::to_string(dep1 + 1) + ".EnableClientIPPreservationToa", endpointGroupConfigurations[dep1].enableClientIPPreservationToa ? "true" : "false");
    setParameter(std::string("EndpointGroupConfigurations") + "." + std::to_string(dep1 + 1) + ".EnableClientIPPreservationProxyProtocol", endpointGroupConfigurations[dep1].enableClientIPPreservationProxyProtocol ? "true" : "false");
  }
}

CreateListenerRequest::XForwardedForConfig CreateListenerRequest::getXForwardedForConfig() const {
  return xForwardedForConfig_;
}

void CreateListenerRequest::setXForwardedForConfig(const CreateListenerRequest::XForwardedForConfig &xForwardedForConfig) {
  xForwardedForConfig_ = xForwardedForConfig;
  setParameter(std::string("XForwardedForConfig") + ".XForwardedForGaIdEnabled", xForwardedForConfig.xForwardedForGaIdEnabled ? "true" : "false");
  setParameter(std::string("XForwardedForConfig") + ".XForwardedForGaApEnabled", xForwardedForConfig.xForwardedForGaApEnabled ? "true" : "false");
  setParameter(std::string("XForwardedForConfig") + ".XForwardedForProtoEnabled", xForwardedForConfig.xForwardedForProtoEnabled ? "true" : "false");
  setParameter(std::string("XForwardedForConfig") + ".XForwardedForPortEnabled", xForwardedForConfig.xForwardedForPortEnabled ? "true" : "false");
  setParameter(std::string("XForwardedForConfig") + ".XRealIpEnabled", xForwardedForConfig.xRealIpEnabled ? "true" : "false");
}

std::string CreateListenerRequest::getSecurityPolicyId() const {
  return securityPolicyId_;
}

void CreateListenerRequest::setSecurityPolicyId(const std::string &securityPolicyId) {
  securityPolicyId_ = securityPolicyId;
  setParameter(std::string("SecurityPolicyId"), securityPolicyId);
}

bool CreateListenerRequest::getProxyProtocol() const {
  return proxyProtocol_;
}

void CreateListenerRequest::setProxyProtocol(bool proxyProtocol) {
  proxyProtocol_ = proxyProtocol;
  setParameter(std::string("ProxyProtocol"), proxyProtocol ? "true" : "false");
}

std::vector<CreateListenerRequest::PortRanges> CreateListenerRequest::getPortRanges() const {
  return portRanges_;
}

void CreateListenerRequest::setPortRanges(const std::vector<CreateListenerRequest::PortRanges> &portRanges) {
  portRanges_ = portRanges;
  for(int dep1 = 0; dep1 != portRanges.size(); dep1++) {
  auto portRangesObj = portRanges.at(dep1);
  std::string portRangesObjStr = std::string("PortRanges") + "." + std::to_string(dep1 + 1);
    setParameter(portRangesObjStr + ".FromPort", std::to_string(portRangesObj.fromPort));
    setParameter(portRangesObjStr + ".ToPort", std::to_string(portRangesObj.toPort));
  }
}

std::vector<CreateListenerRequest::Certificates> CreateListenerRequest::getCertificates() const {
  return certificates_;
}

void CreateListenerRequest::setCertificates(const std::vector<CreateListenerRequest::Certificates> &certificates) {
  certificates_ = certificates;
  for(int dep1 = 0; dep1 != certificates.size(); dep1++) {
  auto certificatesObj = certificates.at(dep1);
  std::string certificatesObjStr = std::string("Certificates") + "." + std::to_string(dep1 + 1);
    setParameter(certificatesObjStr + ".Id", certificatesObj.id);
  }
}

std::string CreateListenerRequest::getName() const {
  return name_;
}

void CreateListenerRequest::setName(const std::string &name) {
  name_ = name;
  setParameter(std::string("Name"), name);
}

std::string CreateListenerRequest::getClientAffinity() const {
  return clientAffinity_;
}

void CreateListenerRequest::setClientAffinity(const std::string &clientAffinity) {
  clientAffinity_ = clientAffinity;
  setParameter(std::string("ClientAffinity"), clientAffinity);
}

