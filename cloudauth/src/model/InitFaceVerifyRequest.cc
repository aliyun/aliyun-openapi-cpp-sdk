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

#include <alibabacloud/cloudauth/model/InitFaceVerifyRequest.h>

using AlibabaCloud::Cloudauth::Model::InitFaceVerifyRequest;

InitFaceVerifyRequest::InitFaceVerifyRequest()
    : RpcServiceRequest("cloudauth", "2019-03-07", "InitFaceVerify") {
  setMethod(HttpRequest::Method::Post);
}

InitFaceVerifyRequest::~InitFaceVerifyRequest() {}

std::string InitFaceVerifyRequest::getFaceContrastPicture() const {
  return faceContrastPicture_;
}

void InitFaceVerifyRequest::setFaceContrastPicture(const std::string &faceContrastPicture) {
  faceContrastPicture_ = faceContrastPicture;
  setBodyParameter(std::string("FaceContrastPicture"), faceContrastPicture);
}

std::string InitFaceVerifyRequest::getReadImg() const {
  return readImg_;
}

void InitFaceVerifyRequest::setReadImg(const std::string &readImg) {
  readImg_ = readImg;
  setParameter(std::string("ReadImg"), readImg);
}

std::string InitFaceVerifyRequest::getRarelyCharacters() const {
  return rarelyCharacters_;
}

void InitFaceVerifyRequest::setRarelyCharacters(const std::string &rarelyCharacters) {
  rarelyCharacters_ = rarelyCharacters;
  setParameter(std::string("RarelyCharacters"), rarelyCharacters);
}

std::string InitFaceVerifyRequest::getVoluntaryCustomizedContent() const {
  return voluntaryCustomizedContent_;
}

void InitFaceVerifyRequest::setVoluntaryCustomizedContent(const std::string &voluntaryCustomizedContent) {
  voluntaryCustomizedContent_ = voluntaryCustomizedContent;
  setParameter(std::string("VoluntaryCustomizedContent"), voluntaryCustomizedContent);
}

std::string InitFaceVerifyRequest::getUserId() const {
  return userId_;
}

void InitFaceVerifyRequest::setUserId(const std::string &userId) {
  userId_ = userId;
  setParameter(std::string("UserId"), userId);
}

std::string InitFaceVerifyRequest::getEncryptType() const {
  return encryptType_;
}

void InitFaceVerifyRequest::setEncryptType(const std::string &encryptType) {
  encryptType_ = encryptType;
  setParameter(std::string("EncryptType"), encryptType);
}

std::string InitFaceVerifyRequest::getMode() const {
  return mode_;
}

void InitFaceVerifyRequest::setMode(const std::string &mode) {
  mode_ = mode;
  setParameter(std::string("Mode"), mode);
}

std::string InitFaceVerifyRequest::getOuterOrderNo() const {
  return outerOrderNo_;
}

void InitFaceVerifyRequest::setOuterOrderNo(const std::string &outerOrderNo) {
  outerOrderNo_ = outerOrderNo;
  setParameter(std::string("OuterOrderNo"), outerOrderNo);
}

std::string InitFaceVerifyRequest::getFaceContrastPictureUrl() const {
  return faceContrastPictureUrl_;
}

void InitFaceVerifyRequest::setFaceContrastPictureUrl(const std::string &faceContrastPictureUrl) {
  faceContrastPictureUrl_ = faceContrastPictureUrl;
  setParameter(std::string("FaceContrastPictureUrl"), faceContrastPictureUrl);
}

std::string InitFaceVerifyRequest::getModel() const {
  return model_;
}

void InitFaceVerifyRequest::setModel(const std::string &model) {
  model_ = model;
  setBodyParameter(std::string("Model"), model);
}

std::string InitFaceVerifyRequest::getCertifyUrlStyle() const {
  return certifyUrlStyle_;
}

