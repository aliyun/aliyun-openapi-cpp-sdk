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

#include <alibabacloud/csas/model/CreateWmEmbedTaskRequest.h>

using AlibabaCloud::Csas::Model::CreateWmEmbedTaskRequest;

CreateWmEmbedTaskRequest::CreateWmEmbedTaskRequest()
    : RpcServiceRequest("csas", "2023-01-20", "CreateWmEmbedTask") {
  setMethod(HttpRequest::Method::Post);
}

CreateWmEmbedTaskRequest::~CreateWmEmbedTaskRequest() {}

bool CreateWmEmbedTaskRequest::getVideoIsLong() const {
  return videoIsLong_;
}

void CreateWmEmbedTaskRequest::setVideoIsLong(bool videoIsLong) {
  videoIsLong_ = videoIsLong;
  setBodyParameter(std::string("VideoIsLong"), videoIsLong ? "true" : "false");
}

std::string CreateWmEmbedTaskRequest::getApiType() const {
  return apiType_;
}

void CreateWmEmbedTaskRequest::setApiType(const std::string &apiType) {
  apiType_ = apiType;
  setBodyParameter(std::string("ApiType"), apiType);
}

std::string CreateWmEmbedTaskRequest::getSourceIp() const {
  return sourceIp_;
}

void CreateWmEmbedTaskRequest::setSourceIp(const std::string &sourceIp) {
  sourceIp_ = sourceIp;
  setParameter(std::string("SourceIp"), sourceIp);
}

long CreateWmEmbedTaskRequest::getImageEmbedLevel() const {
  return imageEmbedLevel_;
}

void CreateWmEmbedTaskRequest::setImageEmbedLevel(long imageEmbedLevel) {
  imageEmbedLevel_ = imageEmbedLevel;
  setBodyParameter(std::string("ImageEmbedLevel"), std::to_string(imageEmbedLevel));
}

std::string CreateWmEmbedTaskRequest::getWmType() const {
  return wmType_;
}

void CreateWmEmbedTaskRequest::setWmType(const std::string &wmType) {
  wmType_ = wmType;
  setBodyParameter(std::string("WmType"), wmType);
}

CreateWmEmbedTaskRequest::DocumentControl CreateWmEmbedTaskRequest::getDocumentControl() const {
  return documentControl_;
}

void CreateWmEmbedTaskRequest::setDocumentControl(const CreateWmEmbedTaskRequest::DocumentControl &documentControl) {
  documentControl_ = documentControl;
  setBodyParameter(std::string("DocumentControl") + ".InvisibleAntiAllCopy", documentControl.invisibleAntiAllCopy ? "true" : "false");
  setBodyParameter(std::string("DocumentControl") + ".BackgroundControl.BgAddInvisible", documentControl.backgroundControl.bgAddInvisible ? "true" : "false");
  setBodyParameter(std::string("DocumentControl") + ".BackgroundControl.BgVisibleControl.Mode", documentControl.backgroundControl.bgVisibleControl.mode);
  setBodyParameter(std::string("DocumentControl") + ".BackgroundControl.BgVisibleControl.PosX", documentControl.backgroundControl.bgVisibleControl.posX);
  setBodyParameter(std::string("DocumentControl") + ".BackgroundControl.BgVisibleControl.PosY", documentControl.backgroundControl.bgVisibleControl.posY);
  setBodyParameter(std::string("DocumentControl") + ".BackgroundControl.BgVisibleControl.VerticalNumber", std::to_string(documentControl.backgroundControl.bgVisibleControl.verticalNumber));
  setBodyParameter(std::string("DocumentControl") + ".BackgroundControl.BgVisibleControl.HorizontalNumber", std::to_string(documentControl.backgroundControl.bgVisibleControl.horizontalNumber));
  setBodyParameter(std::string("DocumentControl") + ".BackgroundControl.BgVisibleControl.VisibleText", documentControl.backgroundControl.bgVisibleControl.visibleText);
  setBodyParameter(std::string("DocumentControl") + ".BackgroundControl.BgVisibleControl.FontSize", std::to_string(documentControl.backgroundControl.bgVisibleControl.fontSize));
  setBodyParameter(std::string("DocumentControl") + ".BackgroundControl.BgVisibleControl.FontColor", documentControl.backgroundControl.bgVisibleControl.fontColor);
  setBodyParameter(std::string("DocumentControl") + ".BackgroundControl.BgVisibleControl.Angle", std::to_string(documentControl.backgroundControl.bgVisibleControl.angle));
  setBodyParameter(std::string("DocumentControl") + ".BackgroundControl.BgVisibleControl.HorizonNumber", std::to_string(documentControl.backgroundControl.bgVisibleControl.horizonNumber));
  setBodyParameter(std::string("DocumentControl") + ".BackgroundControl.BgVisibleControl.Opacity", std::to_string(documentControl.backgroundControl.bgVisibleControl.opacity));
  setBodyParameter(std::string("DocumentControl") + ".BackgroundControl.BgVisibleControl.FontTransparent", documentControl.backgroundControl.bgVisibleControl.fontTransparent);
  setBodyParameter(std::string("DocumentControl") + ".BackgroundControl.BgInvisibleControl.InvisibleTransparent", documentControl.backgroundControl.bgInvisibleControl.invisibleTransparent);
  setBodyParameter(std::string("DocumentControl") + ".BackgroundControl.BgInvisibleControl.Opacity", std::to_string(documentControl.backgroundControl.bgInvisibleControl.opacity));
  setBodyParameter(std::string("DocumentControl") + ".BackgroundControl.BgAddVisible", documentControl.backgroundControl.bgAddVisible ? "true" : "false");
  setBodyParameter(std::string("DocumentControl") + ".InvisibleAntiTextCopy", documentControl.invisibleAntiTextCopy ? "true" : "false");
}

