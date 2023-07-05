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

#include <alibabacloud/privatelink/model/CreateVpcEndpointServiceRequest.h>

using AlibabaCloud::Privatelink::Model::CreateVpcEndpointServiceRequest;

CreateVpcEndpointServiceRequest::CreateVpcEndpointServiceRequest()
    : RpcServiceRequest("privatelink", "2020-04-15", "CreateVpcEndpointService") {
  setMethod(HttpRequest::Method::Post);
}

CreateVpcEndpointServiceRequest::~CreateVpcEndpointServiceRequest() {}

bool CreateVpcEndpointServiceRequest::getPrivateServiceDomainEnabled() const {
  return privateServiceDomainEnabled_;
}

void CreateVpcEndpointServiceRequest::setPrivateServiceDomainEnabled(bool privateServiceDomainEnabled) {
  privateServiceDomainEnabled_ = privateServiceDomainEnabled;
  setParameter(std::string("PrivateServiceDomainEnabled"), privateServiceDomainEnabled ? "true" : "false");
}

std::string CreateVpcEndpointServiceRequest::getPrivateServiceDomain() const {
  return privateServiceDomain_;
}

void CreateVpcEndpointServiceRequest::setPrivateServiceDomain(const std::string &privateServiceDomain) {
  privateServiceDomain_ = privateServiceDomain;
  setParameter(std::string("PrivateServiceDomain"), privateServiceDomain);
}

bool CreateVpcEndpointServiceRequest::getAutoAcceptEnabled() const {
  return autoAcceptEnabled_;
}

void CreateVpcEndpointServiceRequest::setAutoAcceptEnabled(bool autoAcceptEnabled) {
  autoAcceptEnabled_ = autoAcceptEnabled;
  setParameter(std::string("AutoAcceptEnabled"), autoAcceptEnabled ? "true" : "false");
}

std::string CreateVpcEndpointServiceRequest::getClientToken() const {
  return clientToken_;
}

void CreateVpcEndpointServiceRequest::setClientToken(const std::string &clientToken) {
  clientToken_ = clientToken;
  setParameter(std::string("ClientToken"), clientToken);
}

std::vector<CreateVpcEndpointServiceRequest::SystemTag> CreateVpcEndpointServiceRequest::getSystemTag() const {
  return systemTag_;
}

void CreateVpcEndpointServiceRequest::setSystemTag(const std::vector<CreateVpcEndpointServiceRequest::SystemTag> &systemTag) {
  systemTag_ = systemTag;
  for(int dep1 = 0; dep1 != systemTag.size(); dep1++) {
  auto systemTagObj = systemTag.at(dep1);
  std::string systemTagObjStr = std::string("SystemTag") + "." + std::to_string(dep1 + 1);
    setParameter(systemTagObjStr + ".Key", systemTagObj.key);
    setParameter(systemTagObjStr + ".Value", systemTagObj.value);
    setParameter(systemTagObjStr + ".Scope", systemTagObj.scope);
  }
}

std::string CreateVpcEndpointServiceRequest::getPayer() const {
  return payer_;
}

void CreateVpcEndpointServiceRequest::setPayer(const std::string &payer) {
  payer_ = payer;
  setParameter(std::string("Payer"), payer);
}

std::string CreateVpcEndpointServiceRequest::getResourceGroupId() const {
  return resourceGroupId_;
}

void CreateVpcEndpointServiceRequest::setResourceGroupId(const std::string &resourceGroupId) {
  resourceGroupId_ = resourceGroupId;
  setParameter(std::string("ResourceGroupId"), resourceGroupId);
}

std::string CreateVpcEndpointServiceRequest::getRegionId() const {
  return regionId_;
}

void CreateVpcEndpointServiceRequest::setRegionId(const std::string &regionId) {
  regionId_ = regionId;
  setParameter(std::string("RegionId"), regionId);
}

bool CreateVpcEndpointServiceRequest::getZoneAffinityEnabled() const {
  return zoneAffinityEnabled_;
}

void CreateVpcEndpointServiceRequest::setZoneAffinityEnabled(bool zoneAffinityEnabled) {
  zoneAffinityEnabled_ = zoneAffinityEnabled;
  setParameter(std::string("ZoneAffinityEnabled"), zoneAffinityEnabled ? "true" : "false");
}

std::vector<CreateVpcEndpointServiceRequest::Tag> CreateVpcEndpointServiceRequest::getTag() const {
  return tag_;
}

void CreateVpcEndpointServiceRequest::setTag(const std::vector<CreateVpcEndpointServiceRequest::Tag> &tag) {
  tag_ = tag;
  for(int dep1 = 0; dep1 != tag.size(); dep1++) {
  auto tagObj = tag.at(dep1);
  std::string tagObjStr = std::string("Tag") + "." + std::to_string(dep1 + 1);
    setParameter(tagObjStr + ".Key", tagObj.key);
    setParameter(tagObjStr + ".Value", tagObj.value);
  }
}

bool CreateVpcEndpointServiceRequest::getDryRun() const {
  return dryRun_;
}

void CreateVpcEndpointServiceRequest::setDryRun(bool dryRun) {
  dryRun_ = dryRun;
  setParameter(std::string("DryRun"), dryRun ? "true" : "false");
}

std::vector<CreateVpcEndpointServiceRequest::Resource> CreateVpcEndpointServiceRequest::getResource() const {
  return resource_;
}

void CreateVpcEndpointServiceRequest::setResource(const std::vector<CreateVpcEndpointServiceRequest::Resource> &resource) {
  resource_ = resource;
  for(int dep1 = 0; dep1 != resource.size(); dep1++) {
  auto resourceObj = resource.at(dep1);
  std::string resourceObjStr = std::string("Resource") + "." + std::to_string(dep1 + 1);
    setParameter(resourceObjStr + ".ResourceType", resourceObj.resourceType);
    setParameter(resourceObjStr + ".ResourceId", resourceObj.resourceId);
    setParameter(resourceObjStr + ".ZoneId", resourceObj.zoneId);
  }
}

std::string CreateVpcEndpointServiceRequest::getServiceResourceType() const {
  return serviceResourceType_;
}

void CreateVpcEndpointServiceRequest::setServiceResourceType(const std::string &serviceResourceType) {
  serviceResourceType_ = serviceResourceType;
  setParameter(std::string("ServiceResourceType"), serviceResourceType);
}

bool CreateVpcEndpointServiceRequest::getServiceSupportIPv6() const {
  return serviceSupportIPv6_;
}

void CreateVpcEndpointServiceRequest::setServiceSupportIPv6(bool serviceSupportIPv6) {
  serviceSupportIPv6_ = serviceSupportIPv6;
  setParameter(std::string("ServiceSupportIPv6"), serviceSupportIPv6 ? "true" : "false");
}

std::string CreateVpcEndpointServiceRequest::getServiceDescription() const {
  return serviceDescription_;
}

void CreateVpcEndpointServiceRequest::setServiceDescription(const std::string &serviceDescription) {
  serviceDescription_ = serviceDescription;
  setParameter(std::string("ServiceDescription"), serviceDescription);
}