void InitFaceVerifyRequest::setCertifyUrlStyle(const std::string &certifyUrlStyle) {
  certifyUrlStyle_ = certifyUrlStyle;
  setParameter(std::string("CertifyUrlStyle"), certifyUrlStyle);
}

std::string InitFaceVerifyRequest::getMetaInfo() const {
  return metaInfo_;
}

void InitFaceVerifyRequest::setMetaInfo(const std::string &metaInfo) {
  metaInfo_ = metaInfo;
  setParameter(std::string("MetaInfo"), metaInfo);
}

std::string InitFaceVerifyRequest::getCameraSelection() const {
  return cameraSelection_;
}

void InitFaceVerifyRequest::setCameraSelection(const std::string &cameraSelection) {
  cameraSelection_ = cameraSelection;
  setParameter(std::string("CameraSelection"), cameraSelection);
}

std::string InitFaceVerifyRequest::getValidityDate() const {
  return validityDate_;
}

void InitFaceVerifyRequest::setValidityDate(const std::string &validityDate) {
  validityDate_ = validityDate;
  setParameter(std::string("ValidityDate"), validityDate);
}

std::string InitFaceVerifyRequest::getCertName() const {
  return certName_;
}

void InitFaceVerifyRequest::setCertName(const std::string &certName) {
  certName_ = certName;
  setParameter(std::string("CertName"), certName);
}

std::string InitFaceVerifyRequest::getIp() const {
  return ip_;
}

void InitFaceVerifyRequest::setIp(const std::string &ip) {
  ip_ = ip;
  setParameter(std::string("Ip"), ip);
}

long InitFaceVerifyRequest::getSceneId() const {
  return sceneId_;
}

void InitFaceVerifyRequest::setSceneId(long sceneId) {
  sceneId_ = sceneId;
  setParameter(std::string("SceneId"), std::to_string(sceneId));
}

std::string InitFaceVerifyRequest::getOssBucketName() const {
  return ossBucketName_;
}

void InitFaceVerifyRequest::setOssBucketName(const std::string &ossBucketName) {
  ossBucketName_ = ossBucketName;
  setParameter(std::string("OssBucketName"), ossBucketName);
}

std::string InitFaceVerifyRequest::getCrop() const {
  return crop_;
}

void InitFaceVerifyRequest::setCrop(const std::string &crop) {
  crop_ = crop;
  setBodyParameter(std::string("Crop"), crop);
}

std::string InitFaceVerifyRequest::getCertifyUrlType() const {
  return certifyUrlType_;
}

void InitFaceVerifyRequest::setCertifyUrlType(const std::string &certifyUrlType) {
  certifyUrlType_ = certifyUrlType;
  setParameter(std::string("CertifyUrlType"), certifyUrlType);
}

std::string InitFaceVerifyRequest::getBirthday() const {
  return birthday_;
}

void InitFaceVerifyRequest::setBirthday(const std::string &birthday) {
  birthday_ = birthday;
  setParameter(std::string("Birthday"), birthday);
}

std::string InitFaceVerifyRequest::getExperienceCode() const {
  return experienceCode_;
}

void InitFaceVerifyRequest::setExperienceCode(const std::string &experienceCode) {
  experienceCode_ = experienceCode;
  setParameter(std::string("ExperienceCode"), experienceCode);
}

std::string InitFaceVerifyRequest::getProductCode() const {
  return productCode_;
}

void InitFaceVerifyRequest::setProductCode(const std::string &productCode) {
  productCode_ = productCode;
  setParameter(std::string("ProductCode"), productCode);
}

std::string InitFaceVerifyRequest::getVideoEvidence() const {
  return videoEvidence_;
}

void InitFaceVerifyRequest::setVideoEvidence(const std::string &videoEvidence) {
  videoEvidence_ = videoEvidence;
  setParameter(std::string("VideoEvidence"), videoEvidence);
}

std::string InitFaceVerifyRequest::getCertifyId() const {
  return certifyId_;
}

