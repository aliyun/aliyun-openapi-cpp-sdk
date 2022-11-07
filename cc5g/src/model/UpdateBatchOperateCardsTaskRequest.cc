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

#include <alibabacloud/cc5g/model/UpdateBatchOperateCardsTaskRequest.h>

using AlibabaCloud::CC5G::Model::UpdateBatchOperateCardsTaskRequest;

UpdateBatchOperateCardsTaskRequest::UpdateBatchOperateCardsTaskRequest()
    : RpcServiceRequest("cc5g", "2022-03-14", "UpdateBatchOperateCardsTask") {
  setMethod(HttpRequest::Method::Post);
}

UpdateBatchOperateCardsTaskRequest::~UpdateBatchOperateCardsTaskRequest() {}

std::vector<UpdateBatchOperateCardsTaskRequest::std::string> UpdateBatchOperateCardsTaskRequest::getIccids() const {
  return iccids_;
}

void UpdateBatchOperateCardsTaskRequest::setIccids(const std::vector<UpdateBatchOperateCardsTaskRequest::std::string> &iccids) {
  iccids_ = iccids;
  for(int dep1 = 0; dep1 != iccids.size(); dep1++) {
    setParameter(std::string("Iccids") + "." + std::to_string(dep1 + 1), iccids[dep1]);
  }
}

std::string UpdateBatchOperateCardsTaskRequest::getClientToken() const {
  return clientToken_;
}

void UpdateBatchOperateCardsTaskRequest::setClientToken(const std::string &clientToken) {
  clientToken_ = clientToken;
  setParameter(std::string("ClientToken"), clientToken);
}

std::string UpdateBatchOperateCardsTaskRequest::getDescription() const {
  return description_;
}

void UpdateBatchOperateCardsTaskRequest::setDescription(const std::string &description) {
  description_ = description;
  setParameter(std::string("Description"), description);
}

long UpdateBatchOperateCardsTaskRequest::getThreshold() const {
  return threshold_;
}

void UpdateBatchOperateCardsTaskRequest::setThreshold(long threshold) {
  threshold_ = threshold;
  setParameter(std::string("Threshold"), std::to_string(threshold));
}

std::string UpdateBatchOperateCardsTaskRequest::getBatchOperateCardsTaskId() const {
  return batchOperateCardsTaskId_;
}

void UpdateBatchOperateCardsTaskRequest::setBatchOperateCardsTaskId(const std::string &batchOperateCardsTaskId) {
  batchOperateCardsTaskId_ = batchOperateCardsTaskId;
  setParameter(std::string("BatchOperateCardsTaskId"), batchOperateCardsTaskId);
}

std::string UpdateBatchOperateCardsTaskRequest::getRegionId() const {
  return regionId_;
}

void UpdateBatchOperateCardsTaskRequest::setRegionId(const std::string &regionId) {
  regionId_ = regionId;
  setParameter(std::string("RegionId"), regionId);
}

std::string UpdateBatchOperateCardsTaskRequest::getEffectType() const {
  return effectType_;
}

void UpdateBatchOperateCardsTaskRequest::setEffectType(const std::string &effectType) {
  effectType_ = effectType;
  setParameter(std::string("EffectType"), effectType);
}

std::vector<UpdateBatchOperateCardsTaskRequest::std::string> UpdateBatchOperateCardsTaskRequest::getWirelessCloudConnectorIds() const {
  return wirelessCloudConnectorIds_;
}

void UpdateBatchOperateCardsTaskRequest::setWirelessCloudConnectorIds(const std::vector<UpdateBatchOperateCardsTaskRequest::std::string> &wirelessCloudConnectorIds) {
  wirelessCloudConnectorIds_ = wirelessCloudConnectorIds;
  for(int dep1 = 0; dep1 != wirelessCloudConnectorIds.size(); dep1++) {
    setParameter(std::string("WirelessCloudConnectorIds") + "." + std::to_string(dep1 + 1), wirelessCloudConnectorIds[dep1]);
  }
}

bool UpdateBatchOperateCardsTaskRequest::getDryRun() const {
  return dryRun_;
}

void UpdateBatchOperateCardsTaskRequest::setDryRun(bool dryRun) {
  dryRun_ = dryRun;
  setParameter(std::string("DryRun"), dryRun ? "true" : "false");
}

std::string UpdateBatchOperateCardsTaskRequest::getName() const {
  return name_;
}

void UpdateBatchOperateCardsTaskRequest::setName(const std::string &name) {
  name_ = name;
  setParameter(std::string("Name"), name);
}

std::string UpdateBatchOperateCardsTaskRequest::getOperateType() const {
  return operateType_;
}

void UpdateBatchOperateCardsTaskRequest::setOperateType(const std::string &operateType) {
  operateType_ = operateType;
  setParameter(std::string("OperateType"), operateType);
}

std::string UpdateBatchOperateCardsTaskRequest::getIccidsOssFilePath() const {
  return iccidsOssFilePath_;
}

void UpdateBatchOperateCardsTaskRequest::setIccidsOssFilePath(const std::string &iccidsOssFilePath) {
  iccidsOssFilePath_ = iccidsOssFilePath;
  setParameter(std::string("IccidsOssFilePath"), iccidsOssFilePath);
}

