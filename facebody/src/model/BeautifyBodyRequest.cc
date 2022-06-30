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

#include <alibabacloud/facebody/model/BeautifyBodyRequest.h>

using AlibabaCloud::Facebody::Model::BeautifyBodyRequest;

BeautifyBodyRequest::BeautifyBodyRequest()
    : RpcServiceRequest("facebody", "2019-12-30", "BeautifyBody") {
  setMethod(HttpRequest::Method::Post);
}

BeautifyBodyRequest::~BeautifyBodyRequest() {}

std::vector<BeautifyBodyRequest::BodyBoxes> BeautifyBodyRequest::getBodyBoxes() const {
  return bodyBoxes_;
}

void BeautifyBodyRequest::setBodyBoxes(const std::vector<BeautifyBodyRequest::BodyBoxes> &bodyBoxes) {
  bodyBoxes_ = bodyBoxes;
  for(int dep1 = 0; dep1 != bodyBoxes.size(); dep1++) {
    setBodyParameter(std::string("BodyBoxes") + "." + std::to_string(dep1 + 1) + ".X", std::to_string(bodyBoxes[dep1].x));
    setBodyParameter(std::string("BodyBoxes") + "." + std::to_string(dep1 + 1) + ".Width", std::to_string(bodyBoxes[dep1].width));
    setBodyParameter(std::string("BodyBoxes") + "." + std::to_string(dep1 + 1) + ".Y", std::to_string(bodyBoxes[dep1].y));
    setBodyParameter(std::string("BodyBoxes") + "." + std::to_string(dep1 + 1) + ".Height", std::to_string(bodyBoxes[dep1].height));
  }
}

float BeautifyBodyRequest::getLengthenDegree() const {
  return lengthenDegree_;
}

void BeautifyBodyRequest::setLengthenDegree(float lengthenDegree) {
  lengthenDegree_ = lengthenDegree;
  setBodyParameter(std::string("LengthenDegree"), std::to_string(lengthenDegree));
}

float BeautifyBodyRequest::getMaleLiquifyDegree() const {
  return maleLiquifyDegree_;
}

void BeautifyBodyRequest::setMaleLiquifyDegree(float maleLiquifyDegree) {
  maleLiquifyDegree_ = maleLiquifyDegree;
  setBodyParameter(std::string("MaleLiquifyDegree"), std::to_string(maleLiquifyDegree));
}

bool BeautifyBodyRequest::getFormatResultToJson() const {
  return formatResultToJson_;
}

void BeautifyBodyRequest::setFormatResultToJson(bool formatResultToJson) {
  formatResultToJson_ = formatResultToJson;
  setParameter(std::string("FormatResultToJson"), formatResultToJson ? "true" : "false");
}

long BeautifyBodyRequest::getOriginalWidth() const {
  return originalWidth_;
}

void BeautifyBodyRequest::setOriginalWidth(long originalWidth) {
  originalWidth_ = originalWidth;
  setBodyParameter(std::string("OriginalWidth"), std::to_string(originalWidth));
}

bool BeautifyBodyRequest::getIsPregnant() const {
  return isPregnant_;
}

void BeautifyBodyRequest::setIsPregnant(bool isPregnant) {
  isPregnant_ = isPregnant;
  setBodyParameter(std::string("IsPregnant"), isPregnant ? "true" : "false");
}

std::vector<BeautifyBodyRequest::FaceList> BeautifyBodyRequest::getFaceList() const {
  return faceList_;
}

void BeautifyBodyRequest::setFaceList(const std::vector<BeautifyBodyRequest::FaceList> &faceList) {
  faceList_ = faceList;
  for(int dep1 = 0; dep1 != faceList.size(); dep1++) {
    setBodyParameter(std::string("FaceList") + "." + std::to_string(dep1 + 1) + ".Gender", std::to_string(faceList[dep1].gender));
    setBodyParameter(std::string("FaceList") + "." + std::to_string(dep1 + 1) + ".FaceBox.X", std::to_string(faceList[dep1].faceBox.x));
    setBodyParameter(std::string("FaceList") + "." + std::to_string(dep1 + 1) + ".FaceBox.Width", std::to_string(faceList[dep1].faceBox.width));
    setBodyParameter(std::string("FaceList") + "." + std::to_string(dep1 + 1) + ".FaceBox.Y", std::to_string(faceList[dep1].faceBox.y));
    setBodyParameter(std::string("FaceList") + "." + std::to_string(dep1 + 1) + ".FaceBox.Height", std::to_string(faceList[dep1].faceBox.height));
    setBodyParameter(std::string("FaceList") + "." + std::to_string(dep1 + 1) + ".Age", std::to_string(faceList[dep1].age));
  }
}

