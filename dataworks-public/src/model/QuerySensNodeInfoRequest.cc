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

#include <alibabacloud/dataworks-public/model/QuerySensNodeInfoRequest.h>

using AlibabaCloud::Dataworks_public::Model::QuerySensNodeInfoRequest;

QuerySensNodeInfoRequest::QuerySensNodeInfoRequest()
    : RpcServiceRequest("dataworks-public", "2020-05-18", "QuerySensNodeInfo") {
  setMethod(HttpRequest::Method::Post);
}

QuerySensNodeInfoRequest::~QuerySensNodeInfoRequest() {}

int QuerySensNodeInfoRequest::getPageNo() const {
  return pageNo_;
}

void QuerySensNodeInfoRequest::setPageNo(int pageNo) {
  pageNo_ = pageNo;
  setBodyParameter(std::string("PageNo"), std::to_string(pageNo));
}

std::string QuerySensNodeInfoRequest::getTenantId() const {
  return tenantId_;
}

void QuerySensNodeInfoRequest::setTenantId(const std::string &tenantId) {
  tenantId_ = tenantId;
  setBodyParameter(std::string("TenantId"), tenantId);
}

int QuerySensNodeInfoRequest::getPageSize() const {
  return pageSize_;
}

void QuerySensNodeInfoRequest::setPageSize(int pageSize) {
  pageSize_ = pageSize;
  setBodyParameter(std::string("PageSize"), std::to_string(pageSize));
}

std::string QuerySensNodeInfoRequest::getSensitiveName() const {
  return sensitiveName_;
}

void QuerySensNodeInfoRequest::setSensitiveName(const std::string &sensitiveName) {
  sensitiveName_ = sensitiveName;
  setBodyParameter(std::string("SensitiveName"), sensitiveName);
}

std::string QuerySensNodeInfoRequest::getTemplateId() const {
  return templateId_;
}

void QuerySensNodeInfoRequest::setTemplateId(const std::string &templateId) {
  templateId_ = templateId;
  setBodyParameter(std::string("TemplateId"), templateId);
}

std::string QuerySensNodeInfoRequest::getNodeId() const {
  return nodeId_;
}

void QuerySensNodeInfoRequest::setNodeId(const std::string &nodeId) {
  nodeId_ = nodeId;
  setBodyParameter(std::string("NodeId"), nodeId);
}

int QuerySensNodeInfoRequest::getStatus() const {
  return status_;
}

void QuerySensNodeInfoRequest::setStatus(int status) {
  status_ = status;
  setBodyParameter(std::string("status"), std::to_string(status));
}

