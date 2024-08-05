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

#include <alibabacloud/arms/model/ListInsightsEventsResult.h>
#include <json/json.h>

using namespace AlibabaCloud::ARMS;
using namespace AlibabaCloud::ARMS::Model;

ListInsightsEventsResult::ListInsightsEventsResult() :
	ServiceResult()
{}

ListInsightsEventsResult::ListInsightsEventsResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

ListInsightsEventsResult::~ListInsightsEventsResult()
{}

void ListInsightsEventsResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto allInsightsEventsNode = value["InsightsEvents"]["ProblemInfos"];
	for (auto valueInsightsEventsProblemInfos : allInsightsEventsNode)
	{
		ProblemInfos insightsEventsObject;
		if(!valueInsightsEventsProblemInfos["Title"].isNull())
			insightsEventsObject.title = valueInsightsEventsProblemInfos["Title"].asString();
		if(!valueInsightsEventsProblemInfos["Desc"].isNull())
			insightsEventsObject.desc = valueInsightsEventsProblemInfos["Desc"].asString();
		if(!valueInsightsEventsProblemInfos["Type"].isNull())
			insightsEventsObject.type = valueInsightsEventsProblemInfos["Type"].asString();
		if(!valueInsightsEventsProblemInfos["Pid"].isNull())
			insightsEventsObject.pid = valueInsightsEventsProblemInfos["Pid"].asString();
		if(!valueInsightsEventsProblemInfos["Level"].isNull())
			insightsEventsObject.level = valueInsightsEventsProblemInfos["Level"].asString();
		if(!valueInsightsEventsProblemInfos["Date"].isNull())
			insightsEventsObject.date = std::stol(valueInsightsEventsProblemInfos["Date"].asString());
		if(!valueInsightsEventsProblemInfos["ProblemId"].isNull())
			insightsEventsObject.problemId = valueInsightsEventsProblemInfos["ProblemId"].asString();
		insightsEvents_.push_back(insightsEventsObject);
	}

}

std::vector<ListInsightsEventsResult::ProblemInfos> ListInsightsEventsResult::getInsightsEvents()const
{
	return insightsEvents_;
}

