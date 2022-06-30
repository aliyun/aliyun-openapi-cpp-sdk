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

#include <alibabacloud/facebody/model/RecognizeFaceRequest.h>

using AlibabaCloud::Facebody::Model::RecognizeFaceRequest;

RecognizeFaceRequest::RecognizeFaceRequest()
    : RpcServiceRequest("facebody", "2019-12-30", "RecognizeFace") {
  setMethod(HttpRequest::Method::Post);
}

RecognizeFaceRequest::~RecognizeFaceRequest() {}

bool RecognizeFaceRequest::getGender() const {
  return gender_;
}

void RecognizeFaceRequest::setGender(bool gender) {
  gender_ = gender;
  setBodyParameter(std::string("Gender"), gender ? "true" : "false");
}

bool RecognizeFaceRequest::getBeauty() const {
  return beauty_;
}

void RecognizeFaceRequest::setBeauty(bool beauty) {
  beauty_ = beauty;
  setBodyParameter(std::string("Beauty"), beauty ? "true" : "false");
}

long RecognizeFaceRequest::getMaxFaceNumber() const {
  return maxFaceNumber_;
}

void RecognizeFaceRequest::setMaxFaceNumber(long maxFaceNumber) {
  maxFaceNumber_ = maxFaceNumber;
  setBodyParameter(std::string("MaxFaceNumber"), std::to_string(maxFaceNumber));
}

bool RecognizeFaceRequest::getFormatResultToJson() const {
  return formatResultToJson_;
}

void RecognizeFaceRequest::setFormatResultToJson(bool formatResultToJson) {
  formatResultToJson_ = formatResultToJson;
  setParameter(std::string("FormatResultToJson"), formatResultToJson ? "true" : "false");
}

bool RecognizeFaceRequest::getHat() const {
  return hat_;
}

void RecognizeFaceRequest::setHat(bool hat) {
  hat_ = hat;
  setBodyParameter(std::string("Hat"), hat ? "true" : "false");
}

std::string RecognizeFaceRequest::getOssFile() const {
  return ossFile_;
}

void RecognizeFaceRequest::setOssFile(const std::string &ossFile) {
  ossFile_ = ossFile;
  setParameter(std::string("OssFile"), ossFile);
}

bool RecognizeFaceRequest::getMask() const {
  return mask_;
}

void RecognizeFaceRequest::setMask(bool mask) {
  mask_ = mask;
  setBodyParameter(std::string("Mask"), mask ? "true" : "false");
}

int RecognizeFaceRequest::getImageType() const {
  return imageType_;
}

void RecognizeFaceRequest::setImageType(int imageType) {
  imageType_ = imageType;
  setBodyParameter(std::string("ImageType"), std::to_string(imageType));
}

bool RecognizeFaceRequest::getGlass() const {
  return glass_;
}

void RecognizeFaceRequest::setGlass(bool glass) {
  glass_ = glass;
  setBodyParameter(std::string("Glass"), glass ? "true" : "false");
}

bool RecognizeFaceRequest::getExpression() const {
  return expression_;
}

void RecognizeFaceRequest::setExpression(bool expression) {
  expression_ = expression;
  setBodyParameter(std::string("Expression"), expression ? "true" : "false");
}

std::string RecognizeFaceRequest::getRequestProxyBy() const {
  return requestProxyBy_;
}

void RecognizeFaceRequest::setRequestProxyBy(const std::string &requestProxyBy) {
  requestProxyBy_ = requestProxyBy;
  setParameter(std::string("RequestProxyBy"), requestProxyBy);
}

bool RecognizeFaceRequest::getQuality() const {
  return quality_;
}

void RecognizeFaceRequest::setQuality(bool quality) {
  quality_ = quality;
  setBodyParameter(std::string("Quality"), quality ? "true" : "false");
}

std::string RecognizeFaceRequest::getImageURL() const {
  return imageURL_;
}

void RecognizeFaceRequest::setImageURL(const std::string &imageURL) {
  imageURL_ = imageURL;
  setBodyParameter(std::string("ImageURL"), imageURL);
}

bool RecognizeFaceRequest::getAge() const {
  return age_;
}

void RecognizeFaceRequest::setAge(bool age) {
  age_ = age;
  setBodyParameter(std::string("Age"), age ? "true" : "false");
}

