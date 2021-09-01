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

#include <alibabacloud/mts/model/QueryIProductionJobListRequest.h>

using AlibabaCloud::Mts::Model::QueryIProductionJobListRequest;

QueryIProductionJobListRequest::QueryIProductionJobListRequest()
    : RpcServiceRequest("mts", "2014-06-18", "QueryIProductionJobList") {
  setMethod(HttpRequest::Method::Post);
}

QueryIProductionJobListRequest::~QueryIProductionJobListRequest() {}

long QueryIProductionJobListRequest::getResourceOwnerId() const {
  return resourceOwnerId_;
}

void QueryIProductionJobListRequest::setResourceOwnerId(long resourceOwnerId) {
  resourceOwnerId_ = resourceOwnerId;
  setParameter(std::string("ResourceOwnerId"), std::to_string(resourceOwnerId));
}

std::string QueryIProductionJobListRequest::getResourceOwnerAccount() const {
  return resourceOwnerAccount_;
}

void QueryIProductionJobListRequest::setResourceOwnerAccount(const std::string &resourceOwnerAccount) {
  resourceOwnerAccount_ = resourceOwnerAccount;
  setParameter(std::string("ResourceOwnerAccount"), resourceOwnerAccount);
}

std::string QueryIProductionJobListRequest::getOwnerAccount() const {
  return ownerAccount_;
}

void QueryIProductionJobListRequest::setOwnerAccount(const std::string &ownerAccount) {
  ownerAccount_ = ownerAccount;
  setParameter(std::string("OwnerAccount"), ownerAccount);
}

long QueryIProductionJobListRequest::getOwnerId() const {
  return ownerId_;
}

void QueryIProductionJobListRequest::setOwnerId(long ownerId) {
  ownerId_ = ownerId;
  setParameter(std::string("OwnerId"), std::to_string(ownerId));
}

std::string QueryIProductionJobListRequest::getAccessKeyId() const {
  return accessKeyId_;
}

void QueryIProductionJobListRequest::setAccessKeyId(const std::string &accessKeyId) {
  accessKeyId_ = accessKeyId;
  setParameter(std::string("AccessKeyId"), accessKeyId);
}

std::string QueryIProductionJobListRequest::getIProductionJobIds() const {
  return iProductionJobIds_;
}

void QueryIProductionJobListRequest::setIProductionJobIds(const std::string &iProductionJobIds) {
  iProductionJobIds_ = iProductionJobIds;
  setParameter(std::string("IProductionJobIds"), iProductionJobIds);
}

