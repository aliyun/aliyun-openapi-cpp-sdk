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

#include <alibabacloud/linkvisual/model/QueryDevicePictureByListRequest.h>

using AlibabaCloud::Linkvisual::Model::QueryDevicePictureByListRequest;

QueryDevicePictureByListRequest::QueryDevicePictureByListRequest()
    : RpcServiceRequest("linkvisual", "2018-01-20", "QueryDevicePictureByList") {
  setMethod(HttpRequest::Method::Post);
}

QueryDevicePictureByListRequest::~QueryDevicePictureByListRequest() {}

int QueryDevicePictureByListRequest::getPictureType() const {
  return pictureType_;
}

void QueryDevicePictureByListRequest::setPictureType(int pictureType) {
  pictureType_ = pictureType;
  setParameter(std::string("PictureType"), std::to_string(pictureType));
}

int QueryDevicePictureByListRequest::getThumbWidth() const {
  return thumbWidth_;
}

void QueryDevicePictureByListRequest::setThumbWidth(int thumbWidth) {
  thumbWidth_ = thumbWidth;
  setParameter(std::string("ThumbWidth"), std::to_string(thumbWidth));
}

std::string QueryDevicePictureByListRequest::getIotId() const {
  return iotId_;
}

void QueryDevicePictureByListRequest::setIotId(const std::string &iotId) {
  iotId_ = iotId;
  setParameter(std::string("IotId"), iotId);
}

std::string QueryDevicePictureByListRequest::getIotInstanceId() const {
  return iotInstanceId_;
}

void QueryDevicePictureByListRequest::setIotInstanceId(const std::string &iotInstanceId) {
  iotInstanceId_ = iotInstanceId;
  setParameter(std::string("IotInstanceId"), iotInstanceId);
}

std::vector<std::string> QueryDevicePictureByListRequest::getPictureIdList() const {
  return pictureIdList_;
}

void QueryDevicePictureByListRequest::setPictureIdList(const std::vector<std::string> &pictureIdList) {
  pictureIdList_ = pictureIdList;
}

int QueryDevicePictureByListRequest::getExpireTime() const {
  return expireTime_;
}

void QueryDevicePictureByListRequest::setExpireTime(int expireTime) {
  expireTime_ = expireTime;
  setParameter(std::string("ExpireTime"), std::to_string(expireTime));
}

std::string QueryDevicePictureByListRequest::getProductKey() const {
  return productKey_;
}

void QueryDevicePictureByListRequest::setProductKey(const std::string &productKey) {
  productKey_ = productKey;
  setParameter(std::string("ProductKey"), productKey);
}

std::string QueryDevicePictureByListRequest::getApiProduct() const {
  return apiProduct_;
}

void QueryDevicePictureByListRequest::setApiProduct(const std::string &apiProduct) {
  apiProduct_ = apiProduct;
  setBodyParameter(std::string("ApiProduct"), apiProduct);
}

std::string QueryDevicePictureByListRequest::getApiRevision() const {
  return apiRevision_;
}

void QueryDevicePictureByListRequest::setApiRevision(const std::string &apiRevision) {
  apiRevision_ = apiRevision;
  setBodyParameter(std::string("ApiRevision"), apiRevision);
}

std::string QueryDevicePictureByListRequest::getDeviceName() const {
  return deviceName_;
}

void QueryDevicePictureByListRequest::setDeviceName(const std::string &deviceName) {
  deviceName_ = deviceName;
  setParameter(std::string("DeviceName"), deviceName);
}

