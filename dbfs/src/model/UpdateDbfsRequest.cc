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

#include <alibabacloud/dbfs/model/UpdateDbfsRequest.h>

using AlibabaCloud::DBFS::Model::UpdateDbfsRequest;

UpdateDbfsRequest::UpdateDbfsRequest()
    : RpcServiceRequest("dbfs", "2020-04-18", "UpdateDbfs") {
  setMethod(HttpRequest::Method::Post);
}

UpdateDbfsRequest::~UpdateDbfsRequest() {}

std::string UpdateDbfsRequest::getUsedScene() const {
  return usedScene_;
}

void UpdateDbfsRequest::setUsedScene(const std::string &usedScene) {
  usedScene_ = usedScene;
  setParameter(std::string("UsedScene"), usedScene);
}

std::string UpdateDbfsRequest::getRegionId() const {
  return regionId_;
}

void UpdateDbfsRequest::setRegionId(const std::string &regionId) {
  regionId_ = regionId;
  setParameter(std::string("RegionId"), regionId);
}

std::string UpdateDbfsRequest::getFsId() const {
  return fsId_;
}

void UpdateDbfsRequest::setFsId(const std::string &fsId) {
  fsId_ = fsId;
  setParameter(std::string("FsId"), fsId);
}

std::string UpdateDbfsRequest::getInstanceType() const {
  return instanceType_;
}

void UpdateDbfsRequest::setInstanceType(const std::string &instanceType) {
  instanceType_ = instanceType;
  setParameter(std::string("InstanceType"), instanceType);
}

std::string UpdateDbfsRequest::getAdvancedFeatures() const {
  return advancedFeatures_;
}

void UpdateDbfsRequest::setAdvancedFeatures(const std::string &advancedFeatures) {
  advancedFeatures_ = advancedFeatures;
  setParameter(std::string("AdvancedFeatures"), advancedFeatures);
}

