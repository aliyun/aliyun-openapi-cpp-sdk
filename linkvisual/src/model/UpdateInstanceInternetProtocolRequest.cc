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

#include <alibabacloud/linkvisual/model/UpdateInstanceInternetProtocolRequest.h>

using AlibabaCloud::Linkvisual::Model::UpdateInstanceInternetProtocolRequest;

UpdateInstanceInternetProtocolRequest::UpdateInstanceInternetProtocolRequest()
    : RpcServiceRequest("linkvisual", "2018-01-20", "UpdateInstanceInternetProtocol") {
  setMethod(HttpRequest::Method::Post);
}

UpdateInstanceInternetProtocolRequest::~UpdateInstanceInternetProtocolRequest() {}

std::string UpdateInstanceInternetProtocolRequest::getIotInstanceId() const {
  return iotInstanceId_;
}

void UpdateInstanceInternetProtocolRequest::setIotInstanceId(const std::string &iotInstanceId) {
  iotInstanceId_ = iotInstanceId;
  setParameter(std::string("IotInstanceId"), iotInstanceId);
}

std::string UpdateInstanceInternetProtocolRequest::getIpVersion() const {
  return ipVersion_;
}

void UpdateInstanceInternetProtocolRequest::setIpVersion(const std::string &ipVersion) {
  ipVersion_ = ipVersion;
  setParameter(std::string("IpVersion"), ipVersion);
}

std::string UpdateInstanceInternetProtocolRequest::getApiProduct() const {
  return apiProduct_;
}

void UpdateInstanceInternetProtocolRequest::setApiProduct(const std::string &apiProduct) {
  apiProduct_ = apiProduct;
  setBodyParameter(std::string("ApiProduct"), apiProduct);
}

std::string UpdateInstanceInternetProtocolRequest::getApiRevision() const {
  return apiRevision_;
}

void UpdateInstanceInternetProtocolRequest::setApiRevision(const std::string &apiRevision) {
  apiRevision_ = apiRevision;
  setBodyParameter(std::string("ApiRevision"), apiRevision);
}

