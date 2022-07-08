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

#include <alibabacloud/actiontrail/model/CreateTrailRequest.h>

using AlibabaCloud::Actiontrail::Model::CreateTrailRequest;

CreateTrailRequest::CreateTrailRequest()
    : RpcServiceRequest("actiontrail", "2020-07-06", "CreateTrail") {
  setMethod(HttpRequest::Method::Post);
}

CreateTrailRequest::~CreateTrailRequest() {}

std::string CreateTrailRequest::getSlsProjectArn() const {
  return slsProjectArn_;
}

void CreateTrailRequest::setSlsProjectArn(const std::string &slsProjectArn) {
  slsProjectArn_ = slsProjectArn;
  setParameter(std::string("SlsProjectArn"), slsProjectArn);
}

std::string CreateTrailRequest::getSlsWriteRoleArn() const {
  return slsWriteRoleArn_;
}

void CreateTrailRequest::setSlsWriteRoleArn(const std::string &slsWriteRoleArn) {
  slsWriteRoleArn_ = slsWriteRoleArn;
  setParameter(std::string("SlsWriteRoleArn"), slsWriteRoleArn);
}

bool CreateTrailRequest::getIsOrganizationTrail() const {
  return isOrganizationTrail_;
}

void CreateTrailRequest::setIsOrganizationTrail(bool isOrganizationTrail) {
  isOrganizationTrail_ = isOrganizationTrail;
  setParameter(std::string("IsOrganizationTrail"), isOrganizationTrail ? "true" : "false");
}

std::string CreateTrailRequest::getOssKeyPrefix() const {
  return ossKeyPrefix_;
}

void CreateTrailRequest::setOssKeyPrefix(const std::string &ossKeyPrefix) {
  ossKeyPrefix_ = ossKeyPrefix;
  setParameter(std::string("OssKeyPrefix"), ossKeyPrefix);
}

std::string CreateTrailRequest::getOssWriteRoleArn() const {
  return ossWriteRoleArn_;
}

void CreateTrailRequest::setOssWriteRoleArn(const std::string &ossWriteRoleArn) {
  ossWriteRoleArn_ = ossWriteRoleArn;
  setParameter(std::string("OssWriteRoleArn"), ossWriteRoleArn);
}

std::string CreateTrailRequest::getEventRW() const {
  return eventRW_;
}

void CreateTrailRequest::setEventRW(const std::string &eventRW) {
  eventRW_ = eventRW;
  setParameter(std::string("EventRW"), eventRW);
}

std::string CreateTrailRequest::getName() const {
  return name_;
}

void CreateTrailRequest::setName(const std::string &name) {
  name_ = name;
  setParameter(std::string("Name"), name);
}

std::string CreateTrailRequest::getOssBucketName() const {
  return ossBucketName_;
}

void CreateTrailRequest::setOssBucketName(const std::string &ossBucketName) {
  ossBucketName_ = ossBucketName;
  setParameter(std::string("OssBucketName"), ossBucketName);
}

std::string CreateTrailRequest::getTrailRegion() const {
  return trailRegion_;
}

void CreateTrailRequest::setTrailRegion(const std::string &trailRegion) {
  trailRegion_ = trailRegion;
  setParameter(std::string("TrailRegion"), trailRegion);
}

