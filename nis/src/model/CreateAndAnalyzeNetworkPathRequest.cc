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

#include <alibabacloud/nis/model/CreateAndAnalyzeNetworkPathRequest.h>

using AlibabaCloud::Nis::Model::CreateAndAnalyzeNetworkPathRequest;

CreateAndAnalyzeNetworkPathRequest::CreateAndAnalyzeNetworkPathRequest()
    : RpcServiceRequest("nis", "2021-12-16", "CreateAndAnalyzeNetworkPath") {
  setMethod(HttpRequest::Method::Get);
}

CreateAndAnalyzeNetworkPathRequest::~CreateAndAnalyzeNetworkPathRequest() {}

std::string CreateAndAnalyzeNetworkPathRequest::getTargetId() const {
  return targetId_;
}

void CreateAndAnalyzeNetworkPathRequest::setTargetId(const std::string &targetId) {
  targetId_ = targetId;
  setParameter(std::string("TargetId"), targetId);
}

std::string CreateAndAnalyzeNetworkPathRequest::getTargetType() const {
  return targetType_;
}

void CreateAndAnalyzeNetworkPathRequest::setTargetType(const std::string &targetType) {
  targetType_ = targetType;
  setParameter(std::string("TargetType"), targetType);
}

std::string CreateAndAnalyzeNetworkPathRequest::getTargetIpAddress() const {
  return targetIpAddress_;
}

void CreateAndAnalyzeNetworkPathRequest::setTargetIpAddress(const std::string &targetIpAddress) {
  targetIpAddress_ = targetIpAddress;
  setParameter(std::string("TargetIpAddress"), targetIpAddress);
}

int CreateAndAnalyzeNetworkPathRequest::getSourcePort() const {
  return sourcePort_;
}

void CreateAndAnalyzeNetworkPathRequest::setSourcePort(int sourcePort) {
  sourcePort_ = sourcePort;
  setParameter(std::string("SourcePort"), std::to_string(sourcePort));
}

std::string CreateAndAnalyzeNetworkPathRequest::getProtocol() const {
  return protocol_;
}

void CreateAndAnalyzeNetworkPathRequest::setProtocol(const std::string &protocol) {
  protocol_ = protocol;
  setParameter(std::string("Protocol"), protocol);
}

std::string CreateAndAnalyzeNetworkPathRequest::getRegionId() const {
  return regionId_;
}

void CreateAndAnalyzeNetworkPathRequest::setRegionId(const std::string &regionId) {
  regionId_ = regionId;
  setParameter(std::string("RegionId"), regionId);
}

long CreateAndAnalyzeNetworkPathRequest::getSourceAliUid() const {
  return sourceAliUid_;
}

void CreateAndAnalyzeNetworkPathRequest::setSourceAliUid(long sourceAliUid) {
  sourceAliUid_ = sourceAliUid;
  setParameter(std::string("SourceAliUid"), std::to_string(sourceAliUid));
}

std::string CreateAndAnalyzeNetworkPathRequest::getSourceType() const {
  return sourceType_;
}

void CreateAndAnalyzeNetworkPathRequest::setSourceType(const std::string &sourceType) {
  sourceType_ = sourceType;
  setParameter(std::string("SourceType"), sourceType);
}

std::string CreateAndAnalyzeNetworkPathRequest::getAuditParam() const {
  return auditParam_;
}

void CreateAndAnalyzeNetworkPathRequest::setAuditParam(const std::string &auditParam) {
  auditParam_ = auditParam;
  setParameter(std::string("AuditParam"), auditParam);
}

int CreateAndAnalyzeNetworkPathRequest::getTargetPort() const {
  return targetPort_;
}

void CreateAndAnalyzeNetworkPathRequest::setTargetPort(int targetPort) {
  targetPort_ = targetPort;
  setParameter(std::string("TargetPort"), std::to_string(targetPort));
}

std::string CreateAndAnalyzeNetworkPathRequest::getSourceId() const {
  return sourceId_;
}

void CreateAndAnalyzeNetworkPathRequest::setSourceId(const std::string &sourceId) {
  sourceId_ = sourceId;
  setParameter(std::string("SourceId"), sourceId);
}

std::string CreateAndAnalyzeNetworkPathRequest::getSourceIpAddress() const {
  return sourceIpAddress_;
}

void CreateAndAnalyzeNetworkPathRequest::setSourceIpAddress(const std::string &sourceIpAddress) {
  sourceIpAddress_ = sourceIpAddress;
  setParameter(std::string("SourceIpAddress"), sourceIpAddress);
}

bool CreateAndAnalyzeNetworkPathRequest::getUseMultiAccount() const {
  return useMultiAccount_;
}

void CreateAndAnalyzeNetworkPathRequest::setUseMultiAccount(bool useMultiAccount) {
  useMultiAccount_ = useMultiAccount;
  setParameter(std::string("UseMultiAccount"), useMultiAccount ? "true" : "false");
}

long CreateAndAnalyzeNetworkPathRequest::getTargetAliUid() const {
  return targetAliUid_;
}

void CreateAndAnalyzeNetworkPathRequest::setTargetAliUid(long targetAliUid) {
  targetAliUid_ = targetAliUid;
  setParameter(std::string("TargetAliUid"), std::to_string(targetAliUid));
}

