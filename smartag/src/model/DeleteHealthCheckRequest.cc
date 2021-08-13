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

#include <alibabacloud/smartag/model/DeleteHealthCheckRequest.h>

using AlibabaCloud::Smartag::Model::DeleteHealthCheckRequest;

DeleteHealthCheckRequest::DeleteHealthCheckRequest()
    : RpcServiceRequest("smartag", "2018-03-13", "DeleteHealthCheck") {
  setMethod(HttpRequest::Method::Post);
}

DeleteHealthCheckRequest::~DeleteHealthCheckRequest() {}

long DeleteHealthCheckRequest::getResourceOwnerId() const {
  return resourceOwnerId_;
}

void DeleteHealthCheckRequest::setResourceOwnerId(long resourceOwnerId) {
  resourceOwnerId_ = resourceOwnerId;
  setParameter(std::string("ResourceOwnerId"), std::to_string(resourceOwnerId));
}

std::string DeleteHealthCheckRequest::getHcInstanceId() const {
  return hcInstanceId_;
}

void DeleteHealthCheckRequest::setHcInstanceId(const std::string &hcInstanceId) {
  hcInstanceId_ = hcInstanceId;
  setParameter(std::string("HcInstanceId"), hcInstanceId);
}

std::string DeleteHealthCheckRequest::getRegionId() const {
  return regionId_;
}

void DeleteHealthCheckRequest::setRegionId(const std::string &regionId) {
  regionId_ = regionId;
  setParameter(std::string("RegionId"), regionId);
}

std::string DeleteHealthCheckRequest::getResourceOwnerAccount() const {
  return resourceOwnerAccount_;
}

void DeleteHealthCheckRequest::setResourceOwnerAccount(const std::string &resourceOwnerAccount) {
  resourceOwnerAccount_ = resourceOwnerAccount;
  setParameter(std::string("ResourceOwnerAccount"), resourceOwnerAccount);
}

std::string DeleteHealthCheckRequest::getOwnerAccount() const {
  return ownerAccount_;
}

void DeleteHealthCheckRequest::setOwnerAccount(const std::string &ownerAccount) {
  ownerAccount_ = ownerAccount;
  setParameter(std::string("OwnerAccount"), ownerAccount);
}

long DeleteHealthCheckRequest::getOwnerId() const {
  return ownerId_;
}

void DeleteHealthCheckRequest::setOwnerId(long ownerId) {
  ownerId_ = ownerId;
  setParameter(std::string("OwnerId"), std::to_string(ownerId));
}

