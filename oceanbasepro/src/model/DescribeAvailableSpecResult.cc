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

#include <alibabacloud/oceanbasepro/model/DescribeAvailableSpecResult.h>
#include <json/json.h>

using namespace AlibabaCloud::OceanBasePro;
using namespace AlibabaCloud::OceanBasePro::Model;

DescribeAvailableSpecResult::DescribeAvailableSpecResult() :
	ServiceResult()
{}

DescribeAvailableSpecResult::DescribeAvailableSpecResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

DescribeAvailableSpecResult::~DescribeAvailableSpecResult()
{}

void DescribeAvailableSpecResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto dataNode = value["Data"];
	auto allAvailableSpecificationsNode = dataNode["AvailableSpecifications"]["AvailableSpecificationsItem"];
	for (auto dataNodeAvailableSpecificationsAvailableSpecificationsItem : allAvailableSpecificationsNode)
	{
		Data::AvailableSpecificationsItem availableSpecificationsItemObject;
		if(!dataNodeAvailableSpecificationsAvailableSpecificationsItem["Spec"].isNull())
			availableSpecificationsItemObject.spec = dataNodeAvailableSpecificationsAvailableSpecificationsItem["Spec"].asString();
		if(!dataNodeAvailableSpecificationsAvailableSpecificationsItem["InstanceClass"].isNull())
			availableSpecificationsItemObject.instanceClass = dataNodeAvailableSpecificationsAvailableSpecificationsItem["InstanceClass"].asString();
		auto diskSizeRangeNode = value["DiskSizeRange"];
		if(!diskSizeRangeNode["Step"].isNull())
			availableSpecificationsItemObject.diskSizeRange.step = std::stol(diskSizeRangeNode["Step"].asString());
		if(!diskSizeRangeNode["Max"].isNull())
			availableSpecificationsItemObject.diskSizeRange.max = std::stol(diskSizeRangeNode["Max"].asString());
		if(!diskSizeRangeNode["Min"].isNull())
			availableSpecificationsItemObject.diskSizeRange.min = std::stol(diskSizeRangeNode["Min"].asString());
		auto logDiskSizeRangeNode = value["LogDiskSizeRange"];
		if(!logDiskSizeRangeNode["Step"].isNull())
			availableSpecificationsItemObject.logDiskSizeRange.step = std::stol(logDiskSizeRangeNode["Step"].asString());
		if(!logDiskSizeRangeNode["Max"].isNull())
			availableSpecificationsItemObject.logDiskSizeRange.max = std::stol(logDiskSizeRangeNode["Max"].asString());
		if(!logDiskSizeRangeNode["Min"].isNull())
			availableSpecificationsItemObject.logDiskSizeRange.min = std::stol(logDiskSizeRangeNode["Min"].asString());
		auto allNodeNum = value["NodeNum"]["NodeNum"];
		for (auto value : allNodeNum)
			availableSpecificationsItemObject.nodeNum.push_back(value.asString());
		auto allDiskTypes = value["DiskTypes"]["DiskTypes"];
		for (auto value : allDiskTypes)
			availableSpecificationsItemObject.diskTypes.push_back(value.asString());
		data_.availableSpecifications.push_back(availableSpecificationsItemObject);
	}

}

DescribeAvailableSpecResult::Data DescribeAvailableSpecResult::getData()const
{
	return data_;
}

