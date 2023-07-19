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

#include <alibabacloud/dts/model/DescribeSynchronizationJobStatusListRequest.h>

using AlibabaCloud::Dts::Model::DescribeSynchronizationJobStatusListRequest;

DescribeSynchronizationJobStatusListRequest::DescribeSynchronizationJobStatusListRequest()
    : RpcServiceRequest("dts", "2020-01-01", "DescribeSynchronizationJobStatusList") {
  setMethod(HttpRequest::Method::Post);
}

DescribeSynchronizationJobStatusListRequest::~DescribeSynchronizationJobStatusListRequest() {}

std::string DescribeSynchronizationJobStatusListRequest::getClientToken() const {
  return clientToken_;
}

void DescribeSynchronizationJobStatusListRequest::setClientToken(const std::string &clientToken) {
  clientToken_ = clientToken;
  setParameter(std::string("ClientToken"), clientToken);
}

std::string DescribeSynchronizationJobStatusListRequest::getOwnerId() const {
  return ownerId_;
}

void DescribeSynchronizationJobStatusListRequest::setOwnerId(const std::string &ownerId) {
  ownerId_ = ownerId;
  setParameter(std::string("OwnerId"), ownerId);
}

std::string DescribeSynchronizationJobStatusListRequest::getSynchronizationJobIdListJsonStr() const {
  return synchronizationJobIdListJsonStr_;
}

void DescribeSynchronizationJobStatusListRequest::setSynchronizationJobIdListJsonStr(const std::string &synchronizationJobIdListJsonStr) {
  synchronizationJobIdListJsonStr_ = synchronizationJobIdListJsonStr;
  setParameter(std::string("SynchronizationJobIdListJsonStr"), synchronizationJobIdListJsonStr);
}

std::string DescribeSynchronizationJobStatusListRequest::getAccessKeyId() const {
  return accessKeyId_;
}

void DescribeSynchronizationJobStatusListRequest::setAccessKeyId(const std::string &accessKeyId) {
  accessKeyId_ = accessKeyId;
  setParameter(std::string("AccessKeyId"), accessKeyId);
}

std::string DescribeSynchronizationJobStatusListRequest::getAccountId() const {
  return accountId_;
}

void DescribeSynchronizationJobStatusListRequest::setAccountId(const std::string &accountId) {
  accountId_ = accountId;
  setParameter(std::string("AccountId"), accountId);
}

std::string DescribeSynchronizationJobStatusListRequest::getRegionId() const {
  return regionId_;
}

void DescribeSynchronizationJobStatusListRequest::setRegionId(const std::string &regionId) {
  regionId_ = regionId;
  setParameter(std::string("RegionId"), regionId);
}

