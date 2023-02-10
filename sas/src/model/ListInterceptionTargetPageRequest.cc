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

#include <alibabacloud/sas/model/ListInterceptionTargetPageRequest.h>

using AlibabaCloud::Sas::Model::ListInterceptionTargetPageRequest;

ListInterceptionTargetPageRequest::ListInterceptionTargetPageRequest()
    : RpcServiceRequest("sas", "2018-12-03", "ListInterceptionTargetPage") {
  setMethod(HttpRequest::Method::Post);
}

ListInterceptionTargetPageRequest::~ListInterceptionTargetPageRequest() {}

std::string ListInterceptionTargetPageRequest::getTargetType() const {
  return targetType_;
}

void ListInterceptionTargetPageRequest::setTargetType(const std::string &targetType) {
  targetType_ = targetType;
  setParameter(std::string("TargetType"), targetType);
}

std::vector<std::string> ListInterceptionTargetPageRequest::getImageList() const {
  return imageList_;
}

void ListInterceptionTargetPageRequest::setImageList(const std::vector<std::string> &imageList) {
  imageList_ = imageList;
}

std::vector<std::string> ListInterceptionTargetPageRequest::getTagList() const {
  return tagList_;
}

void ListInterceptionTargetPageRequest::setTagList(const std::vector<std::string> &tagList) {
  tagList_ = tagList;
}

std::string ListInterceptionTargetPageRequest::getTargetName() const {
  return targetName_;
}

void ListInterceptionTargetPageRequest::setTargetName(const std::string &targetName) {
  targetName_ = targetName;
  setParameter(std::string("TargetName"), targetName);
}

std::string ListInterceptionTargetPageRequest::getSourceIp() const {
  return sourceIp_;
}

void ListInterceptionTargetPageRequest::setSourceIp(const std::string &sourceIp) {
  sourceIp_ = sourceIp;
  setParameter(std::string("SourceIp"), sourceIp);
}

std::string ListInterceptionTargetPageRequest::getAppName() const {
  return appName_;
}

void ListInterceptionTargetPageRequest::setAppName(const std::string &appName) {
  appName_ = appName;
  setParameter(std::string("AppName"), appName);
}

int ListInterceptionTargetPageRequest::getPageSize() const {
  return pageSize_;
}

void ListInterceptionTargetPageRequest::setPageSize(int pageSize) {
  pageSize_ = pageSize;
  setParameter(std::string("PageSize"), std::to_string(pageSize));
}

int ListInterceptionTargetPageRequest::getCurrentPage() const {
  return currentPage_;
}

void ListInterceptionTargetPageRequest::setCurrentPage(int currentPage) {
  currentPage_ = currentPage;
  setParameter(std::string("CurrentPage"), std::to_string(currentPage));
}

std::string ListInterceptionTargetPageRequest::get_Namespace() const {
  return _namespace_;
}

void ListInterceptionTargetPageRequest::set_Namespace(const std::string &_namespace) {
  _namespace_ = _namespace;
  setParameter(std::string("Namespace"), _namespace);
}