long CreateWmEmbedTaskRequest::getImageEmbedJpegQuality() const {
  return imageEmbedJpegQuality_;
}

void CreateWmEmbedTaskRequest::setImageEmbedJpegQuality(long imageEmbedJpegQuality) {
  imageEmbedJpegQuality_ = imageEmbedJpegQuality;
  setBodyParameter(std::string("ImageEmbedJpegQuality"), std::to_string(imageEmbedJpegQuality));
}

long CreateWmEmbedTaskRequest::getWatermarkInfoUint() const {
  return watermarkInfoUint_;
}

void CreateWmEmbedTaskRequest::setWatermarkInfoUint(long watermarkInfoUint) {
  watermarkInfoUint_ = watermarkInfoUint;
  setBodyParameter(std::string("WatermarkInfoUint"), std::to_string(watermarkInfoUint));
}

std::string CreateWmEmbedTaskRequest::getWmInfoUint() const {
  return wmInfoUint_;
}

void CreateWmEmbedTaskRequest::setWmInfoUint(const std::string &wmInfoUint) {
  wmInfoUint_ = wmInfoUint;
  setBodyParameter(std::string("WmInfoUint"), wmInfoUint);
}

CreateWmEmbedTaskRequest::CsvControl CreateWmEmbedTaskRequest::getCsvControl() const {
  return csvControl_;
}

void CreateWmEmbedTaskRequest::setCsvControl(const CreateWmEmbedTaskRequest::CsvControl &csvControl) {
  csvControl_ = csvControl;
  setParameter(std::string("CsvControl") + ".Method", csvControl.method);
  setParameter(std::string("CsvControl") + ".EmbedColumn", std::to_string(csvControl.embedColumn));
  setParameter(std::string("CsvControl") + ".EmbedPrecision", std::to_string(csvControl.embedPrecision));
}

std::string CreateWmEmbedTaskRequest::getFilename() const {
  return filename_;
}

void CreateWmEmbedTaskRequest::setFilename(const std::string &filename) {
  filename_ = filename;
  setBodyParameter(std::string("Filename"), filename);
}

long CreateWmEmbedTaskRequest::getWmInfoSize() const {
  return wmInfoSize_;
}

void CreateWmEmbedTaskRequest::setWmInfoSize(long wmInfoSize) {
  wmInfoSize_ = wmInfoSize;
  setBodyParameter(std::string("WmInfoSize"), std::to_string(wmInfoSize));
}

std::string CreateWmEmbedTaskRequest::getWmInfoBytesB64() const {
  return wmInfoBytesB64_;
}

void CreateWmEmbedTaskRequest::setWmInfoBytesB64(const std::string &wmInfoBytesB64) {
  wmInfoBytesB64_ = wmInfoBytesB64;
  setBodyParameter(std::string("WmInfoBytesB64"), wmInfoBytesB64);
}

std::string CreateWmEmbedTaskRequest::getFileUrl() const {
  return fileUrl_;
}

void CreateWmEmbedTaskRequest::setFileUrl(const std::string &fileUrl) {
  fileUrl_ = fileUrl;
  setBodyParameter(std::string("FileUrl"), fileUrl);
}

std::string CreateWmEmbedTaskRequest::getVideoBitrate() const {
  return videoBitrate_;
}

void CreateWmEmbedTaskRequest::setVideoBitrate(const std::string &videoBitrate) {
  videoBitrate_ = videoBitrate;
  setBodyParameter(std::string("VideoBitrate"), videoBitrate);
}

