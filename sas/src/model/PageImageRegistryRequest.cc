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

#include <alibabacloud/sas/model/PageImageRegistryRequest.h>

using AlibabaCloud::Sas::Model::PageImageRegistryRequest;

PageImageRegistryRequest::PageImageRegistryRequest()
    : RpcServiceRequest("sas", "2018-12-03", "PageImageRegistry") {
  setMethod(HttpRequest::Method::Post);
}

PageImageRegistryRequest::~PageImageRegistryRequest() {}

std::vector<std::string> PageImageRegistryRequest::getRegistryTypeNotInList() const {
  return registryTypeNotInList_;
}

void PageImageRegistryRequest::setRegistryTypeNotInList(const std::vector<std::string> &registryTypeNotInList) {
  registryTypeNotInList_ = registryTypeNotInList;
}

std::string PageImageRegistryRequest::getSourceIp() const {
  return sourceIp_;
}

void PageImageRegistryRequest::setSourceIp(const std::string &sourceIp) {
  sourceIp_ = sourceIp;
  setParameter(std::string("SourceIp"), sourceIp);
}

int PageImageRegistryRequest::getPageSize() const {
  return pageSize_;
}

void PageImageRegistryRequest::setPageSize(int pageSize) {
  pageSize_ = pageSize;
  setBodyParameter(std::string("PageSize"), std::to_string(pageSize));
}

std::string PageImageRegistryRequest::getRegistryNameLike() const {
  return registryNameLike_;
}

void PageImageRegistryRequest::setRegistryNameLike(const std::string &registryNameLike) {
  registryNameLike_ = registryNameLike;
  setBodyParameter(std::string("RegistryNameLike"), registryNameLike);
}

int PageImageRegistryRequest::getCurrentPage() const {
  return currentPage_;
}

void PageImageRegistryRequest::setCurrentPage(int currentPage) {
  currentPage_ = currentPage;
  setBodyParameter(std::string("CurrentPage"), std::to_string(currentPage));
}

std::vector<std::string> PageImageRegistryRequest::getRegistryTypeInList() const {
  return registryTypeInList_;
}

void PageImageRegistryRequest::setRegistryTypeInList(const std::vector<std::string> &registryTypeInList) {
  registryTypeInList_ = registryTypeInList;
}

