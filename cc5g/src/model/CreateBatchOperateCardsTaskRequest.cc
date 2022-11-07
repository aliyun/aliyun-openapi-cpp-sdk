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

#include <alibabacloud/cc5g/model/CreateBatchOperateCardsTaskRequest.h>

using AlibabaCloud::CC5G::Model::CreateBatchOperateCardsTaskRequest;

CreateBatchOperateCardsTaskRequest::CreateBatchOperateCardsTaskRequest()
    : RpcServiceRequest("cc5g", "2022-03-14", "CreateBatchOperateCardsTask") {
  setMethod(HttpRequest::Method::Post);
}

CreateBatchOperateCardsTaskRequest::~CreateBatchOperateCardsTaskRequest() {}

std::vector<CreateBatchOperateCardsTaskRequest::std::string> CreateBatchOperateCardsTaskRequest::getIccids() const {
  return iccids_;
}

void CreateBatchOperateCardsTaskRequest::setIccids(const std::vector<CreateBatchOperateCardsTaskRequest::std::string> &iccids) {
  iccids_ = iccids;
  for(int dep1 = 0; dep1 != iccids.size(); dep1++) {
    setParameter(std::string("Iccids") + "." + std::to_string(dep1 + 1), iccids[dep1]);
  }
}

std::string CreateBatchOperateCardsTaskRequest::getClientToken() const {
  return clientToken_;
}

void CreateBatchOperateCardsTaskRequest::setClientToken(const std::string &clientToken) {
  clientToken_ = clientToken;
  setParameter(std::string("ClientToken"), clientToken);
}

std::string CreateBatchOperateCardsTaskRequest::getDescription() const {
  return description_;
}

void CreateBatchOperateCardsTaskRequest::setDescription(const std::string &description) {
  description_ = description;
  setParameter(std::string("Description"), description);
}

long CreateBatchOperateCardsTaskRequest::getThreshold() const {
  return threshold_;
}

void CreateBatchOperateCardsTaskRequest::setThreshold(long threshold) {
  threshold_ = threshold;
  setParameter(std::string("Threshold"), std::to_string(threshold));
}

std::string CreateBatchOperateCardsTaskRequest::getRegionId() const {
  return regionId_;
}

void CreateBatchOperateCardsTaskRequest::setRegionId(const std::string &regionId) {
  regionId_ = regionId;
  setParameter(std::string("RegionId"), regionId);
}

std::string CreateBatchOperateCardsTaskRequest::getEffectType() const {
  return effectType_;
}

void CreateBatchOperateCardsTaskRequest::setEffectType(const std::string &effectType) {
  effectType_ = effectType;
  setParameter(std::string("EffectType"), effectType);
}

std::vector<CreateBatchOperateCardsTaskRequest::std::string> CreateBatchOperateCardsTaskRequest::getWirelessCloudConnectorIds() const {
  return wirelessCloudConnectorIds_;
}

void CreateBatchOperateCardsTaskRequest::setWirelessCloudConnectorIds(const std::vector<CreateBatchOperateCardsTaskRequest::std::string> &wirelessCloudConnectorIds) {
  wirelessCloudConnectorIds_ = wirelessCloudConnectorIds;
  for(int dep1 = 0; dep1 != wirelessCloudConnectorIds.size(); dep1++) {
    setParameter(std::string("WirelessCloudConnectorIds") + "." + std::to_string(dep1 + 1), wirelessCloudConnectorIds[dep1]);
  }
}

bool CreateBatchOperateCardsTaskRequest::getDryRun() const {
  return dryRun_;
}

void CreateBatchOperateCardsTaskRequest::setDryRun(bool dryRun) {
  dryRun_ = dryRun;
  setParameter(std::string("DryRun"), dryRun ? "true" : "false");
}

std::string CreateBatchOperateCardsTaskRequest::getName() const {
  return name_;
}

void CreateBatchOperateCardsTaskRequest::setName(const std::string &name) {
  name_ = name;
  setParameter(std::string("Name"), name);
}

std::string CreateBatchOperateCardsTaskRequest::getOperateType() const {
  return operateType_;
}

void CreateBatchOperateCardsTaskRequest::setOperateType(const std::string &operateType) {
  operateType_ = operateType;
  setParameter(std::string("OperateType"), operateType);
}

std::string CreateBatchOperateCardsTaskRequest::getIccidsOssFilePath() const {
  return iccidsOssFilePath_;
}

void CreateBatchOperateCardsTaskRequest::setIccidsOssFilePath(const std::string &iccidsOssFilePath) {
  iccidsOssFilePath_ = iccidsOssFilePath;
  setParameter(std::string("IccidsOssFilePath"), iccidsOssFilePath);
}

