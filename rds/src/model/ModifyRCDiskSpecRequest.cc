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

#include <alibabacloud/rds/model/ModifyRCDiskSpecRequest.h>

using AlibabaCloud::Rds::Model::ModifyRCDiskSpecRequest;

ModifyRCDiskSpecRequest::ModifyRCDiskSpecRequest()
    : RpcServiceRequest("rds", "2014-08-15", "ModifyRCDiskSpec") {
  setMethod(HttpRequest::Method::Post);
}

ModifyRCDiskSpecRequest::~ModifyRCDiskSpecRequest() {}

bool ModifyRCDiskSpecRequest::getAutoPay() const {
  return autoPay_;
}

void ModifyRCDiskSpecRequest::setAutoPay(bool autoPay) {
  autoPay_ = autoPay;
  setParameter(std::string("AutoPay"), autoPay ? "true" : "false");
}

bool ModifyRCDiskSpecRequest::getDryRun() const {
  return dryRun_;
}

void ModifyRCDiskSpecRequest::setDryRun(bool dryRun) {
  dryRun_ = dryRun;
  setParameter(std::string("DryRun"), dryRun ? "true" : "false");
}

std::string ModifyRCDiskSpecRequest::getPerformanceLevel() const {
  return performanceLevel_;
}

void ModifyRCDiskSpecRequest::setPerformanceLevel(const std::string &performanceLevel) {
  performanceLevel_ = performanceLevel;
  setParameter(std::string("PerformanceLevel"), performanceLevel);
}

std::string ModifyRCDiskSpecRequest::getRegionId() const {
  return regionId_;
}

void ModifyRCDiskSpecRequest::setRegionId(const std::string &regionId) {
  regionId_ = regionId;
  setParameter(std::string("RegionId"), regionId);
}

std::string ModifyRCDiskSpecRequest::getDiskCategory() const {
  return diskCategory_;
}

void ModifyRCDiskSpecRequest::setDiskCategory(const std::string &diskCategory) {
  diskCategory_ = diskCategory;
  setParameter(std::string("DiskCategory"), diskCategory);
}

std::string ModifyRCDiskSpecRequest::getDiskId() const {
  return diskId_;
}

void ModifyRCDiskSpecRequest::setDiskId(const std::string &diskId) {
  diskId_ = diskId;
  setParameter(std::string("DiskId"), diskId);
}

