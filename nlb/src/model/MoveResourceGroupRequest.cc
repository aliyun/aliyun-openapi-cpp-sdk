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

#include <alibabacloud/nlb/model/MoveResourceGroupRequest.h>

using AlibabaCloud::Nlb::Model::MoveResourceGroupRequest;

MoveResourceGroupRequest::MoveResourceGroupRequest()
    : RpcServiceRequest("nlb", "2022-04-30", "MoveResourceGroup") {
  setMethod(HttpRequest::Method::Post);
}

MoveResourceGroupRequest::~MoveResourceGroupRequest() {}

std::string MoveResourceGroupRequest::getClientToken() const {
  return clientToken_;
}

void MoveResourceGroupRequest::setClientToken(const std::string &clientToken) {
  clientToken_ = clientToken;
  setBodyParameter(std::string("ClientToken"), clientToken);
}

std::string MoveResourceGroupRequest::getChannel() const {
  return channel_;
}

void MoveResourceGroupRequest::setChannel(const std::string &channel) {
  channel_ = channel;
  setBodyParameter(std::string("Channel"), channel);
}

std::string MoveResourceGroupRequest::getOwnerIdLoginEmail() const {
  return ownerIdLoginEmail_;
}

void MoveResourceGroupRequest::setOwnerIdLoginEmail(const std::string &ownerIdLoginEmail) {
  ownerIdLoginEmail_ = ownerIdLoginEmail;
  setBodyParameter(std::string("OwnerIdLoginEmail"), ownerIdLoginEmail);
}

std::string MoveResourceGroupRequest::getResourceDescription() const {
  return resourceDescription_;
}

void MoveResourceGroupRequest::setResourceDescription(const std::string &resourceDescription) {
  resourceDescription_ = resourceDescription;
  setBodyParameter(std::string("ResourceDescription"), resourceDescription);
}

std::string MoveResourceGroupRequest::getCallerBidLoginEmail() const {
  return callerBidLoginEmail_;
}

void MoveResourceGroupRequest::setCallerBidLoginEmail(const std::string &callerBidLoginEmail) {
  callerBidLoginEmail_ = callerBidLoginEmail;
  setBodyParameter(std::string("CallerBidLoginEmail"), callerBidLoginEmail);
}

std::string MoveResourceGroupRequest::getCallerUidLoginEmail() const {
  return callerUidLoginEmail_;
}

void MoveResourceGroupRequest::setCallerUidLoginEmail(const std::string &callerUidLoginEmail) {
  callerUidLoginEmail_ = callerUidLoginEmail;
  setBodyParameter(std::string("CallerUidLoginEmail"), callerUidLoginEmail);
}

std::string MoveResourceGroupRequest::getRegionId() const {
  return regionId_;
}

void MoveResourceGroupRequest::setRegionId(const std::string &regionId) {
  regionId_ = regionId;
  setBodyParameter(std::string("RegionId"), regionId);
}

std::string MoveResourceGroupRequest::getRequestContent() const {
  return requestContent_;
}

void MoveResourceGroupRequest::setRequestContent(const std::string &requestContent) {
  requestContent_ = requestContent;
  setBodyParameter(std::string("RequestContent"), requestContent);
}

std::string MoveResourceGroupRequest::getResourceId() const {
  return resourceId_;
}

void MoveResourceGroupRequest::setResourceId(const std::string &resourceId) {
  resourceId_ = resourceId;
  setBodyParameter(std::string("ResourceId"), resourceId);
}

bool MoveResourceGroupRequest::getDryRun() const {
  return dryRun_;
}

void MoveResourceGroupRequest::setDryRun(bool dryRun) {
  dryRun_ = dryRun;
  setBodyParameter(std::string("DryRun"), dryRun ? "true" : "false");
}

std::string MoveResourceGroupRequest::getResourceOwnerAccount() const {
  return resourceOwnerAccount_;
}

void MoveResourceGroupRequest::setResourceOwnerAccount(const std::string &resourceOwnerAccount) {
  resourceOwnerAccount_ = resourceOwnerAccount;
  setBodyParameter(std::string("ResourceOwnerAccount"), resourceOwnerAccount);
}

std::string MoveResourceGroupRequest::getOwnerAccount() const {
  return ownerAccount_;
}

void MoveResourceGroupRequest::setOwnerAccount(const std::string &ownerAccount) {
  ownerAccount_ = ownerAccount;
  setBodyParameter(std::string("OwnerAccount"), ownerAccount);
}

std::string MoveResourceGroupRequest::getResourceType() const {
  return resourceType_;
}

void MoveResourceGroupRequest::setResourceType(const std::string &resourceType) {
  resourceType_ = resourceType;
  setBodyParameter(std::string("ResourceType"), resourceType);
}

std::string MoveResourceGroupRequest::getNewResourceGroupId() const {
  return newResourceGroupId_;
}

void MoveResourceGroupRequest::setNewResourceGroupId(const std::string &newResourceGroupId) {
  newResourceGroupId_ = newResourceGroupId;
  setBodyParameter(std::string("NewResourceGroupId"), newResourceGroupId);
}

std::string MoveResourceGroupRequest::getServiceCode() const {
  return serviceCode_;
}

void MoveResourceGroupRequest::setServiceCode(const std::string &serviceCode) {
  serviceCode_ = serviceCode;
  setBodyParameter(std::string("ServiceCode"), serviceCode);
}

std::string MoveResourceGroupRequest::getResourceName() const {
  return resourceName_;
}

void MoveResourceGroupRequest::setResourceName(const std::string &resourceName) {
  resourceName_ = resourceName;
  setBodyParameter(std::string("ResourceName"), resourceName);
}

