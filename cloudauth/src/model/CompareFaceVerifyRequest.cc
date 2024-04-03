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

#include <alibabacloud/cloudauth/model/CompareFaceVerifyRequest.h>

using AlibabaCloud::Cloudauth::Model::CompareFaceVerifyRequest;

CompareFaceVerifyRequest::CompareFaceVerifyRequest()
    : RpcServiceRequest("cloudauth", "2019-03-07", "CompareFaceVerify") {
  setMethod(HttpRequest::Method::Post);
}

CompareFaceVerifyRequest::~CompareFaceVerifyRequest() {}

std::string CompareFaceVerifyRequest::getProductCode() const {
  return productCode_;
}

void CompareFaceVerifyRequest::setProductCode(const std::string &productCode) {
  productCode_ = productCode;
  setBodyParameter(std::string("ProductCode"), productCode);
}

std::string CompareFaceVerifyRequest::getTargetCertifyId() const {
  return targetCertifyId_;
}

void CompareFaceVerifyRequest::setTargetCertifyId(const std::string &targetCertifyId) {
  targetCertifyId_ = targetCertifyId;
  setBodyParameter(std::string("TargetCertifyId"), targetCertifyId);
}

std::string CompareFaceVerifyRequest::getTargetFaceContrastPicture() const {
  return targetFaceContrastPicture_;
}

void CompareFaceVerifyRequest::setTargetFaceContrastPicture(const std::string &targetFaceContrastPicture) {
  targetFaceContrastPicture_ = targetFaceContrastPicture;
  setBodyParameter(std::string("TargetFaceContrastPicture"), targetFaceContrastPicture);
}

std::string CompareFaceVerifyRequest::getTargetOssBucketName() const {
  return targetOssBucketName_;
}

void CompareFaceVerifyRequest::setTargetOssBucketName(const std::string &targetOssBucketName) {
  targetOssBucketName_ = targetOssBucketName;
  setBodyParameter(std::string("TargetOssBucketName"), targetOssBucketName);
}

std::string CompareFaceVerifyRequest::getOuterOrderNo() const {
  return outerOrderNo_;
}

void CompareFaceVerifyRequest::setOuterOrderNo(const std::string &outerOrderNo) {
  outerOrderNo_ = outerOrderNo;
  setBodyParameter(std::string("OuterOrderNo"), outerOrderNo);
}

std::string CompareFaceVerifyRequest::getSourceFaceContrastPicture() const {
  return sourceFaceContrastPicture_;
}

void CompareFaceVerifyRequest::setSourceFaceContrastPicture(const std::string &sourceFaceContrastPicture) {
  sourceFaceContrastPicture_ = sourceFaceContrastPicture;
  setBodyParameter(std::string("SourceFaceContrastPicture"), sourceFaceContrastPicture);
}

std::string CompareFaceVerifyRequest::getSourceCertifyId() const {
  return sourceCertifyId_;
}

void CompareFaceVerifyRequest::setSourceCertifyId(const std::string &sourceCertifyId) {
  sourceCertifyId_ = sourceCertifyId;
  setBodyParameter(std::string("SourceCertifyId"), sourceCertifyId);
}

std::string CompareFaceVerifyRequest::getTargetFaceContrastPictureUrl() const {
  return targetFaceContrastPictureUrl_;
}

void CompareFaceVerifyRequest::setTargetFaceContrastPictureUrl(const std::string &targetFaceContrastPictureUrl) {
  targetFaceContrastPictureUrl_ = targetFaceContrastPictureUrl;
  setBodyParameter(std::string("TargetFaceContrastPictureUrl"), targetFaceContrastPictureUrl);
}

std::string CompareFaceVerifyRequest::getSourceOssObjectName() const {
  return sourceOssObjectName_;
}

void CompareFaceVerifyRequest::setSourceOssObjectName(const std::string &sourceOssObjectName) {
  sourceOssObjectName_ = sourceOssObjectName;
  setBodyParameter(std::string("SourceOssObjectName"), sourceOssObjectName);
}

std::string CompareFaceVerifyRequest::getSourceOssBucketName() const {
  return sourceOssBucketName_;
}

void CompareFaceVerifyRequest::setSourceOssBucketName(const std::string &sourceOssBucketName) {
  sourceOssBucketName_ = sourceOssBucketName;
  setBodyParameter(std::string("SourceOssBucketName"), sourceOssBucketName);
}

std::string CompareFaceVerifyRequest::getTargetOssObjectName() const {
  return targetOssObjectName_;
}

void CompareFaceVerifyRequest::setTargetOssObjectName(const std::string &targetOssObjectName) {
  targetOssObjectName_ = targetOssObjectName;
  setBodyParameter(std::string("TargetOssObjectName"), targetOssObjectName);
}

long CompareFaceVerifyRequest::getSceneId() const {
  return sceneId_;
}

void CompareFaceVerifyRequest::setSceneId(long sceneId) {
  sceneId_ = sceneId;
  setBodyParameter(std::string("SceneId"), std::to_string(sceneId));
}

std::string CompareFaceVerifyRequest::getSourceFaceContrastPictureUrl() const {
  return sourceFaceContrastPictureUrl_;
}

void CompareFaceVerifyRequest::setSourceFaceContrastPictureUrl(const std::string &sourceFaceContrastPictureUrl) {
  sourceFaceContrastPictureUrl_ = sourceFaceContrastPictureUrl;
  setBodyParameter(std::string("SourceFaceContrastPictureUrl"), sourceFaceContrastPictureUrl);
}

std::string CompareFaceVerifyRequest::getCrop() const {
  return crop_;
}

void CompareFaceVerifyRequest::setCrop(const std::string &crop) {
  crop_ = crop;
  setBodyParameter(std::string("Crop"), crop);
}

