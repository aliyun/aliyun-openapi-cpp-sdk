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

#include <alibabacloud/ecs/model/ModifyInstanceMetadataOptionsRequest.h>

using AlibabaCloud::Ecs::Model::ModifyInstanceMetadataOptionsRequest;

ModifyInstanceMetadataOptionsRequest::ModifyInstanceMetadataOptionsRequest()
    : RpcServiceRequest("ecs", "2014-05-26", "ModifyInstanceMetadataOptions") {
  setMethod(HttpRequest::Method::Post);
}

ModifyInstanceMetadataOptionsRequest::~ModifyInstanceMetadataOptionsRequest() {}

long ModifyInstanceMetadataOptionsRequest::getResourceOwnerId() const {
  return resourceOwnerId_;
}

void ModifyInstanceMetadataOptionsRequest::setResourceOwnerId(long resourceOwnerId) {
  resourceOwnerId_ = resourceOwnerId;
  setParameter(std::string("ResourceOwnerId"), std::to_string(resourceOwnerId));
}

std::string ModifyInstanceMetadataOptionsRequest::getInstanceMetadataTags() const {
  return instanceMetadataTags_;
}

void ModifyInstanceMetadataOptionsRequest::setInstanceMetadataTags(const std::string &instanceMetadataTags) {
  instanceMetadataTags_ = instanceMetadataTags;
  setParameter(std::string("InstanceMetadataTags"), instanceMetadataTags);
}

int ModifyInstanceMetadataOptionsRequest::getHttpPutResponseHopLimit() const {
  return httpPutResponseHopLimit_;
}

void ModifyInstanceMetadataOptionsRequest::setHttpPutResponseHopLimit(int httpPutResponseHopLimit) {
  httpPutResponseHopLimit_ = httpPutResponseHopLimit;
  setParameter(std::string("HttpPutResponseHopLimit"), std::to_string(httpPutResponseHopLimit));
}

std::string ModifyInstanceMetadataOptionsRequest::getRegionId() const {
  return regionId_;
}

void ModifyInstanceMetadataOptionsRequest::setRegionId(const std::string &regionId) {
  regionId_ = regionId;
  setParameter(std::string("RegionId"), regionId);
}

std::string ModifyInstanceMetadataOptionsRequest::getHttpEndpoint() const {
  return httpEndpoint_;
}

void ModifyInstanceMetadataOptionsRequest::setHttpEndpoint(const std::string &httpEndpoint) {
  httpEndpoint_ = httpEndpoint;
  setParameter(std::string("HttpEndpoint"), httpEndpoint);
}

std::string ModifyInstanceMetadataOptionsRequest::getResourceOwnerAccount() const {
  return resourceOwnerAccount_;
}

void ModifyInstanceMetadataOptionsRequest::setResourceOwnerAccount(const std::string &resourceOwnerAccount) {
  resourceOwnerAccount_ = resourceOwnerAccount;
  setParameter(std::string("ResourceOwnerAccount"), resourceOwnerAccount);
}

long ModifyInstanceMetadataOptionsRequest::getOwnerId() const {
  return ownerId_;
}

void ModifyInstanceMetadataOptionsRequest::setOwnerId(long ownerId) {
  ownerId_ = ownerId;
  setParameter(std::string("OwnerId"), std::to_string(ownerId));
}

std::string ModifyInstanceMetadataOptionsRequest::getInstanceId() const {
  return instanceId_;
}

void ModifyInstanceMetadataOptionsRequest::setInstanceId(const std::string &instanceId) {
  instanceId_ = instanceId;
  setParameter(std::string("InstanceId"), instanceId);
}

std::string ModifyInstanceMetadataOptionsRequest::getHttpTokens() const {
  return httpTokens_;
}

void ModifyInstanceMetadataOptionsRequest::setHttpTokens(const std::string &httpTokens) {
  httpTokens_ = httpTokens;
  setParameter(std::string("HttpTokens"), httpTokens);
}

