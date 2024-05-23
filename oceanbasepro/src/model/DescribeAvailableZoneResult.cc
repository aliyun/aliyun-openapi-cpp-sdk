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

#include <alibabacloud/oceanbasepro/model/DescribeAvailableZoneResult.h>
#include <json/json.h>

using namespace AlibabaCloud::OceanBasePro;
using namespace AlibabaCloud::OceanBasePro::Model;

DescribeAvailableZoneResult::DescribeAvailableZoneResult() :
	ServiceResult()
{}

DescribeAvailableZoneResult::DescribeAvailableZoneResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

DescribeAvailableZoneResult::~DescribeAvailableZoneResult()
{}

void DescribeAvailableZoneResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto dataNode = value["Data"];
	auto allAvailableZonesNode = dataNode["AvailableZones"]["AvailableZonesItem"];
	for (auto dataNodeAvailableZonesAvailableZonesItem : allAvailableZonesNode)
	{
		Data::AvailableZonesItem availableZonesItemObject;
		if(!dataNodeAvailableZonesAvailableZonesItem["Region"].isNull())
			availableZonesItemObject.region = dataNodeAvailableZonesAvailableZonesItem["Region"].asString();
		if(!dataNodeAvailableZonesAvailableZonesItem["Zones"].isNull())
			availableZonesItemObject.zones = dataNodeAvailableZonesAvailableZonesItem["Zones"].asString();
		if(!dataNodeAvailableZonesAvailableZonesItem["Channel"].isNull())
			availableZonesItemObject.channel = dataNodeAvailableZonesAvailableZonesItem["Channel"].asString();
		if(!dataNodeAvailableZonesAvailableZonesItem["DeployType"].isNull())
			availableZonesItemObject.deployType = dataNodeAvailableZonesAvailableZonesItem["DeployType"].asString();
		if(!dataNodeAvailableZonesAvailableZonesItem["InstanceType"].isNull())
			availableZonesItemObject.instanceType = dataNodeAvailableZonesAvailableZonesItem["InstanceType"].asString();
		if(!dataNodeAvailableZonesAvailableZonesItem["Series"].isNull())
			availableZonesItemObject.series = dataNodeAvailableZonesAvailableZonesItem["Series"].asString();
		if(!dataNodeAvailableZonesAvailableZonesItem["CpuArch"].isNull())
			availableZonesItemObject.cpuArch = dataNodeAvailableZonesAvailableZonesItem["CpuArch"].asString();
		auto allSupportSpecificationsNode = dataNodeAvailableZonesAvailableZonesItem["SupportSpecifications"]["SupportSpecificationsItem"];
		for (auto dataNodeAvailableZonesAvailableZonesItemSupportSpecificationsSupportSpecificationsItem : allSupportSpecificationsNode)
		{
			Data::AvailableZonesItem::SupportSpecificationsItem supportSpecificationsObject;
			if(!dataNodeAvailableZonesAvailableZonesItemSupportSpecificationsSupportSpecificationsItem["Spec"].isNull())
				supportSpecificationsObject.spec = dataNodeAvailableZonesAvailableZonesItemSupportSpecificationsSupportSpecificationsItem["Spec"].asString();
			if(!dataNodeAvailableZonesAvailableZonesItemSupportSpecificationsSupportSpecificationsItem["InstanceClass"].isNull())
				supportSpecificationsObject.instanceClass = dataNodeAvailableZonesAvailableZonesItemSupportSpecificationsSupportSpecificationsItem["InstanceClass"].asString();
			auto allSupportEngineVersionsNode = dataNodeAvailableZonesAvailableZonesItemSupportSpecificationsSupportSpecificationsItem["SupportEngineVersions"]["SupportEngineVersionsItem"];
			for (auto dataNodeAvailableZonesAvailableZonesItemSupportSpecificationsSupportSpecificationsItemSupportEngineVersionsSupportEngineVersionsItem : allSupportEngineVersionsNode)
			{
				Data::AvailableZonesItem::SupportSpecificationsItem::SupportEngineVersionsItem supportEngineVersionsObject;
				if(!dataNodeAvailableZonesAvailableZonesItemSupportSpecificationsSupportSpecificationsItemSupportEngineVersionsSupportEngineVersionsItem["ObVersion"].isNull())
					supportEngineVersionsObject.obVersion = dataNodeAvailableZonesAvailableZonesItemSupportSpecificationsSupportSpecificationsItemSupportEngineVersionsSupportEngineVersionsItem["ObVersion"].asString();
				if(!dataNodeAvailableZonesAvailableZonesItemSupportSpecificationsSupportSpecificationsItemSupportEngineVersionsSupportEngineVersionsItem["SupportIsolationOptimization"].isNull())
					supportEngineVersionsObject.supportIsolationOptimization = dataNodeAvailableZonesAvailableZonesItemSupportSpecificationsSupportSpecificationsItemSupportEngineVersionsSupportEngineVersionsItem["SupportIsolationOptimization"].asString() == "true";
				auto allSupportReplicaModes = value["SupportReplicaModes"]["SupportReplicaModes"];
				for (auto value : allSupportReplicaModes)
					supportEngineVersionsObject.supportReplicaModes.push_back(value.asString());
				supportSpecificationsObject.supportEngineVersions.push_back(supportEngineVersionsObject);
			}
			auto diskSizeRangeNode = value["DiskSizeRange"];
			if(!diskSizeRangeNode["Step"].isNull())
				supportSpecificationsObject.diskSizeRange.step = std::stol(diskSizeRangeNode["Step"].asString());
			if(!diskSizeRangeNode["Max"].isNull())
				supportSpecificationsObject.diskSizeRange.max = std::stol(diskSizeRangeNode["Max"].asString());
			if(!diskSizeRangeNode["Min"].isNull())
				supportSpecificationsObject.diskSizeRange.min = std::stol(diskSizeRangeNode["Min"].asString());
			auto allDiskTypes = value["DiskTypes"]["DiskTypes"];
			for (auto value : allDiskTypes)
				supportSpecificationsObject.diskTypes.push_back(value.asString());
			availableZonesItemObject.supportSpecifications.push_back(supportSpecificationsObject);
		}
		data_.availableZones.push_back(availableZonesItemObject);
	}

}

DescribeAvailableZoneResult::Data DescribeAvailableZoneResult::getData()const
{
	return data_;
}

