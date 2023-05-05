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

#include <alibabacloud/ecd/model/ModifyCdsFileShareLinkRequest.h>

using AlibabaCloud::Ecd::Model::ModifyCdsFileShareLinkRequest;

ModifyCdsFileShareLinkRequest::ModifyCdsFileShareLinkRequest()
    : RpcServiceRequest("ecd", "2020-09-30", "ModifyCdsFileShareLink") {
  setMethod(HttpRequest::Method::Post);
}

ModifyCdsFileShareLinkRequest::~ModifyCdsFileShareLinkRequest() {}

std::string ModifyCdsFileShareLinkRequest::getDescription() const {
  return description_;
}

void ModifyCdsFileShareLinkRequest::setDescription(const std::string &description) {
  description_ = description;
  setParameter(std::string("Description"), description);
}

std::string ModifyCdsFileShareLinkRequest::getShareId() const {
  return shareId_;
}

void ModifyCdsFileShareLinkRequest::setShareId(const std::string &shareId) {
  shareId_ = shareId;
  setParameter(std::string("ShareId"), shareId);
}

long ModifyCdsFileShareLinkRequest::getPreviewLimit() const {
  return previewLimit_;
}

void ModifyCdsFileShareLinkRequest::setPreviewLimit(long previewLimit) {
  previewLimit_ = previewLimit;
  setParameter(std::string("PreviewLimit"), std::to_string(previewLimit));
}

bool ModifyCdsFileShareLinkRequest::getDisableDownload() const {
  return disableDownload_;
}

void ModifyCdsFileShareLinkRequest::setDisableDownload(bool disableDownload) {
  disableDownload_ = disableDownload;
  setParameter(std::string("DisableDownload"), disableDownload ? "true" : "false");
}

bool ModifyCdsFileShareLinkRequest::getDisablePreview() const {
  return disablePreview_;
}

void ModifyCdsFileShareLinkRequest::setDisablePreview(bool disablePreview) {
  disablePreview_ = disablePreview;
  setParameter(std::string("DisablePreview"), disablePreview ? "true" : "false");
}

std::string ModifyCdsFileShareLinkRequest::getSharePwd() const {
  return sharePwd_;
}

void ModifyCdsFileShareLinkRequest::setSharePwd(const std::string &sharePwd) {
  sharePwd_ = sharePwd;
  setParameter(std::string("SharePwd"), sharePwd);
}

std::string ModifyCdsFileShareLinkRequest::getShareName() const {
  return shareName_;
}

void ModifyCdsFileShareLinkRequest::setShareName(const std::string &shareName) {
  shareName_ = shareName;
  setParameter(std::string("ShareName"), shareName);
}

long ModifyCdsFileShareLinkRequest::getDownloadCount() const {
  return downloadCount_;
}

void ModifyCdsFileShareLinkRequest::setDownloadCount(long downloadCount) {
  downloadCount_ = downloadCount;
  setParameter(std::string("DownloadCount"), std::to_string(downloadCount));
}

bool ModifyCdsFileShareLinkRequest::getDisableSave() const {
  return disableSave_;
}

void ModifyCdsFileShareLinkRequest::setDisableSave(bool disableSave) {
  disableSave_ = disableSave;
  setParameter(std::string("DisableSave"), disableSave ? "true" : "false");
}

long ModifyCdsFileShareLinkRequest::getSaveCount() const {
  return saveCount_;
}

void ModifyCdsFileShareLinkRequest::setSaveCount(long saveCount) {
  saveCount_ = saveCount;
  setParameter(std::string("SaveCount"), std::to_string(saveCount));
}

long ModifyCdsFileShareLinkRequest::getReportCount() const {
  return reportCount_;
}

void ModifyCdsFileShareLinkRequest::setReportCount(long reportCount) {
  reportCount_ = reportCount;
  setParameter(std::string("ReportCount"), std::to_string(reportCount));
}

long ModifyCdsFileShareLinkRequest::getVideoPreviewCount() const {
  return videoPreviewCount_;
}

void ModifyCdsFileShareLinkRequest::setVideoPreviewCount(long videoPreviewCount) {
  videoPreviewCount_ = videoPreviewCount;
  setParameter(std::string("VideoPreviewCount"), std::to_string(videoPreviewCount));
}

long ModifyCdsFileShareLinkRequest::getDownloadLimit() const {
  return downloadLimit_;
}

void ModifyCdsFileShareLinkRequest::setDownloadLimit(long downloadLimit) {
  downloadLimit_ = downloadLimit;
  setParameter(std::string("DownloadLimit"), std::to_string(downloadLimit));
}

std::string ModifyCdsFileShareLinkRequest::getCdsId() const {
  return cdsId_;
}

void ModifyCdsFileShareLinkRequest::setCdsId(const std::string &cdsId) {
  cdsId_ = cdsId;
  setParameter(std::string("CdsId"), cdsId);
}

long ModifyCdsFileShareLinkRequest::getSaveLimit() const {
  return saveLimit_;
}

void ModifyCdsFileShareLinkRequest::setSaveLimit(long saveLimit) {
  saveLimit_ = saveLimit;
  setParameter(std::string("SaveLimit"), std::to_string(saveLimit));
}

std::string ModifyCdsFileShareLinkRequest::getExpiration() const {
  return expiration_;
}

void ModifyCdsFileShareLinkRequest::setExpiration(const std::string &expiration) {
  expiration_ = expiration;
  setParameter(std::string("Expiration"), expiration);
}

long ModifyCdsFileShareLinkRequest::getPreviewCount() const {
  return previewCount_;
}

void ModifyCdsFileShareLinkRequest::setPreviewCount(long previewCount) {
  previewCount_ = previewCount;
  setParameter(std::string("PreviewCount"), std::to_string(previewCount));
}

std::string ModifyCdsFileShareLinkRequest::getStatus() const {
  return status_;
}

void ModifyCdsFileShareLinkRequest::setStatus(const std::string &status) {
  status_ = status;
  setParameter(std::string("Status"), status);
}

