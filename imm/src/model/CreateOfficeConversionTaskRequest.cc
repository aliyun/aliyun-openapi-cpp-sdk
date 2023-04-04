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

#include <alibabacloud/imm/model/CreateOfficeConversionTaskRequest.h>

using AlibabaCloud::Imm::Model::CreateOfficeConversionTaskRequest;

CreateOfficeConversionTaskRequest::CreateOfficeConversionTaskRequest()
    : RpcServiceRequest("imm", "2020-09-30", "CreateOfficeConversionTask") {
  setMethod(HttpRequest::Method::Post);
}

CreateOfficeConversionTaskRequest::~CreateOfficeConversionTaskRequest() {}

long CreateOfficeConversionTaskRequest::getSheetCount() const {
  return sheetCount_;
}

void CreateOfficeConversionTaskRequest::setSheetCount(long sheetCount) {
  sheetCount_ = sheetCount;
  setParameter(std::string("SheetCount"), std::to_string(sheetCount));
}

bool CreateOfficeConversionTaskRequest::getShowComments() const {
  return showComments_;
}

void CreateOfficeConversionTaskRequest::setShowComments(bool showComments) {
  showComments_ = showComments;
  setParameter(std::string("ShowComments"), showComments ? "true" : "false");
}

CreateOfficeConversionTaskRequest::Notification CreateOfficeConversionTaskRequest::getNotification() const {
  return notification_;
}

void CreateOfficeConversionTaskRequest::setNotification(const CreateOfficeConversionTaskRequest::Notification &notification) {
  notification_ = notification;
  setParameter(std::string("Notification") + ".MNS.Endpoint", notification.mNS.endpoint);
  setParameter(std::string("Notification") + ".MNS.TopicName", notification.mNS.topicName);
  setParameter(std::string("Notification") + ".RocketMQ.Endpoint", notification.rocketMQ.endpoint);
  setParameter(std::string("Notification") + ".RocketMQ.InstanceId", notification.rocketMQ.instanceId);
  setParameter(std::string("Notification") + ".RocketMQ.TopicName", notification.rocketMQ.topicName);
}

std::string CreateOfficeConversionTaskRequest::getPassword() const {
  return password_;
}

void CreateOfficeConversionTaskRequest::setPassword(const std::string &password) {
  password_ = password;
  setParameter(std::string("Password"), password);
}

std::string CreateOfficeConversionTaskRequest::getPages() const {
  return pages_;
}

void CreateOfficeConversionTaskRequest::setPages(const std::string &pages) {
  pages_ = pages;
  setParameter(std::string("Pages"), pages);
}

std::string CreateOfficeConversionTaskRequest::getNotifyEndpoint() const {
  return notifyEndpoint_;
}

void CreateOfficeConversionTaskRequest::setNotifyEndpoint(const std::string &notifyEndpoint) {
  notifyEndpoint_ = notifyEndpoint;
  setParameter(std::string("NotifyEndpoint"), notifyEndpoint);
}

std::string CreateOfficeConversionTaskRequest::getSourceType() const {
  return sourceType_;
}

void CreateOfficeConversionTaskRequest::setSourceType(const std::string &sourceType) {
  sourceType_ = sourceType;
  setParameter(std::string("SourceType"), sourceType);
}

std::string CreateOfficeConversionTaskRequest::getProjectName() const {
  return projectName_;
}

void CreateOfficeConversionTaskRequest::setProjectName(const std::string &projectName) {
  projectName_ = projectName;
  setParameter(std::string("ProjectName"), projectName);
}

std::string CreateOfficeConversionTaskRequest::getNotifyTopicName() const {
  return notifyTopicName_;
}

void CreateOfficeConversionTaskRequest::setNotifyTopicName(const std::string &notifyTopicName) {
  notifyTopicName_ = notifyTopicName;
  setParameter(std::string("NotifyTopicName"), notifyTopicName);
}

bool CreateOfficeConversionTaskRequest::getFitToHeight() const {
  return fitToHeight_;
}

void CreateOfficeConversionTaskRequest::setFitToHeight(bool fitToHeight) {
  fitToHeight_ = fitToHeight;
  setParameter(std::string("FitToHeight"), fitToHeight ? "true" : "false");
}

long CreateOfficeConversionTaskRequest::getEndPage() const {
  return endPage_;
}

