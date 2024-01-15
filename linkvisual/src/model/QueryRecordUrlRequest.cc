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

#include <alibabacloud/linkvisual/model/QueryRecordUrlRequest.h>

using AlibabaCloud::Linkvisual::Model::QueryRecordUrlRequest;

QueryRecordUrlRequest::QueryRecordUrlRequest()
    : RpcServiceRequest("linkvisual", "2018-01-20", "QueryRecordUrl") {
  setMethod(HttpRequest::Method::Post);
}

QueryRecordUrlRequest::~QueryRecordUrlRequest() {}

std::string QueryRecordUrlRequest::getIotId() const {
  return iotId_;
}

void QueryRecordUrlRequest::setIotId(const std::string &iotId) {
  iotId_ = iotId;
  setParameter(std::string("IotId"), iotId);
}

std::string QueryRecordUrlRequest::getIotInstanceId() const {
  return iotInstanceId_;
}

void QueryRecordUrlRequest::setIotInstanceId(const std::string &iotInstanceId) {
  iotInstanceId_ = iotInstanceId;
  setParameter(std::string("IotInstanceId"), iotInstanceId);
}

std::string QueryRecordUrlRequest::getProductKey() const {
  return productKey_;
}

void QueryRecordUrlRequest::setProductKey(const std::string &productKey) {
  productKey_ = productKey;
  setParameter(std::string("ProductKey"), productKey);
}

std::string QueryRecordUrlRequest::getFileName() const {
  return fileName_;
}

void QueryRecordUrlRequest::setFileName(const std::string &fileName) {
  fileName_ = fileName;
  setParameter(std::string("FileName"), fileName);
}

int QueryRecordUrlRequest::getSeekTime() const {
  return seekTime_;
}

void QueryRecordUrlRequest::setSeekTime(int seekTime) {
  seekTime_ = seekTime;
  setParameter(std::string("SeekTime"), std::to_string(seekTime));
}

std::string QueryRecordUrlRequest::getApiProduct() const {
  return apiProduct_;
}

void QueryRecordUrlRequest::setApiProduct(const std::string &apiProduct) {
  apiProduct_ = apiProduct;
  setBodyParameter(std::string("ApiProduct"), apiProduct);
}

std::string QueryRecordUrlRequest::getApiRevision() const {
  return apiRevision_;
}

void QueryRecordUrlRequest::setApiRevision(const std::string &apiRevision) {
  apiRevision_ = apiRevision;
  setBodyParameter(std::string("ApiRevision"), apiRevision);
}

std::string QueryRecordUrlRequest::getDeviceName() const {
  return deviceName_;
}

void QueryRecordUrlRequest::setDeviceName(const std::string &deviceName) {
  deviceName_ = deviceName;
  setParameter(std::string("DeviceName"), deviceName);
}

int QueryRecordUrlRequest::getUrlValidDuration() const {
  return urlValidDuration_;
}

void QueryRecordUrlRequest::setUrlValidDuration(int urlValidDuration) {
  urlValidDuration_ = urlValidDuration;
  setParameter(std::string("UrlValidDuration"), std::to_string(urlValidDuration));
}

