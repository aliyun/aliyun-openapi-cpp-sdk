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

#include <alibabacloud/live/model/AddLiveAISubtitleRequest.h>

using AlibabaCloud::Live::Model::AddLiveAISubtitleRequest;

AddLiveAISubtitleRequest::AddLiveAISubtitleRequest()
    : RpcServiceRequest("live", "2016-11-01", "AddLiveAISubtitle") {
  setMethod(HttpRequest::Method::Post);
}

AddLiveAISubtitleRequest::~AddLiveAISubtitleRequest() {}

std::string AddLiveAISubtitleRequest::getSrcLanguage() const {
  return srcLanguage_;
}

void AddLiveAISubtitleRequest::setSrcLanguage(const std::string &srcLanguage) {
  srcLanguage_ = srcLanguage;
  setParameter(std::string("SrcLanguage"), srcLanguage);
}

std::string AddLiveAISubtitleRequest::getDescription() const {
  return description_;
}

void AddLiveAISubtitleRequest::setDescription(const std::string &description) {
  description_ = description;
  setParameter(std::string("Description"), description);
}

std::string AddLiveAISubtitleRequest::getFontName() const {
  return fontName_;
}

void AddLiveAISubtitleRequest::setFontName(const std::string &fontName) {
  fontName_ = fontName;
  setParameter(std::string("FontName"), fontName);
}

std::string AddLiveAISubtitleRequest::getSubtitleName() const {
  return subtitleName_;
}

void AddLiveAISubtitleRequest::setSubtitleName(const std::string &subtitleName) {
  subtitleName_ = subtitleName;
  setParameter(std::string("SubtitleName"), subtitleName);
}

float AddLiveAISubtitleRequest::getFontSizeNormalized() const {
  return fontSizeNormalized_;
}

void AddLiveAISubtitleRequest::setFontSizeNormalized(float fontSizeNormalized) {
  fontSizeNormalized_ = fontSizeNormalized;
  setParameter(std::string("FontSizeNormalized"), std::to_string(fontSizeNormalized));
}

std::string AddLiveAISubtitleRequest::getRegionId() const {
  return regionId_;
}

void AddLiveAISubtitleRequest::setRegionId(const std::string &regionId) {
  regionId_ = regionId;
  setParameter(std::string("RegionId"), regionId);
}

std::string AddLiveAISubtitleRequest::getFontColor() const {
  return fontColor_;
}

void AddLiveAISubtitleRequest::setFontColor(const std::string &fontColor) {
  fontColor_ = fontColor;
  setParameter(std::string("FontColor"), fontColor);
}

bool AddLiveAISubtitleRequest::getShowSourceLan() const {
  return showSourceLan_;
}

void AddLiveAISubtitleRequest::setShowSourceLan(bool showSourceLan) {
  showSourceLan_ = showSourceLan;
  setParameter(std::string("ShowSourceLan"), showSourceLan ? "true" : "false");
}

std::vector<AddLiveAISubtitleRequest::float> AddLiveAISubtitleRequest::getPositionNormalized() const {
  return positionNormalized_;
}

void AddLiveAISubtitleRequest::setPositionNormalized(const std::vector<AddLiveAISubtitleRequest::float> &positionNormalized) {
  positionNormalized_ = positionNormalized;
  for(int dep1 = 0; dep1 != positionNormalized.size(); dep1++) {
    setParameter(std::string("PositionNormalized") + "." + std::to_string(dep1 + 1), std::to_string(positionNormalized[dep1]));
  }
}

float AddLiveAISubtitleRequest::getBorderWidthNormalized() const {
  return borderWidthNormalized_;
}

void AddLiveAISubtitleRequest::setBorderWidthNormalized(float borderWidthNormalized) {
  borderWidthNormalized_ = borderWidthNormalized;
  setParameter(std::string("BorderWidthNormalized"), std::to_string(borderWidthNormalized));
}

int AddLiveAISubtitleRequest::getMaxLines() const {
  return maxLines_;
}

void AddLiveAISubtitleRequest::setMaxLines(int maxLines) {
  maxLines_ = maxLines;
  setParameter(std::string("MaxLines"), std::to_string(maxLines));
}

std::string AddLiveAISubtitleRequest::getHeight() const {
  return height_;
}

void AddLiveAISubtitleRequest::setHeight(const std::string &height) {
  height_ = height;
  setParameter(std::string("Height"), height);
}

int AddLiveAISubtitleRequest::getWordPerLine() const {
  return wordPerLine_;
}

void AddLiveAISubtitleRequest::setWordPerLine(int wordPerLine) {
  wordPerLine_ = wordPerLine;
  setParameter(std::string("WordPerLine"), std::to_string(wordPerLine));
}

long AddLiveAISubtitleRequest::getOwnerId() const {
  return ownerId_;
}

void AddLiveAISubtitleRequest::setOwnerId(long ownerId) {
  ownerId_ = ownerId;
  setParameter(std::string("OwnerId"), std::to_string(ownerId));
}

float AddLiveAISubtitleRequest::getBgWidthNormalized() const {
  return bgWidthNormalized_;
}

void AddLiveAISubtitleRequest::setBgWidthNormalized(float bgWidthNormalized) {
  bgWidthNormalized_ = bgWidthNormalized;
  setParameter(std::string("BgWidthNormalized"), std::to_string(bgWidthNormalized));
}

std::string AddLiveAISubtitleRequest::getBgColor() const {
  return bgColor_;
}

void AddLiveAISubtitleRequest::setBgColor(const std::string &bgColor) {
  bgColor_ = bgColor;
  setParameter(std::string("BgColor"), bgColor);
}

std::string AddLiveAISubtitleRequest::getDstLanguage() const {
  return dstLanguage_;
}

void AddLiveAISubtitleRequest::setDstLanguage(const std::string &dstLanguage) {
  dstLanguage_ = dstLanguage;
  setParameter(std::string("DstLanguage"), dstLanguage);
}

std::string AddLiveAISubtitleRequest::getWidth() const {
  return width_;
}

void AddLiveAISubtitleRequest::setWidth(const std::string &width) {
  width_ = width;
  setParameter(std::string("Width"), width);
}

std::string AddLiveAISubtitleRequest::getCopyFrom() const {
  return copyFrom_;
}

void AddLiveAISubtitleRequest::setCopyFrom(const std::string &copyFrom) {
  copyFrom_ = copyFrom;
  setParameter(std::string("CopyFrom"), copyFrom);
}

