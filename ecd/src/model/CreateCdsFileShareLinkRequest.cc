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

#include <alibabacloud/ecd/model/CreateCdsFileShareLinkRequest.h>

using AlibabaCloud::Ecd::Model::CreateCdsFileShareLinkRequest;

CreateCdsFileShareLinkRequest::CreateCdsFileShareLinkRequest()
    : RpcServiceRequest("ecd", "2020-09-30", "CreateCdsFileShareLink") {
  setMethod(HttpRequest::Method::Post);
}

CreateCdsFileShareLinkRequest::~CreateCdsFileShareLinkRequest() {}

std::string CreateCdsFileShareLinkRequest::getDescription() const {
  return description_;
}

void CreateCdsFileShareLinkRequest::setDescription(const std::string &description) {
  description_ = description;
  setParameter(std::string("Description"), description);
}

long CreateCdsFileShareLinkRequest::getPreviewLimit() const {
  return previewLimit_;
}

void CreateCdsFileShareLinkRequest::setPreviewLimit(long previewLimit) {
  previewLimit_ = previewLimit;
  setParameter(std::string("PreviewLimit"), std::to_string(previewLimit));
}

bool CreateCdsFileShareLinkRequest::getDisableDownload() const {
  return disableDownload_;
}

void CreateCdsFileShareLinkRequest::setDisableDownload(bool disableDownload) {
  disableDownload_ = disableDownload;
  setParameter(std::string("DisableDownload"), disableDownload ? "true" : "false");
}

bool CreateCdsFileShareLinkRequest::getDisablePreview() const {
  return disablePreview_;
}

void CreateCdsFileShareLinkRequest::setDisablePreview(bool disablePreview) {
  disablePreview_ = disablePreview;
  setParameter(std::string("DisablePreview"), disablePreview ? "true" : "false");
}

std::string CreateCdsFileShareLinkRequest::getSharePwd() const {
  return sharePwd_;
}

void CreateCdsFileShareLinkRequest::setSharePwd(const std::string &sharePwd) {
  sharePwd_ = sharePwd;
  setParameter(std::string("SharePwd"), sharePwd);
}

std::string CreateCdsFileShareLinkRequest::getShareName() const {
  return shareName_;
}

void CreateCdsFileShareLinkRequest::setShareName(const std::string &shareName) {
  shareName_ = shareName;
  setParameter(std::string("ShareName"), shareName);
}

std::string CreateCdsFileShareLinkRequest::getEndUserId() const {
  return endUserId_;
}

void CreateCdsFileShareLinkRequest::setEndUserId(const std::string &endUserId) {
  endUserId_ = endUserId;
  setParameter(std::string("EndUserId"), endUserId);
}

bool CreateCdsFileShareLinkRequest::getDisableSave() const {
  return disableSave_;
}

void CreateCdsFileShareLinkRequest::setDisableSave(bool disableSave) {
  disableSave_ = disableSave;
  setParameter(std::string("DisableSave"), disableSave ? "true" : "false");
}

long CreateCdsFileShareLinkRequest::getDownloadLimit() const {
  return downloadLimit_;
}

void CreateCdsFileShareLinkRequest::setDownloadLimit(long downloadLimit) {
  downloadLimit_ = downloadLimit;
  setParameter(std::string("DownloadLimit"), std::to_string(downloadLimit));
}

std::string CreateCdsFileShareLinkRequest::getCdsId() const {
  return cdsId_;
}

void CreateCdsFileShareLinkRequest::setCdsId(const std::string &cdsId) {
  cdsId_ = cdsId;
  setParameter(std::string("CdsId"), cdsId);
}

long CreateCdsFileShareLinkRequest::getSaveLimit() const {
  return saveLimit_;
}

void CreateCdsFileShareLinkRequest::setSaveLimit(long saveLimit) {
  saveLimit_ = saveLimit;
  setParameter(std::string("SaveLimit"), std::to_string(saveLimit));
}

std::vector<std::string> CreateCdsFileShareLinkRequest::getFileIds() const {
  return fileIds_;
}

void CreateCdsFileShareLinkRequest::setFileIds(const std::vector<std::string> &fileIds) {
  fileIds_ = fileIds;
}

std::string CreateCdsFileShareLinkRequest::getExpiration() const {
  return expiration_;
}

void CreateCdsFileShareLinkRequest::setExpiration(const std::string &expiration) {
  expiration_ = expiration;
  setParameter(std::string("Expiration"), expiration);
}

