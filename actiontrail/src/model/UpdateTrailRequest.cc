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

#include <alibabacloud/actiontrail/model/UpdateTrailRequest.h>

using AlibabaCloud::Actiontrail::Model::UpdateTrailRequest;

UpdateTrailRequest::UpdateTrailRequest()
    : RpcServiceRequest("actiontrail", "2020-07-06", "UpdateTrail") {
  setMethod(HttpRequest::Method::Post);
}

UpdateTrailRequest::~UpdateTrailRequest() {}

std::string UpdateTrailRequest::getSlsProjectArn() const {
  return slsProjectArn_;
}

void UpdateTrailRequest::setSlsProjectArn(const std::string &slsProjectArn) {
  slsProjectArn_ = slsProjectArn;
  setParameter(std::string("SlsProjectArn"), slsProjectArn);
}

std::string UpdateTrailRequest::getSlsWriteRoleArn() const {
  return slsWriteRoleArn_;
}

void UpdateTrailRequest::setSlsWriteRoleArn(const std::string &slsWriteRoleArn) {
  slsWriteRoleArn_ = slsWriteRoleArn;
  setParameter(std::string("SlsWriteRoleArn"), slsWriteRoleArn);
}

std::string UpdateTrailRequest::getOssKeyPrefix() const {
  return ossKeyPrefix_;
}

void UpdateTrailRequest::setOssKeyPrefix(const std::string &ossKeyPrefix) {
  ossKeyPrefix_ = ossKeyPrefix;
  setParameter(std::string("OssKeyPrefix"), ossKeyPrefix);
}

std::string UpdateTrailRequest::getOssWriteRoleArn() const {
  return ossWriteRoleArn_;
}

void UpdateTrailRequest::setOssWriteRoleArn(const std::string &ossWriteRoleArn) {
  ossWriteRoleArn_ = ossWriteRoleArn;
  setParameter(std::string("OssWriteRoleArn"), ossWriteRoleArn);
}

std::string UpdateTrailRequest::getEventRW() const {
  return eventRW_;
}

void UpdateTrailRequest::setEventRW(const std::string &eventRW) {
  eventRW_ = eventRW;
  setParameter(std::string("EventRW"), eventRW);
}

std::string UpdateTrailRequest::getName() const {
  return name_;
}

void UpdateTrailRequest::setName(const std::string &name) {
  name_ = name;
  setParameter(std::string("Name"), name);
}

std::string UpdateTrailRequest::getOssBucketName() const {
  return ossBucketName_;
}

void UpdateTrailRequest::setOssBucketName(const std::string &ossBucketName) {
  ossBucketName_ = ossBucketName;
  setParameter(std::string("OssBucketName"), ossBucketName);
}

std::string UpdateTrailRequest::getTrailRegion() const {
  return trailRegion_;
}

void UpdateTrailRequest::setTrailRegion(const std::string &trailRegion) {
  trailRegion_ = trailRegion;
  setParameter(std::string("TrailRegion"), trailRegion);
}

