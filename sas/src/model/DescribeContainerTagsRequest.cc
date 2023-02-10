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

#include <alibabacloud/sas/model/DescribeContainerTagsRequest.h>

using AlibabaCloud::Sas::Model::DescribeContainerTagsRequest;

DescribeContainerTagsRequest::DescribeContainerTagsRequest()
    : RpcServiceRequest("sas", "2018-12-03", "DescribeContainerTags") {
  setMethod(HttpRequest::Method::Post);
}

DescribeContainerTagsRequest::~DescribeContainerTagsRequest() {}

std::string DescribeContainerTagsRequest::getSourceIp() const {
  return sourceIp_;
}

void DescribeContainerTagsRequest::setSourceIp(const std::string &sourceIp) {
  sourceIp_ = sourceIp;
  setParameter(std::string("SourceIp"), sourceIp);
}

std::string DescribeContainerTagsRequest::getAppName() const {
  return appName_;
}

void DescribeContainerTagsRequest::setAppName(const std::string &appName) {
  appName_ = appName;
  setParameter(std::string("AppName"), appName);
}

int DescribeContainerTagsRequest::getPageSize() const {
  return pageSize_;
}

void DescribeContainerTagsRequest::setPageSize(int pageSize) {
  pageSize_ = pageSize;
  setParameter(std::string("PageSize"), std::to_string(pageSize));
}

std::string DescribeContainerTagsRequest::getFieldValue() const {
  return fieldValue_;
}

void DescribeContainerTagsRequest::setFieldValue(const std::string &fieldValue) {
  fieldValue_ = fieldValue;
  setParameter(std::string("FieldValue"), fieldValue);
}

int DescribeContainerTagsRequest::getCurrentPage() const {
  return currentPage_;
}

void DescribeContainerTagsRequest::setCurrentPage(int currentPage) {
  currentPage_ = currentPage;
  setParameter(std::string("CurrentPage"), std::to_string(currentPage));
}

std::string DescribeContainerTagsRequest::getClusterId() const {
  return clusterId_;
}

void DescribeContainerTagsRequest::setClusterId(const std::string &clusterId) {
  clusterId_ = clusterId;
  setParameter(std::string("ClusterId"), clusterId);
}

std::string DescribeContainerTagsRequest::getFieldName() const {
  return fieldName_;
}

void DescribeContainerTagsRequest::setFieldName(const std::string &fieldName) {
  fieldName_ = fieldName;
  setParameter(std::string("FieldName"), fieldName);
}

std::string DescribeContainerTagsRequest::get_Namespace() const {
  return _namespace_;
}

void DescribeContainerTagsRequest::set_Namespace(const std::string &_namespace) {
  _namespace_ = _namespace;
  setParameter(std::string("Namespace"), _namespace);
}

