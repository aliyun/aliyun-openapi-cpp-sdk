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

#include <alibabacloud/waf-openapi/model/CreateDomainRequest.h>

using AlibabaCloud::Waf_openapi::Model::CreateDomainRequest;

CreateDomainRequest::CreateDomainRequest()
    : RpcServiceRequest("waf-openapi", "2019-09-10", "CreateDomain") {
  setMethod(HttpRequest::Method::Post);
}

CreateDomainRequest::~CreateDomainRequest() {}

int CreateDomainRequest::getIpFollowStatus() const {
  return ipFollowStatus_;
}

void CreateDomainRequest::setIpFollowStatus(int ipFollowStatus) {
  ipFollowStatus_ = ipFollowStatus;
  setParameter(std::string("IpFollowStatus"), std::to_string(ipFollowStatus));
}

bool CreateDomainRequest::getKeepalive() const {
  return keepalive_;
}

void CreateDomainRequest::setKeepalive(bool keepalive) {
  keepalive_ = keepalive;
  setParameter(std::string("Keepalive"), keepalive ? "true" : "false");
}

std::string CreateDomainRequest::getSniHost() const {
  return sniHost_;
}

void CreateDomainRequest::setSniHost(const std::string &sniHost) {
  sniHost_ = sniHost;
  setParameter(std::string("SniHost"), sniHost);
}

std::string CreateDomainRequest::getResourceGroupId() const {
  return resourceGroupId_;
}

void CreateDomainRequest::setResourceGroupId(const std::string &resourceGroupId) {
  resourceGroupId_ = resourceGroupId;
  setParameter(std::string("ResourceGroupId"), resourceGroupId);
}

std::string CreateDomainRequest::getSourceIp() const {
  return sourceIp_;
}

void CreateDomainRequest::setSourceIp(const std::string &sourceIp) {
  sourceIp_ = sourceIp;
  setParameter(std::string("SourceIp"), sourceIp);
}

std::string CreateDomainRequest::getHttpPort() const {
  return httpPort_;
}

void CreateDomainRequest::setHttpPort(const std::string &httpPort) {
  httpPort_ = httpPort;
  setParameter(std::string("HttpPort"), httpPort);
}

std::string CreateDomainRequest::getHttp2Port() const {
  return http2Port_;
}

void CreateDomainRequest::setHttp2Port(const std::string &http2Port) {
  http2Port_ = http2Port;
  setParameter(std::string("Http2Port"), http2Port);
}

int CreateDomainRequest::getWriteTime() const {
  return writeTime_;
}

void CreateDomainRequest::setWriteTime(int writeTime) {
  writeTime_ = writeTime;
  setParameter(std::string("WriteTime"), std::to_string(writeTime));
}

int CreateDomainRequest::getAccessHeaderMode() const {
  return accessHeaderMode_;
}

void CreateDomainRequest::setAccessHeaderMode(int accessHeaderMode) {
  accessHeaderMode_ = accessHeaderMode;
  setParameter(std::string("AccessHeaderMode"), std::to_string(accessHeaderMode));
}

std::string CreateDomainRequest::getAccessHeaders() const {
  return accessHeaders_;
}

void CreateDomainRequest::setAccessHeaders(const std::string &accessHeaders) {
  accessHeaders_ = accessHeaders;
  setParameter(std::string("AccessHeaders"), accessHeaders);
}

int CreateDomainRequest::getKeepaliveTimeout() const {
  return keepaliveTimeout_;
}

void CreateDomainRequest::setKeepaliveTimeout(int keepaliveTimeout) {
  keepaliveTimeout_ = keepaliveTimeout;
  setParameter(std::string("KeepaliveTimeout"), std::to_string(keepaliveTimeout));
}

int CreateDomainRequest::getClusterType() const {
  return clusterType_;
}

void CreateDomainRequest::setClusterType(int clusterType) {
  clusterType_ = clusterType;
  setParameter(std::string("ClusterType"), std::to_string(clusterType));
}

int CreateDomainRequest::getHttpsRedirect() const {
  return httpsRedirect_;
}

void CreateDomainRequest::setHttpsRedirect(int httpsRedirect) {
  httpsRedirect_ = httpsRedirect;
  setParameter(std::string("HttpsRedirect"), std::to_string(httpsRedirect));
}

std::string CreateDomainRequest::getInstanceId() const {
  return instanceId_;
}

void CreateDomainRequest::setInstanceId(const std::string &instanceId) {
  instanceId_ = instanceId;
  setParameter(std::string("InstanceId"), instanceId);
}

