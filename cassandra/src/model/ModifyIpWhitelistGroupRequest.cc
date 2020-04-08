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

#include <alibabacloud/cassandra/model/ModifyIpWhitelistGroupRequest.h>

using AlibabaCloud::Cassandra::Model::ModifyIpWhitelistGroupRequest;

ModifyIpWhitelistGroupRequest::ModifyIpWhitelistGroupRequest() :
	RpcServiceRequest("cassandra", "2019-01-01", "ModifyIpWhitelistGroup")
{
	setMethod(HttpRequest::Method::Post);
}

ModifyIpWhitelistGroupRequest::~ModifyIpWhitelistGroupRequest()
{}

std::string ModifyIpWhitelistGroupRequest::getIpList()const
{
	return ipList_;
}

void ModifyIpWhitelistGroupRequest::setIpList(const std::string& ipList)
{
	ipList_ = ipList;
	setParameter("IpList", ipList);
}

int ModifyIpWhitelistGroupRequest::getIpVersion()const
{
	return ipVersion_;
}

void ModifyIpWhitelistGroupRequest::setIpVersion(int ipVersion)
{
	ipVersion_ = ipVersion;
	setParameter("IpVersion", std::to_string(ipVersion));
}

std::string ModifyIpWhitelistGroupRequest::getClusterId()const
{
	return clusterId_;
}

void ModifyIpWhitelistGroupRequest::setClusterId(const std::string& clusterId)
{
	clusterId_ = clusterId;
	setParameter("ClusterId", clusterId);
}

std::string ModifyIpWhitelistGroupRequest::getGroupName()const
{
	return groupName_;
}

void ModifyIpWhitelistGroupRequest::setGroupName(const std::string& groupName)
{
	groupName_ = groupName;
	setParameter("GroupName", groupName);
}

