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

#include <alibabacloud/adb/model/GetViewDDLRequest.h>

using AlibabaCloud::Adb::Model::GetViewDDLRequest;

GetViewDDLRequest::GetViewDDLRequest()
    : RpcServiceRequest("adb", "2021-12-01", "GetViewDDL") {
  setMethod(HttpRequest::Method::Post);
}

GetViewDDLRequest::~GetViewDDLRequest() {}

std::string GetViewDDLRequest::getSchemaName() const {
  return schemaName_;
}

void GetViewDDLRequest::setSchemaName(const std::string &schemaName) {
  schemaName_ = schemaName;
  setParameter(std::string("SchemaName"), schemaName);
}

std::string GetViewDDLRequest::getViewName() const {
  return viewName_;
}

void GetViewDDLRequest::setViewName(const std::string &viewName) {
  viewName_ = viewName;
  setParameter(std::string("ViewName"), viewName);
}

std::string GetViewDDLRequest::getDBClusterId() const {
  return dBClusterId_;
}

void GetViewDDLRequest::setDBClusterId(const std::string &dBClusterId) {
  dBClusterId_ = dBClusterId;
  setParameter(std::string("DBClusterId"), dBClusterId);
}

std::string GetViewDDLRequest::getRegionId() const {
  return regionId_;
}

void GetViewDDLRequest::setRegionId(const std::string &regionId) {
  regionId_ = regionId;
  setParameter(std::string("RegionId"), regionId);
}

