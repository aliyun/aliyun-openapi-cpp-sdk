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

#include <alibabacloud/airec/model/ListDashboardMetricsResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Airec;
using namespace AlibabaCloud::Airec::Model;

ListDashboardMetricsResult::ListDashboardMetricsResult() :
	ServiceResult()
{}

ListDashboardMetricsResult::ListDashboardMetricsResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

ListDashboardMetricsResult::~ListDashboardMetricsResult()
{}

void ListDashboardMetricsResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto allResultNode = value["Result"]["ResultItem"];
	for (auto valueResultResultItem : allResultNode)
	{
		ResultItem resultObject;
		if(!valueResultResultItem["Total"].isNull())
			resultObject.total = valueResultResultItem["Total"].asString();
		auto allDetailNode = allResultNode["Detail"]["DetailItem"];
		for (auto allResultNodeDetailDetailItem : allDetailNode)
		{
			ResultItem::DetailItem detailObject;
			if(!allResultNodeDetailDetailItem["Val"].isNull())
				detailObject.val = allResultNodeDetailDetailItem["Val"].asString();
			if(!allResultNodeDetailDetailItem["StartTime"].isNull())
				detailObject.startTime = allResultNodeDetailDetailItem["StartTime"].asString();
			if(!allResultNodeDetailDetailItem["EndTime"].isNull())
				detailObject.endTime = allResultNodeDetailDetailItem["EndTime"].asString();
			resultObject.detail.push_back(detailObject);
		}
		result_.push_back(resultObject);
	}

}

std::vector<ListDashboardMetricsResult::ResultItem> ListDashboardMetricsResult::getResult()const
{
	return result_;
}

