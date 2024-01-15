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

#include <alibabacloud/linkvisual/model/QueryRecordRequest.h>

using AlibabaCloud::Linkvisual::Model::QueryRecordRequest;

QueryRecordRequest::QueryRecordRequest()
    : RpcServiceRequest("linkvisual", "2018-01-20", "QueryRecord") {
  setMethod(HttpRequest::Method::Post);
}

QueryRecordRequest::~QueryRecordRequest() {}

std::string QueryRecordRequest::getIotId() const {
  return iotId_;
}

void QueryRecordRequest::setIotId(const std::string &iotId) {
  iotId_ = iotId;
  setParameter(std::string("IotId"), iotId);
}

int QueryRecordRequest::getRecordType() const {
  return recordType_;
}

void QueryRecordRequest::setRecordType(int recordType) {
  recordType_ = recordType;
  setParameter(std::string("RecordType"), std::to_string(recordType));
}

std::string QueryRecordRequest::getIotInstanceId() const {
  return iotInstanceId_;
}

void QueryRecordRequest::setIotInstanceId(const std::string &iotInstanceId) {
  iotInstanceId_ = iotInstanceId;
  setParameter(std::string("IotInstanceId"), iotInstanceId);
}

int QueryRecordRequest::getPageSize() const {
  return pageSize_;
}

void QueryRecordRequest::setPageSize(int pageSize) {
  pageSize_ = pageSize;
  setParameter(std::string("PageSize"), std::to_string(pageSize));
}

int QueryRecordRequest::getStreamType() const {
  return streamType_;
}

void QueryRecordRequest::setStreamType(int streamType) {
  streamType_ = streamType;
  setParameter(std::string("StreamType"), std::to_string(streamType));
}

bool QueryRecordRequest::getNeedSnapshot() const {
  return needSnapshot_;
}

void QueryRecordRequest::setNeedSnapshot(bool needSnapshot) {
  needSnapshot_ = needSnapshot;
  setParameter(std::string("NeedSnapshot"), needSnapshot ? "true" : "false");
}

int QueryRecordRequest::getEndTime() const {
  return endTime_;
}

void QueryRecordRequest::setEndTime(int endTime) {
  endTime_ = endTime;
  setParameter(std::string("EndTime"), std::to_string(endTime));
}

int QueryRecordRequest::getBeginTime() const {
  return beginTime_;
}

void QueryRecordRequest::setBeginTime(int beginTime) {
  beginTime_ = beginTime;
  setParameter(std::string("BeginTime"), std::to_string(beginTime));
}

int QueryRecordRequest::getCurrentPage() const {
  return currentPage_;
}

void QueryRecordRequest::setCurrentPage(int currentPage) {
  currentPage_ = currentPage;
  setParameter(std::string("CurrentPage"), std::to_string(currentPage));
}

std::string QueryRecordRequest::getProductKey() const {
  return productKey_;
}

void QueryRecordRequest::setProductKey(const std::string &productKey) {
  productKey_ = productKey;
  setParameter(std::string("ProductKey"), productKey);
}

std::string QueryRecordRequest::getApiProduct() const {
  return apiProduct_;
}

void QueryRecordRequest::setApiProduct(const std::string &apiProduct) {
  apiProduct_ = apiProduct;
  setBodyParameter(std::string("ApiProduct"), apiProduct);
}

std::string QueryRecordRequest::getApiRevision() const {
  return apiRevision_;
}

void QueryRecordRequest::setApiRevision(const std::string &apiRevision) {
  apiRevision_ = apiRevision;
  setBodyParameter(std::string("ApiRevision"), apiRevision);
}

std::string QueryRecordRequest::getDeviceName() const {
  return deviceName_;
}

void QueryRecordRequest::setDeviceName(const std::string &deviceName) {
  deviceName_ = deviceName;
  setParameter(std::string("DeviceName"), deviceName);
}

