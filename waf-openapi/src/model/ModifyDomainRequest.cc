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

ModifyDomainRequest::ModifyDomainRequest() :
	RpcServiceRequest("waf-openapi", "2019-09-10", "ModifyDomain")
{
	setMethod(HttpRequest::Method::Post);
}

ModifyDomainRequest::~ModifyDomainRequest()
{}

int ModifyDomainRequest::getIpFollowStatus()const
{
	return ipFollowStatus_;
}

void ModifyDomainRequest::setIpFollowStatus(int ipFollowStatus)
{
	ipFollowStatus_ = ipFollowStatus;
	setParameter("IpFollowStatus", std::to_string(ipFollowStatus));
}

std::string ModifyDomainRequest::getSourceIp()const
{
	return sourceIp_;
}

void ModifyDomainRequest::setSourceIp(const std::string& sourceIp)
{
	sourceIp_ = sourceIp;
	setParameter("SourceIp", sourceIp);
}

int ModifyDomainRequest::getXffHeaderMode()const
{
	return xffHeaderMode_;
}

void ModifyDomainRequest::setXffHeaderMode(int xffHeaderMode)
{
	xffHeaderMode_ = xffHeaderMode;
	setParameter("XffHeaderMode", std::to_string(xffHeaderMode));
}

std::string ModifyDomainRequest::getHttpPort()const
{
	return httpPort_;
}

void ModifyDomainRequest::setHttpPort(const std::string& httpPort)
{
	httpPort_ = httpPort;
	setParameter("HttpPort", httpPort);
}

std::string ModifyDomainRequest::getHttp2Port()const
{
	return http2Port_;
}

void ModifyDomainRequest::setHttp2Port(const std::string& http2Port)
{
	http2Port_ = http2Port;
	setParameter("Http2Port", http2Port);
}

int ModifyDomainRequest::getWriteTime()const
{
	return writeTime_;
}

void ModifyDomainRequest::setWriteTime(int writeTime)
{
	writeTime_ = writeTime;
	setParameter("WriteTime", std::to_string(writeTime));
}

std::string ModifyDomainRequest::getLang()const
{
	return lang_;
}

void ModifyDomainRequest::setLang(const std::string& lang)
{
	lang_ = lang;
	setParameter("Lang", lang);
}

std::string ModifyDomainRequest::getXffHeaders()const
{
	return xffHeaders_;
}

void ModifyDomainRequest::setXffHeaders(const std::string& xffHeaders)
{
	xffHeaders_ = xffHeaders;
	setParameter("XffHeaders", xffHeaders);
}

std::string ModifyDomainRequest::getAccessType()const
{
	return accessType_;
}

void ModifyDomainRequest::setAccessType(const std::string& accessType)
{
	accessType_ = accessType;
	setParameter("AccessType", accessType);
}

int ModifyDomainRequest::getBindingIpv6()const
{
	return bindingIpv6_;
}

void ModifyDomainRequest::setBindingIpv6(int bindingIpv6)
{
	bindingIpv6_ = bindingIpv6;
	setParameter("BindingIpv6", std::to_string(bindingIpv6));
}

std::string ModifyDomainRequest::getLogHeaders()const
{
	return logHeaders_;
}

void ModifyDomainRequest::setLogHeaders(const std::string& logHeaders)
{
	logHeaders_ = logHeaders;
	setParameter("LogHeaders", logHeaders);
}

int ModifyDomainRequest::getConnectionTime()const
{
	return connectionTime_;
}

void ModifyDomainRequest::setConnectionTime(int connectionTime)
{
	connectionTime_ = connectionTime;
	setParameter("ConnectionTime", std::to_string(connectionTime));
}

int ModifyDomainRequest::getClusterType()const
{
	return clusterType_;
}

void ModifyDomainRequest::setClusterType(int clusterType)
{
	clusterType_ = clusterType;
	setParameter("ClusterType", std::to_string(clusterType));
}

std::string ModifyDomainRequest::getCloudNativeInstances()const
{
	return cloudNativeInstances_;
}

void ModifyDomainRequest::setCloudNativeInstances(const std::string& cloudNativeInstances)
{
	cloudNativeInstances_ = cloudNativeInstances;
	setParameter("CloudNativeInstances", cloudNativeInstances);
}

int ModifyDomainRequest::getHttpsRedirect()const
{
	return httpsRedirect_;
}

void ModifyDomainRequest::setHttpsRedirect(int httpsRedirect)
{
	httpsRedirect_ = httpsRedirect;
	setParameter("HttpsRedirect", std::to_string(httpsRedirect));
}

std::string ModifyDomainRequest::getInstanceId()const
{
	return instanceId_;
}

void ModifyDomainRequest::setInstanceId(const std::string& instanceId)
{
	instanceId_ = instanceId;
	setParameter("InstanceId", instanceId);
}

std::string ModifyDomainRequest::getSourceIps()const
{
	return sourceIps_;
}

void ModifyDomainRequest::setSourceIps(const std::string& sourceIps)
{
	sourceIps_ = sourceIps;
	setParameter("SourceIps", sourceIps);
}

std::string ModifyDomainRequest::getDomain()const
{
	return domain_;
}

void ModifyDomainRequest::setDomain(const std::string& domain)
{
	domain_ = domain;
	setParameter("Domain", domain);
}

int ModifyDomainRequest::getIsAccessProduct()const
{
	return isAccessProduct_;
}

void ModifyDomainRequest::setIsAccessProduct(int isAccessProduct)
{
	isAccessProduct_ = isAccessProduct;
	setParameter("IsAccessProduct", std::to_string(isAccessProduct));
}

int ModifyDomainRequest::getReadTime()const
{
	return readTime_;
}

void ModifyDomainRequest::setReadTime(int readTime)
{
	readTime_ = readTime;
	setParameter("ReadTime", std::to_string(readTime));
}

std::string ModifyDomainRequest::getHttpsPort()const
{
	return httpsPort_;
}

void ModifyDomainRequest::setHttpsPort(const std::string& httpsPort)
{
	httpsPort_ = httpsPort;
	setParameter("HttpsPort", httpsPort);
}

int ModifyDomainRequest::getLoadBalancing()const
{
	return loadBalancing_;
}

void ModifyDomainRequest::setLoadBalancing(int loadBalancing)
{
	loadBalancing_ = loadBalancing;
	setParameter("LoadBalancing", std::to_string(loadBalancing));
}

int ModifyDomainRequest::getHttpToUserIp()const
{
	return httpToUserIp_;
}

void ModifyDomainRequest::setHttpToUserIp(int httpToUserIp)
{
	httpToUserIp_ = httpToUserIp;
	setParameter("HttpToUserIp", std::to_string(httpToUserIp));
}

