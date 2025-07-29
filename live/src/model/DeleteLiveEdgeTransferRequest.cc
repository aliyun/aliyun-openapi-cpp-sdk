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

#include <alibabacloud/live/model/DeleteLiveEdgeTransferRequest.h>

using AlibabaCloud::Live::Model::DeleteLiveEdgeTransferRequest;

DeleteLiveEdgeTransferRequest::DeleteLiveEdgeTransferRequest()
    : RpcServiceRequest("live", "2016-11-01", "DeleteLiveEdgeTransfer") {
  setMethod(HttpRequest::Method::Post);
}

DeleteLiveEdgeTransferRequest::~DeleteLiveEdgeTransferRequest() {}

std::string DeleteLiveEdgeTransferRequest::getRegionId() const {
  return regionId_;
}

void DeleteLiveEdgeTransferRequest::setRegionId(const std::string &regionId) {
  regionId_ = regionId;
  setParameter(std::string("RegionId"), regionId);
}

std::string DeleteLiveEdgeTransferRequest::getDomainName() const {
  return domainName_;
}

void DeleteLiveEdgeTransferRequest::setDomainName(const std::string &domainName) {
  domainName_ = domainName;
  setParameter(std::string("DomainName"), domainName);
}

long DeleteLiveEdgeTransferRequest::getOwnerId() const {
  return ownerId_;
}

void DeleteLiveEdgeTransferRequest::setOwnerId(long ownerId) {
  ownerId_ = ownerId;
  setParameter(std::string("OwnerId"), std::to_string(ownerId));
}

