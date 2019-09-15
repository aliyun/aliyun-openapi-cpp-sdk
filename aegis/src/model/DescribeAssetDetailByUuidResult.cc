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

#include <alibabacloud/aegis/model/DescribeAssetDetailByUuidResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Aegis;
using namespace AlibabaCloud::Aegis::Model;

DescribeAssetDetailByUuidResult::DescribeAssetDetailByUuidResult() :
	ServiceResult()
{}

DescribeAssetDetailByUuidResult::DescribeAssetDetailByUuidResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

DescribeAssetDetailByUuidResult::~DescribeAssetDetailByUuidResult()
{}

void DescribeAssetDetailByUuidResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto assetDetailNode = value["AssetDetail"];
	if(!assetDetailNode["InternetIp"].isNull())
		assetDetail_.internetIp = assetDetailNode["InternetIp"].asString();
	if(!assetDetailNode["IntranetIp"].isNull())
		assetDetail_.intranetIp = assetDetailNode["IntranetIp"].asString();
	if(!assetDetailNode["InstanceName"].isNull())
		assetDetail_.instanceName = std::stoi(assetDetailNode["InstanceName"].asString());
	if(!assetDetailNode["InstanceId"].isNull())
		assetDetail_.instanceId = std::stoi(assetDetailNode["InstanceId"].asString());
	if(!assetDetailNode["Ip"].isNull())
		assetDetail_.ip = assetDetailNode["Ip"].asString();
	if(!assetDetailNode["Uuid"].isNull())
		assetDetail_.uuid = assetDetailNode["Uuid"].asString();
	if(!assetDetailNode["AssetType"].isNull())
		assetDetail_.assetType = assetDetailNode["AssetType"].asString();
	if(!assetDetailNode["Os"].isNull())
		assetDetail_.os = assetDetailNode["Os"].asString();
	if(!assetDetailNode["ClientStatus"].isNull())
		assetDetail_.clientStatus = assetDetailNode["ClientStatus"].asString();
	if(!assetDetailNode["Region"].isNull())
		assetDetail_.region = assetDetailNode["Region"].asString();
	if(!assetDetailNode["RegionName"].isNull())
		assetDetail_.regionName = assetDetailNode["RegionName"].asString();
	if(!assetDetailNode["Tag"].isNull())
		assetDetail_.tag = assetDetailNode["Tag"].asString();
	if(!assetDetailNode["GroupTrace"].isNull())
		assetDetail_.groupTrace = assetDetailNode["GroupTrace"].asString();
	if(!assetDetailNode["Cpu"].isNull())
		assetDetail_.cpu = std::stoi(assetDetailNode["Cpu"].asString());
	if(!assetDetailNode["CpuInfo"].isNull())
		assetDetail_.cpuInfo = assetDetailNode["CpuInfo"].asString();
	if(!assetDetailNode["Kernel"].isNull())
		assetDetail_.kernel = assetDetailNode["Kernel"].asString();
	if(!assetDetailNode["OsDetail"].isNull())
		assetDetail_.osDetail = assetDetailNode["OsDetail"].asString();
	if(!assetDetailNode["Mem"].isNull())
		assetDetail_.mem = std::stoi(assetDetailNode["Mem"].asString());
	if(!assetDetailNode["SysInfo"].isNull())
		assetDetail_.sysInfo = assetDetailNode["SysInfo"].asString();
	if(!assetDetailNode["HostName"].isNull())
		assetDetail_.hostName = assetDetailNode["HostName"].asString();
		auto allIpList = assetDetailNode["IpList"]["IpList"];
		for (auto value : allIpList)
			assetDetail_.ipList.push_back(value.asString());
		auto allMacList = assetDetailNode["MacList"]["MacList"];
		for (auto value : allMacList)
			assetDetail_.macList.push_back(value.asString());
		auto allDiskInfoList = assetDetailNode["DiskInfoList"]["DiskInfo"];
		for (auto value : allDiskInfoList)
			assetDetail_.diskInfoList.push_back(value.asString());

}

DescribeAssetDetailByUuidResult::AssetDetail DescribeAssetDetailByUuidResult::getAssetDetail()const
{
	return assetDetail_;
}

