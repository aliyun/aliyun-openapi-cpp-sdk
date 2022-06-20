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

#include <alibabacloud/sas/model/DescribeExposedInstanceDetailResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Sas;
using namespace AlibabaCloud::Sas::Model;

DescribeExposedInstanceDetailResult::DescribeExposedInstanceDetailResult() :
	ServiceResult()
{}

DescribeExposedInstanceDetailResult::DescribeExposedInstanceDetailResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

DescribeExposedInstanceDetailResult::~DescribeExposedInstanceDetailResult()
{}

void DescribeExposedInstanceDetailResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto allExposedChainsNode = value["ExposedChains"]["ExposedChain"];
	for (auto valueExposedChainsExposedChain : allExposedChainsNode)
	{
		ExposedChain exposedChainsObject;
		if(!valueExposedChainsExposedChain["ExposureIp"].isNull())
			exposedChainsObject.exposureIp = valueExposedChainsExposedChain["ExposureIp"].asString();
		if(!valueExposedChainsExposedChain["GroupNo"].isNull())
			exposedChainsObject.groupNo = valueExposedChainsExposedChain["GroupNo"].asString();
		if(!valueExposedChainsExposedChain["InternetIp"].isNull())
			exposedChainsObject.internetIp = valueExposedChainsExposedChain["InternetIp"].asString();
		if(!valueExposedChainsExposedChain["InstanceId"].isNull())
			exposedChainsObject.instanceId = valueExposedChainsExposedChain["InstanceId"].asString();
		if(!valueExposedChainsExposedChain["ExposureType"].isNull())
			exposedChainsObject.exposureType = valueExposedChainsExposedChain["ExposureType"].asString();
		if(!valueExposedChainsExposedChain["IntranetIp"].isNull())
			exposedChainsObject.intranetIp = valueExposedChainsExposedChain["IntranetIp"].asString();
		if(!valueExposedChainsExposedChain["ExposureTypeId"].isNull())
			exposedChainsObject.exposureTypeId = valueExposedChainsExposedChain["ExposureTypeId"].asString();
		if(!valueExposedChainsExposedChain["RegionId"].isNull())
			exposedChainsObject.regionId = valueExposedChainsExposedChain["RegionId"].asString();
		if(!valueExposedChainsExposedChain["Uuid"].isNull())
			exposedChainsObject.uuid = valueExposedChainsExposedChain["Uuid"].asString();
		if(!valueExposedChainsExposedChain["ExposurePort"].isNull())
			exposedChainsObject.exposurePort = valueExposedChainsExposedChain["ExposurePort"].asString();
		if(!valueExposedChainsExposedChain["InstanceName"].isNull())
			exposedChainsObject.instanceName = valueExposedChainsExposedChain["InstanceName"].asString();
		if(!valueExposedChainsExposedChain["ExposureComponent"].isNull())
			exposedChainsObject.exposureComponent = valueExposedChainsExposedChain["ExposureComponent"].asString();
		auto allRealVulListNode = valueExposedChainsExposedChain["RealVulList"]["ScaVulRecord"];
		for (auto valueExposedChainsExposedChainRealVulListScaVulRecord : allRealVulListNode)
		{
			ExposedChain::ScaVulRecord realVulListObject;
			if(!valueExposedChainsExposedChainRealVulListScaVulRecord["Type"].isNull())
				realVulListObject.type = valueExposedChainsExposedChainRealVulListScaVulRecord["Type"].asString();
			if(!valueExposedChainsExposedChainRealVulListScaVulRecord["Necessity"].isNull())
				realVulListObject.necessity = valueExposedChainsExposedChainRealVulListScaVulRecord["Necessity"].asString();
			if(!valueExposedChainsExposedChainRealVulListScaVulRecord["Uuid"].isNull())
				realVulListObject.uuid = valueExposedChainsExposedChainRealVulListScaVulRecord["Uuid"].asString();
			if(!valueExposedChainsExposedChainRealVulListScaVulRecord["AliasName"].isNull())
				realVulListObject.aliasName = valueExposedChainsExposedChainRealVulListScaVulRecord["AliasName"].asString();
			if(!valueExposedChainsExposedChainRealVulListScaVulRecord["Name"].isNull())
				realVulListObject.name = valueExposedChainsExposedChainRealVulListScaVulRecord["Name"].asString();
			exposedChainsObject.realVulList.push_back(realVulListObject);
		}
		auto allAllVulListNode = valueExposedChainsExposedChain["AllVulList"]["ScaVulRecord"];
		for (auto valueExposedChainsExposedChainAllVulListScaVulRecord : allAllVulListNode)
		{
			ExposedChain::ScaVulRecord allVulListObject;
			if(!valueExposedChainsExposedChainAllVulListScaVulRecord["Type"].isNull())
				allVulListObject.type = valueExposedChainsExposedChainAllVulListScaVulRecord["Type"].asString();
			if(!valueExposedChainsExposedChainAllVulListScaVulRecord["Necessity"].isNull())
				allVulListObject.necessity = valueExposedChainsExposedChainAllVulListScaVulRecord["Necessity"].asString();
			if(!valueExposedChainsExposedChainAllVulListScaVulRecord["Uuid"].isNull())
				allVulListObject.uuid = valueExposedChainsExposedChainAllVulListScaVulRecord["Uuid"].asString();
			if(!valueExposedChainsExposedChainAllVulListScaVulRecord["AliasName"].isNull())
				allVulListObject.aliasName = valueExposedChainsExposedChainAllVulListScaVulRecord["AliasName"].asString();
			if(!valueExposedChainsExposedChainAllVulListScaVulRecord["Name"].isNull())
				allVulListObject.name = valueExposedChainsExposedChainAllVulListScaVulRecord["Name"].asString();
			exposedChainsObject.allVulList.push_back(allVulListObject);
		}
		exposedChains_.push_back(exposedChainsObject);
	}

}

std::vector<DescribeExposedInstanceDetailResult::ExposedChain> DescribeExposedInstanceDetailResult::getExposedChains()const
{
	return exposedChains_;
}

