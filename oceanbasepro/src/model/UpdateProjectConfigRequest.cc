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

#include <alibabacloud/oceanbasepro/model/UpdateProjectConfigRequest.h>

using AlibabaCloud::OceanBasePro::Model::UpdateProjectConfigRequest;

UpdateProjectConfigRequest::UpdateProjectConfigRequest()
    : RpcServiceRequest("oceanbasepro", "2019-09-01", "UpdateProjectConfig") {
  setMethod(HttpRequest::Method::Post);
}

UpdateProjectConfigRequest::~UpdateProjectConfigRequest() {}

UpdateProjectConfigRequest::CommonTransferConfig UpdateProjectConfigRequest::getCommonTransferConfig() const {
  return commonTransferConfig_;
}

void UpdateProjectConfigRequest::setCommonTransferConfig(const UpdateProjectConfigRequest::CommonTransferConfig &commonTransferConfig) {
  commonTransferConfig_ = commonTransferConfig;
  setBodyParameter(std::string("CommonTransferConfig") + ".SinkStoreFormat", commonTransferConfig.sinkStoreFormat);
  setBodyParameter(std::string("CommonTransferConfig") + ".SourceStoreFormat", commonTransferConfig.sourceStoreFormat);
}

UpdateProjectConfigRequest::ReverseIncrTransferConfig UpdateProjectConfigRequest::getReverseIncrTransferConfig() const {
  return reverseIncrTransferConfig_;
}

void UpdateProjectConfigRequest::setReverseIncrTransferConfig(const UpdateProjectConfigRequest::ReverseIncrTransferConfig &reverseIncrTransferConfig) {
  reverseIncrTransferConfig_ = reverseIncrTransferConfig;
  setBodyParameter(std::string("ReverseIncrTransferConfig") + ".ThrottleRps", std::to_string(reverseIncrTransferConfig.throttleRps));
  for(int dep1 = 0; dep1 != reverseIncrTransferConfig.supportDDLTypes.size(); dep1++) {
    setBodyParameter(std::string("ReverseIncrTransferConfig") + ".SupportDDLTypes." + std::to_string(dep1 + 1), reverseIncrTransferConfig.supportDDLTypes[dep1]);
  }
  setBodyParameter(std::string("ReverseIncrTransferConfig") + ".ThrottleIOPS", std::to_string(reverseIncrTransferConfig.throttleIOPS));
  for(int dep1 = 0; dep1 != reverseIncrTransferConfig.recordTypeWhiteList.size(); dep1++) {
    setBodyParameter(std::string("ReverseIncrTransferConfig") + ".RecordTypeWhiteList." + std::to_string(dep1 + 1), reverseIncrTransferConfig.recordTypeWhiteList[dep1]);
  }
  setBodyParameter(std::string("ReverseIncrTransferConfig") + ".IncrSyncThreadCount", std::to_string(reverseIncrTransferConfig.incrSyncThreadCount));
}

UpdateProjectConfigRequest::FullTransferConfig UpdateProjectConfigRequest::getFullTransferConfig() const {
  return fullTransferConfig_;
}

void UpdateProjectConfigRequest::setFullTransferConfig(const UpdateProjectConfigRequest::FullTransferConfig &fullTransferConfig) {
  fullTransferConfig_ = fullTransferConfig;
  setBodyParameter(std::string("FullTransferConfig") + ".IndexDDLConcurrencyLimit", std::to_string(fullTransferConfig.indexDDLConcurrencyLimit));
  setBodyParameter(std::string("FullTransferConfig") + ".ThrottleRps", std::to_string(fullTransferConfig.throttleRps));
  setBodyParameter(std::string("FullTransferConfig") + ".WriteWorkerNum", std::to_string(fullTransferConfig.writeWorkerNum));
  setBodyParameter(std::string("FullTransferConfig") + ".MaxConcurrentIndexDDLs", std::to_string(fullTransferConfig.maxConcurrentIndexDDLs));
  setBodyParameter(std::string("FullTransferConfig") + ".ReadWorkerNum", std::to_string(fullTransferConfig.readWorkerNum));
  setBodyParameter(std::string("FullTransferConfig") + ".ThrottleIOPS", std::to_string(fullTransferConfig.throttleIOPS));
}

std::string UpdateProjectConfigRequest::getId() const {
  return id_;
}

void UpdateProjectConfigRequest::setId(const std::string &id) {
  id_ = id;
  setBodyParameter(std::string("Id"), id);
}

UpdateProjectConfigRequest::IncrTransferConfig UpdateProjectConfigRequest::getIncrTransferConfig() const {
  return incrTransferConfig_;
}

void UpdateProjectConfigRequest::setIncrTransferConfig(const UpdateProjectConfigRequest::IncrTransferConfig &incrTransferConfig) {
  incrTransferConfig_ = incrTransferConfig;
  setBodyParameter(std::string("IncrTransferConfig") + ".ThrottleRps", std::to_string(incrTransferConfig.throttleRps));
  for(int dep1 = 0; dep1 != incrTransferConfig.supportDDLTypes.size(); dep1++) {
    setBodyParameter(std::string("IncrTransferConfig") + ".SupportDDLTypes." + std::to_string(dep1 + 1), incrTransferConfig.supportDDLTypes[dep1]);
  }
  setBodyParameter(std::string("IncrTransferConfig") + ".ThrottleIOPS", std::to_string(incrTransferConfig.throttleIOPS));
  for(int dep1 = 0; dep1 != incrTransferConfig.recordTypeWhiteList.size(); dep1++) {
    setBodyParameter(std::string("IncrTransferConfig") + ".RecordTypeWhiteList." + std::to_string(dep1 + 1), incrTransferConfig.recordTypeWhiteList[dep1]);
  }
  setBodyParameter(std::string("IncrTransferConfig") + ".IncrSyncThreadCount", std::to_string(incrTransferConfig.incrSyncThreadCount));
}