std::string BeautifyBodyRequest::getOssFile() const {
  return ossFile_;
}

void BeautifyBodyRequest::setOssFile(const std::string &ossFile) {
  ossFile_ = ossFile;
  setParameter(std::string("OssFile"), ossFile);
}

BeautifyBodyRequest::AgeRange BeautifyBodyRequest::getAgeRange() const {
  return ageRange_;
}

void BeautifyBodyRequest::setAgeRange(const BeautifyBodyRequest::AgeRange &ageRange) {
  ageRange_ = ageRange;
  setBodyParameter(std::string("AgeRange") + ".AgeMax", std::to_string(ageRange.ageMax));
  setBodyParameter(std::string("AgeRange") + ".AgeMinimum", std::to_string(ageRange.ageMinimum));
}

long BeautifyBodyRequest::getCustom() const {
  return custom_;
}

void BeautifyBodyRequest::setCustom(long custom) {
  custom_ = custom;
  setBodyParameter(std::string("Custom"), std::to_string(custom));
}

std::string BeautifyBodyRequest::getRequestProxyBy() const {
  return requestProxyBy_;
}

void BeautifyBodyRequest::setRequestProxyBy(const std::string &requestProxyBy) {
  requestProxyBy_ = requestProxyBy;
  setParameter(std::string("RequestProxyBy"), requestProxyBy);
}

long BeautifyBodyRequest::getOriginalHeight() const {
  return originalHeight_;
}

void BeautifyBodyRequest::setOriginalHeight(long originalHeight) {
  originalHeight_ = originalHeight;
  setBodyParameter(std::string("OriginalHeight"), std::to_string(originalHeight));
}

std::string BeautifyBodyRequest::getImageURL() const {
  return imageURL_;
}

void BeautifyBodyRequest::setImageURL(const std::string &imageURL) {
  imageURL_ = imageURL;
  setBodyParameter(std::string("ImageURL"), imageURL);
}

float BeautifyBodyRequest::getFemaleLiquifyDegree() const {
  return femaleLiquifyDegree_;
}

void BeautifyBodyRequest::setFemaleLiquifyDegree(float femaleLiquifyDegree) {
  femaleLiquifyDegree_ = femaleLiquifyDegree;
  setBodyParameter(std::string("FemaleLiquifyDegree"), std::to_string(femaleLiquifyDegree));
}

std::vector<BeautifyBodyRequest::PoseList> BeautifyBodyRequest::getPoseList() const {
  return poseList_;
}

void BeautifyBodyRequest::setPoseList(const std::vector<BeautifyBodyRequest::PoseList> &poseList) {
  poseList_ = poseList;
  for(int dep1 = 0; dep1 != poseList.size(); dep1++) {
    for(int dep2 = 0; dep2 != poseList[dep1].pose.size(); dep2++) {
      setBodyParameter(std::string("PoseList") + "." + std::to_string(dep1 + 1) + ".Pose." + std::to_string(dep2 + 1) + ".Score", std::to_string(poseList[dep1].pose[dep2].score));
      setBodyParameter(std::string("PoseList") + "." + std::to_string(dep1 + 1) + ".Pose." + std::to_string(dep2 + 1) + ".X", std::to_string(poseList[dep1].pose[dep2].x));
      setBodyParameter(std::string("PoseList") + "." + std::to_string(dep1 + 1) + ".Pose." + std::to_string(dep2 + 1) + ".Y", std::to_string(poseList[dep1].pose[dep2].y));
    }
  }
}

