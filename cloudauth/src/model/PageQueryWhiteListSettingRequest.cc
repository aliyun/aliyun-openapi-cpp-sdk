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

#include <alibabacloud/cloudauth/model/PageQueryWhiteListSettingRequest.h>

using AlibabaCloud::Cloudauth::Model::PageQueryWhiteListSettingRequest;

PageQueryWhiteListSettingRequest::PageQueryWhiteListSettingRequest()
    : RpcServiceRequest("cloudauth", "2019-03-07", "PageQueryWhiteListSetting") {
  setMethod(HttpRequest::Method::Post);
}

PageQueryWhiteListSettingRequest::~PageQueryWhiteListSettingRequest() {}

std::string PageQueryWhiteListSettingRequest::getValidEndDate() const {
  return validEndDate_;
}

void PageQueryWhiteListSettingRequest::setValidEndDate(const std::string &validEndDate) {
  validEndDate_ = validEndDate;
  setParameter(std::string("ValidEndDate"), validEndDate);
}

std::string PageQueryWhiteListSettingRequest::getCertifyId() const {
  return certifyId_;
}

void PageQueryWhiteListSettingRequest::setCertifyId(const std::string &certifyId) {
  certifyId_ = certifyId;
  setParameter(std::string("CertifyId"), certifyId);
}

std::string PageQueryWhiteListSettingRequest::getCertNo() const {
  return certNo_;
}

void PageQueryWhiteListSettingRequest::setCertNo(const std::string &certNo) {
  certNo_ = certNo;
  setParameter(std::string("CertNo"), certNo);
}

int PageQueryWhiteListSettingRequest::getPageSize() const {
  return pageSize_;
}

void PageQueryWhiteListSettingRequest::setPageSize(int pageSize) {
  pageSize_ = pageSize;
  setParameter(std::string("PageSize"), std::to_string(pageSize));
}

int PageQueryWhiteListSettingRequest::getCurrentPage() const {
  return currentPage_;
}

void PageQueryWhiteListSettingRequest::setCurrentPage(int currentPage) {
  currentPage_ = currentPage;
  setParameter(std::string("CurrentPage"), std::to_string(currentPage));
}

std::string PageQueryWhiteListSettingRequest::getServiceCode() const {
  return serviceCode_;
}

void PageQueryWhiteListSettingRequest::setServiceCode(const std::string &serviceCode) {
  serviceCode_ = serviceCode;
  setParameter(std::string("ServiceCode"), serviceCode);
}

long PageQueryWhiteListSettingRequest::getSceneId() const {
  return sceneId_;
}

void PageQueryWhiteListSettingRequest::setSceneId(long sceneId) {
  sceneId_ = sceneId;
  setParameter(std::string("SceneId"), std::to_string(sceneId));
}

std::string PageQueryWhiteListSettingRequest::getValidStartDate() const {
  return validStartDate_;
}

void PageQueryWhiteListSettingRequest::setValidStartDate(const std::string &validStartDate) {
  validStartDate_ = validStartDate;
  setParameter(std::string("ValidStartDate"), validStartDate);
}

std::string PageQueryWhiteListSettingRequest::getStatus() const {
  return status_;
}

void PageQueryWhiteListSettingRequest::setStatus(const std::string &status) {
  status_ = status;
  setParameter(std::string("Status"), status);
}

