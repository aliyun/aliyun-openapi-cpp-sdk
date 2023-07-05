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

#include <alibabacloud/privatelink/model/NotifyResourceAddressFamilyRequest.h>

using AlibabaCloud::Privatelink::Model::NotifyResourceAddressFamilyRequest;

NotifyResourceAddressFamilyRequest::NotifyResourceAddressFamilyRequest()
    : RpcServiceRequest("privatelink", "2020-04-15", "NotifyResourceAddressFamily") {
  setMethod(HttpRequest::Method::Post);
}

NotifyResourceAddressFamilyRequest::~NotifyResourceAddressFamilyRequest() {}

std::string NotifyResourceAddressFamilyRequest::getResourceId() const {
  return resourceId_;
}

void NotifyResourceAddressFamilyRequest::setResourceId(const std::string &resourceId) {
  resourceId_ = resourceId;
  setParameter(std::string("ResourceId"), resourceId);
}

std::string NotifyResourceAddressFamilyRequest::getResourceType() const {
  return resourceType_;
}

void NotifyResourceAddressFamilyRequest::setResourceType(const std::string &resourceType) {
  resourceType_ = resourceType;
  setParameter(std::string("ResourceType"), resourceType);
}

std::string NotifyResourceAddressFamilyRequest::getAddressFamily() const {
  return addressFamily_;
}

void NotifyResourceAddressFamilyRequest::setAddressFamily(const std::string &addressFamily) {
  addressFamily_ = addressFamily;
  setParameter(std::string("AddressFamily"), addressFamily);
}

std::string NotifyResourceAddressFamilyRequest::getIpv6Address() const {
  return ipv6Address_;
}

void NotifyResourceAddressFamilyRequest::setIpv6Address(const std::string &ipv6Address) {
  ipv6Address_ = ipv6Address;
  setParameter(std::string("Ipv6Address"), ipv6Address);
}

