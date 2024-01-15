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

#include <alibabacloud/linkvisual/model/QueryRecordUrlByTimeRequest.h>

using AlibabaCloud::Linkvisual::Model::QueryRecordUrlByTimeRequest;

QueryRecordUrlByTimeRequest::QueryRecordUrlByTimeRequest()
    : RpcServiceRequest("linkvisual", "2018-01-20", "QueryRecordUrlByTime") {
  setMethod(HttpRequest::Method::Post);
}

QueryRecordUrlByTimeRequest::~QueryRecordUrlByTimeRequest() {}

std::string QueryRecordUrlByTimeRequest::getIotId() const {
  return iotId_;
}

void QueryRecordUrlByTimeRequest::setIotId(const std::string &iotId) {
  iotId_ = iotId;
  setParameter(std::string("IotId"), iotId);
}

std::string QueryRecordUrlByTimeRequest::getIotInstanceId() const {
  return iotInstanceId_;
}

void QueryRecordUrlByTimeRequest::setIotInstanceId(const std::string &iotInstanceId) {
  iotInstanceId_ = iotInstanceId;
  setParameter(std::string("IotInstanceId"), iotInstanceId);
}

int QueryRecordUrlByTimeRequest::getStreamType() const {
  return streamType_;
}

void QueryRecordUrlByTimeRequest::setStreamType(int streamType) {
  streamType_ = streamType;
  setParameter(std::string("StreamType"), std::to_string(streamType));
}

int QueryRecordUrlByTimeRequest::getEndTime() const {
  return endTime_;
}

void QueryRecordUrlByTimeRequest::setEndTime(int endTime) {
  endTime_ = endTime;
  setParameter(std::string("EndTime"), std::to_string(endTime));
}

int QueryRecordUrlByTimeRequest::getBeginTime() const {
  return beginTime_;
}

void QueryRecordUrlByTimeRequest::setBeginTime(int beginTime) {
  beginTime_ = beginTime;
  setParameter(std::string("BeginTime"), std::to_string(beginTime));
}

std::string QueryRecordUrlByTimeRequest::getProductKey() const {
  return productKey_;
}

void QueryRecordUrlByTimeRequest::setProductKey(const std::string &productKey) {
  productKey_ = productKey;
  setParameter(std::string("ProductKey"), productKey);
}

std::string QueryRecordUrlByTimeRequest::getApiProduct() const {
  return apiProduct_;
}

void QueryRecordUrlByTimeRequest::setApiProduct(const std::string &apiProduct) {
  apiProduct_ = apiProduct;
  setBodyParameter(std::string("ApiProduct"), apiProduct);
}

std::string QueryRecordUrlByTimeRequest::getApiRevision() const {
  return apiRevision_;
}

void QueryRecordUrlByTimeRequest::setApiRevision(const std::string &apiRevision) {
  apiRevision_ = apiRevision;
  setBodyParameter(std::string("ApiRevision"), apiRevision);
}

std::string QueryRecordUrlByTimeRequest::getDeviceName() const {
  return deviceName_;
}

void QueryRecordUrlByTimeRequest::setDeviceName(const std::string &deviceName) {
  deviceName_ = deviceName;
  setParameter(std::string("DeviceName"), deviceName);
}

int QueryRecordUrlByTimeRequest::getUrlValidDuration() const {
  return urlValidDuration_;
}

void QueryRecordUrlByTimeRequest::setUrlValidDuration(int urlValidDuration) {
  urlValidDuration_ = urlValidDuration;
  setParameter(std::string("UrlValidDuration"), std::to_string(urlValidDuration));
}

