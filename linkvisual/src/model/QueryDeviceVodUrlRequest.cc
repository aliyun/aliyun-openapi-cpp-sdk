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

#include <alibabacloud/linkvisual/model/QueryDeviceVodUrlRequest.h>

using AlibabaCloud::Linkvisual::Model::QueryDeviceVodUrlRequest;

QueryDeviceVodUrlRequest::QueryDeviceVodUrlRequest()
    : RpcServiceRequest("linkvisual", "2018-01-20", "QueryDeviceVodUrl") {
  setMethod(HttpRequest::Method::Post);
}

QueryDeviceVodUrlRequest::~QueryDeviceVodUrlRequest() {}

std::string QueryDeviceVodUrlRequest::getScheme() const {
  return scheme_;
}

void QueryDeviceVodUrlRequest::setScheme(const std::string &scheme) {
  scheme_ = scheme;
  setParameter(std::string("Scheme"), scheme);
}

bool QueryDeviceVodUrlRequest::getPlayUnLimited() const {
  return playUnLimited_;
}

void QueryDeviceVodUrlRequest::setPlayUnLimited(bool playUnLimited) {
  playUnLimited_ = playUnLimited;
  setParameter(std::string("PlayUnLimited"), playUnLimited ? "true" : "false");
}

int QueryDeviceVodUrlRequest::getEncryptType() const {
  return encryptType_;
}

void QueryDeviceVodUrlRequest::setEncryptType(int encryptType) {
  encryptType_ = encryptType;
  setParameter(std::string("EncryptType"), std::to_string(encryptType));
}

std::string QueryDeviceVodUrlRequest::getIotId() const {
  return iotId_;
}

void QueryDeviceVodUrlRequest::setIotId(const std::string &iotId) {
  iotId_ = iotId;
  setParameter(std::string("IotId"), iotId);
}

std::string QueryDeviceVodUrlRequest::getIotInstanceId() const {
  return iotInstanceId_;
}

void QueryDeviceVodUrlRequest::setIotInstanceId(const std::string &iotInstanceId) {
  iotInstanceId_ = iotInstanceId;
  setParameter(std::string("IotInstanceId"), iotInstanceId);
}

bool QueryDeviceVodUrlRequest::getShouldEncrypt() const {
  return shouldEncrypt_;
}

void QueryDeviceVodUrlRequest::setShouldEncrypt(bool shouldEncrypt) {
  shouldEncrypt_ = shouldEncrypt;
  setParameter(std::string("ShouldEncrypt"), shouldEncrypt ? "true" : "false");
}

bool QueryDeviceVodUrlRequest::getEnableStun() const {
  return enableStun_;
}

void QueryDeviceVodUrlRequest::setEnableStun(bool enableStun) {
  enableStun_ = enableStun;
  setParameter(std::string("EnableStun"), enableStun ? "true" : "false");
}

std::string QueryDeviceVodUrlRequest::getProductKey() const {
  return productKey_;
}

void QueryDeviceVodUrlRequest::setProductKey(const std::string &productKey) {
  productKey_ = productKey;
  setParameter(std::string("ProductKey"), productKey);
}

std::string QueryDeviceVodUrlRequest::getFileName() const {
  return fileName_;
}

void QueryDeviceVodUrlRequest::setFileName(const std::string &fileName) {
  fileName_ = fileName;
  setParameter(std::string("FileName"), fileName);
}

int QueryDeviceVodUrlRequest::getSeekTime() const {
  return seekTime_;
}

void QueryDeviceVodUrlRequest::setSeekTime(int seekTime) {
  seekTime_ = seekTime;
  setParameter(std::string("SeekTime"), std::to_string(seekTime));
}

std::string QueryDeviceVodUrlRequest::getApiProduct() const {
  return apiProduct_;
}

void QueryDeviceVodUrlRequest::setApiProduct(const std::string &apiProduct) {
  apiProduct_ = apiProduct;
  setBodyParameter(std::string("ApiProduct"), apiProduct);
}

std::string QueryDeviceVodUrlRequest::getApiRevision() const {
  return apiRevision_;
}

void QueryDeviceVodUrlRequest::setApiRevision(const std::string &apiRevision) {
  apiRevision_ = apiRevision;
  setBodyParameter(std::string("ApiRevision"), apiRevision);
}

std::string QueryDeviceVodUrlRequest::getDeviceName() const {
  return deviceName_;
}

void QueryDeviceVodUrlRequest::setDeviceName(const std::string &deviceName) {
  deviceName_ = deviceName;
  setParameter(std::string("DeviceName"), deviceName);
}

int QueryDeviceVodUrlRequest::getUrlValidDuration() const {
  return urlValidDuration_;
}

void QueryDeviceVodUrlRequest::setUrlValidDuration(int urlValidDuration) {
  urlValidDuration_ = urlValidDuration;
  setParameter(std::string("UrlValidDuration"), std::to_string(urlValidDuration));
}