void CreateOfficeConversionTaskRequest::setEndPage(long endPage) {
  endPage_ = endPage;
  setParameter(std::string("EndPage"), std::to_string(endPage));
}

bool CreateOfficeConversionTaskRequest::getFitToWidth() const {
  return fitToWidth_;
}

void CreateOfficeConversionTaskRequest::setFitToWidth(bool fitToWidth) {
  fitToWidth_ = fitToWidth;
  setParameter(std::string("FitToWidth"), fitToWidth ? "true" : "false");
}

long CreateOfficeConversionTaskRequest::getQuality() const {
  return quality_;
}

void CreateOfficeConversionTaskRequest::setQuality(long quality) {
  quality_ = quality;
  setParameter(std::string("Quality"), std::to_string(quality));
}

std::map<std::string, std::string> CreateOfficeConversionTaskRequest::getTags() const {
  return tags_;
}

void CreateOfficeConversionTaskRequest::setTags(const std::map<std::string, std::string> &tags) {
  tags_ = tags;
  for(auto const &iter1 : tags) {
    setParameter(std::string("Tags") + "." + iter1.first, iter1.second);
  }
}

std::string CreateOfficeConversionTaskRequest::getSourceURI() const {
  return sourceURI_;
}

void CreateOfficeConversionTaskRequest::setSourceURI(const std::string &sourceURI) {
  sourceURI_ = sourceURI;
  setParameter(std::string("SourceURI"), sourceURI);
}

long CreateOfficeConversionTaskRequest::getSheetIndex() const {
  return sheetIndex_;
}

void CreateOfficeConversionTaskRequest::setSheetIndex(long sheetIndex) {
  sheetIndex_ = sheetIndex;
  setParameter(std::string("SheetIndex"), std::to_string(sheetIndex));
}

bool CreateOfficeConversionTaskRequest::getHoldLineFeed() const {
  return holdLineFeed_;
}

void CreateOfficeConversionTaskRequest::setHoldLineFeed(bool holdLineFeed) {
  holdLineFeed_ = holdLineFeed;
  setParameter(std::string("HoldLineFeed"), holdLineFeed ? "true" : "false");
}

bool CreateOfficeConversionTaskRequest::getLongText() const {
  return longText_;
}

void CreateOfficeConversionTaskRequest::setLongText(bool longText) {
  longText_ = longText;
  setParameter(std::string("LongText"), longText ? "true" : "false");
}

std::string CreateOfficeConversionTaskRequest::getTargetType() const {
  return targetType_;
}

void CreateOfficeConversionTaskRequest::setTargetType(const std::string &targetType) {
  targetType_ = targetType;
  setParameter(std::string("TargetType"), targetType);
}

CreateOfficeConversionTaskRequest::TrimPolicy CreateOfficeConversionTaskRequest::getTrimPolicy() const {
  return trimPolicy_;
}

void CreateOfficeConversionTaskRequest::setTrimPolicy(const CreateOfficeConversionTaskRequest::TrimPolicy &trimPolicy) {
  trimPolicy_ = trimPolicy;
  setParameter(std::string("TrimPolicy") + ".DisableDeleteUnusedPicture", trimPolicy.disableDeleteUnusedPicture ? "true" : "false");
  setParameter(std::string("TrimPolicy") + ".DisableDeleteRepeatedStyle", trimPolicy.disableDeleteRepeatedStyle ? "true" : "false");
  setParameter(std::string("TrimPolicy") + ".DisableDeleteUnusedShape", trimPolicy.disableDeleteUnusedShape ? "true" : "false");
  setParameter(std::string("TrimPolicy") + ".DisableDeleteEmptyCell", trimPolicy.disableDeleteEmptyCell ? "true" : "false");
}

long CreateOfficeConversionTaskRequest::getMaxSheetColumn() const {
  return maxSheetColumn_;
}

void CreateOfficeConversionTaskRequest::setMaxSheetColumn(long maxSheetColumn) {
  maxSheetColumn_ = maxSheetColumn;
  setParameter(std::string("MaxSheetColumn"), std::to_string(maxSheetColumn));
}

bool CreateOfficeConversionTaskRequest::getFirstPage() const {
  return firstPage_;
}

void CreateOfficeConversionTaskRequest::setFirstPage(bool firstPage) {
  firstPage_ = firstPage;
  setParameter(std::string("FirstPage"), firstPage ? "true" : "false");
}

