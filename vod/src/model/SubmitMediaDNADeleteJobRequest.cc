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

#include <alibabacloud/vod/model/SubmitMediaDNADeleteJobRequest.h>

using AlibabaCloud::Vod::Model::SubmitMediaDNADeleteJobRequest;

SubmitMediaDNADeleteJobRequest::SubmitMediaDNADeleteJobRequest()
    : RpcServiceRequest("vod", "2017-03-21", "SubmitMediaDNADeleteJob") {
  setMethod(HttpRequest::Method::Post);
}

SubmitMediaDNADeleteJobRequest::~SubmitMediaDNADeleteJobRequest() {}

std::string SubmitMediaDNADeleteJobRequest::getResourceOwnerId() const {
  return resourceOwnerId_;
}

void SubmitMediaDNADeleteJobRequest::setResourceOwnerId(const std::string &resourceOwnerId) {
  resourceOwnerId_ = resourceOwnerId;
  setParameter(std::string("ResourceOwnerId"), resourceOwnerId);
}

std::string SubmitMediaDNADeleteJobRequest::getFpDBId() const {
  return fpDBId_;
}

void SubmitMediaDNADeleteJobRequest::setFpDBId(const std::string &fpDBId) {
  fpDBId_ = fpDBId;
  setParameter(std::string("FpDBId"), fpDBId);
}

std::string SubmitMediaDNADeleteJobRequest::getAccessKeyId() const {
  return accessKeyId_;
}

void SubmitMediaDNADeleteJobRequest::setAccessKeyId(const std::string &accessKeyId) {
  accessKeyId_ = accessKeyId;
  setParameter(std::string("AccessKeyId"), accessKeyId);
}

std::string SubmitMediaDNADeleteJobRequest::getResourceOwnerAccount() const {
  return resourceOwnerAccount_;
}

void SubmitMediaDNADeleteJobRequest::setResourceOwnerAccount(const std::string &resourceOwnerAccount) {
  resourceOwnerAccount_ = resourceOwnerAccount;
  setParameter(std::string("ResourceOwnerAccount"), resourceOwnerAccount);
}

std::string SubmitMediaDNADeleteJobRequest::getOwnerAccount() const {
  return ownerAccount_;
}

void SubmitMediaDNADeleteJobRequest::setOwnerAccount(const std::string &ownerAccount) {
  ownerAccount_ = ownerAccount;
  setParameter(std::string("OwnerAccount"), ownerAccount);
}

std::string SubmitMediaDNADeleteJobRequest::getOwnerId() const {
  return ownerId_;
}

void SubmitMediaDNADeleteJobRequest::setOwnerId(const std::string &ownerId) {
  ownerId_ = ownerId;
  setParameter(std::string("OwnerId"), ownerId);
}

std::string SubmitMediaDNADeleteJobRequest::getMediaId() const {
  return mediaId_;
}

void SubmitMediaDNADeleteJobRequest::setMediaId(const std::string &mediaId) {
  mediaId_ = mediaId;
  setParameter(std::string("MediaId"), mediaId);
}

