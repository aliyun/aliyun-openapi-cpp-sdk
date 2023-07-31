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

#include <alibabacloud/avatar/model/QueryAvatarListRequest.h>

using AlibabaCloud::Avatar::Model::QueryAvatarListRequest;

QueryAvatarListRequest::QueryAvatarListRequest()
    : RpcServiceRequest("avatar", "2022-01-30", "QueryAvatarList") {
  setMethod(HttpRequest::Method::Post);
}

QueryAvatarListRequest::~QueryAvatarListRequest() {}

std::string QueryAvatarListRequest::getModelType() const {
  return modelType_;
}

void QueryAvatarListRequest::setModelType(const std::string &modelType) {
  modelType_ = modelType;
  setParameter(std::string("ModelType"), modelType);
}

int QueryAvatarListRequest::getPageNo() const {
  return pageNo_;
}

void QueryAvatarListRequest::setPageNo(int pageNo) {
  pageNo_ = pageNo;
  setParameter(std::string("PageNo"), std::to_string(pageNo));
}

long QueryAvatarListRequest::getTenantId() const {
  return tenantId_;
}

void QueryAvatarListRequest::setTenantId(long tenantId) {
  tenantId_ = tenantId;
  setParameter(std::string("TenantId"), std::to_string(tenantId));
}

int QueryAvatarListRequest::getPageSize() const {
  return pageSize_;
}

void QueryAvatarListRequest::setPageSize(int pageSize) {
  pageSize_ = pageSize;
  setParameter(std::string("PageSize"), std::to_string(pageSize));
}

std::string QueryAvatarListRequest::getExtParams_CLS() const {
  return extParams_CLS_;
}

void QueryAvatarListRequest::setExtParams_CLS(const std::string &extParams_CLS) {
  extParams_CLS_ = extParams_CLS;
  setParameter(std::string("ExtParams_CLS"), extParams_CLS);
}

std::string QueryAvatarListRequest::getExtParams() const {
  return extParams_;
}

void QueryAvatarListRequest::setExtParams(const std::string &extParams) {
  extParams_ = extParams;
  setParameter(std::string("ExtParams"), extParams);
}

