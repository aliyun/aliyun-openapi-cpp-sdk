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

#include <alibabacloud/websitebuild/model/SearchImageRequest.h>

using AlibabaCloud::WebsiteBuild::Model::SearchImageRequest;

SearchImageRequest::SearchImageRequest()
    : RpcServiceRequest("websitebuild", "2025-04-29", "SearchImage") {
  setMethod(HttpRequest::Method::Post);
}

SearchImageRequest::~SearchImageRequest() {}

bool SearchImageRequest::getHasPerson() const {
  return hasPerson_;
}

void SearchImageRequest::setHasPerson(bool hasPerson) {
  hasPerson_ = hasPerson;
  setParameter(std::string("HasPerson"), hasPerson ? "true" : "false");
}

int SearchImageRequest::getMaxWidth() const {
  return maxWidth_;
}

void SearchImageRequest::setMaxWidth(int maxWidth) {
  maxWidth_ = maxWidth;
  setParameter(std::string("MaxWidth"), std::to_string(maxWidth));
}

std::string SearchImageRequest::getOssKey() const {
  return ossKey_;
}

void SearchImageRequest::setOssKey(const std::string &ossKey) {
  ossKey_ = ossKey;
  setParameter(std::string("OssKey"), ossKey);
}

std::string SearchImageRequest::getImageCategory() const {
  return imageCategory_;
}

void SearchImageRequest::setImageCategory(const std::string &imageCategory) {
  imageCategory_ = imageCategory;
  setParameter(std::string("ImageCategory"), imageCategory);
}

int SearchImageRequest::getMaxHeight() const {
  return maxHeight_;
}

void SearchImageRequest::setMaxHeight(int maxHeight) {
  maxHeight_ = maxHeight;
  setParameter(std::string("MaxHeight"), std::to_string(maxHeight));
}

std::string SearchImageRequest::getImageRatio() const {
  return imageRatio_;
}

void SearchImageRequest::setImageRatio(const std::string &imageRatio) {
  imageRatio_ = imageRatio;
  setParameter(std::string("ImageRatio"), imageRatio);
}

std::string SearchImageRequest::getNextToken() const {
  return nextToken_;
}

void SearchImageRequest::setNextToken(const std::string &nextToken) {
  nextToken_ = nextToken;
  setParameter(std::string("NextToken"), nextToken);
}

std::string SearchImageRequest::getText() const {
  return text_;
}

void SearchImageRequest::setText(const std::string &text) {
  text_ = text;
  setParameter(std::string("Text"), text);
}

std::string SearchImageRequest::getColorHex() const {
  return colorHex_;
}

void SearchImageRequest::setColorHex(const std::string &colorHex) {
  colorHex_ = colorHex;
  setParameter(std::string("ColorHex"), colorHex);
}

int SearchImageRequest::getMinHeight() const {
  return minHeight_;
}

void SearchImageRequest::setMinHeight(int minHeight) {
  minHeight_ = minHeight;
  setParameter(std::string("MinHeight"), std::to_string(minHeight));
}

int SearchImageRequest::getStart() const {
  return start_;
}

void SearchImageRequest::setStart(int start) {
  start_ = start;
  setParameter(std::string("Start"), std::to_string(start));
}

std::vector<SearchImageRequest::std::string> SearchImageRequest::getTags() const {
  return tags_;
}

void SearchImageRequest::setTags(const std::vector<SearchImageRequest::std::string> &tags) {
  tags_ = tags;
  for(int dep1 = 0; dep1 != tags.size(); dep1++) {
    setParameter(std::string("Tags") + "." + std::to_string(dep1 + 1), tags[dep1]);
  }
}

int SearchImageRequest::getSize() const {
  return size_;
}

void SearchImageRequest::setSize(int size) {
  size_ = size;
  setParameter(std::string("Size"), std::to_string(size));
}

int SearchImageRequest::getMinWidth() const {
  return minWidth_;
}

void SearchImageRequest::setMinWidth(int minWidth) {
  minWidth_ = minWidth;
  setParameter(std::string("MinWidth"), std::to_string(minWidth));
}

int SearchImageRequest::getMaxResults() const {
  return maxResults_;
}

void SearchImageRequest::setMaxResults(int maxResults) {
  maxResults_ = maxResults;
  setParameter(std::string("MaxResults"), std::to_string(maxResults));
}

