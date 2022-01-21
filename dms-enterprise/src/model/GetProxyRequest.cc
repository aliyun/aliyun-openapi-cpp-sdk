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

#include <alibabacloud/dms-enterprise/model/GetProxyRequest.h>

using AlibabaCloud::Dms_enterprise::Model::GetProxyRequest;

GetProxyRequest::GetProxyRequest()
    : RpcServiceRequest("dms-enterprise", "2018-11-01", "GetProxy") {
  setMethod(HttpRequest::Method::Post);
}

GetProxyRequest::~GetProxyRequest() {}

long GetProxyRequest::getTid() const {
  return tid_;
}

void GetProxyRequest::setTid(long tid) {
  tid_ = tid;
  setParameter(std::string("Tid"), std::to_string(tid));
}

long GetProxyRequest::getInstanceId() const {
  return instanceId_;
}

void GetProxyRequest::setInstanceId(long instanceId) {
  instanceId_ = instanceId;
  setParameter(std::string("InstanceId"), std::to_string(instanceId));
}

long GetProxyRequest::getProxyId() const {
  return proxyId_;
}

void GetProxyRequest::setProxyId(long proxyId) {
  proxyId_ = proxyId;
  setParameter(std::string("ProxyId"), std::to_string(proxyId));
}

