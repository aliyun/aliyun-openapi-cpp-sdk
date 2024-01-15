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

#include <alibabacloud/linkvisual/model/QueryDevicePictureFileRequest.h>

using AlibabaCloud::Linkvisual::Model::QueryDevicePictureFileRequest;

QueryDevicePictureFileRequest::QueryDevicePictureFileRequest()
    : RpcServiceRequest("linkvisual", "2018-01-20", "QueryDevicePictureFile") {
  setMethod(HttpRequest::Method::Post);
}

QueryDevicePictureFileRequest::~QueryDevicePictureFileRequest() {}

int QueryDevicePictureFileRequest::getPictureType() const {
  return pictureType_;
}

void QueryDevicePictureFileRequest::setPictureType(int pictureType) {
  pictureType_ = pictureType;
  setParameter(std::string("PictureType"), std::to_string(pictureType));
}

int QueryDevicePictureFileRequest::getThumbWidth() const {
  return thumbWidth_;
}

void QueryDevicePictureFileRequest::setThumbWidth(int thumbWidth) {
  thumbWidth_ = thumbWidth;
  setParameter(std::string("ThumbWidth"), std::to_string(thumbWidth));
}

std::string QueryDevicePictureFileRequest::getIotId() const {
  return iotId_;
}

void QueryDevicePictureFileRequest::setIotId(const std::string &iotId) {
  iotId_ = iotId;
  setParameter(std::string("IotId"), iotId);
}

std::string QueryDevicePictureFileRequest::getIotInstanceId() const {
  return iotInstanceId_;
}

void QueryDevicePictureFileRequest::setIotInstanceId(const std::string &iotInstanceId) {
  iotInstanceId_ = iotInstanceId;
  setParameter(std::string("IotInstanceId"), iotInstanceId);
}

int QueryDevicePictureFileRequest::getExpireTime() const {
  return expireTime_;
}

void QueryDevicePictureFileRequest::setExpireTime(int expireTime) {
  expireTime_ = expireTime;
  setParameter(std::string("ExpireTime"), std::to_string(expireTime));
}

std::string QueryDevicePictureFileRequest::getProductKey() const {
  return productKey_;
}

void QueryDevicePictureFileRequest::setProductKey(const std::string &productKey) {
  productKey_ = productKey;
  setParameter(std::string("ProductKey"), productKey);
}

std::string QueryDevicePictureFileRequest::getApiProduct() const {
  return apiProduct_;
}

void QueryDevicePictureFileRequest::setApiProduct(const std::string &apiProduct) {
  apiProduct_ = apiProduct;
  setBodyParameter(std::string("ApiProduct"), apiProduct);
}

std::string QueryDevicePictureFileRequest::getApiRevision() const {
  return apiRevision_;
}

void QueryDevicePictureFileRequest::setApiRevision(const std::string &apiRevision) {
  apiRevision_ = apiRevision;
  setBodyParameter(std::string("ApiRevision"), apiRevision);
}

std::string QueryDevicePictureFileRequest::getDeviceName() const {
  return deviceName_;
}

void QueryDevicePictureFileRequest::setDeviceName(const std::string &deviceName) {
  deviceName_ = deviceName;
  setParameter(std::string("DeviceName"), deviceName);
}

std::string QueryDevicePictureFileRequest::getCaptureId() const {
  return captureId_;
}

void QueryDevicePictureFileRequest::setCaptureId(const std::string &captureId) {
  captureId_ = captureId;
  setParameter(std::string("CaptureId"), captureId);
}

