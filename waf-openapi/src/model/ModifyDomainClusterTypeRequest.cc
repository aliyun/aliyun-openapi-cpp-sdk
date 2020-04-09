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

#include <alibabacloud/waf-openapi/model/ModifyDomainClusterTypeRequest.h>

using AlibabaCloud::Waf_openapi::Model::ModifyDomainClusterTypeRequest;

ModifyDomainClusterTypeRequest::ModifyDomainClusterTypeRequest() :
	RpcServiceRequest("waf-openapi", "2019-09-10", "ModifyDomainClusterType")
{
	setMethod(HttpRequest::Method::Post);
}

ModifyDomainClusterTypeRequest::~ModifyDomainClusterTypeRequest()
{}

int ModifyDomainClusterTypeRequest::getClusterType()const
{
	return clusterType_;
}

void ModifyDomainClusterTypeRequest::setClusterType(int clusterType)
{
	clusterType_ = clusterType;
	setParameter("ClusterType", std::to_string(clusterType));
}

std::string ModifyDomainClusterTypeRequest::getInstanceId()const
{
	return instanceId_;
}

void ModifyDomainClusterTypeRequest::setInstanceId(const std::string& instanceId)
{
	instanceId_ = instanceId;
	setParameter("InstanceId", instanceId);
}

std::string ModifyDomainClusterTypeRequest::getSourceIp()const
{
	return sourceIp_;
}

void ModifyDomainClusterTypeRequest::setSourceIp(const std::string& sourceIp)
{
	sourceIp_ = sourceIp;
	setParameter("SourceIp", sourceIp);
}

std::string ModifyDomainClusterTypeRequest::getDomain()const
{
	return domain_;
}

void ModifyDomainClusterTypeRequest::setDomain(const std::string& domain)
{
	domain_ = domain;
	setParameter("Domain", domain);
}

std::string ModifyDomainClusterTypeRequest::getRegion()const
{
	return region_;
}

void ModifyDomainClusterTypeRequest::setRegion(const std::string& region)
{
	region_ = region;
	setParameter("Region", region);
}

