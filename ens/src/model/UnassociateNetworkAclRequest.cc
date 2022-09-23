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

#include <alibabacloud/ens/model/UnassociateNetworkAclRequest.h>

using AlibabaCloud::Ens::Model::UnassociateNetworkAclRequest;

UnassociateNetworkAclRequest::UnassociateNetworkAclRequest()
    : RpcServiceRequest("ens", "2017-11-10", "UnassociateNetworkAcl") {
  setMethod(HttpRequest::Method::Post);
}

UnassociateNetworkAclRequest::~UnassociateNetworkAclRequest() {}

std::string UnassociateNetworkAclRequest::getNetworkAclId() const {
  return networkAclId_;
}

void UnassociateNetworkAclRequest::setNetworkAclId(const std::string &networkAclId) {
  networkAclId_ = networkAclId;
  setParameter(std::string("NetworkAclId"), networkAclId);
}

std::vector<UnassociateNetworkAclRequest::Resource> UnassociateNetworkAclRequest::getResource() const {
  return resource_;
}

void UnassociateNetworkAclRequest::setResource(const std::vector<UnassociateNetworkAclRequest::Resource> &resource) {
  resource_ = resource;
  for(int dep1 = 0; dep1 != resource.size(); dep1++) {
    setParameter(std::string("Resource") + "." + std::to_string(dep1 + 1) + ".ResourceId", resource[dep1].resourceId);
    setParameter(std::string("Resource") + "." + std::to_string(dep1 + 1) + ".ResourceType", resource[dep1].resourceType);
  }
}

