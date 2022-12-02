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

#include <alibabacloud/sas/model/DescribeImageSensitiveFileByKeyRequest.h>

using AlibabaCloud::Sas::Model::DescribeImageSensitiveFileByKeyRequest;

DescribeImageSensitiveFileByKeyRequest::DescribeImageSensitiveFileByKeyRequest()
    : RpcServiceRequest("sas", "2018-12-03", "DescribeImageSensitiveFileByKey") {
  setMethod(HttpRequest::Method::Post);
}

DescribeImageSensitiveFileByKeyRequest::~DescribeImageSensitiveFileByKeyRequest() {}

std::string DescribeImageSensitiveFileByKeyRequest::getSensitiveFileKey() const {
  return sensitiveFileKey_;
}

void DescribeImageSensitiveFileByKeyRequest::setSensitiveFileKey(const std::string &sensitiveFileKey) {
  sensitiveFileKey_ = sensitiveFileKey;
  setParameter(std::string("SensitiveFileKey"), sensitiveFileKey);
}

std::vector<DescribeImageSensitiveFileByKeyRequest::std::string> DescribeImageSensitiveFileByKeyRequest::getScanRange() const {
  return scanRange_;
}

void DescribeImageSensitiveFileByKeyRequest::setScanRange(const std::vector<DescribeImageSensitiveFileByKeyRequest::std::string> &scanRange) {
  scanRange_ = scanRange;
  for(int dep1 = 0; dep1 != scanRange.size(); dep1++) {
    setParameter(std::string("ScanRange") + "." + std::to_string(dep1 + 1), scanRange[dep1]);
  }
}

int DescribeImageSensitiveFileByKeyRequest::getPageSize() const {
  return pageSize_;
}

void DescribeImageSensitiveFileByKeyRequest::setPageSize(int pageSize) {
  pageSize_ = pageSize;
  setParameter(std::string("PageSize"), std::to_string(pageSize));
}

std::string DescribeImageSensitiveFileByKeyRequest::getLang() const {
  return lang_;
}

void DescribeImageSensitiveFileByKeyRequest::setLang(const std::string &lang) {
  lang_ = lang;
  setParameter(std::string("Lang"), lang);
}

std::string DescribeImageSensitiveFileByKeyRequest::getImageUuid() const {
  return imageUuid_;
}

void DescribeImageSensitiveFileByKeyRequest::setImageUuid(const std::string &imageUuid) {
  imageUuid_ = imageUuid;
  setParameter(std::string("ImageUuid"), imageUuid);
}

int DescribeImageSensitiveFileByKeyRequest::getCurrentPage() const {
  return currentPage_;
}

void DescribeImageSensitiveFileByKeyRequest::setCurrentPage(int currentPage) {
  currentPage_ = currentPage;
  setParameter(std::string("CurrentPage"), std::to_string(currentPage));
}

