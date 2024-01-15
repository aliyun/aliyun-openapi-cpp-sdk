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

#include <alibabacloud/linkvisual/model/CreateLocalRecordDownloadByTimeJobRequest.h>

using AlibabaCloud::Linkvisual::Model::CreateLocalRecordDownloadByTimeJobRequest;

CreateLocalRecordDownloadByTimeJobRequest::CreateLocalRecordDownloadByTimeJobRequest()
    : RpcServiceRequest("linkvisual", "2018-01-20", "CreateLocalRecordDownloadByTimeJob") {
  setMethod(HttpRequest::Method::Post);
}

CreateLocalRecordDownloadByTimeJobRequest::~CreateLocalRecordDownloadByTimeJobRequest() {}

float CreateLocalRecordDownloadByTimeJobRequest::getSpeed() const {
  return speed_;
}

void CreateLocalRecordDownloadByTimeJobRequest::setSpeed(float speed) {
  speed_ = speed;
  setParameter(std::string("Speed"), std::to_string(speed));
}

std::string CreateLocalRecordDownloadByTimeJobRequest::getIotId() const {
  return iotId_;
}

void CreateLocalRecordDownloadByTimeJobRequest::setIotId(const std::string &iotId) {
  iotId_ = iotId;
  setParameter(std::string("IotId"), iotId);
}

std::string CreateLocalRecordDownloadByTimeJobRequest::getIotInstanceId() const {
  return iotInstanceId_;
}

void CreateLocalRecordDownloadByTimeJobRequest::setIotInstanceId(const std::string &iotInstanceId) {
  iotInstanceId_ = iotInstanceId;
  setParameter(std::string("IotInstanceId"), iotInstanceId);
}

int CreateLocalRecordDownloadByTimeJobRequest::getStreamType() const {
  return streamType_;
}

void CreateLocalRecordDownloadByTimeJobRequest::setStreamType(int streamType) {
  streamType_ = streamType;
  setParameter(std::string("StreamType"), std::to_string(streamType));
}

int CreateLocalRecordDownloadByTimeJobRequest::getEndTime() const {
  return endTime_;
}

void CreateLocalRecordDownloadByTimeJobRequest::setEndTime(int endTime) {
  endTime_ = endTime;
  setParameter(std::string("EndTime"), std::to_string(endTime));
}

int CreateLocalRecordDownloadByTimeJobRequest::getBeginTime() const {
  return beginTime_;
}

void CreateLocalRecordDownloadByTimeJobRequest::setBeginTime(int beginTime) {
  beginTime_ = beginTime;
  setParameter(std::string("BeginTime"), std::to_string(beginTime));
}

std::string CreateLocalRecordDownloadByTimeJobRequest::getProductKey() const {
  return productKey_;
}

void CreateLocalRecordDownloadByTimeJobRequest::setProductKey(const std::string &productKey) {
  productKey_ = productKey;
  setParameter(std::string("ProductKey"), productKey);
}

std::string CreateLocalRecordDownloadByTimeJobRequest::getApiProduct() const {
  return apiProduct_;
}

void CreateLocalRecordDownloadByTimeJobRequest::setApiProduct(const std::string &apiProduct) {
  apiProduct_ = apiProduct;
  setBodyParameter(std::string("ApiProduct"), apiProduct);
}

std::string CreateLocalRecordDownloadByTimeJobRequest::getApiRevision() const {
  return apiRevision_;
}

void CreateLocalRecordDownloadByTimeJobRequest::setApiRevision(const std::string &apiRevision) {
  apiRevision_ = apiRevision;
  setBodyParameter(std::string("ApiRevision"), apiRevision);
}

std::string CreateLocalRecordDownloadByTimeJobRequest::getDeviceName() const {
  return deviceName_;
}

void CreateLocalRecordDownloadByTimeJobRequest::setDeviceName(const std::string &deviceName) {
  deviceName_ = deviceName;
  setParameter(std::string("DeviceName"), deviceName);
}

