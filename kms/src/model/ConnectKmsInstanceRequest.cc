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

#include <alibabacloud/kms/model/ConnectKmsInstanceRequest.h>

using AlibabaCloud::Kms::Model::ConnectKmsInstanceRequest;

ConnectKmsInstanceRequest::ConnectKmsInstanceRequest()
    : RpcServiceRequest("kms", "2016-01-20", "ConnectKmsInstance") {
  setMethod(HttpRequest::Method::Post);
}

ConnectKmsInstanceRequest::~ConnectKmsInstanceRequest() {}

std::string ConnectKmsInstanceRequest::getKmsInstanceId() const {
  return kmsInstanceId_;
}

void ConnectKmsInstanceRequest::setKmsInstanceId(const std::string &kmsInstanceId) {
  kmsInstanceId_ = kmsInstanceId;
  setParameter(std::string("KmsInstanceId"), kmsInstanceId);
}

std::string ConnectKmsInstanceRequest::getVSwitchIds() const {
  return vSwitchIds_;
}

void ConnectKmsInstanceRequest::setVSwitchIds(const std::string &vSwitchIds) {
  vSwitchIds_ = vSwitchIds;
  setParameter(std::string("VSwitchIds"), vSwitchIds);
}

std::string ConnectKmsInstanceRequest::getKMProvider() const {
  return kMProvider_;
}

void ConnectKmsInstanceRequest::setKMProvider(const std::string &kMProvider) {
  kMProvider_ = kMProvider;
  setParameter(std::string("KMProvider"), kMProvider);
}

std::string ConnectKmsInstanceRequest::getZoneIds() const {
  return zoneIds_;
}

void ConnectKmsInstanceRequest::setZoneIds(const std::string &zoneIds) {
  zoneIds_ = zoneIds;
  setParameter(std::string("ZoneIds"), zoneIds);
}

std::string ConnectKmsInstanceRequest::getVpcId() const {
  return vpcId_;
}

void ConnectKmsInstanceRequest::setVpcId(const std::string &vpcId) {
  vpcId_ = vpcId;
  setParameter(std::string("VpcId"), vpcId);
}

