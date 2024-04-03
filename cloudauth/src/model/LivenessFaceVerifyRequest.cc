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

#include <alibabacloud/cloudauth/model/LivenessFaceVerifyRequest.h>

using AlibabaCloud::Cloudauth::Model::LivenessFaceVerifyRequest;

LivenessFaceVerifyRequest::LivenessFaceVerifyRequest()
    : RpcServiceRequest("cloudauth", "2019-03-07", "LivenessFaceVerify") {
  setMethod(HttpRequest::Method::Post);
}

LivenessFaceVerifyRequest::~LivenessFaceVerifyRequest() {}

std::string LivenessFaceVerifyRequest::getProductCode() const {
  return productCode_;
}

void LivenessFaceVerifyRequest::setProductCode(const std::string &productCode) {
  productCode_ = productCode;
  setBodyParameter(std::string("ProductCode"), productCode);
}

std::string LivenessFaceVerifyRequest::getFaceContrastPicture() const {
  return faceContrastPicture_;
}

void LivenessFaceVerifyRequest::setFaceContrastPicture(const std::string &faceContrastPicture) {
  faceContrastPicture_ = faceContrastPicture;
  setBodyParameter(std::string("FaceContrastPicture"), faceContrastPicture);
}

std::string LivenessFaceVerifyRequest::getDeviceToken() const {
  return deviceToken_;
}

void LivenessFaceVerifyRequest::setDeviceToken(const std::string &deviceToken) {
  deviceToken_ = deviceToken;
  setBodyParameter(std::string("DeviceToken"), deviceToken);
}

std::string LivenessFaceVerifyRequest::getUserId() const {
  return userId_;
}

void LivenessFaceVerifyRequest::setUserId(const std::string &userId) {
  userId_ = userId;
  setBodyParameter(std::string("UserId"), userId);
}

std::string LivenessFaceVerifyRequest::getCertifyId() const {
  return certifyId_;
}

void LivenessFaceVerifyRequest::setCertifyId(const std::string &certifyId) {
  certifyId_ = certifyId;
  setBodyParameter(std::string("CertifyId"), certifyId);
}

std::string LivenessFaceVerifyRequest::getOuterOrderNo() const {
  return outerOrderNo_;
}

void LivenessFaceVerifyRequest::setOuterOrderNo(const std::string &outerOrderNo) {
  outerOrderNo_ = outerOrderNo;
  setBodyParameter(std::string("OuterOrderNo"), outerOrderNo);
}

std::string LivenessFaceVerifyRequest::getFaceContrastPictureUrl() const {
  return faceContrastPictureUrl_;
}

void LivenessFaceVerifyRequest::setFaceContrastPictureUrl(const std::string &faceContrastPictureUrl) {
  faceContrastPictureUrl_ = faceContrastPictureUrl;
  setBodyParameter(std::string("FaceContrastPictureUrl"), faceContrastPictureUrl);
}

std::string LivenessFaceVerifyRequest::getModel() const {
  return model_;
}

void LivenessFaceVerifyRequest::setModel(const std::string &model) {
  model_ = model;
  setParameter(std::string("Model"), model);
}

std::string LivenessFaceVerifyRequest::getOssObjectName() const {
  return ossObjectName_;
}

void LivenessFaceVerifyRequest::setOssObjectName(const std::string &ossObjectName) {
  ossObjectName_ = ossObjectName;
  setBodyParameter(std::string("OssObjectName"), ossObjectName);
}

std::string LivenessFaceVerifyRequest::getIp() const {
  return ip_;
}

void LivenessFaceVerifyRequest::setIp(const std::string &ip) {
  ip_ = ip;
  setBodyParameter(std::string("Ip"), ip);
}

std::string LivenessFaceVerifyRequest::getMobile() const {
  return mobile_;
}

void LivenessFaceVerifyRequest::setMobile(const std::string &mobile) {
  mobile_ = mobile;
  setBodyParameter(std::string("Mobile"), mobile);
}

long LivenessFaceVerifyRequest::getSceneId() const {
  return sceneId_;
}

void LivenessFaceVerifyRequest::setSceneId(long sceneId) {
  sceneId_ = sceneId;
  setBodyParameter(std::string("SceneId"), std::to_string(sceneId));
}

std::string LivenessFaceVerifyRequest::getOssBucketName() const {
  return ossBucketName_;
}

void LivenessFaceVerifyRequest::setOssBucketName(const std::string &ossBucketName) {
  ossBucketName_ = ossBucketName;
  setBodyParameter(std::string("OssBucketName"), ossBucketName);
}

std::string LivenessFaceVerifyRequest::getCrop() const {
  return crop_;
}

void LivenessFaceVerifyRequest::setCrop(const std::string &crop) {
  crop_ = crop;
  setBodyParameter(std::string("Crop"), crop);
}

