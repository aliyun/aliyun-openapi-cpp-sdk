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

#include <alibabacloud/slb/model/DeleteAccessLogsDownloadAttributeRequest.h>

using AlibabaCloud::Slb::Model::DeleteAccessLogsDownloadAttributeRequest;

DeleteAccessLogsDownloadAttributeRequest::DeleteAccessLogsDownloadAttributeRequest()
    : RpcServiceRequest("slb", "2014-05-15", "DeleteAccessLogsDownloadAttribute") {
  setMethod(HttpRequest::Method::Post);
}

DeleteAccessLogsDownloadAttributeRequest::~DeleteAccessLogsDownloadAttributeRequest() {}

std::string DeleteAccessLogsDownloadAttributeRequest::getAccess_key_id() const {
  return access_key_id_;
}

void DeleteAccessLogsDownloadAttributeRequest::setAccess_key_id(const std::string &access_key_id) {
  access_key_id_ = access_key_id;
  setParameter(std::string("access_key_id"), access_key_id);
}

long DeleteAccessLogsDownloadAttributeRequest::getResourceOwnerId() const {
  return resourceOwnerId_;
}

void DeleteAccessLogsDownloadAttributeRequest::setResourceOwnerId(long resourceOwnerId) {
  resourceOwnerId_ = resourceOwnerId;
  setParameter(std::string("ResourceOwnerId"), std::to_string(resourceOwnerId));
}

std::string DeleteAccessLogsDownloadAttributeRequest::getRegionId() const {
  return regionId_;
}

void DeleteAccessLogsDownloadAttributeRequest::setRegionId(const std::string &regionId) {
  regionId_ = regionId;
  setParameter(std::string("RegionId"), regionId);
}

std::string DeleteAccessLogsDownloadAttributeRequest::getLogsDownloadAttributes() const {
  return logsDownloadAttributes_;
}

void DeleteAccessLogsDownloadAttributeRequest::setLogsDownloadAttributes(const std::string &logsDownloadAttributes) {
  logsDownloadAttributes_ = logsDownloadAttributes;
  setParameter(std::string("LogsDownloadAttributes"), logsDownloadAttributes);
}

std::string DeleteAccessLogsDownloadAttributeRequest::getResourceOwnerAccount() const {
  return resourceOwnerAccount_;
}

void DeleteAccessLogsDownloadAttributeRequest::setResourceOwnerAccount(const std::string &resourceOwnerAccount) {
  resourceOwnerAccount_ = resourceOwnerAccount;
  setParameter(std::string("ResourceOwnerAccount"), resourceOwnerAccount);
}

std::string DeleteAccessLogsDownloadAttributeRequest::getOwnerAccount() const {
  return ownerAccount_;
}

void DeleteAccessLogsDownloadAttributeRequest::setOwnerAccount(const std::string &ownerAccount) {
  ownerAccount_ = ownerAccount;
  setParameter(std::string("OwnerAccount"), ownerAccount);
}

long DeleteAccessLogsDownloadAttributeRequest::getOwnerId() const {
  return ownerId_;
}

void DeleteAccessLogsDownloadAttributeRequest::setOwnerId(long ownerId) {
  ownerId_ = ownerId;
  setParameter(std::string("OwnerId"), std::to_string(ownerId));
}

std::string DeleteAccessLogsDownloadAttributeRequest::getTags() const {
  return tags_;
}

void DeleteAccessLogsDownloadAttributeRequest::setTags(const std::string &tags) {
  tags_ = tags;
  setParameter(std::string("Tags"), tags);
}

std::string DeleteAccessLogsDownloadAttributeRequest::getLoadBalancerId() const {
  return loadBalancerId_;
}

void DeleteAccessLogsDownloadAttributeRequest::setLoadBalancerId(const std::string &loadBalancerId) {
  loadBalancerId_ = loadBalancerId;
  setParameter(std::string("LoadBalancerId"), loadBalancerId);
}

