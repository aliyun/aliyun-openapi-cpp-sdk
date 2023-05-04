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

#include <alibabacloud/dyplsapi/model/BindBatchAxgRequest.h>

using AlibabaCloud::Dyplsapi::Model::BindBatchAxgRequest;

BindBatchAxgRequest::BindBatchAxgRequest()
    : RpcServiceRequest("dyplsapi", "2017-05-25", "BindBatchAxg") {
  setMethod(HttpRequest::Method::Post);
}

BindBatchAxgRequest::~BindBatchAxgRequest() {}

long BindBatchAxgRequest::getResourceOwnerId() const {
  return resourceOwnerId_;
}

void BindBatchAxgRequest::setResourceOwnerId(long resourceOwnerId) {
  resourceOwnerId_ = resourceOwnerId;
  setParameter(std::string("ResourceOwnerId"), std::to_string(resourceOwnerId));
}

std::vector<BindBatchAxgRequest::AxgBindList> BindBatchAxgRequest::getAxgBindList() const {
  return axgBindList_;
}

void BindBatchAxgRequest::setAxgBindList(const std::vector<BindBatchAxgRequest::AxgBindList> &axgBindList) {
  axgBindList_ = axgBindList;
  for(int dep1 = 0; dep1 != axgBindList.size(); dep1++) {
    setParameter(std::string("AxgBindList") + "." + std::to_string(dep1 + 1) + ".PhoneNoB", axgBindList[dep1].phoneNoB);
    setParameter(std::string("AxgBindList") + "." + std::to_string(dep1 + 1) + ".PhoneNoA", axgBindList[dep1].phoneNoA);
    setParameter(std::string("AxgBindList") + "." + std::to_string(dep1 + 1) + ".ExpectCity", axgBindList[dep1].expectCity);
    setParameter(std::string("AxgBindList") + "." + std::to_string(dep1 + 1) + ".GroupId", axgBindList[dep1].groupId);
    setParameter(std::string("AxgBindList") + "." + std::to_string(dep1 + 1) + ".CallDisplayType", std::to_string(axgBindList[dep1].callDisplayType));
    setParameter(std::string("AxgBindList") + "." + std::to_string(dep1 + 1) + ".OutOrderId", axgBindList[dep1].outOrderId);
    setParameter(std::string("AxgBindList") + "." + std::to_string(dep1 + 1) + ".PhoneNoX", axgBindList[dep1].phoneNoX);
    setParameter(std::string("AxgBindList") + "." + std::to_string(dep1 + 1) + ".IsRecordingEnabled", axgBindList[dep1].isRecordingEnabled ? "true" : "false");
    setParameter(std::string("AxgBindList") + "." + std::to_string(dep1 + 1) + ".OutId", axgBindList[dep1].outId);
    setParameter(std::string("AxgBindList") + "." + std::to_string(dep1 + 1) + ".Expiration", axgBindList[dep1].expiration);
    setParameter(std::string("AxgBindList") + "." + std::to_string(dep1 + 1) + ".RingConfig", axgBindList[dep1].ringConfig);
    setParameter(std::string("AxgBindList") + "." + std::to_string(dep1 + 1) + ".ASRStatus", axgBindList[dep1].aSRStatus ? "true" : "false");
    setParameter(std::string("AxgBindList") + "." + std::to_string(dep1 + 1) + ".ASRModelId", axgBindList[dep1].aSRModelId);
    setParameter(std::string("AxgBindList") + "." + std::to_string(dep1 + 1) + ".CallRestrict", axgBindList[dep1].callRestrict);
  }
}

std::string BindBatchAxgRequest::getAccessKeyId() const {
  return accessKeyId_;
}

void BindBatchAxgRequest::setAccessKeyId(const std::string &accessKeyId) {
  accessKeyId_ = accessKeyId;
  setParameter(std::string("AccessKeyId"), accessKeyId);
}

std::string BindBatchAxgRequest::getResourceOwnerAccount() const {
  return resourceOwnerAccount_;
}

void BindBatchAxgRequest::setResourceOwnerAccount(const std::string &resourceOwnerAccount) {
  resourceOwnerAccount_ = resourceOwnerAccount;
  setParameter(std::string("ResourceOwnerAccount"), resourceOwnerAccount);
}

long BindBatchAxgRequest::getOwnerId() const {
  return ownerId_;
}

void BindBatchAxgRequest::setOwnerId(long ownerId) {
  ownerId_ = ownerId;
  setParameter(std::string("OwnerId"), std::to_string(ownerId));
}

std::string BindBatchAxgRequest::getPoolKey() const {
  return poolKey_;
}

void BindBatchAxgRequest::setPoolKey(const std::string &poolKey) {
  poolKey_ = poolKey;
  setParameter(std::string("PoolKey"), poolKey);
}

