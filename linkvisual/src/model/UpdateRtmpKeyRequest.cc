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

#include <alibabacloud/linkvisual/model/UpdateRtmpKeyRequest.h>

using AlibabaCloud::Linkvisual::Model::UpdateRtmpKeyRequest;

UpdateRtmpKeyRequest::UpdateRtmpKeyRequest()
    : RpcServiceRequest("linkvisual", "2018-01-20", "UpdateRtmpKey") {
  setMethod(HttpRequest::Method::Post);
}

UpdateRtmpKeyRequest::~UpdateRtmpKeyRequest() {}

std::string UpdateRtmpKeyRequest::getPushAuthKey() const {
  return pushAuthKey_;
}

void UpdateRtmpKeyRequest::setPushAuthKey(const std::string &pushAuthKey) {
  pushAuthKey_ = pushAuthKey;
  setParameter(std::string("PushAuthKey"), pushAuthKey);
}

std::string UpdateRtmpKeyRequest::getIotId() const {
  return iotId_;
}

void UpdateRtmpKeyRequest::setIotId(const std::string &iotId) {
  iotId_ = iotId;
  setParameter(std::string("IotId"), iotId);
}

std::string UpdateRtmpKeyRequest::getIotInstanceId() const {
  return iotInstanceId_;
}

void UpdateRtmpKeyRequest::setIotInstanceId(const std::string &iotInstanceId) {
  iotInstanceId_ = iotInstanceId;
  setParameter(std::string("IotInstanceId"), iotInstanceId);
}

int UpdateRtmpKeyRequest::getPushKeyExpireTime() const {
  return pushKeyExpireTime_;
}

void UpdateRtmpKeyRequest::setPushKeyExpireTime(int pushKeyExpireTime) {
  pushKeyExpireTime_ = pushKeyExpireTime;
  setParameter(std::string("PushKeyExpireTime"), std::to_string(pushKeyExpireTime));
}

std::string UpdateRtmpKeyRequest::getPullAuthKey() const {
  return pullAuthKey_;
}

void UpdateRtmpKeyRequest::setPullAuthKey(const std::string &pullAuthKey) {
  pullAuthKey_ = pullAuthKey;
  setParameter(std::string("PullAuthKey"), pullAuthKey);
}

std::string UpdateRtmpKeyRequest::getProductKey() const {
  return productKey_;
}

void UpdateRtmpKeyRequest::setProductKey(const std::string &productKey) {
  productKey_ = productKey;
  setParameter(std::string("ProductKey"), productKey);
}

std::string UpdateRtmpKeyRequest::getApiProduct() const {
  return apiProduct_;
}

void UpdateRtmpKeyRequest::setApiProduct(const std::string &apiProduct) {
  apiProduct_ = apiProduct;
  setBodyParameter(std::string("ApiProduct"), apiProduct);
}

std::string UpdateRtmpKeyRequest::getApiRevision() const {
  return apiRevision_;
}

void UpdateRtmpKeyRequest::setApiRevision(const std::string &apiRevision) {
  apiRevision_ = apiRevision;
  setBodyParameter(std::string("ApiRevision"), apiRevision);
}

std::string UpdateRtmpKeyRequest::getDeviceName() const {
  return deviceName_;
}

void UpdateRtmpKeyRequest::setDeviceName(const std::string &deviceName) {
  deviceName_ = deviceName;
  setParameter(std::string("DeviceName"), deviceName);
}

int UpdateRtmpKeyRequest::getPullKeyExpireTime() const {
  return pullKeyExpireTime_;
}

void UpdateRtmpKeyRequest::setPullKeyExpireTime(int pullKeyExpireTime) {
  pullKeyExpireTime_ = pullKeyExpireTime;
  setParameter(std::string("PullKeyExpireTime"), std::to_string(pullKeyExpireTime));
}

