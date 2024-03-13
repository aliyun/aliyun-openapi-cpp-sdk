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

#include <alibabacloud/videoenhan/model/QueryFaceVideoTemplateRequest.h>

using AlibabaCloud::Videoenhan::Model::QueryFaceVideoTemplateRequest;

QueryFaceVideoTemplateRequest::QueryFaceVideoTemplateRequest()
    : RpcServiceRequest("videoenhan", "2020-03-20", "QueryFaceVideoTemplate") {
  setMethod(HttpRequest::Method::Post);
}

QueryFaceVideoTemplateRequest::~QueryFaceVideoTemplateRequest() {}

std::string QueryFaceVideoTemplateRequest::getUserId() const {
  return userId_;
}

void QueryFaceVideoTemplateRequest::setUserId(const std::string &userId) {
  userId_ = userId;
  setParameter(std::string("UserId"), userId);
}

long QueryFaceVideoTemplateRequest::getPageSize() const {
  return pageSize_;
}

void QueryFaceVideoTemplateRequest::setPageSize(long pageSize) {
  pageSize_ = pageSize;
  setParameter(std::string("PageSize"), std::to_string(pageSize));
}

std::string QueryFaceVideoTemplateRequest::getTemplateId() const {
  return templateId_;
}

void QueryFaceVideoTemplateRequest::setTemplateId(const std::string &templateId) {
  templateId_ = templateId;
  setParameter(std::string("TemplateId"), templateId);
}

long QueryFaceVideoTemplateRequest::getPageNo() const {
  return pageNo_;
}

void QueryFaceVideoTemplateRequest::setPageNo(long pageNo) {
  pageNo_ = pageNo;
  setParameter(std::string("PageNo"), std::to_string(pageNo));
}

