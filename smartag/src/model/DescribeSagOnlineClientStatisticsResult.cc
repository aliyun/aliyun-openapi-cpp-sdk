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

#include <alibabacloud/smartag/model/DescribeSagOnlineClientStatisticsResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Smartag;
using namespace AlibabaCloud::Smartag::Model;

DescribeSagOnlineClientStatisticsResult::DescribeSagOnlineClientStatisticsResult() :
	ServiceResult()
{}

DescribeSagOnlineClientStatisticsResult::DescribeSagOnlineClientStatisticsResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

DescribeSagOnlineClientStatisticsResult::~DescribeSagOnlineClientStatisticsResult()
{}

void DescribeSagOnlineClientStatisticsResult::parse(const std::string &payload)
{
	Json::CharReaderBuilder builder;
	Json::CharReader *reader = builder.newCharReader();
	Json::Value *value;
	JSONCPP_STRING *errs;
	reader->parse(payload.data(), payload.data() + payload.size(), value, errs);
	setRequestId((*value)["RequestId"].asString());
	auto allSagStatistics = value["SagStatistics"]["Statistics"];
	for (auto value : allSagStatistics)
	{
		Statistics sagStatisticsObject;
		if(!value["SmartAGId"].isNull())
			sagStatisticsObject.smartAGId = value["SmartAGId"].asString();
		if(!value["OnlineCount"].isNull())
			sagStatisticsObject.onlineCount = value["OnlineCount"].asString();
		sagStatistics_.push_back(sagStatisticsObject);
	}

}

std::vector<DescribeSagOnlineClientStatisticsResult::Statistics> DescribeSagOnlineClientStatisticsResult::getSagStatistics()const
{
	return sagStatistics_;
}

