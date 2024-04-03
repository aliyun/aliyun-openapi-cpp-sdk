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

#include <alibabacloud/cloudauth/model/AIGCFaceVerifyRequest.h>

using AlibabaCloud::Cloudauth::Model::AIGCFaceVerifyRequest;

AIGCFaceVerifyRequest::AIGCFaceVerifyRequest()
    : RpcServiceRequest("cloudauth", "2019-03-07", "AIGCFaceVerify") {
  setMethod(HttpRequest::Method::Post);
}

AIGCFaceVerifyRequest::~AIGCFaceVerifyRequest() {}

std::string AIGCFaceVerifyRequest::getProductCode() const {
  return productCode_;
}

void AIGCFaceVerifyRequest::setProductCode(const std::string &productCode) {
  productCode_ = productCode;
  setParameter(std::string("ProductCode"), productCode);
}

std::string AIGCFaceVerifyRequest::getOssObjectName() const {
  return ossObjectName_;
}

void AIGCFaceVerifyRequest::setOssObjectName(const std::string &ossObjectName) {
  ossObjectName_ = ossObjectName;
  setParameter(std::string("OssObjectName"), ossObjectName);
}

std::string AIGCFaceVerifyRequest::getFaceContrastPicture() const {
  return faceContrastPicture_;
}

void AIGCFaceVerifyRequest::setFaceContrastPicture(const std::string &faceContrastPicture) {
  faceContrastPicture_ = faceContrastPicture;
  setBodyParameter(std::string("FaceContrastPicture"), faceContrastPicture);
}

std::string AIGCFaceVerifyRequest::getOuterOrderNo() const {
  return outerOrderNo_;
}

void AIGCFaceVerifyRequest::setOuterOrderNo(const std::string &outerOrderNo) {
  outerOrderNo_ = outerOrderNo;
  setParameter(std::string("OuterOrderNo"), outerOrderNo);
}

std::string AIGCFaceVerifyRequest::getFaceContrastPictureUrl() const {
  return faceContrastPictureUrl_;
}

void AIGCFaceVerifyRequest::setFaceContrastPictureUrl(const std::string &faceContrastPictureUrl) {
  faceContrastPictureUrl_ = faceContrastPictureUrl;
  setParameter(std::string("FaceContrastPictureUrl"), faceContrastPictureUrl);
}

long AIGCFaceVerifyRequest::getSceneId() const {
  return sceneId_;
}

void AIGCFaceVerifyRequest::setSceneId(long sceneId) {
  sceneId_ = sceneId;
  setParameter(std::string("SceneId"), std::to_string(sceneId));
}

std::string AIGCFaceVerifyRequest::getOssBucketName() const {
  return ossBucketName_;
}

void AIGCFaceVerifyRequest::setOssBucketName(const std::string &ossBucketName) {
  ossBucketName_ = ossBucketName;
  setParameter(std::string("OssBucketName"), ossBucketName);
}

