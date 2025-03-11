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

#include <alibabacloud/drds/model/SetBackupLocalRequest.h>

using AlibabaCloud::Drds::Model::SetBackupLocalRequest;

SetBackupLocalRequest::SetBackupLocalRequest()
    : RpcServiceRequest("drds", "2019-01-23", "SetBackupLocal") {
  setMethod(HttpRequest::Method::Post);
}

SetBackupLocalRequest::~SetBackupLocalRequest() {}

std::string SetBackupLocalRequest::getLocalLogRetentionHours() const {
  return localLogRetentionHours_;
}

void SetBackupLocalRequest::setLocalLogRetentionHours(const std::string &localLogRetentionHours) {
  localLogRetentionHours_ = localLogRetentionHours;
  setParameter(std::string("LocalLogRetentionHours"), localLogRetentionHours);
}

std::string SetBackupLocalRequest::getLocalLogRetentionSpace() const {
  return localLogRetentionSpace_;
}

void SetBackupLocalRequest::setLocalLogRetentionSpace(const std::string &localLogRetentionSpace) {
  localLogRetentionSpace_ = localLogRetentionSpace;
  setParameter(std::string("LocalLogRetentionSpace"), localLogRetentionSpace);
}

std::string SetBackupLocalRequest::getDrdsInstanceId() const {
  return drdsInstanceId_;
}

void SetBackupLocalRequest::setDrdsInstanceId(const std::string &drdsInstanceId) {
  drdsInstanceId_ = drdsInstanceId;
  setParameter(std::string("DrdsInstanceId"), drdsInstanceId);
}

std::string SetBackupLocalRequest::getAccessKeyId() const {
  return accessKeyId_;
}

void SetBackupLocalRequest::setAccessKeyId(const std::string &accessKeyId) {
  accessKeyId_ = accessKeyId;
  setParameter(std::string("AccessKeyId"), accessKeyId);
}

std::string SetBackupLocalRequest::getHighSpaceUsageProtection() const {
  return highSpaceUsageProtection_;
}

void SetBackupLocalRequest::setHighSpaceUsageProtection(const std::string &highSpaceUsageProtection) {
  highSpaceUsageProtection_ = highSpaceUsageProtection;
  setParameter(std::string("HighSpaceUsageProtection"), highSpaceUsageProtection);
}

