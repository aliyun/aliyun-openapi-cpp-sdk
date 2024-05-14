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

#include <alibabacloud/waf-openapi/model/ModifyDomainRequest.h>

using AlibabaCloud::Waf_openapi::Model::ModifyDomainRequest;

ModifyDomainRequest::ModifyDomainRequest()
    : RpcServiceRequest("waf-openapi", "2019-09-10", "ModifyDomain") {
  setMethod(HttpRequest::Method::Post);
}

ModifyDomainRequest::~ModifyDomainRequest() {}

int ModifyDomainRequest::getIpFollowStatus() const {
  return ipFollowStatus_;
}

void ModifyDomainRequest::setIpFollowStatus(int ipFollowStatus) {
  ipFollowStatus_ = ipFollowStatus;
  setParameter(std::string("IpFollowStatus"), std::to_string(ipFollowStatus));
}

bool ModifyDomainRequest::getKeepalive() const {
  return keepalive_;
}

void ModifyDomainRequest::setKeepalive(bool keepalive) {
  keepalive_ = keepalive;
  setParameter(std::string("Keepalive"), keepalive ? "true" : "false");
}

std::string ModifyDomainRequest::getSniHost() const {
  return sniHost_;
}

void ModifyDomainRequest::setSniHost(const std::string &sniHost) {
  sniHost_ = sniHost;
  setParameter(std::string("SniHost"), sniHost);
}

std::string ModifyDomainRequest::getResourceGroupId() const {
  return resourceGroupId_;
}

void ModifyDomainRequest::setResourceGroupId(const std::string &resourceGroupId) {
  resourceGroupId_ = resourceGroupId;
  setParameter(std::string("ResourceGroupId"), resourceGroupId);
}

int ModifyDomainRequest::getHybridCloudType() const {
  return hybridCloudType_;
}

void ModifyDomainRequest::setHybridCloudType(int hybridCloudType) {
  hybridCloudType_ = hybridCloudType;
  setParameter(std::string("HybridCloudType"), std::to_string(hybridCloudType));
}

std::string ModifyDomainRequest::getSourceIp() const {
  return sourceIp_;
}

void ModifyDomainRequest::setSourceIp(const std::string &sourceIp) {
  sourceIp_ = sourceIp;
  setParameter(std::string("SourceIp"), sourceIp);
}

std::string ModifyDomainRequest::getHttpPort() const {
  return httpPort_;
}

void ModifyDomainRequest::setHttpPort(const std::string &httpPort) {
  httpPort_ = httpPort;
  setParameter(std::string("HttpPort"), httpPort);
}

std::string ModifyDomainRequest::getHttp2Port() const {
  return http2Port_;
}

void ModifyDomainRequest::setHttp2Port(const std::string &http2Port) {
  http2Port_ = http2Port;
  setParameter(std::string("Http2Port"), http2Port);
}

int ModifyDomainRequest::getWriteTime() const {
  return writeTime_;
}

void ModifyDomainRequest::setWriteTime(int writeTime) {
  writeTime_ = writeTime;
  setParameter(std::string("WriteTime"), std::to_string(writeTime));
}

int ModifyDomainRequest::getAccessHeaderMode() const {
  return accessHeaderMode_;
}

void ModifyDomainRequest::setAccessHeaderMode(int accessHeaderMode) {
  accessHeaderMode_ = accessHeaderMode;
  setParameter(std::string("AccessHeaderMode"), std::to_string(accessHeaderMode));
}

std::string ModifyDomainRequest::getAccessHeaders() const {
  return accessHeaders_;
}

void ModifyDomainRequest::setAccessHeaders(const std::string &accessHeaders) {
  accessHeaders_ = accessHeaders;
  setParameter(std::string("AccessHeaders"), accessHeaders);
}

int ModifyDomainRequest::getKeepaliveTimeout() const {
  return keepaliveTimeout_;
}

void ModifyDomainRequest::setKeepaliveTimeout(int keepaliveTimeout) {
  keepaliveTimeout_ = keepaliveTimeout;
  setParameter(std::string("KeepaliveTimeout"), std::to_string(keepaliveTimeout));
}

int ModifyDomainRequest::getClusterType() const {
  return clusterType_;
}

void ModifyDomainRequest::setClusterType(int clusterType) {
  clusterType_ = clusterType;
  setParameter(std::string("ClusterType"), std::to_string(clusterType));
}

int ModifyDomainRequest::getHttpsRedirect() const {
  return httpsRedirect_;
}

void ModifyDomainRequest::setHttpsRedirect(int httpsRedirect) {
  httpsRedirect_ = httpsRedirect;
  setParameter(std::string("HttpsRedirect"), std::to_string(httpsRedirect));
}

std::string ModifyDomainRequest::getInstanceId() const {
  return instanceId_;
}

