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

#include <alibabacloud/hsm/model/ConfigNetworkRequest.h>

using AlibabaCloud::Hsm::Model::ConfigNetworkRequest;

ConfigNetworkRequest::ConfigNetworkRequest() :
	RpcServiceRequest("hsm", "2018-01-11", "ConfigNetwork")
{
	setMethod(HttpRequest::Method::Post);
}

ConfigNetworkRequest::~ConfigNetworkRequest()
{}

std::string ConfigNetworkRequest::getSourceIp()const
{
	return sourceIp_;
}

void ConfigNetworkRequest::setSourceIp(const std::string& sourceIp)
{
	sourceIp_ = sourceIp;
	setParameter("SourceIp", sourceIp);
}

std::string ConfigNetworkRequest::getRegionId()const
{
	return regionId_;
}

void ConfigNetworkRequest::setRegionId(const std::string& regionId)
{
	regionId_ = regionId;
	setParameter("RegionId", regionId);
}

std::string ConfigNetworkRequest::getLang()const
{
	return lang_;
}

void ConfigNetworkRequest::setLang(const std::string& lang)
{
	lang_ = lang;
	setParameter("Lang", lang);
}

std::string ConfigNetworkRequest::getIp()const
{
	return ip_;
}

void ConfigNetworkRequest::setIp(const std::string& ip)
{
	ip_ = ip;
	setParameter("Ip", ip);
}

std::string ConfigNetworkRequest::getVSwitchId()const
{
	return vSwitchId_;
}

void ConfigNetworkRequest::setVSwitchId(const std::string& vSwitchId)
{
	vSwitchId_ = vSwitchId;
	setParameter("VSwitchId", vSwitchId);
}

std::string ConfigNetworkRequest::getInstanceId()const
{
	return instanceId_;
}

void ConfigNetworkRequest::setInstanceId(const std::string& instanceId)
{
	instanceId_ = instanceId;
	setParameter("InstanceId", instanceId);
}

std::string ConfigNetworkRequest::getVpcId()const
{
	return vpcId_;
}

void ConfigNetworkRequest::setVpcId(const std::string& vpcId)
{
	vpcId_ = vpcId;
	setParameter("VpcId", vpcId);
}

