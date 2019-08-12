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

#include <alibabacloud/ehpc/model/ListPreferredEcsTypesResult.h>
#include <json/json.h>

using namespace AlibabaCloud::EHPC;
using namespace AlibabaCloud::EHPC::Model;

ListPreferredEcsTypesResult::ListPreferredEcsTypesResult() :
	ServiceResult()
{}

ListPreferredEcsTypesResult::ListPreferredEcsTypesResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

ListPreferredEcsTypesResult::~ListPreferredEcsTypesResult()
{}

void ListPreferredEcsTypesResult::parse(const std::string &payload)
{
	Json::CharReaderBuilder builder;
	Json::CharReader *reader = builder.newCharReader();
	Json::Value *val;
	Json::Value value;
	JSONCPP_STRING *errs;
	reader->parse(payload.data(), payload.data() + payload.size(), val, errs);
	value = *val;
	setRequestId(value["RequestId"].asString());
	auto allSeries = value["Series"]["SeriesInfo"];
	for (auto value : allSeries)
	{
		SeriesInfo seriesObject;
		if(!value["SeriesId"].isNull())
			seriesObject.seriesId = value["SeriesId"].asString();
		if(!value["SeriesName"].isNull())
			seriesObject.seriesName = value["SeriesName"].asString();
		auto rolesNode = value["Roles"];
			auto allManager = rolesNode["Manager"]["InstanceTypeId"];
			for (auto value : allManager)
				seriesObject.roles.manager.push_back(value.asString());
			auto allCompute = rolesNode["Compute"]["InstanceTypeId"];
			for (auto value : allCompute)
				seriesObject.roles.compute.push_back(value.asString());
			auto allLogin = rolesNode["Login"]["InstanceTypeId"];
			for (auto value : allLogin)
				seriesObject.roles.login.push_back(value.asString());
		series_.push_back(seriesObject);
	}
	if(!value["SupportSpotInstance"].isNull())
		supportSpotInstance_ = value["SupportSpotInstance"].asString() == "true";

}

std::vector<ListPreferredEcsTypesResult::SeriesInfo> ListPreferredEcsTypesResult::getSeries()const
{
	return series_;
}

bool ListPreferredEcsTypesResult::getSupportSpotInstance()const
{
	return supportSpotInstance_;
}