void ModifyDomainRequest::setInstanceId(const std::string &instanceId) {
  instanceId_ = instanceId;
  setParameter(std::string("InstanceId"), instanceId);
}

std::string ModifyDomainRequest::getDomain() const {
  return domain_;
}

void ModifyDomainRequest::setDomain(const std::string &domain) {
  domain_ = domain;
  setParameter(std::string("Domain"), domain);
}

int ModifyDomainRequest::getReadTime() const {
  return readTime_;
}

void ModifyDomainRequest::setReadTime(int readTime) {
  readTime_ = readTime;
  setParameter(std::string("ReadTime"), std::to_string(readTime));
}

std::string ModifyDomainRequest::getHttpsPort() const {
  return httpsPort_;
}

void ModifyDomainRequest::setHttpsPort(const std::string &httpsPort) {
  httpsPort_ = httpsPort;
  setParameter(std::string("HttpsPort"), httpsPort);
}

std::string ModifyDomainRequest::getRegionId() const {
  return regionId_;
}

void ModifyDomainRequest::setRegionId(const std::string &regionId) {
  regionId_ = regionId;
  setParameter(std::string("RegionId"), regionId);
}

int ModifyDomainRequest::getSniStatus() const {
  return sniStatus_;
}

void ModifyDomainRequest::setSniStatus(int sniStatus) {
  sniStatus_ = sniStatus;
  setParameter(std::string("SniStatus"), std::to_string(sniStatus));
}

std::string ModifyDomainRequest::getLang() const {
  return lang_;
}

void ModifyDomainRequest::setLang(const std::string &lang) {
  lang_ = lang;
  setParameter(std::string("Lang"), lang);
}

bool ModifyDomainRequest::getRetry() const {
  return retry_;
}

void ModifyDomainRequest::setRetry(bool retry) {
  retry_ = retry;
  setParameter(std::string("Retry"), retry ? "true" : "false");
}

int ModifyDomainRequest::getKeepaliveRequests() const {
  return keepaliveRequests_;
}

void ModifyDomainRequest::setKeepaliveRequests(int keepaliveRequests) {
  keepaliveRequests_ = keepaliveRequests;
  setParameter(std::string("KeepaliveRequests"), std::to_string(keepaliveRequests));
}

std::string ModifyDomainRequest::getAccessType() const {
  return accessType_;
}

void ModifyDomainRequest::setAccessType(const std::string &accessType) {
  accessType_ = accessType;
  setParameter(std::string("AccessType"), accessType);
}

int ModifyDomainRequest::getBindingIpv6() const {
  return bindingIpv6_;
}

void ModifyDomainRequest::setBindingIpv6(int bindingIpv6) {
  bindingIpv6_ = bindingIpv6;
  setParameter(std::string("BindingIpv6"), std::to_string(bindingIpv6));
}

std::string ModifyDomainRequest::getLogHeaders() const {
  return logHeaders_;
}

void ModifyDomainRequest::setLogHeaders(const std::string &logHeaders) {
  logHeaders_ = logHeaders;
  setParameter(std::string("LogHeaders"), logHeaders);
}

int ModifyDomainRequest::getConnectionTime() const {
  return connectionTime_;
}

void ModifyDomainRequest::setConnectionTime(int connectionTime) {
  connectionTime_ = connectionTime;
  setParameter(std::string("ConnectionTime"), std::to_string(connectionTime));
}

std::string ModifyDomainRequest::getCloudNativeInstances() const {
  return cloudNativeInstances_;
}

void ModifyDomainRequest::setCloudNativeInstances(const std::string &cloudNativeInstances) {
  cloudNativeInstances_ = cloudNativeInstances;
  setParameter(std::string("CloudNativeInstances"), cloudNativeInstances);
}

std::string ModifyDomainRequest::getSourceIps() const {
  return sourceIps_;
}

void ModifyDomainRequest::setSourceIps(const std::string &sourceIps) {
  sourceIps_ = sourceIps;
  setParameter(std::string("SourceIps"), sourceIps);
}

int ModifyDomainRequest::getIsAccessProduct() const {
  return isAccessProduct_;
}

void ModifyDomainRequest::setIsAccessProduct(int isAccessProduct) {
  isAccessProduct_ = isAccessProduct;
  setParameter(std::string("IsAccessProduct"), std::to_string(isAccessProduct));
}

int ModifyDomainRequest::getLoadBalancing() const {
  return loadBalancing_;
}

void ModifyDomainRequest::setLoadBalancing(int loadBalancing) {
  loadBalancing_ = loadBalancing;
  setParameter(std::string("LoadBalancing"), std::to_string(loadBalancing));
}

int ModifyDomainRequest::getHttpToUserIp() const {
  return httpToUserIp_;
}

void ModifyDomainRequest::setHttpToUserIp(int httpToUserIp) {
  httpToUserIp_ = httpToUserIp;
  setParameter(std::string("HttpToUserIp"), std::to_string(httpToUserIp));
}

