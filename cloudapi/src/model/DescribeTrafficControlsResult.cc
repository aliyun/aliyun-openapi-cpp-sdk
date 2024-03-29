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
	auto allTrafficControlsNode = value["TrafficControls"]["TrafficControl"];
	for (auto valueTrafficControlsTrafficControl : allTrafficControlsNode)
	{
		TrafficControl trafficControlsObject;
		if(!valueTrafficControlsTrafficControl["UserDefault"].isNull())
			trafficControlsObject.userDefault = std::stoi(valueTrafficControlsTrafficControl["UserDefault"].asString());
		if(!valueTrafficControlsTrafficControl["ApiDefault"].isNull())
			trafficControlsObject.apiDefault = std::stoi(valueTrafficControlsTrafficControl["ApiDefault"].asString());
		if(!valueTrafficControlsTrafficControl["ModifiedTime"].isNull())
			trafficControlsObject.modifiedTime = valueTrafficControlsTrafficControl["ModifiedTime"].asString();
		if(!valueTrafficControlsTrafficControl["Description"].isNull())
			trafficControlsObject.description = valueTrafficControlsTrafficControl["Description"].asString();
		if(!valueTrafficControlsTrafficControl["TrafficControlUnit"].isNull())
			trafficControlsObject.trafficControlUnit = valueTrafficControlsTrafficControl["TrafficControlUnit"].asString();
		if(!valueTrafficControlsTrafficControl["TrafficControlName"].isNull())
			trafficControlsObject.trafficControlName = valueTrafficControlsTrafficControl["TrafficControlName"].asString();
		if(!valueTrafficControlsTrafficControl["AppDefault"].isNull())
			trafficControlsObject.appDefault = std::stoi(valueTrafficControlsTrafficControl["AppDefault"].asString());
		if(!valueTrafficControlsTrafficControl["TrafficControlId"].isNull())
			trafficControlsObject.trafficControlId = valueTrafficControlsTrafficControl["TrafficControlId"].asString();
		if(!valueTrafficControlsTrafficControl["CreatedTime"].isNull())
			trafficControlsObject.createdTime = valueTrafficControlsTrafficControl["CreatedTime"].asString();
		auto allSpecialPoliciesNode = valueTrafficControlsTrafficControl["SpecialPolicies"]["SpecialPolicy"];
		for (auto valueTrafficControlsTrafficControlSpecialPoliciesSpecialPolicy : allSpecialPoliciesNode)
		{
			TrafficControl::SpecialPolicy specialPoliciesObject;
			if(!valueTrafficControlsTrafficControlSpecialPoliciesSpecialPolicy["SpecialType"].isNull())
				specialPoliciesObject.specialType = valueTrafficControlsTrafficControlSpecialPoliciesSpecialPolicy["SpecialType"].asString();
			auto allSpecialsNode = valueTrafficControlsTrafficControlSpecialPoliciesSpecialPolicy["Specials"]["Special"];
			for (auto valueTrafficControlsTrafficControlSpecialPoliciesSpecialPolicySpecialsSpecial : allSpecialsNode)
			{
				TrafficControl::SpecialPolicy::Special specialsObject;
				if(!valueTrafficControlsTrafficControlSpecialPoliciesSpecialPolicySpecialsSpecial["TrafficValue"].isNull())
					specialsObject.trafficValue = std::stoi(valueTrafficControlsTrafficControlSpecialPoliciesSpecialPolicySpecialsSpecial["TrafficValue"].asString());
				if(!valueTrafficControlsTrafficControlSpecialPoliciesSpecialPolicySpecialsSpecial["SpecialKey"].isNull())
					specialsObject.specialKey = valueTrafficControlsTrafficControlSpecialPoliciesSpecialPolicySpecialsSpecial["SpecialKey"].asString();
				specialPoliciesObject.specials.push_back(specialsObject);
			}
			trafficControlsObject.specialPolicies.push_back(specialPoliciesObject);
		}
		trafficControls_.push_back(trafficControlsObject);
	}
	if(!value["PageNumber"].isNull())
		pageNumber_ = std::stoi(value["PageNumber"].asString());
	if(!value["PageSize"].isNull())
		pageSize_ = std::stoi(value["PageSize"].asString());
	if(!value["TotalCount"].isNull())
		totalCount_ = std::stoi(value["TotalCount"].asString());

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

