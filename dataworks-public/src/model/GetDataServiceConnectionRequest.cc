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

#include <alibabacloud/dataworks-public/model/GetDataServiceConnectionRequest.h>

using AlibabaCloud::Dataworks_public::Model::GetDataServiceConnectionRequest;

GetDataServiceConnectionRequest::GetDataServiceConnectionRequest()
    : RpcServiceRequest("dataworks-public", "2018-06-01", "GetDataServiceConnection") {
  setMethod(HttpRequest::Method::Get);
}

GetDataServiceConnectionRequest::~GetDataServiceConnectionRequest() {}

std::string GetDataServiceConnectionRequest::getDataSourceType() const {
  return dataSourceType_;
}

void GetDataServiceConnectionRequest::setDataSourceType(const std::string &dataSourceType) {
  dataSourceType_ = dataSourceType;
  setParameter(std::string("DataSourceType"), dataSourceType);
}

long GetDataServiceConnectionRequest::getConnectionId() const {
  return connectionId_;
}

void GetDataServiceConnectionRequest::setConnectionId(long connectionId) {
  connectionId_ = connectionId;
  setParameter(std::string("ConnectionId"), std::to_string(connectionId));
}

