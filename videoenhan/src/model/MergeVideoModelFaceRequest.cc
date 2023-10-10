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

#include <alibabacloud/videoenhan/model/MergeVideoModelFaceRequest.h>

using AlibabaCloud::Videoenhan::Model::MergeVideoModelFaceRequest;

MergeVideoModelFaceRequest::MergeVideoModelFaceRequest()
    : RpcServiceRequest("videoenhan", "2020-03-20", "MergeVideoModelFace") {
  setMethod(HttpRequest::Method::Post);
}

MergeVideoModelFaceRequest::~MergeVideoModelFaceRequest() {}

std::string MergeVideoModelFaceRequest::getFaceImageURL() const {
  return faceImageURL_;
}

void MergeVideoModelFaceRequest::setFaceImageURL(const std::string &faceImageURL) {
  faceImageURL_ = faceImageURL;
  setBodyParameter(std::string("FaceImageURL"), faceImageURL);
}

std::vector<MergeVideoModelFaceRequest::MergeInfos> MergeVideoModelFaceRequest::getMergeInfos() const {
  return mergeInfos_;
}

void MergeVideoModelFaceRequest::setMergeInfos(const std::vector<MergeVideoModelFaceRequest::MergeInfos> &mergeInfos) {
  mergeInfos_ = mergeInfos;
  for(int dep1 = 0; dep1 != mergeInfos.size(); dep1++) {
  auto mergeInfosObj = mergeInfos.at(dep1);
  std::string mergeInfosObjStr = std::string("MergeInfos") + "." + std::to_string(dep1 + 1);
    setBodyParameter(mergeInfosObjStr + ".TemplateFaceURL", mergeInfosObj.templateFaceURL);
    setBodyParameter(mergeInfosObjStr + ".ImageURL", mergeInfosObj.imageURL);
    setBodyParameter(mergeInfosObjStr + ".TemplateFaceID", mergeInfosObj.templateFaceID);
  }
}

std::string MergeVideoModelFaceRequest::getUserId() const {
  return userId_;
}

void MergeVideoModelFaceRequest::setUserId(const std::string &userId) {
  userId_ = userId;
  setBodyParameter(std::string("UserId"), userId);
}

std::string MergeVideoModelFaceRequest::getWatermarkType() const {
  return watermarkType_;
}

void MergeVideoModelFaceRequest::setWatermarkType(const std::string &watermarkType) {
  watermarkType_ = watermarkType;
  setBodyParameter(std::string("WatermarkType"), watermarkType);
}

bool MergeVideoModelFaceRequest::getEnhance() const {
  return enhance_;
}

void MergeVideoModelFaceRequest::setEnhance(bool enhance) {
  enhance_ = enhance;
  setBodyParameter(std::string("Enhance"), enhance ? "true" : "false");
}

std::string MergeVideoModelFaceRequest::getTemplateId() const {
  return templateId_;
}

void MergeVideoModelFaceRequest::setTemplateId(const std::string &templateId) {
  templateId_ = templateId;
  setBodyParameter(std::string("TemplateId"), templateId);
}

std::string MergeVideoModelFaceRequest::getAsync() const {
  return async_;
}

void MergeVideoModelFaceRequest::setAsync(const std::string &async) {
  async_ = async;
  setBodyParameter(std::string("Async"), async);
}

bool MergeVideoModelFaceRequest::getAddWatermark() const {
  return addWatermark_;
}

void MergeVideoModelFaceRequest::setAddWatermark(bool addWatermark) {
  addWatermark_ = addWatermark;
  setBodyParameter(std::string("AddWatermark"), addWatermark ? "true" : "false");
}

