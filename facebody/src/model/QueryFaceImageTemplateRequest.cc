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

#include <alibabacloud/facebody/model/QueryFaceImageTemplateRequest.h>

using AlibabaCloud::Facebody::Model::QueryFaceImageTemplateRequest;

QueryFaceImageTemplateRequest::QueryFaceImageTemplateRequest()
    : RpcServiceRequest("facebody", "2019-12-30", "QueryFaceImageTemplate") {
  setMethod(HttpRequest::Method::Get);
}

QueryFaceImageTemplateRequest::~QueryFaceImageTemplateRequest() {}

bool QueryFaceImageTemplateRequest::getFormatResultToJson() const {
  return formatResultToJson_;
}

void QueryFaceImageTemplateRequest::setFormatResultToJson(bool formatResultToJson) {
  formatResultToJson_ = formatResultToJson;
  setParameter(std::string("FormatResultToJson"), formatResultToJson ? "true" : "false");
}

std::string QueryFaceImageTemplateRequest::getUserId() const {
  return userId_;
}

void QueryFaceImageTemplateRequest::setUserId(const std::string &userId) {
  userId_ = userId;
  setParameter(std::string("UserId"), userId);
}

long QueryFaceImageTemplateRequest::getPageSize() const {
  return pageSize_;
}

void QueryFaceImageTemplateRequest::setPageSize(long pageSize) {
  pageSize_ = pageSize;
  setParameter(std::string("PageSize"), std::to_string(pageSize));
}

std::string QueryFaceImageTemplateRequest::getOssFile() const {
  return ossFile_;
}

void QueryFaceImageTemplateRequest::setOssFile(const std::string &ossFile) {
  ossFile_ = ossFile;
  setParameter(std::string("OssFile"), ossFile);
}

std::string QueryFaceImageTemplateRequest::getTemplateId() const {
  return templateId_;
}

void QueryFaceImageTemplateRequest::setTemplateId(const std::string &templateId) {
  templateId_ = templateId;
  setParameter(std::string("TemplateId"), templateId);
}

std::string QueryFaceImageTemplateRequest::getRequestProxyBy() const {
  return requestProxyBy_;
}

void QueryFaceImageTemplateRequest::setRequestProxyBy(const std::string &requestProxyBy) {
  requestProxyBy_ = requestProxyBy;
  setParameter(std::string("RequestProxyBy"), requestProxyBy);
}

long QueryFaceImageTemplateRequest::getPageNo() const {
  return pageNo_;
}

void QueryFaceImageTemplateRequest::setPageNo(long pageNo) {
  pageNo_ = pageNo;
  setParameter(std::string("PageNo"), std::to_string(pageNo));
}

