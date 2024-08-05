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

#include <alibabacloud/arms/model/QueryAppMetadataRequest.h>

using AlibabaCloud::ARMS::Model::QueryAppMetadataRequest;

QueryAppMetadataRequest::QueryAppMetadataRequest()
    : RpcServiceRequest("arms", "2019-08-08", "QueryAppMetadata") {
  setMethod(HttpRequest::Method::Get);
}

QueryAppMetadataRequest::~QueryAppMetadataRequest() {}

std::string QueryAppMetadataRequest::getMetaIds() const {
  return metaIds_;
}

void QueryAppMetadataRequest::setMetaIds(const std::string &metaIds) {
  metaIds_ = metaIds;
  setParameter(std::string("MetaIds"), metaIds);
}

std::string QueryAppMetadataRequest::getRegionId() const {
  return regionId_;
}

void QueryAppMetadataRequest::setRegionId(const std::string &regionId) {
  regionId_ = regionId;
  setParameter(std::string("RegionId"), regionId);
}

std::string QueryAppMetadataRequest::getMetaType() const {
  return metaType_;
}

void QueryAppMetadataRequest::setMetaType(const std::string &metaType) {
  metaType_ = metaType;
  setParameter(std::string("MetaType"), metaType);
}

std::string QueryAppMetadataRequest::getPid() const {
  return pid_;
}

void QueryAppMetadataRequest::setPid(const std::string &pid) {
  pid_ = pid;
  setParameter(std::string("Pid"), pid);
}

std::string QueryAppMetadataRequest::getAccessKeyId() const {
  return accessKeyId_;
}

void QueryAppMetadataRequest::setAccessKeyId(const std::string &accessKeyId) {
  accessKeyId_ = accessKeyId;
  setParameter(std::string("AccessKeyId"), accessKeyId);
}

