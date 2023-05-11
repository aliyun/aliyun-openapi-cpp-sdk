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

#include <alibabacloud/alidns/model/DescribeGtmMonitorAvailableConfigResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Alidns;
using namespace AlibabaCloud::Alidns::Model;

DescribeGtmMonitorAvailableConfigResult::DescribeGtmMonitorAvailableConfigResult() :
	ServiceResult()
{}

DescribeGtmMonitorAvailableConfigResult::DescribeGtmMonitorAvailableConfigResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

DescribeGtmMonitorAvailableConfigResult::~DescribeGtmMonitorAvailableConfigResult()
{}

void DescribeGtmMonitorAvailableConfigResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto allIspCityNodesNode = value["IspCityNodes"]["IspCityNode"];
	for (auto valueIspCityNodesIspCityNode : allIspCityNodesNode)
	{
		IspCityNode ispCityNodesObject;
		if(!valueIspCityNodesIspCityNode["CityCode"].isNull())
			ispCityNodesObject.cityCode = valueIspCityNodesIspCityNode["CityCode"].asString();
		if(!valueIspCityNodesIspCityNode["Mainland"].isNull())
			ispCityNodesObject.mainland = valueIspCityNodesIspCityNode["Mainland"].asString() == "true";
		if(!valueIspCityNodesIspCityNode["GroupName"].isNull())
			ispCityNodesObject.groupName = valueIspCityNodesIspCityNode["GroupName"].asString();
		if(!valueIspCityNodesIspCityNode["IspCode"].isNull())
			ispCityNodesObject.ispCode = valueIspCityNodesIspCityNode["IspCode"].asString();
		if(!valueIspCityNodesIspCityNode["CityName"].isNull())
			ispCityNodesObject.cityName = valueIspCityNodesIspCityNode["CityName"].asString();
		if(!valueIspCityNodesIspCityNode["IspName"].isNull())
			ispCityNodesObject.ispName = valueIspCityNodesIspCityNode["IspName"].asString();
		if(!valueIspCityNodesIspCityNode["GroupType"].isNull())
			ispCityNodesObject.groupType = valueIspCityNodesIspCityNode["GroupType"].asString();
		if(!valueIspCityNodesIspCityNode["DefaultSelected"].isNull())
			ispCityNodesObject.defaultSelected = valueIspCityNodesIspCityNode["DefaultSelected"].asString() == "true";
		ispCityNodes_.push_back(ispCityNodesObject);
	}

}

std::vector<DescribeGtmMonitorAvailableConfigResult::IspCityNode> DescribeGtmMonitorAvailableConfigResult::getIspCityNodes()const
{
	return ispCityNodes_;
}