void InitFaceVerifyRequest::setCertifyId(const std::string &certifyId) {
  certifyId_ = certifyId;
  setParameter(std::string("CertifyId"), certifyId);
}

std::string InitFaceVerifyRequest::getCertNo() const {
  return certNo_;
}

void InitFaceVerifyRequest::setCertNo(const std::string &certNo) {
  certNo_ = certNo;
  setParameter(std::string("CertNo"), certNo);
}

std::string InitFaceVerifyRequest::getCertType() const {
  return certType_;
}

void InitFaceVerifyRequest::setCertType(const std::string &certType) {
  certType_ = certType;
  setParameter(std::string("CertType"), certType);
}

std::string InitFaceVerifyRequest::getSuitableType() const {
  return suitableType_;
}

void InitFaceVerifyRequest::setSuitableType(const std::string &suitableType) {
  suitableType_ = suitableType;
  setParameter(std::string("SuitableType"), suitableType);
}

std::string InitFaceVerifyRequest::getOssObjectName() const {
  return ossObjectName_;
}

void InitFaceVerifyRequest::setOssObjectName(const std::string &ossObjectName) {
  ossObjectName_ = ossObjectName;
  setParameter(std::string("OssObjectName"), ossObjectName);
}

std::string InitFaceVerifyRequest::getAppQualityCheck() const {
  return appQualityCheck_;
}

void InitFaceVerifyRequest::setAppQualityCheck(const std::string &appQualityCheck) {
  appQualityCheck_ = appQualityCheck;
  setParameter(std::string("AppQualityCheck"), appQualityCheck);
}

std::string InitFaceVerifyRequest::getMobile() const {
  return mobile_;
}

void InitFaceVerifyRequest::setMobile(const std::string &mobile) {
  mobile_ = mobile;
  setParameter(std::string("Mobile"), mobile);
}

std::string InitFaceVerifyRequest::getFaceGuardOutput() const {
  return faceGuardOutput_;
}

void InitFaceVerifyRequest::setFaceGuardOutput(const std::string &faceGuardOutput) {
  faceGuardOutput_ = faceGuardOutput;
  setParameter(std::string("FaceGuardOutput"), faceGuardOutput);
}

std::string InitFaceVerifyRequest::getAuthId() const {
  return authId_;
}

void InitFaceVerifyRequest::setAuthId(const std::string &authId) {
  authId_ = authId;
  setBodyParameter(std::string("AuthId"), authId);
}

std::string InitFaceVerifyRequest::getProcedurePriority() const {
  return procedurePriority_;
}

void InitFaceVerifyRequest::setProcedurePriority(const std::string &procedurePriority) {
  procedurePriority_ = procedurePriority;
  setParameter(std::string("ProcedurePriority"), procedurePriority);
}

std::string InitFaceVerifyRequest::getCallbackToken() const {
  return callbackToken_;
}

void InitFaceVerifyRequest::setCallbackToken(const std::string &callbackToken) {
  callbackToken_ = callbackToken;
  setParameter(std::string("CallbackToken"), callbackToken);
}

std::string InitFaceVerifyRequest::getUiCustomUrl() const {
  return uiCustomUrl_;
}

void InitFaceVerifyRequest::setUiCustomUrl(const std::string &uiCustomUrl) {
  uiCustomUrl_ = uiCustomUrl;
  setParameter(std::string("UiCustomUrl"), uiCustomUrl);
}

std::string InitFaceVerifyRequest::getReturnUrl() const {
  return returnUrl_;
}

void InitFaceVerifyRequest::setReturnUrl(const std::string &returnUrl) {
  returnUrl_ = returnUrl;
  setParameter(std::string("ReturnUrl"), returnUrl);
}

std::string InitFaceVerifyRequest::getCallbackUrl() const {
  return callbackUrl_;
}

void InitFaceVerifyRequest::setCallbackUrl(const std::string &callbackUrl) {
  callbackUrl_ = callbackUrl;
  setParameter(std::string("CallbackUrl"), callbackUrl);
}

