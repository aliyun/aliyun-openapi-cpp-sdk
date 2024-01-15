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

#include <alibabacloud/linkvisual/model/QueryDeviceVodUrlByTimeRequest.h>

using AlibabaCloud::Linkvisual::Model::QueryDeviceVodUrlByTimeRequest;

QueryDeviceVodUrlByTimeRequest::QueryDeviceVodUrlByTimeRequest()
    : RpcServiceRequest("linkvisual", "2018-01-20", "QueryDeviceVodUrlByTime") {
  setMethod(HttpRequest::Method::Post);
}

QueryDeviceVodUrlByTimeRequest::~QueryDeviceVodUrlByTimeRequest() {}

std::string QueryDeviceVodUrlByTimeRequest::getScheme() const {
  return scheme_;
}

void QueryDeviceVodUrlByTimeRequest::setScheme(const std::string &scheme) {
  scheme_ = scheme;
  setParameter(std::string("Scheme"), scheme);
}

bool QueryDeviceVodUrlByTimeRequest::getPlayUnLimited() const {
  return playUnLimited_;
}

void QueryDeviceVodUrlByTimeRequest::setPlayUnLimited(bool playUnLimited) {
  playUnLimited_ = playUnLimited;
  setParameter(std::string("PlayUnLimited"), playUnLimited ? "true" : "false");
}

int QueryDeviceVodUrlByTimeRequest::getEncryptType() const {
  return encryptType_;
}

void QueryDeviceVodUrlByTimeRequest::setEncryptType(int encryptType) {
  encryptType_ = encryptType;
  setParameter(std::string("EncryptType"), std::to_string(encryptType));
}

std::string QueryDeviceVodUrlByTimeRequest::getIotId() const {
  return iotId_;
}

void QueryDeviceVodUrlByTimeRequest::setIotId(const std::string &iotId) {
  iotId_ = iotId;
  setParameter(std::string("IotId"), iotId);
}

std::string QueryDeviceVodUrlByTimeRequest::getIotInstanceId() const {
  return iotInstanceId_;
}

void QueryDeviceVodUrlByTimeRequest::setIotInstanceId(const std::string &iotInstanceId) {
  iotInstanceId_ = iotInstanceId;
  setParameter(std::string("IotInstanceId"), iotInstanceId);
}

bool QueryDeviceVodUrlByTimeRequest::getShouldEncrypt() const {
  return shouldEncrypt_;
}

void QueryDeviceVodUrlByTimeRequest::setShouldEncrypt(bool shouldEncrypt) {
  shouldEncrypt_ = shouldEncrypt;
  setParameter(std::string("ShouldEncrypt"), shouldEncrypt ? "true" : "false");
}

bool QueryDeviceVodUrlByTimeRequest::getEnableStun() const {
  return enableStun_;
}

void QueryDeviceVodUrlByTimeRequest::setEnableStun(bool enableStun) {
  enableStun_ = enableStun;
  setParameter(std::string("EnableStun"), enableStun ? "true" : "false");
}

int QueryDeviceVodUrlByTimeRequest::getEndTime() const {
  return endTime_;
}

void QueryDeviceVodUrlByTimeRequest::setEndTime(int endTime) {
  endTime_ = endTime;
  setParameter(std::string("EndTime"), std::to_string(endTime));
}

int QueryDeviceVodUrlByTimeRequest::getBeginTime() const {
  return beginTime_;
}

void QueryDeviceVodUrlByTimeRequest::setBeginTime(int beginTime) {
  beginTime_ = beginTime;
  setParameter(std::string("BeginTime"), std::to_string(beginTime));
}

std::string QueryDeviceVodUrlByTimeRequest::getProductKey() const {
  return productKey_;
}

void QueryDeviceVodUrlByTimeRequest::setProductKey(const std::string &productKey) {
  productKey_ = productKey;
  setParameter(std::string("ProductKey"), productKey);
}

int QueryDeviceVodUrlByTimeRequest::getSeekTime() const {
  return seekTime_;
}

void QueryDeviceVodUrlByTimeRequest::setSeekTime(int seekTime) {
  seekTime_ = seekTime;
  setParameter(std::string("SeekTime"), std::to_string(seekTime));
}

std::string QueryDeviceVodUrlByTimeRequest::getApiProduct() const {
  return apiProduct_;
}

void QueryDeviceVodUrlByTimeRequest::setApiProduct(const std::string &apiProduct) {
  apiProduct_ = apiProduct;
  setBodyParameter(std::string("ApiProduct"), apiProduct);
}

std::string QueryDeviceVodUrlByTimeRequest::getApiRevision() const {
  return apiRevision_;
}

void QueryDeviceVodUrlByTimeRequest::setApiRevision(const std::string &apiRevision) {
  apiRevision_ = apiRevision;
  setBodyParameter(std::string("ApiRevision"), apiRevision);
}

std::string QueryDeviceVodUrlByTimeRequest::getDeviceName() const {
  return deviceName_;
}

void QueryDeviceVodUrlByTimeRequest::setDeviceName(const std::string &deviceName) {
  deviceName_ = deviceName;
  setParameter(std::string("DeviceName"), deviceName);
}

int QueryDeviceVodUrlByTimeRequest::getUrlValidDuration() const {
  return urlValidDuration_;
}

void QueryDeviceVodUrlByTimeRequest::setUrlValidDuration(int urlValidDuration) {
  urlValidDuration_ = urlValidDuration;
  setParameter(std::string("UrlValidDuration"), std::to_string(urlValidDuration));
}

