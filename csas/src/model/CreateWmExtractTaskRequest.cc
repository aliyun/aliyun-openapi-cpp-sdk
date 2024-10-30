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

#include <alibabacloud/csas/model/CreateWmExtractTaskRequest.h>

using AlibabaCloud::Csas::Model::CreateWmExtractTaskRequest;

CreateWmExtractTaskRequest::CreateWmExtractTaskRequest()
    : RpcServiceRequest("csas", "2023-01-20", "CreateWmExtractTask") {
  setMethod(HttpRequest::Method::Post);
}

CreateWmExtractTaskRequest::~CreateWmExtractTaskRequest() {}

bool CreateWmExtractTaskRequest::getVideoIsLong() const {
  return videoIsLong_;
}

void CreateWmExtractTaskRequest::setVideoIsLong(bool videoIsLong) {
  videoIsLong_ = videoIsLong;
  setBodyParameter(std::string("VideoIsLong"), videoIsLong ? "true" : "false");
}

bool CreateWmExtractTaskRequest::getDocumentIsCapture() const {
  return documentIsCapture_;
}

void CreateWmExtractTaskRequest::setDocumentIsCapture(bool documentIsCapture) {
  documentIsCapture_ = documentIsCapture;
  setBodyParameter(std::string("DocumentIsCapture"), documentIsCapture ? "true" : "false");
}

std::string CreateWmExtractTaskRequest::getVideoSpeed() const {
  return videoSpeed_;
}

void CreateWmExtractTaskRequest::setVideoSpeed(const std::string &videoSpeed) {
  videoSpeed_ = videoSpeed;
  setBodyParameter(std::string("VideoSpeed"), videoSpeed);
}

std::string CreateWmExtractTaskRequest::getApiType() const {
  return apiType_;
}

void CreateWmExtractTaskRequest::setApiType(const std::string &apiType) {
  apiType_ = apiType;
  setBodyParameter(std::string("ApiType"), apiType);
}

std::string CreateWmExtractTaskRequest::getSourceIp() const {
  return sourceIp_;
}

void CreateWmExtractTaskRequest::setSourceIp(const std::string &sourceIp) {
  sourceIp_ = sourceIp;
  setParameter(std::string("SourceIp"), sourceIp);
}

std::string CreateWmExtractTaskRequest::getWmType() const {
  return wmType_;
}

void CreateWmExtractTaskRequest::setWmType(const std::string &wmType) {
  wmType_ = wmType;
  setBodyParameter(std::string("WmType"), wmType);
}

int CreateWmExtractTaskRequest::getImageDetectLevel() const {
  return imageDetectLevel_;
}

void CreateWmExtractTaskRequest::setImageDetectLevel(int imageDetectLevel) {
  imageDetectLevel_ = imageDetectLevel;
  setBodyParameter(std::string("ImageDetectLevel"), std::to_string(imageDetectLevel));
}

CreateWmExtractTaskRequest::CsvControl CreateWmExtractTaskRequest::getCsvControl() const {
  return csvControl_;
}

void CreateWmExtractTaskRequest::setCsvControl(const CreateWmExtractTaskRequest::CsvControl &csvControl) {
  csvControl_ = csvControl;
  setParameter(std::string("CsvControl") + ".Method", csvControl.method);
  setParameter(std::string("CsvControl") + ".EmbedColumn", std::to_string(csvControl.embedColumn));
  setParameter(std::string("CsvControl") + ".EmbedPrecision", std::to_string(csvControl.embedPrecision));
}

std::string CreateWmExtractTaskRequest::getFilename() const {
  return filename_;
}

void CreateWmExtractTaskRequest::setFilename(const std::string &filename) {
  filename_ = filename;
  setBodyParameter(std::string("Filename"), filename);
}

long CreateWmExtractTaskRequest::getWmInfoSize() const {
  return wmInfoSize_;
}

void CreateWmExtractTaskRequest::setWmInfoSize(long wmInfoSize) {
  wmInfoSize_ = wmInfoSize;
  setBodyParameter(std::string("WmInfoSize"), std::to_string(wmInfoSize));
}

std::string CreateWmExtractTaskRequest::getFileUrl() const {
  return fileUrl_;
}

void CreateWmExtractTaskRequest::setFileUrl(const std::string &fileUrl) {
  fileUrl_ = fileUrl;
  setBodyParameter(std::string("FileUrl"), fileUrl);
}

