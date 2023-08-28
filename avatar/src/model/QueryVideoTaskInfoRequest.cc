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

#include <alibabacloud/avatar/model/QueryVideoTaskInfoRequest.h>

using AlibabaCloud::Avatar::Model::QueryVideoTaskInfoRequest;

QueryVideoTaskInfoRequest::QueryVideoTaskInfoRequest()
    : RpcServiceRequest("avatar", "2022-01-30", "QueryVideoTaskInfo") {
  setMethod(HttpRequest::Method::Post);
}

QueryVideoTaskInfoRequest::~QueryVideoTaskInfoRequest() {}

QueryVideoTaskInfoRequest::App QueryVideoTaskInfoRequest::getApp() const {
  return app_;
}

void QueryVideoTaskInfoRequest::setApp(const QueryVideoTaskInfoRequest::App &app) {
  app_ = app;
  setParameter(std::string("App") + ".AppId", app.appId);
}

std::string QueryVideoTaskInfoRequest::getTitle() const {
  return title_;
}

void QueryVideoTaskInfoRequest::setTitle(const std::string &title) {
  title_ = title;
  setParameter(std::string("Title"), title);
}

int QueryVideoTaskInfoRequest::getType() const {
  return type_;
}

void QueryVideoTaskInfoRequest::setType(int type) {
  type_ = type;
  setParameter(std::string("Type"), std::to_string(type));
}

std::string QueryVideoTaskInfoRequest::getOrderById() const {
  return orderById_;
}

void QueryVideoTaskInfoRequest::setOrderById(const std::string &orderById) {
  orderById_ = orderById;
  setParameter(std::string("OrderById"), orderById);
}

int QueryVideoTaskInfoRequest::getPageNo() const {
  return pageNo_;
}

void QueryVideoTaskInfoRequest::setPageNo(int pageNo) {
  pageNo_ = pageNo;
  setParameter(std::string("PageNo"), std::to_string(pageNo));
}

long QueryVideoTaskInfoRequest::getTenantId() const {
  return tenantId_;
}

void QueryVideoTaskInfoRequest::setTenantId(long tenantId) {
  tenantId_ = tenantId;
  setParameter(std::string("TenantId"), std::to_string(tenantId));
}

int QueryVideoTaskInfoRequest::getPageSize() const {
  return pageSize_;
}

void QueryVideoTaskInfoRequest::setPageSize(int pageSize) {
  pageSize_ = pageSize;
  setParameter(std::string("PageSize"), std::to_string(pageSize));
}

std::string QueryVideoTaskInfoRequest::getTaskUuid() const {
  return taskUuid_;
}

void QueryVideoTaskInfoRequest::setTaskUuid(const std::string &taskUuid) {
  taskUuid_ = taskUuid;
  setParameter(std::string("TaskUuid"), taskUuid);
}

int QueryVideoTaskInfoRequest::getStatus() const {
  return status_;
}

void QueryVideoTaskInfoRequest::setStatus(int status) {
  status_ = status;
  setParameter(std::string("Status"), std::to_string(status));
}

