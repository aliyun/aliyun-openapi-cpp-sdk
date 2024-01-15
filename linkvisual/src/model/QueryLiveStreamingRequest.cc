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

#include <alibabacloud/linkvisual/model/QueryLiveStreamingRequest.h>

using AlibabaCloud::Linkvisual::Model::QueryLiveStreamingRequest;

QueryLiveStreamingRequest::QueryLiveStreamingRequest()
    : RpcServiceRequest("linkvisual", "2018-01-20", "QueryLiveStreaming") {
  setMethod(HttpRequest::Method::Post);
}

QueryLiveStreamingRequest::~QueryLiveStreamingRequest() {}

std::string QueryLiveStreamingRequest::getScheme() const {
  return scheme_;
}

void QueryLiveStreamingRequest::setScheme(const std::string &scheme) {
  scheme_ = scheme;
  setParameter(std::string("Scheme"), scheme);
}

bool QueryLiveStreamingRequest::getPlayUnLimited() const {
  return playUnLimited_;
}

void QueryLiveStreamingRequest::setPlayUnLimited(bool playUnLimited) {
  playUnLimited_ = playUnLimited;
  setParameter(std::string("PlayUnLimited"), playUnLimited ? "true" : "false");
}

int QueryLiveStreamingRequest::getEncryptType() const {
  return encryptType_;
}

void QueryLiveStreamingRequest::setEncryptType(int encryptType) {
  encryptType_ = encryptType;
  setParameter(std::string("EncryptType"), std::to_string(encryptType));
}

int QueryLiveStreamingRequest::getCacheDuration() const {
  return cacheDuration_;
}

void QueryLiveStreamingRequest::setCacheDuration(int cacheDuration) {
  cacheDuration_ = cacheDuration;
  setParameter(std::string("CacheDuration"), std::to_string(cacheDuration));
}

std::string QueryLiveStreamingRequest::getIotId() const {
  return iotId_;
}

void QueryLiveStreamingRequest::setIotId(const std::string &iotId) {
  iotId_ = iotId;
  setParameter(std::string("IotId"), iotId);
}

bool QueryLiveStreamingRequest::getForceIFrame() const {
  return forceIFrame_;
}

void QueryLiveStreamingRequest::setForceIFrame(bool forceIFrame) {
  forceIFrame_ = forceIFrame;
  setParameter(std::string("ForceIFrame"), forceIFrame ? "true" : "false");
}

std::string QueryLiveStreamingRequest::getIotInstanceId() const {
  return iotInstanceId_;
}

void QueryLiveStreamingRequest::setIotInstanceId(const std::string &iotInstanceId) {
  iotInstanceId_ = iotInstanceId;
  setParameter(std::string("IotInstanceId"), iotInstanceId);
}

bool QueryLiveStreamingRequest::getShouldEncrypt() const {
  return shouldEncrypt_;
}

void QueryLiveStreamingRequest::setShouldEncrypt(bool shouldEncrypt) {
  shouldEncrypt_ = shouldEncrypt;
  setParameter(std::string("ShouldEncrypt"), shouldEncrypt ? "true" : "false");
}

bool QueryLiveStreamingRequest::getEnableStun() const {
  return enableStun_;
}

void QueryLiveStreamingRequest::setEnableStun(bool enableStun) {
  enableStun_ = enableStun;
  setParameter(std::string("EnableStun"), enableStun ? "true" : "false");
}

int QueryLiveStreamingRequest::getStreamType() const {
  return streamType_;
}

void QueryLiveStreamingRequest::setStreamType(int streamType) {
  streamType_ = streamType;
  setParameter(std::string("StreamType"), std::to_string(streamType));
}

std::string QueryLiveStreamingRequest::getProductKey() const {
  return productKey_;
}

void QueryLiveStreamingRequest::setProductKey(const std::string &productKey) {
  productKey_ = productKey;
  setParameter(std::string("ProductKey"), productKey);
}

std::string QueryLiveStreamingRequest::getApiProduct() const {
  return apiProduct_;
}

void QueryLiveStreamingRequest::setApiProduct(const std::string &apiProduct) {
  apiProduct_ = apiProduct;
  setBodyParameter(std::string("ApiProduct"), apiProduct);
}

std::string QueryLiveStreamingRequest::getApiRevision() const {
  return apiRevision_;
}

void QueryLiveStreamingRequest::setApiRevision(const std::string &apiRevision) {
  apiRevision_ = apiRevision;
  setBodyParameter(std::string("ApiRevision"), apiRevision);
}

std::string QueryLiveStreamingRequest::getDeviceName() const {
  return deviceName_;
}

void QueryLiveStreamingRequest::setDeviceName(const std::string &deviceName) {
  deviceName_ = deviceName;
  setParameter(std::string("DeviceName"), deviceName);
}

int QueryLiveStreamingRequest::getUrlValidDuration() const {
  return urlValidDuration_;
}

void QueryLiveStreamingRequest::setUrlValidDuration(int urlValidDuration) {
  urlValidDuration_ = urlValidDuration;
  setParameter(std::string("UrlValidDuration"), std::to_string(urlValidDuration));
}

