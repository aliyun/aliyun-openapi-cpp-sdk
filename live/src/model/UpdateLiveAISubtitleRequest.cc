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

#include <alibabacloud/live/model/UpdateLiveAISubtitleRequest.h>

using AlibabaCloud::Live::Model::UpdateLiveAISubtitleRequest;

UpdateLiveAISubtitleRequest::UpdateLiveAISubtitleRequest()
    : RpcServiceRequest("live", "2016-11-01", "UpdateLiveAISubtitle") {
  setMethod(HttpRequest::Method::Post);
}

UpdateLiveAISubtitleRequest::~UpdateLiveAISubtitleRequest() {}

std::string UpdateLiveAISubtitleRequest::getSrcLanguage() const {
  return srcLanguage_;
}

void UpdateLiveAISubtitleRequest::setSrcLanguage(const std::string &srcLanguage) {
  srcLanguage_ = srcLanguage;
  setParameter(std::string("SrcLanguage"), srcLanguage);
}

std::string UpdateLiveAISubtitleRequest::getDescription() const {
  return description_;
}

void UpdateLiveAISubtitleRequest::setDescription(const std::string &description) {
  description_ = description;
  setParameter(std::string("Description"), description);
}

std::string UpdateLiveAISubtitleRequest::getFontName() const {
  return fontName_;
}

void UpdateLiveAISubtitleRequest::setFontName(const std::string &fontName) {
  fontName_ = fontName;
  setParameter(std::string("FontName"), fontName);
}

std::string UpdateLiveAISubtitleRequest::getSubtitleName() const {
  return subtitleName_;
}

void UpdateLiveAISubtitleRequest::setSubtitleName(const std::string &subtitleName) {
  subtitleName_ = subtitleName;
  setParameter(std::string("SubtitleName"), subtitleName);
}

float UpdateLiveAISubtitleRequest::getFontSizeNormalized() const {
  return fontSizeNormalized_;
}

void UpdateLiveAISubtitleRequest::setFontSizeNormalized(float fontSizeNormalized) {
  fontSizeNormalized_ = fontSizeNormalized;
  setParameter(std::string("FontSizeNormalized"), std::to_string(fontSizeNormalized));
}

std::string UpdateLiveAISubtitleRequest::getRegionId() const {
  return regionId_;
}

void UpdateLiveAISubtitleRequest::setRegionId(const std::string &regionId) {
  regionId_ = regionId;
  setParameter(std::string("RegionId"), regionId);
}

std::string UpdateLiveAISubtitleRequest::getFontColor() const {
  return fontColor_;
}

void UpdateLiveAISubtitleRequest::setFontColor(const std::string &fontColor) {
  fontColor_ = fontColor;
  setParameter(std::string("FontColor"), fontColor);
}

bool UpdateLiveAISubtitleRequest::getShowSourceLan() const {
  return showSourceLan_;
}

void UpdateLiveAISubtitleRequest::setShowSourceLan(bool showSourceLan) {
  showSourceLan_ = showSourceLan;
  setParameter(std::string("ShowSourceLan"), showSourceLan ? "true" : "false");
}

std::vector<UpdateLiveAISubtitleRequest::float> UpdateLiveAISubtitleRequest::getPositionNormalized() const {
  return positionNormalized_;
}

void UpdateLiveAISubtitleRequest::setPositionNormalized(const std::vector<UpdateLiveAISubtitleRequest::float> &positionNormalized) {
  positionNormalized_ = positionNormalized;
  for(int dep1 = 0; dep1 != positionNormalized.size(); dep1++) {
    setParameter(std::string("PositionNormalized") + "." + std::to_string(dep1 + 1), std::to_string(positionNormalized[dep1]));
  }
}

float UpdateLiveAISubtitleRequest::getBorderWidthNormalized() const {
  return borderWidthNormalized_;
}

void UpdateLiveAISubtitleRequest::setBorderWidthNormalized(float borderWidthNormalized) {
  borderWidthNormalized_ = borderWidthNormalized;
  setParameter(std::string("BorderWidthNormalized"), std::to_string(borderWidthNormalized));
}

int UpdateLiveAISubtitleRequest::getMaxLines() const {
  return maxLines_;
}

void UpdateLiveAISubtitleRequest::setMaxLines(int maxLines) {
  maxLines_ = maxLines;
  setParameter(std::string("MaxLines"), std::to_string(maxLines));
}

std::string UpdateLiveAISubtitleRequest::getHeight() const {
  return height_;
}

void UpdateLiveAISubtitleRequest::setHeight(const std::string &height) {
  height_ = height;
  setParameter(std::string("Height"), height);
}

int UpdateLiveAISubtitleRequest::getWordPerLine() const {
  return wordPerLine_;
}

void UpdateLiveAISubtitleRequest::setWordPerLine(int wordPerLine) {
  wordPerLine_ = wordPerLine;
  setParameter(std::string("WordPerLine"), std::to_string(wordPerLine));
}

long UpdateLiveAISubtitleRequest::getOwnerId() const {
  return ownerId_;
}

void UpdateLiveAISubtitleRequest::setOwnerId(long ownerId) {
  ownerId_ = ownerId;
  setParameter(std::string("OwnerId"), std::to_string(ownerId));
}

float UpdateLiveAISubtitleRequest::getBgWidthNormalized() const {
  return bgWidthNormalized_;
}

void UpdateLiveAISubtitleRequest::setBgWidthNormalized(float bgWidthNormalized) {
  bgWidthNormalized_ = bgWidthNormalized;
  setParameter(std::string("BgWidthNormalized"), std::to_string(bgWidthNormalized));
}

std::string UpdateLiveAISubtitleRequest::getBgColor() const {
  return bgColor_;
}

void UpdateLiveAISubtitleRequest::setBgColor(const std::string &bgColor) {
  bgColor_ = bgColor;
  setParameter(std::string("BgColor"), bgColor);
}

std::string UpdateLiveAISubtitleRequest::getDstLanguage() const {
  return dstLanguage_;
}

void UpdateLiveAISubtitleRequest::setDstLanguage(const std::string &dstLanguage) {
  dstLanguage_ = dstLanguage;
  setParameter(std::string("DstLanguage"), dstLanguage);
}

std::string UpdateLiveAISubtitleRequest::getWidth() const {
  return width_;
}

void UpdateLiveAISubtitleRequest::setWidth(const std::string &width) {
  width_ = width;
  setParameter(std::string("Width"), width);
}

std::string UpdateLiveAISubtitleRequest::getSubtitleId() const {
  return subtitleId_;
}

void UpdateLiveAISubtitleRequest::setSubtitleId(const std::string &subtitleId) {
  subtitleId_ = subtitleId;
  setParameter(std::string("SubtitleId"), subtitleId);
}

