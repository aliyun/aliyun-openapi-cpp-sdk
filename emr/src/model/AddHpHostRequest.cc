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
	setCoreParameter("ResourceOwnerId", resourceOwnerId);
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
		setCoreParameter(str + ".CpuCore", obj.cpuCore);
		setCoreParameter(str + ".MemSize", obj.memSize);
		setCoreParameter(str + ".RackInfo", std::to_string(obj.rackInfo));
		setCoreParameter(str + ".Role", std::to_string(obj.role));
		setCoreParameter(str + ".SerialNumber", std::to_string(obj.serialNumber));
		setCoreParameter(str + ".HostType", std::to_string(obj.hostType));
		setCoreParameter(str + ".SecurityGroupId", std::to_string(obj.securityGroupId));
		setCoreParameter(str + ".HpHostDisk", obj.hpHostDisk);
		setCoreParameter(str + ".VswitchId", std::to_string(obj.vswitchId));
		setCoreParameter(str + ".ExternalKey", std::to_string(obj.externalKey));
		setCoreParameter(str + ".HostName", std::to_string(obj.hostName));
		setCoreParameter(str + ".VpcId", std::to_string(obj.vpcId));
		setCoreParameter(str + ".InnerIp", std::to_string(obj.innerIp));
		setCoreParameter(str + ".ExternalIp", std::to_string(obj.externalIp));
	}
}

std::string AddHpHostRequest::getRegionId()const
{
	return regionId_;
}

void AddHpHostRequest::setRegionId(const std::string& regionId)
{
	regionId_ = regionId;
	setCoreParameter("RegionId", std::to_string(regionId));
}

std::string AddHpHostRequest::getHpBizId()const
{
	return hpBizId_;
}

void AddHpHostRequest::setHpBizId(const std::string& hpBizId)
{
	hpBizId_ = hpBizId;
	setCoreParameter("HpBizId", std::to_string(hpBizId));
}

std::string AddHpHostRequest::getAccessKeyId()const
{
	return accessKeyId_;
}

void AddHpHostRequest::setAccessKeyId(const std::string& accessKeyId)
{
	accessKeyId_ = accessKeyId;
	setCoreParameter("AccessKeyId", std::to_string(accessKeyId));
}

