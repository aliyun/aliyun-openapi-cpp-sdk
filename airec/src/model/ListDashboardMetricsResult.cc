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
	auto allresultNode = value["result"]["resultItem"];
	for (auto valueresultresultItem : allresultNode)
	{
		ResultItem resultObject;
		if(!valueresultresultItem["total"].isNull())
			resultObject.total = valueresultresultItem["total"].asString();
		auto alldetailNode = valueresultresultItem["detail"]["detailItem"];
		for (auto valueresultresultItemdetaildetailItem : alldetailNode)
		{
			ResultItem::DetailItem detailObject;
			if(!valueresultresultItemdetaildetailItem["endTime"].isNull())
				detailObject.endTime = valueresultresultItemdetaildetailItem["endTime"].asString();
			if(!valueresultresultItemdetaildetailItem["startTime"].isNull())
				detailObject.startTime = valueresultresultItemdetaildetailItem["startTime"].asString();
			if(!valueresultresultItemdetaildetailItem["val"].isNull())
				detailObject.val = valueresultresultItemdetaildetailItem["val"].asString();
			resultObject.detail.push_back(detailObject);
		}
		result_.push_back(resultObject);
	}
	if(!value["requestId"].isNull())
		requestId_ = value["requestId"].asString();
	if(!value["code"].isNull())
		code_ = value["code"].asString();
	if(!value["message"].isNull())
		message_ = value["message"].asString();

}

std::vector<ListDashboardMetricsResult::ResultItem> ListDashboardMetricsResult::getresult()const
{
	return result_;
}

std::string ListDashboardMetricsResult::getRequestId()const
{
	return requestId_;
}

std::string ListDashboardMetricsResult::getMessage()const
{
	return message_;
}

std::string ListDashboardMetricsResult::getCode()const
{
	return code_;
}

