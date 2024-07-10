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

#include <alibabacloud/mseap/model/GenerateUploadFilePolicyForPartnerRequest.h>

using AlibabaCloud::Mseap::Model::GenerateUploadFilePolicyForPartnerRequest;

GenerateUploadFilePolicyForPartnerRequest::GenerateUploadFilePolicyForPartnerRequest()
    : RpcServiceRequest("mseap", "2021-01-18", "GenerateUploadFilePolicyForPartner") {
  setMethod(HttpRequest::Method::Post);
}

GenerateUploadFilePolicyForPartnerRequest::~GenerateUploadFilePolicyForPartnerRequest() {}

std::string GenerateUploadFilePolicyForPartnerRequest::getFileType() const {
  return fileType_;
}

void GenerateUploadFilePolicyForPartnerRequest::setFileType(const std::string &fileType) {
  fileType_ = fileType;
  setParameter(std::string("FileType"), fileType);
}

std::string GenerateUploadFilePolicyForPartnerRequest::getBizType() const {
  return bizType_;
}

void GenerateUploadFilePolicyForPartnerRequest::setBizType(const std::string &bizType) {
  bizType_ = bizType;
  setParameter(std::string("BizType"), bizType);
}

std::string GenerateUploadFilePolicyForPartnerRequest::getFileName() const {
  return fileName_;
}

void GenerateUploadFilePolicyForPartnerRequest::setFileName(const std::string &fileName) {
  fileName_ = fileName;
  setParameter(std::string("FileName"), fileName);
}

