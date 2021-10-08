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

#include <alibabacloud/ecs/model/ModifyInstanceAttachmentAttributesRequest.h>

using AlibabaCloud::Ecs::Model::ModifyInstanceAttachmentAttributesRequest;

ModifyInstanceAttachmentAttributesRequest::ModifyInstanceAttachmentAttributesRequest()
    : RpcServiceRequest("ecs", "2014-05-26", "ModifyInstanceAttachmentAttributes") {
  setMethod(HttpRequest::Method::Post);
}

ModifyInstanceAttachmentAttributesRequest::~ModifyInstanceAttachmentAttributesRequest() {}

long ModifyInstanceAttachmentAttributesRequest::getResourceOwnerId() const {
  return resourceOwnerId_;
}

void ModifyInstanceAttachmentAttributesRequest::setResourceOwnerId(long resourceOwnerId) {
  resourceOwnerId_ = resourceOwnerId;
  setParameter(std::string("ResourceOwnerId"), std::to_string(resourceOwnerId));
}

std::string ModifyInstanceAttachmentAttributesRequest::getPrivatePoolOptionsMatchCriteria() const {
  return privatePoolOptionsMatchCriteria_;
}

void ModifyInstanceAttachmentAttributesRequest::setPrivatePoolOptionsMatchCriteria(const std::string &privatePoolOptionsMatchCriteria) {
  privatePoolOptionsMatchCriteria_ = privatePoolOptionsMatchCriteria;
  setParameter(std::string("PrivatePoolOptions.MatchCriteria"), privatePoolOptionsMatchCriteria);
}

std::string ModifyInstanceAttachmentAttributesRequest::getRegionId() const {
  return regionId_;
}

void ModifyInstanceAttachmentAttributesRequest::setRegionId(const std::string &regionId) {
  regionId_ = regionId;
  setParameter(std::string("RegionId"), regionId);
}

std::string ModifyInstanceAttachmentAttributesRequest::getPrivatePoolOptionsId() const {
  return privatePoolOptionsId_;
}

void ModifyInstanceAttachmentAttributesRequest::setPrivatePoolOptionsId(const std::string &privatePoolOptionsId) {
  privatePoolOptionsId_ = privatePoolOptionsId;
  setParameter(std::string("PrivatePoolOptions.Id"), privatePoolOptionsId);
}

std::string ModifyInstanceAttachmentAttributesRequest::getResourceOwnerAccount() const {
  return resourceOwnerAccount_;
}

void ModifyInstanceAttachmentAttributesRequest::setResourceOwnerAccount(const std::string &resourceOwnerAccount) {
  resourceOwnerAccount_ = resourceOwnerAccount;
  setParameter(std::string("ResourceOwnerAccount"), resourceOwnerAccount);
}

std::string ModifyInstanceAttachmentAttributesRequest::getOwnerAccount() const {
  return ownerAccount_;
}

void ModifyInstanceAttachmentAttributesRequest::setOwnerAccount(const std::string &ownerAccount) {
  ownerAccount_ = ownerAccount;
  setParameter(std::string("OwnerAccount"), ownerAccount);
}

long ModifyInstanceAttachmentAttributesRequest::getOwnerId() const {
  return ownerId_;
}

void ModifyInstanceAttachmentAttributesRequest::setOwnerId(long ownerId) {
  ownerId_ = ownerId;
  setParameter(std::string("OwnerId"), std::to_string(ownerId));
}

std::string ModifyInstanceAttachmentAttributesRequest::getInstanceId() const {
  return instanceId_;
}

void ModifyInstanceAttachmentAttributesRequest::setInstanceId(const std::string &instanceId) {
  instanceId_ = instanceId;
  setParameter(std::string("InstanceId"), instanceId);
}

