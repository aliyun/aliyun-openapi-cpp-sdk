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

#include <alibabacloud/cloudapi/model/DescribeTrafficControlsResult.h>
#include <json/json.h>

using namespace AlibabaCloud::CloudAPI;
using namespace AlibabaCloud::CloudAPI::Model;

DescribeTrafficControlsResult::DescribeTrafficControlsResult() :
	ServiceResult()
{}

DescribeTrafficControlsResult::DescribeTrafficControlsResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

DescribeTrafficControlsResult::~DescribeTrafficControlsResult()
{}

void DescribeTrafficControlsResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);

	setRequestId(value["RequestId"].asString());
	auto allTrafficControls = value["TrafficControls"]["TrafficControl"];
	for (auto value : allTrafficControls)
	{
		TrafficControl trafficControlsObject;
		if(!value["TrafficControlId"].isNull())
			trafficControlsObject.trafficControlId = value["TrafficControlId"].asString();
		if(!value["TrafficControlName"].isNull())
			trafficControlsObject.trafficControlName = value["TrafficControlName"].asString();
		if(!value["Description"].isNull())
			trafficControlsObject.description = value["Description"].asString();
		if(!value["TrafficControlUnit"].isNull())
			trafficControlsObject.trafficControlUnit = value["TrafficControlUnit"].asString();
		if(!value["ApiDefault"].isNull())
			trafficControlsObject.apiDefault = std::stoi(value["ApiDefault"].asString());
		if(!value["UserDefault"].isNull())
			trafficControlsObject.userDefault = std::stoi(value["UserDefault"].asString());
		if(!value["AppDefault"].isNull())
			trafficControlsObject.appDefault = std::stoi(value["AppDefault"].asString());
		if(!value["CreatedTime"].isNull())
			trafficControlsObject.createdTime = value["CreatedTime"].asString();
		if(!value["ModifiedTime"].isNull())
			trafficControlsObject.modifiedTime = value["ModifiedTime"].asString();
		auto allSpecialPolicies = value["SpecialPolicies"]["SpecialPolicy"];
		for (auto value : allSpecialPolicies)
		{
			TrafficControl::SpecialPolicy specialPoliciesObject;
			if(!value["SpecialType"].isNull())
				specialPoliciesObject.specialType = value["SpecialType"].asString();
			auto allSpecials = value["Specials"]["Special"];
			for (auto value : allSpecials)
			{
				TrafficControl::SpecialPolicy::Special specialsObject;
				if(!value["SpecialKey"].isNull())
					specialsObject.specialKey = value["SpecialKey"].asString();
				if(!value["TrafficValue"].isNull())
					specialsObject.trafficValue = std::stoi(value["TrafficValue"].asString());
				specialPoliciesObject.specials.push_back(specialsObject);
			}
			trafficControlsObject.specialPolicies.push_back(specialPoliciesObject);
		}
		trafficControls_.push_back(trafficControlsObject);
	}
	if(!value["TotalCount"].isNull())
		totalCount_ = std::stoi(value["TotalCount"].asString());
	if(!value["PageSize"].isNull())
		pageSize_ = std::stoi(value["PageSize"].asString());
	if(!value["PageNumber"].isNull())
		pageNumber_ = std::stoi(value["PageNumber"].asString());

}

int DescribeTrafficControlsResult::getTotalCount()const
{
	return totalCount_;
}

int DescribeTrafficControlsResult::getPageSize()const
{
	return pageSize_;
}

int DescribeTrafficControlsResult::getPageNumber()const
{
	return pageNumber_;
}

std::vector<DescribeTrafficControlsResult::TrafficControl> DescribeTrafficControlsResult::getTrafficControls()const
{
	return trafficControls_;
}

