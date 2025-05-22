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

#include <alibabacloud/rds/model/SwitchReplicationLinkRequest.h>

using AlibabaCloud::Rds::Model::SwitchReplicationLinkRequest;

SwitchReplicationLinkRequest::SwitchReplicationLinkRequest()
    : RpcServiceRequest("rds", "2014-08-15", "SwitchReplicationLink") {
  setMethod(HttpRequest::Method::Post);
}

SwitchReplicationLinkRequest::~SwitchReplicationLinkRequest() {}

long SwitchReplicationLinkRequest::getOwnerId() const {
  return ownerId_;
}

void SwitchReplicationLinkRequest::setOwnerId(long ownerId) {
  ownerId_ = ownerId;
  setParameter(std::string("OwnerId"), std::to_string(ownerId));
}

std::string SwitchReplicationLinkRequest::getTargetInstanceRegionId() const {
  return targetInstanceRegionId_;
}

void SwitchReplicationLinkRequest::setTargetInstanceRegionId(const std::string &targetInstanceRegionId) {
  targetInstanceRegionId_ = targetInstanceRegionId;
  setParameter(std::string("TargetInstanceRegionId"), targetInstanceRegionId);
}

std::string SwitchReplicationLinkRequest::getRegionId() const {
  return regionId_;
}

void SwitchReplicationLinkRequest::setRegionId(const std::string &regionId) {
  regionId_ = regionId;
  setParameter(std::string("RegionId"), regionId);
}

std::string SwitchReplicationLinkRequest::getTargetInstanceName() const {
  return targetInstanceName_;
}

void SwitchReplicationLinkRequest::setTargetInstanceName(const std::string &targetInstanceName) {
  targetInstanceName_ = targetInstanceName;
  setParameter(std::string("TargetInstanceName"), targetInstanceName);
}

std::string SwitchReplicationLinkRequest::getDBInstanceId() const {
  return dBInstanceId_;
}

void SwitchReplicationLinkRequest::setDBInstanceId(const std::string &dBInstanceId) {
  dBInstanceId_ = dBInstanceId;
  setParameter(std::string("DBInstanceId"), dBInstanceId);
}

