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

#include <alibabacloud/ice/model/UpdateMediaInfoRequest.h>

using AlibabaCloud::ICE::Model::UpdateMediaInfoRequest;

UpdateMediaInfoRequest::UpdateMediaInfoRequest()
    : RpcServiceRequest("ice", "2020-11-09", "UpdateMediaInfo") {
  setMethod(HttpRequest::Method::Post);
}

UpdateMediaInfoRequest::~UpdateMediaInfoRequest() {}

std::string UpdateMediaInfoRequest::getDescription() const {
  return description_;
}

void UpdateMediaInfoRequest::setDescription(const std::string &description) {
  description_ = description;
  setParameter(std::string("Description"), description);
}

std::string UpdateMediaInfoRequest::getTitle() const {
  return title_;
}

void UpdateMediaInfoRequest::setTitle(const std::string &title) {
  title_ = title;
  setParameter(std::string("Title"), title);
}

std::string UpdateMediaInfoRequest::getBusinessType() const {
  return businessType_;
}

void UpdateMediaInfoRequest::setBusinessType(const std::string &businessType) {
  businessType_ = businessType;
  setParameter(std::string("BusinessType"), businessType);
}

std::string UpdateMediaInfoRequest::getCoverURL() const {
  return coverURL_;
}

void UpdateMediaInfoRequest::setCoverURL(const std::string &coverURL) {
  coverURL_ = coverURL;
  setParameter(std::string("CoverURL"), coverURL);
}

std::string UpdateMediaInfoRequest::getUserData() const {
  return userData_;
}

void UpdateMediaInfoRequest::setUserData(const std::string &userData) {
  userData_ = userData;
  setParameter(std::string("UserData"), userData);
}

bool UpdateMediaInfoRequest::getAppendDynamicMeta() const {
  return appendDynamicMeta_;
}

void UpdateMediaInfoRequest::setAppendDynamicMeta(bool appendDynamicMeta) {
  appendDynamicMeta_ = appendDynamicMeta;
  setParameter(std::string("AppendDynamicMeta"), appendDynamicMeta ? "true" : "false");
}

long UpdateMediaInfoRequest::getCateId() const {
  return cateId_;
}

void UpdateMediaInfoRequest::setCateId(long cateId) {
  cateId_ = cateId;
  setParameter(std::string("CateId"), std::to_string(cateId));
}

std::string UpdateMediaInfoRequest::getDynamicMetaDataList() const {
  return dynamicMetaDataList_;
}

void UpdateMediaInfoRequest::setDynamicMetaDataList(const std::string &dynamicMetaDataList) {
  dynamicMetaDataList_ = dynamicMetaDataList;
  setParameter(std::string("DynamicMetaDataList"), dynamicMetaDataList);
}

std::string UpdateMediaInfoRequest::getMediaTags() const {
  return mediaTags_;
}

void UpdateMediaInfoRequest::setMediaTags(const std::string &mediaTags) {
  mediaTags_ = mediaTags;
  setParameter(std::string("MediaTags"), mediaTags);
}

std::string UpdateMediaInfoRequest::getDynamicMetaData() const {
  return dynamicMetaData_;
}

void UpdateMediaInfoRequest::setDynamicMetaData(const std::string &dynamicMetaData) {
  dynamicMetaData_ = dynamicMetaData;
  setParameter(std::string("DynamicMetaData"), dynamicMetaData);
}

std::string UpdateMediaInfoRequest::getInputURL() const {
  return inputURL_;
}

void UpdateMediaInfoRequest::setInputURL(const std::string &inputURL) {
  inputURL_ = inputURL;
  setParameter(std::string("InputURL"), inputURL);
}

std::string UpdateMediaInfoRequest::getMediaId() const {
  return mediaId_;
}

void UpdateMediaInfoRequest::setMediaId(const std::string &mediaId) {
  mediaId_ = mediaId;
  setParameter(std::string("MediaId"), mediaId);
}

std::string UpdateMediaInfoRequest::getReferenceId() const {
  return referenceId_;
}

void UpdateMediaInfoRequest::setReferenceId(const std::string &referenceId) {
  referenceId_ = referenceId;
  setParameter(std::string("ReferenceId"), referenceId);
}

std::string UpdateMediaInfoRequest::getSnapshots() const {
  return snapshots_;
}

void UpdateMediaInfoRequest::setSnapshots(const std::string &snapshots) {
  snapshots_ = snapshots;
  setParameter(std::string("Snapshots"), snapshots);
}

bool UpdateMediaInfoRequest::getAppendTags() const {
  return appendTags_;
}

void UpdateMediaInfoRequest::setAppendTags(bool appendTags) {
  appendTags_ = appendTags;
  setParameter(std::string("AppendTags"), appendTags ? "true" : "false");
}

std::string UpdateMediaInfoRequest::getCategory() const {
  return category_;
}

void UpdateMediaInfoRequest::setCategory(const std::string &category) {
  category_ = category;
  setParameter(std::string("Category"), category);
}

bool UpdateMediaInfoRequest::getAppendSnapshots() const {
  return appendSnapshots_;
}

void UpdateMediaInfoRequest::setAppendSnapshots(bool appendSnapshots) {
  appendSnapshots_ = appendSnapshots;
  setParameter(std::string("AppendSnapshots"), appendSnapshots ? "true" : "false");
}

