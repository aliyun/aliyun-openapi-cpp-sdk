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

#include <alibabacloud/ehpc/model/MountNFSRequest.h>

using AlibabaCloud::EHPC::Model::MountNFSRequest;

MountNFSRequest::MountNFSRequest()
    : RpcServiceRequest("ehpc", "2018-04-12", "MountNFS") {
  setMethod(HttpRequest::Method::Get);
}

MountNFSRequest::~MountNFSRequest() {}

std::string MountNFSRequest::getMountDir() const {
  return mountDir_;
}

void MountNFSRequest::setMountDir(const std::string &mountDir) {
  mountDir_ = mountDir;
  setParameter(std::string("MountDir"), mountDir);
}

std::string MountNFSRequest::getAccessKeyId() const {
  return accessKeyId_;
}

void MountNFSRequest::setAccessKeyId(const std::string &accessKeyId) {
  accessKeyId_ = accessKeyId;
  setParameter(std::string("AccessKeyId"), accessKeyId);
}

std::string MountNFSRequest::getInstanceId() const {
  return instanceId_;
}

void MountNFSRequest::setInstanceId(const std::string &instanceId) {
  instanceId_ = instanceId;
  setParameter(std::string("InstanceId"), instanceId);
}

std::string MountNFSRequest::getRemoteDir() const {
  return remoteDir_;
}

void MountNFSRequest::setRemoteDir(const std::string &remoteDir) {
  remoteDir_ = remoteDir;
  setParameter(std::string("RemoteDir"), remoteDir);
}

std::string MountNFSRequest::getNfsDir() const {
  return nfsDir_;
}

void MountNFSRequest::setNfsDir(const std::string &nfsDir) {
  nfsDir_ = nfsDir;
  setParameter(std::string("NfsDir"), nfsDir);
}

std::string MountNFSRequest::getProtocolType() const {
  return protocolType_;
}

void MountNFSRequest::setProtocolType(const std::string &protocolType) {
  protocolType_ = protocolType;
  setParameter(std::string("ProtocolType"), protocolType);
}