std::string CreateDomainRequest::getDomain() const {
  return domain_;
}

void CreateDomainRequest::setDomain(const std::string &domain) {
  domain_ = domain;
  setParameter(std::string("Domain"), domain);
}

int CreateDomainRequest::getReadTime() const {
  return readTime_;
}

void CreateDomainRequest::setReadTime(int readTime) {
  readTime_ = readTime;
  setParameter(std::string("ReadTime"), std::to_string(readTime));
}

std::string CreateDomainRequest::getHttpsPort() const {
  return httpsPort_;
}

void CreateDomainRequest::setHttpsPort(const std::string &httpsPort) {
  httpsPort_ = httpsPort;
  setParameter(std::string("HttpsPort"), httpsPort);
}

std::string CreateDomainRequest::getRegionId() const {
  return regionId_;
}

void CreateDomainRequest::setRegionId(const std::string &regionId) {
  regionId_ = regionId;
  setParameter(std::string("RegionId"), regionId);
}

int CreateDomainRequest::getSniStatus() const {
  return sniStatus_;
}

void CreateDomainRequest::setSniStatus(int sniStatus) {
  sniStatus_ = sniStatus;
  setParameter(std::string("SniStatus"), std::to_string(sniStatus));
}

std::string CreateDomainRequest::getLang() const {
  return lang_;
}

void CreateDomainRequest::setLang(const std::string &lang) {
  lang_ = lang;
  setParameter(std::string("Lang"), lang);
}

bool CreateDomainRequest::getRetry() const {
  return retry_;
}

void CreateDomainRequest::setRetry(bool retry) {
  retry_ = retry;
  setParameter(std::string("Retry"), retry ? "true" : "false");
}

int CreateDomainRequest::getKeepaliveRequests() const {
  return keepaliveRequests_;
}

void CreateDomainRequest::setKeepaliveRequests(int keepaliveRequests) {
  keepaliveRequests_ = keepaliveRequests;
  setParameter(std::string("KeepaliveRequests"), std::to_string(keepaliveRequests));
}

std::string CreateDomainRequest::getAccessType() const {
  return accessType_;
}

void CreateDomainRequest::setAccessType(const std::string &accessType) {
  accessType_ = accessType;
  setParameter(std::string("AccessType"), accessType);
}

std::string CreateDomainRequest::getLogHeaders() const {
  return logHeaders_;
}

void CreateDomainRequest::setLogHeaders(const std::string &logHeaders) {
  logHeaders_ = logHeaders;
  setParameter(std::string("LogHeaders"), logHeaders);
}

int CreateDomainRequest::getConnectionTime() const {
  return connectionTime_;
}

void CreateDomainRequest::setConnectionTime(int connectionTime) {
  connectionTime_ = connectionTime;
  setParameter(std::string("ConnectionTime"), std::to_string(connectionTime));
}

std::string CreateDomainRequest::getCloudNativeInstances() const {
  return cloudNativeInstances_;
}

void CreateDomainRequest::setCloudNativeInstances(const std::string &cloudNativeInstances) {
  cloudNativeInstances_ = cloudNativeInstances;
  setParameter(std::string("CloudNativeInstances"), cloudNativeInstances);
}

std::string CreateDomainRequest::getSourceIps() const {
  return sourceIps_;
}

void CreateDomainRequest::setSourceIps(const std::string &sourceIps) {
  sourceIps_ = sourceIps;
  setParameter(std::string("SourceIps"), sourceIps);
}

int CreateDomainRequest::getIsAccessProduct() const {
  return isAccessProduct_;
}

void CreateDomainRequest::setIsAccessProduct(int isAccessProduct) {
  isAccessProduct_ = isAccessProduct;
  setParameter(std::string("IsAccessProduct"), std::to_string(isAccessProduct));
}

int CreateDomainRequest::getLoadBalancing() const {
  return loadBalancing_;
}

void CreateDomainRequest::setLoadBalancing(int loadBalancing) {
  loadBalancing_ = loadBalancing;
  setParameter(std::string("LoadBalancing"), std::to_string(loadBalancing));
}

int CreateDomainRequest::getHttpToUserIp() const {
  return httpToUserIp_;
}

void CreateDomainRequest::setHttpToUserIp(int httpToUserIp) {
  httpToUserIp_ = httpToUserIp;
  setParameter(std::string("HttpToUserIp"), std::to_string(httpToUserIp));
}

