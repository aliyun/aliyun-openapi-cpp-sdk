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

#include <alibabacloud/emr/model/DescribeHpHostResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Emr;
using namespace AlibabaCloud::Emr::Model;

DescribeHpHostResult::DescribeHpHostResult() :
	ServiceResult()
{}

DescribeHpHostResult::DescribeHpHostResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

DescribeHpHostResult::~DescribeHpHostResult()
{}

void DescribeHpHostResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto allDiskListNode = value["DiskList"]["Disk"];
	for (auto valueDiskListDisk : allDiskListNode)
	{
		Disk diskListObject;
		if(!valueDiskListDisk["DiskDevice"].isNull())
			diskListObject.diskDevice = valueDiskListDisk["DiskDevice"].asString();
		if(!valueDiskListDisk["DiskSize"].isNull())
			diskListObject.diskSize = std::stoi(valueDiskListDisk["DiskSize"].asString());
		if(!valueDiskListDisk["MountPath"].isNull())
			diskListObject.mountPath = valueDiskListDisk["MountPath"].asString();
		diskList_.push_back(diskListObject);
	}
	auto allInstalledComponents = value["InstalledComponents"]["InstalledComponent"];
	for (const auto &item : allInstalledComponents)
		installedComponents_.push_back(item.asString());
	if(!value["BizId"].isNull())
		bizId_ = value["BizId"].asString();
	if(!value["HostName"].isNull())
		hostName_ = value["HostName"].asString();
	if(!value["InnerIp"].isNull())
		innerIp_ = value["InnerIp"].asString();
	if(!value["Role"].isNull())
		role_ = value["Role"].asString();
	if(!value["Status"].isNull())
		status_ = value["Status"].asString();
	if(!value["CpuCore"].isNull())
		cpuCore_ = std::stoi(value["CpuCore"].asString());
	if(!value["MemSize"].isNull())
		memSize_ = std::stoi(value["MemSize"].asString());
	if(!value["VpcId"].isNull())
		vpcId_ = value["VpcId"].asString();
	if(!value["VswitchId"].isNull())
		vswitchId_ = value["VswitchId"].asString();
	if(!value["SecurityGroupId"].isNull())
		securityGroupId_ = value["SecurityGroupId"].asString();
	if(!value["ExternalIp"].isNull())
		externalIp_ = value["ExternalIp"].asString();
	if(!value["ExternalKey"].isNull())
		externalKey_ = value["ExternalKey"].asString();

}

std::string DescribeHpHostResult::getStatus()const
{
	return status_;
}

std::string DescribeHpHostResult::getInnerIp()const
{
	return innerIp_;
}

std::string DescribeHpHostResult::getSecurityGroupId()const
{
	return securityGroupId_;
}

std::vector<std::string> DescribeHpHostResult::getInstalledComponents()const
{
	return installedComponents_;
}

std::string DescribeHpHostResult::getVswitchId()const
{
	return vswitchId_;
}

std::string DescribeHpHostResult::getRole()const
{
	return role_;
}

std::string DescribeHpHostResult::getExternalIp()const
{
	return externalIp_;
}

std::string DescribeHpHostResult::getVpcId()const
{
	return vpcId_;
}

int DescribeHpHostResult::getCpuCore()const
{
	return cpuCore_;
}

int DescribeHpHostResult::getMemSize()const
{
	return memSize_;
}

std::vector<DescribeHpHostResult::Disk> DescribeHpHostResult::getDiskList()const
{
	return diskList_;
}

std::string DescribeHpHostResult::getExternalKey()const
{
	return externalKey_;
}

std::string DescribeHpHostResult::getBizId()const
{
	return bizId_;
}

std::string DescribeHpHostResult::getHostName()const
{
	return hostName_;
}

