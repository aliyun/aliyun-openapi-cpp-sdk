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

#include <alibabacloud/emr/model/ListHpHostResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Emr;
using namespace AlibabaCloud::Emr::Model;

ListHpHostResult::ListHpHostResult() :
	ServiceResult()
{}

ListHpHostResult::ListHpHostResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

ListHpHostResult::~ListHpHostResult()
{}

void ListHpHostResult::parse(const std::string &payload)
{
	Json::CharReaderBuilder builder;
	Json::CharReader *reader = builder.newCharReader();
	Json::Value *val;
	Json::Value value;
	JSONCPP_STRING *errs;
	reader->parse(payload.data(), payload.data() + payload.size(), val, errs);
	value = *val;
	setRequestId(value["RequestId"].asString());
	auto allHpHostList = value["HpHostList"]["HpHost"];
	for (auto value : allHpHostList)
	{
		HpHost hpHostListObject;
		if(!value["BizId"].isNull())
			hpHostListObject.bizId = value["BizId"].asString();
		if(!value["HostName"].isNull())
			hpHostListObject.hostName = value["HostName"].asString();
		if(!value["InnerIp"].isNull())
			hpHostListObject.innerIp = value["InnerIp"].asString();
		if(!value["Role"].isNull())
			hpHostListObject.role = value["Role"].asString();
		if(!value["Status"].isNull())
			hpHostListObject.status = value["Status"].asString();
		if(!value["Description"].isNull())
			hpHostListObject.description = value["Description"].asString();
		if(!value["CpuCore"].isNull())
			hpHostListObject.cpuCore = std::stoi(value["CpuCore"].asString());
		if(!value["MemSize"].isNull())
			hpHostListObject.memSize = std::stoi(value["MemSize"].asString());
		if(!value["VpcId"].isNull())
			hpHostListObject.vpcId = value["VpcId"].asString();
		if(!value["VswitchId"].isNull())
			hpHostListObject.vswitchId = value["VswitchId"].asString();
		if(!value["SecurityGroupId"].isNull())
			hpHostListObject.securityGroupId = value["SecurityGroupId"].asString();
		if(!value["ExternalIp"].isNull())
			hpHostListObject.externalIp = value["ExternalIp"].asString();
		if(!value["ExternalKey"].isNull())
			hpHostListObject.externalKey = value["ExternalKey"].asString();
		auto allDiskList = value["DiskList"]["Disk"];
		for (auto value : allDiskList)
		{
			HpHost::Disk diskListObject;
			if(!value["DiskDevice"].isNull())
				diskListObject.diskDevice = value["DiskDevice"].asString();
			if(!value["DiskSize"].isNull())
				diskListObject.diskSize = std::stoi(value["DiskSize"].asString());
			if(!value["MountPath"].isNull())
				diskListObject.mountPath = value["MountPath"].asString();
			hpHostListObject.diskList.push_back(diskListObject);
		}
		auto allInstalledComponents = value["InstalledComponents"]["InstalledComponent"];
		for (auto value : allInstalledComponents)
			hpHostListObject.installedComponents.push_back(value.asString());
		hpHostList_.push_back(hpHostListObject);
	}
	if(!value["PageNumber"].isNull())
		pageNumber_ = std::stoi(value["PageNumber"].asString());
	if(!value["PageSize"].isNull())
		pageSize_ = std::stoi(value["PageSize"].asString());
	if(!value["TotalCount"].isNull())
		totalCount_ = std::stoi(value["TotalCount"].asString());

}

int ListHpHostResult::getTotalCount()const
{
	return totalCount_;
}

int ListHpHostResult::getPageSize()const
{
	return pageSize_;
}

int ListHpHostResult::getPageNumber()const
{
	return pageNumber_;
}

std::vector<ListHpHostResult::HpHost> ListHpHostResult::getHpHostList()const
{
	return hpHostList_;
}

