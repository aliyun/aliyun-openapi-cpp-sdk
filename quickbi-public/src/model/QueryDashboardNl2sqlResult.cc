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

#include <alibabacloud/quickbi-public/model/QueryDashboardNl2sqlResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Quickbi_public;
using namespace AlibabaCloud::Quickbi_public::Model;

QueryDashboardNl2sqlResult::QueryDashboardNl2sqlResult() :
	ServiceResult()
{}

QueryDashboardNl2sqlResult::QueryDashboardNl2sqlResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

QueryDashboardNl2sqlResult::~QueryDashboardNl2sqlResult()
{}

void QueryDashboardNl2sqlResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto allResultNode = value["Result"]["Data"];
	for (auto valueResultData : allResultNode)
	{
		Data resultObject;
		if(!valueResultData["DashboardName"].isNull())
			resultObject.dashboardName = valueResultData["DashboardName"].asString();
		if(!valueResultData["DashboardNl2sqlId"].isNull())
			resultObject.dashboardNl2sqlId = valueResultData["DashboardNl2sqlId"].asString();
		if(!valueResultData["OwnerId"].isNull())
			resultObject.ownerId = valueResultData["OwnerId"].asString();
		auto allAuthorities = value["Authorities"]["Authorities"];
		for (auto value : allAuthorities)
			resultObject.authorities.push_back(value.asString());
		result_.push_back(resultObject);
	}
	if(!value["Success"].isNull())
		success_ = value["Success"].asString() == "true";

}

bool QueryDashboardNl2sqlResult::getSuccess()const
{
	return success_;
}

std::vector<QueryDashboardNl2sqlResult::Data> QueryDashboardNl2sqlResult::getResult()const
{
	return result_;
}

