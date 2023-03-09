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

#include <alibabacloud/adb/model/ModifyDBClusterPayTypeRequest.h>

using AlibabaCloud::Adb::Model::ModifyDBClusterPayTypeRequest;

ModifyDBClusterPayTypeRequest::ModifyDBClusterPayTypeRequest()
    : RpcServiceRequest("adb", "2019-03-15", "ModifyDBClusterPayType") {
  setMethod(HttpRequest::Method::Post);
}

ModifyDBClusterPayTypeRequest::~ModifyDBClusterPayTypeRequest() {}

std::string ModifyDBClusterPayTypeRequest::getPeriod() const {
  return period_;
}

void ModifyDBClusterPayTypeRequest::setPeriod(const std::string &period) {
  period_ = period;
  setParameter(std::string("Period"), period);
}

std::string ModifyDBClusterPayTypeRequest::getDbClusterId() const {
  return dbClusterId_;
}

void ModifyDBClusterPayTypeRequest::setDbClusterId(const std::string &dbClusterId) {
  dbClusterId_ = dbClusterId;
  setParameter(std::string("DbClusterId"), dbClusterId);
}

std::string ModifyDBClusterPayTypeRequest::getUsedTime() const {
  return usedTime_;
}

void ModifyDBClusterPayTypeRequest::setUsedTime(const std::string &usedTime) {
  usedTime_ = usedTime;
  setParameter(std::string("UsedTime"), usedTime);
}

std::string ModifyDBClusterPayTypeRequest::getAccessKeyId() const {
  return accessKeyId_;
}

void ModifyDBClusterPayTypeRequest::setAccessKeyId(const std::string &accessKeyId) {
  accessKeyId_ = accessKeyId;
  setParameter(std::string("AccessKeyId"), accessKeyId);
}

std::string ModifyDBClusterPayTypeRequest::getPayType() const {
  return payType_;
}

void ModifyDBClusterPayTypeRequest::setPayType(const std::string &payType) {
  payType_ = payType;
  setParameter(std::string("PayType"), payType);
}

