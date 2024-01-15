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

#include <alibabacloud/linkvisual/model/CreateRtmpDeviceRequest.h>

using AlibabaCloud::Linkvisual::Model::CreateRtmpDeviceRequest;

CreateRtmpDeviceRequest::CreateRtmpDeviceRequest()
    : RpcServiceRequest("linkvisual", "2018-01-20", "CreateRtmpDevice") {
  setMethod(HttpRequest::Method::Post);
}

CreateRtmpDeviceRequest::~CreateRtmpDeviceRequest() {}

std::string CreateRtmpDeviceRequest::getDescription() const {
  return description_;
}

void CreateRtmpDeviceRequest::setDescription(const std::string &description) {
  description_ = description;
  setParameter(std::string("Description"), description);
}

std::string CreateRtmpDeviceRequest::getPushAuthKey() const {
  return pushAuthKey_;
}

void CreateRtmpDeviceRequest::setPushAuthKey(const std::string &pushAuthKey) {
  pushAuthKey_ = pushAuthKey;
  setParameter(std::string("PushAuthKey"), pushAuthKey);
}

std::string CreateRtmpDeviceRequest::getIotInstanceId() const {
  return iotInstanceId_;
}

void CreateRtmpDeviceRequest::setIotInstanceId(const std::string &iotInstanceId) {
  iotInstanceId_ = iotInstanceId;
  setParameter(std::string("IotInstanceId"), iotInstanceId);
}

int CreateRtmpDeviceRequest::getPushKeyExpireTime() const {
  return pushKeyExpireTime_;
}

void CreateRtmpDeviceRequest::setPushKeyExpireTime(int pushKeyExpireTime) {
  pushKeyExpireTime_ = pushKeyExpireTime;
  setParameter(std::string("PushKeyExpireTime"), std::to_string(pushKeyExpireTime));
}

std::string CreateRtmpDeviceRequest::getPullAuthKey() const {
  return pullAuthKey_;
}

void CreateRtmpDeviceRequest::setPullAuthKey(const std::string &pullAuthKey) {
  pullAuthKey_ = pullAuthKey;
  setParameter(std::string("PullAuthKey"), pullAuthKey);
}

std::string CreateRtmpDeviceRequest::getSubStreamName() const {
  return subStreamName_;
}

void CreateRtmpDeviceRequest::setSubStreamName(const std::string &subStreamName) {
  subStreamName_ = subStreamName;
  setParameter(std::string("SubStreamName"), subStreamName);
}

std::string CreateRtmpDeviceRequest::getProductKey() const {
  return productKey_;
}

void CreateRtmpDeviceRequest::setProductKey(const std::string &productKey) {
  productKey_ = productKey;
  setParameter(std::string("ProductKey"), productKey);
}

std::string CreateRtmpDeviceRequest::getApiProduct() const {
  return apiProduct_;
}

void CreateRtmpDeviceRequest::setApiProduct(const std::string &apiProduct) {
  apiProduct_ = apiProduct;
  setBodyParameter(std::string("ApiProduct"), apiProduct);
}

std::string CreateRtmpDeviceRequest::getApiRevision() const {
  return apiRevision_;
}

void CreateRtmpDeviceRequest::setApiRevision(const std::string &apiRevision) {
  apiRevision_ = apiRevision;
  setBodyParameter(std::string("ApiRevision"), apiRevision);
}

std::string CreateRtmpDeviceRequest::getDeviceName() const {
  return deviceName_;
}

void CreateRtmpDeviceRequest::setDeviceName(const std::string &deviceName) {
  deviceName_ = deviceName;
  setParameter(std::string("DeviceName"), deviceName);
}

int CreateRtmpDeviceRequest::getPullKeyExpireTime() const {
  return pullKeyExpireTime_;
}

void CreateRtmpDeviceRequest::setPullKeyExpireTime(int pullKeyExpireTime) {
  pullKeyExpireTime_ = pullKeyExpireTime;
  setParameter(std::string("PullKeyExpireTime"), std::to_string(pullKeyExpireTime));
}

