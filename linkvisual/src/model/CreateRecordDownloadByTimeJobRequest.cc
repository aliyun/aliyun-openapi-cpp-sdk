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

#include <alibabacloud/linkvisual/model/CreateRecordDownloadByTimeJobRequest.h>

using AlibabaCloud::Linkvisual::Model::CreateRecordDownloadByTimeJobRequest;

CreateRecordDownloadByTimeJobRequest::CreateRecordDownloadByTimeJobRequest()
    : RpcServiceRequest("linkvisual", "2018-01-20", "CreateRecordDownloadByTimeJob") {
  setMethod(HttpRequest::Method::Post);
}

CreateRecordDownloadByTimeJobRequest::~CreateRecordDownloadByTimeJobRequest() {}

std::string CreateRecordDownloadByTimeJobRequest::getIotId() const {
  return iotId_;
}

void CreateRecordDownloadByTimeJobRequest::setIotId(const std::string &iotId) {
  iotId_ = iotId;
  setParameter(std::string("IotId"), iotId);
}

std::string CreateRecordDownloadByTimeJobRequest::getIotInstanceId() const {
  return iotInstanceId_;
}

void CreateRecordDownloadByTimeJobRequest::setIotInstanceId(const std::string &iotInstanceId) {
  iotInstanceId_ = iotInstanceId;
  setParameter(std::string("IotInstanceId"), iotInstanceId);
}

int CreateRecordDownloadByTimeJobRequest::getRecordType() const {
  return recordType_;
}

void CreateRecordDownloadByTimeJobRequest::setRecordType(int recordType) {
  recordType_ = recordType;
  setParameter(std::string("RecordType"), std::to_string(recordType));
}

int CreateRecordDownloadByTimeJobRequest::getStreamType() const {
  return streamType_;
}

void CreateRecordDownloadByTimeJobRequest::setStreamType(int streamType) {
  streamType_ = streamType;
  setParameter(std::string("StreamType"), std::to_string(streamType));
}

int CreateRecordDownloadByTimeJobRequest::getEndTime() const {
  return endTime_;
}

void CreateRecordDownloadByTimeJobRequest::setEndTime(int endTime) {
  endTime_ = endTime;
  setParameter(std::string("EndTime"), std::to_string(endTime));
}

int CreateRecordDownloadByTimeJobRequest::getBeginTime() const {
  return beginTime_;
}

void CreateRecordDownloadByTimeJobRequest::setBeginTime(int beginTime) {
  beginTime_ = beginTime;
  setParameter(std::string("BeginTime"), std::to_string(beginTime));
}

std::string CreateRecordDownloadByTimeJobRequest::getProductKey() const {
  return productKey_;
}

void CreateRecordDownloadByTimeJobRequest::setProductKey(const std::string &productKey) {
  productKey_ = productKey;
  setParameter(std::string("ProductKey"), productKey);
}

std::string CreateRecordDownloadByTimeJobRequest::getApiProduct() const {
  return apiProduct_;
}

void CreateRecordDownloadByTimeJobRequest::setApiProduct(const std::string &apiProduct) {
  apiProduct_ = apiProduct;
  setBodyParameter(std::string("ApiProduct"), apiProduct);
}

std::string CreateRecordDownloadByTimeJobRequest::getApiRevision() const {
  return apiRevision_;
}

void CreateRecordDownloadByTimeJobRequest::setApiRevision(const std::string &apiRevision) {
  apiRevision_ = apiRevision;
  setBodyParameter(std::string("ApiRevision"), apiRevision);
}

std::string CreateRecordDownloadByTimeJobRequest::getDeviceName() const {
  return deviceName_;
}

void CreateRecordDownloadByTimeJobRequest::setDeviceName(const std::string &deviceName) {
  deviceName_ = deviceName;
  setParameter(std::string("DeviceName"), deviceName);
}

