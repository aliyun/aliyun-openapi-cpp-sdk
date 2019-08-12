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

#include <alibabacloud/emr/model/AddHpHostRequest.h>

using AlibabaCloud::Emr::Model::AddHpHostRequest;

AddHpHostRequest::AddHpHostRequest() :
	RpcServiceRequest("emr", "2016-04-08", "AddHpHost")
{}

AddHpHostRequest::~AddHpHostRequest()
{}

long AddHpHostRequest::getResourceOwnerId()const
{
	return resourceOwnerId_;
}

void AddHpHostRequest::setResourceOwnerId(long resourceOwnerId)
{
	resourceOwnerId_ = resourceOwnerId;
	setCoreParameter("ResourceOwnerId", std::to_string(resourceOwnerId));
}

std::vector<AddHpHostRequest::HpHost> AddHpHostRequest::getHpHost()const
{
	return hpHost_;
}

void AddHpHostRequest::setHpHost(const std::vector<HpHost>& hpHost)
{
	hpHost_ = hpHost;
	int i = 0;
	for(int i = 0; i!= hpHost.size(); i++)	{
		auto obj = hpHost.at(i);
		std::string str ="HpHost."+ std::to_string(i);
		setCoreParameter(str + ".CpuCore", std::to_string(obj.cpuCore));
		setCoreParameter(str + ".MemSize", std::to_string(obj.memSize));
		setCoreParameter(str + ".RackInfo", obj.rackInfo);
		setCoreParameter(str + ".Role", obj.role);
		setCoreParameter(str + ".SerialNumber", obj.serialNumber);
		setCoreParameter(str + ".HostType", obj.hostType);
		setCoreParameter(str + ".SecurityGroupId", obj.securityGroupId);
		setCoreParameter(str + ".HpHostDisk", std::to_string(obj.hpHostDisk));
		setCoreParameter(str + ".VswitchId", obj.vswitchId);
		setCoreParameter(str + ".ExternalKey", obj.externalKey);
		setCoreParameter(str + ".HostName", obj.hostName);
		setCoreParameter(str + ".VpcId", obj.vpcId);
		setCoreParameter(str + ".InnerIp", obj.innerIp);
		setCoreParameter(str + ".ExternalIp", obj.externalIp);
	}
}

std::string AddHpHostRequest::getRegionId()const
{
	return regionId_;
}

void AddHpHostRequest::setRegionId(const std::string& regionId)
{
	regionId_ = regionId;
	setCoreParameter("RegionId", regionId);
}

std::string AddHpHostRequest::getHpBizId()const
{
	return hpBizId_;
}

void AddHpHostRequest::setHpBizId(const std::string& hpBizId)
{
	hpBizId_ = hpBizId;
	setCoreParameter("HpBizId", hpBizId);
}

std::string AddHpHostRequest::getAccessKeyId()const
{
	return accessKeyId_;
}

void AddHpHostRequest::setAccessKeyId(const std::string& accessKeyId)
{
	accessKeyId_ = accessKeyId;
	setCoreParameter("AccessKeyId", accessKeyId);
}

