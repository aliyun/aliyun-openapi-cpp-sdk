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

#include <alibabacloud/ens/model/CreateFileSystemRequest.h>

using AlibabaCloud::Ens::Model::CreateFileSystemRequest;

CreateFileSystemRequest::CreateFileSystemRequest()
    : RpcServiceRequest("ens", "2017-11-10", "CreateFileSystem") {
  setMethod(HttpRequest::Method::Get);
}

CreateFileSystemRequest::~CreateFileSystemRequest() {}

std::vector<CreateFileSystemRequest::OrderDetails> CreateFileSystemRequest::getOrderDetails() const {
  return orderDetails_;
}

void CreateFileSystemRequest::setOrderDetails(const std::vector<CreateFileSystemRequest::OrderDetails> &orderDetails) {
  orderDetails_ = orderDetails;
  for(int dep1 = 0; dep1 != orderDetails.size(); dep1++) {
    setParameter(std::string("OrderDetails") + "." + std::to_string(dep1 + 1) + ".FileSystemName", orderDetails[dep1].fileSystemName);
    setParameter(std::string("OrderDetails") + "." + std::to_string(dep1 + 1) + ".EnsRegionId", orderDetails[dep1].ensRegionId);
    setParameter(std::string("OrderDetails") + "." + std::to_string(dep1 + 1) + ".MountTargetDomain", orderDetails[dep1].mountTargetDomain);
    setParameter(std::string("OrderDetails") + "." + std::to_string(dep1 + 1) + ".ProtocolType", orderDetails[dep1].protocolType);
    setParameter(std::string("OrderDetails") + "." + std::to_string(dep1 + 1) + ".NetworkId", orderDetails[dep1].networkId);
    setParameter(std::string("OrderDetails") + "." + std::to_string(dep1 + 1) + ".ChargeType", orderDetails[dep1].chargeType);
    setParameter(std::string("OrderDetails") + "." + std::to_string(dep1 + 1) + ".StorgeType", orderDetails[dep1].storgeType);
    setParameter(std::string("OrderDetails") + "." + std::to_string(dep1 + 1) + ".OrderType", orderDetails[dep1].orderType);
  }
}

