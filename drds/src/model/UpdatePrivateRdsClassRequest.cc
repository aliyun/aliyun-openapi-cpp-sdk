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

#include <alibabacloud/drds/model/UpdatePrivateRdsClassRequest.h>

using AlibabaCloud::Drds::Model::UpdatePrivateRdsClassRequest;

UpdatePrivateRdsClassRequest::UpdatePrivateRdsClassRequest()
    : RpcServiceRequest("drds", "2019-01-23", "UpdatePrivateRdsClass") {
  setMethod(HttpRequest::Method::Post);
}

UpdatePrivateRdsClassRequest::~UpdatePrivateRdsClassRequest() {}

std::string UpdatePrivateRdsClassRequest::getStorage() const {
  return storage_;
}

void UpdatePrivateRdsClassRequest::setStorage(const std::string &storage) {
  storage_ = storage;
  setParameter(std::string("Storage"), storage);
}

bool UpdatePrivateRdsClassRequest::getAutoUseCoupon() const {
  return autoUseCoupon_;
}

void UpdatePrivateRdsClassRequest::setAutoUseCoupon(bool autoUseCoupon) {
  autoUseCoupon_ = autoUseCoupon;
  setParameter(std::string("AutoUseCoupon"), autoUseCoupon ? "true" : "false");
}

std::string UpdatePrivateRdsClassRequest::getDrdsInstanceId() const {
  return drdsInstanceId_;
}

void UpdatePrivateRdsClassRequest::setDrdsInstanceId(const std::string &drdsInstanceId) {
  drdsInstanceId_ = drdsInstanceId;
  setParameter(std::string("DrdsInstanceId"), drdsInstanceId);
}

std::string UpdatePrivateRdsClassRequest::getRdsClass() const {
  return rdsClass_;
}

void UpdatePrivateRdsClassRequest::setRdsClass(const std::string &rdsClass) {
  rdsClass_ = rdsClass;
  setParameter(std::string("RdsClass"), rdsClass);
}

int UpdatePrivateRdsClassRequest::getPrePayDuration() const {
  return prePayDuration_;
}

void UpdatePrivateRdsClassRequest::setPrePayDuration(int prePayDuration) {
  prePayDuration_ = prePayDuration;
  setParameter(std::string("PrePayDuration"), std::to_string(prePayDuration));
}

std::string UpdatePrivateRdsClassRequest::getAccessKeyId() const {
  return accessKeyId_;
}

void UpdatePrivateRdsClassRequest::setAccessKeyId(const std::string &accessKeyId) {
  accessKeyId_ = accessKeyId;
  setParameter(std::string("AccessKeyId"), accessKeyId);
}

std::string UpdatePrivateRdsClassRequest::getDBInstanceId() const {
  return dBInstanceId_;
}

void UpdatePrivateRdsClassRequest::setDBInstanceId(const std::string &dBInstanceId) {
  dBInstanceId_ = dBInstanceId;
  setParameter(std::string("DBInstanceId"), dBInstanceId);
}

