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

#include <alibabacloud/emr/model/ListUserStatisticsResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Emr;
using namespace AlibabaCloud::Emr::Model;

ListUserStatisticsResult::ListUserStatisticsResult() :
	ServiceResult()
{}

ListUserStatisticsResult::ListUserStatisticsResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

ListUserStatisticsResult::~ListUserStatisticsResult()
{}

void ListUserStatisticsResult::parse(const std::string &payload)
{
	Json::CharReaderBuilder builder;
	Json::CharReader *reader = builder.newCharReader();
	Json::Value *val;
	Json::Value value;
	JSONCPP_STRING *errs;
	reader->parse(payload.data(), payload.data() + payload.size(), val, errs);
	value = *val;
	setRequestId(value["RequestId"].asString());
	auto allUserStatisticsList = value["UserStatisticsList"]["UserStatistics"];
	for (auto value : allUserStatisticsList)
	{
		UserStatistics userStatisticsListObject;
		if(!value["Id"].isNull())
			userStatisticsListObject.id = std::stol(value["Id"].asString());
		if(!value["UserId"].isNull())
			userStatisticsListObject.userId = value["UserId"].asString();
		if(!value["JobNum"].isNull())
			userStatisticsListObject.jobNum = std::stoi(value["JobNum"].asString());
		if(!value["ExecutePlanNum"].isNull())
			userStatisticsListObject.executePlanNum = std::stoi(value["ExecutePlanNum"].asString());
		if(!value["InteractionJobNum"].isNull())
			userStatisticsListObject.interactionJobNum = std::stoi(value["InteractionJobNum"].asString());
		if(!value["JobMigratedNum"].isNull())
			userStatisticsListObject.jobMigratedNum = std::stoi(value["JobMigratedNum"].asString());
		if(!value["ExecutePlanMigratedNum"].isNull())
			userStatisticsListObject.executePlanMigratedNum = std::stoi(value["ExecutePlanMigratedNum"].asString());
		if(!value["InteractionJobMigratedNum"].isNull())
			userStatisticsListObject.interactionJobMigratedNum = std::stoi(value["InteractionJobMigratedNum"].asString());
		userStatisticsList_.push_back(userStatisticsListObject);
	}
	if(!value["Total"].isNull())
		total_ = std::stol(value["Total"].asString());

}

long ListUserStatisticsResult::getTotal()const
{
	return total_;
}

std::vector<ListUserStatisticsResult::UserStatistics> ListUserStatisticsResult::getUserStatisticsList()const
{
	return userStatisticsList_;
}

