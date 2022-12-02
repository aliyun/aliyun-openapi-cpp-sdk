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

#include <alibabacloud/dts/model/DescribeSynchronizationJobReplicatorCompareRequest.h>

using AlibabaCloud::Dts::Model::DescribeSynchronizationJobReplicatorCompareRequest;

DescribeSynchronizationJobReplicatorCompareRequest::DescribeSynchronizationJobReplicatorCompareRequest()
    : RpcServiceRequest("dts", "2020-01-01", "DescribeSynchronizationJobReplicatorCompare") {
  setMethod(HttpRequest::Method::Post);
}

DescribeSynchronizationJobReplicatorCompareRequest::~DescribeSynchronizationJobReplicatorCompareRequest() {}

std::string DescribeSynchronizationJobReplicatorCompareRequest::getClientToken() const {
  return clientToken_;
}

void DescribeSynchronizationJobReplicatorCompareRequest::setClientToken(const std::string &clientToken) {
  clientToken_ = clientToken;
  setParameter(std::string("ClientToken"), clientToken);
}

std::string DescribeSynchronizationJobReplicatorCompareRequest::getOwnerId() const {
  return ownerId_;
}

void DescribeSynchronizationJobReplicatorCompareRequest::setOwnerId(const std::string &ownerId) {
  ownerId_ = ownerId;
  setParameter(std::string("OwnerId"), ownerId);
}

std::string DescribeSynchronizationJobReplicatorCompareRequest::getAccessKeyId() const {
  return accessKeyId_;
}

void DescribeSynchronizationJobReplicatorCompareRequest::setAccessKeyId(const std::string &accessKeyId) {
  accessKeyId_ = accessKeyId;
  setParameter(std::string("AccessKeyId"), accessKeyId);
}

std::string DescribeSynchronizationJobReplicatorCompareRequest::getSynchronizationJobId() const {
  return synchronizationJobId_;
}

void DescribeSynchronizationJobReplicatorCompareRequest::setSynchronizationJobId(const std::string &synchronizationJobId) {
  synchronizationJobId_ = synchronizationJobId;
  setParameter(std::string("SynchronizationJobId"), synchronizationJobId);
}

std::string DescribeSynchronizationJobReplicatorCompareRequest::getAccountId() const {
  return accountId_;
}

void DescribeSynchronizationJobReplicatorCompareRequest::setAccountId(const std::string &accountId) {
  accountId_ = accountId;
  setParameter(std::string("AccountId"), accountId);
}

std::string DescribeSynchronizationJobReplicatorCompareRequest::getRegionId() const {
  return regionId_;
}

void DescribeSynchronizationJobReplicatorCompareRequest::setRegionId(const std::string &regionId) {
  regionId_ = regionId;
  setParameter(std::string("RegionId"), regionId);
}

std::string DescribeSynchronizationJobReplicatorCompareRequest::getSynchronizationDirection() const {
  return synchronizationDirection_;
}

void DescribeSynchronizationJobReplicatorCompareRequest::setSynchronizationDirection(const std::string &synchronizationDirection) {
  synchronizationDirection_ = synchronizationDirection;
  setParameter(std::string("SynchronizationDirection"), synchronizationDirection);
}