bool CreateOfficeConversionTaskRequest::getPaperHorizontal() const {
  return paperHorizontal_;
}

void CreateOfficeConversionTaskRequest::setPaperHorizontal(bool paperHorizontal) {
  paperHorizontal_ = paperHorizontal;
  setParameter(std::string("PaperHorizontal"), paperHorizontal ? "true" : "false");
}

std::string CreateOfficeConversionTaskRequest::getUserData() const {
  return userData_;
}

void CreateOfficeConversionTaskRequest::setUserData(const std::string &userData) {
  userData_ = userData;
  setParameter(std::string("UserData"), userData);
}

long CreateOfficeConversionTaskRequest::getScalePercentage() const {
  return scalePercentage_;
}

void CreateOfficeConversionTaskRequest::setScalePercentage(long scalePercentage) {
  scalePercentage_ = scalePercentage;
  setParameter(std::string("ScalePercentage"), std::to_string(scalePercentage));
}

long CreateOfficeConversionTaskRequest::getStartPage() const {
  return startPage_;
}

void CreateOfficeConversionTaskRequest::setStartPage(long startPage) {
  startPage_ = startPage;
  setParameter(std::string("StartPage"), std::to_string(startPage));
}

std::string CreateOfficeConversionTaskRequest::getTargetURIPrefix() const {
  return targetURIPrefix_;
}

void CreateOfficeConversionTaskRequest::setTargetURIPrefix(const std::string &targetURIPrefix) {
  targetURIPrefix_ = targetURIPrefix;
  setParameter(std::string("TargetURIPrefix"), targetURIPrefix);
}

std::string CreateOfficeConversionTaskRequest::getTargetURI() const {
  return targetURI_;
}

void CreateOfficeConversionTaskRequest::setTargetURI(const std::string &targetURI) {
  targetURI_ = targetURI;
  setParameter(std::string("TargetURI"), targetURI);
}

std::string CreateOfficeConversionTaskRequest::getPaperSize() const {
  return paperSize_;
}

void CreateOfficeConversionTaskRequest::setPaperSize(const std::string &paperSize) {
  paperSize_ = paperSize;
  setParameter(std::string("PaperSize"), paperSize);
}

long CreateOfficeConversionTaskRequest::getImageDPI() const {
  return imageDPI_;
}

void CreateOfficeConversionTaskRequest::setImageDPI(long imageDPI) {
  imageDPI_ = imageDPI;
  setParameter(std::string("ImageDPI"), std::to_string(imageDPI));
}

bool CreateOfficeConversionTaskRequest::getLongPicture() const {
  return longPicture_;
}

void CreateOfficeConversionTaskRequest::setLongPicture(bool longPicture) {
  longPicture_ = longPicture;
  setParameter(std::string("LongPicture"), longPicture ? "true" : "false");
}

long CreateOfficeConversionTaskRequest::getMaxSheetRow() const {
  return maxSheetRow_;
}

void CreateOfficeConversionTaskRequest::setMaxSheetRow(long maxSheetRow) {
  maxSheetRow_ = maxSheetRow;
  setParameter(std::string("MaxSheetRow"), std::to_string(maxSheetRow));
}

CreateOfficeConversionTaskRequest::CredentialConfig CreateOfficeConversionTaskRequest::getCredentialConfig() const {
  return credentialConfig_;
}

void CreateOfficeConversionTaskRequest::setCredentialConfig(const CreateOfficeConversionTaskRequest::CredentialConfig &credentialConfig) {
  credentialConfig_ = credentialConfig;
  for(int dep1 = 0; dep1 != credentialConfig.chain.size(); dep1++) {
    setParameter(std::string("CredentialConfig") + ".Chain." + std::to_string(dep1 + 1) + ".Role", credentialConfig.chain[dep1].role);
    setParameter(std::string("CredentialConfig") + ".Chain." + std::to_string(dep1 + 1) + ".RoleType", credentialConfig.chain[dep1].roleType);
    setParameter(std::string("CredentialConfig") + ".Chain." + std::to_string(dep1 + 1) + ".AssumeRoleFor", credentialConfig.chain[dep1].assumeRoleFor);
  }
  setParameter(std::string("CredentialConfig") + ".ServiceRole", credentialConfig.serviceRole);
  setParameter(std::string("CredentialConfig") + ".Policy", credentialConfig.policy);
}

