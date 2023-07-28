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

#include <alibabacloud/dts/model/DescribeSubscriptionObjectModifyStatusResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Dts;
using namespace AlibabaCloud::Dts::Model;

DescribeSubscriptionObjectModifyStatusResult::DescribeSubscriptionObjectModifyStatusResult() :
	ServiceResult()
{}

DescribeSubscriptionObjectModifyStatusResult::DescribeSubscriptionObjectModifyStatusResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

DescribeSubscriptionObjectModifyStatusResult::~DescribeSubscriptionObjectModifyStatusResult()
{}

void DescribeSubscriptionObjectModifyStatusResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto allDetailNode = value["Detail"]["CheckItem"];
	for (auto valueDetailCheckItem : allDetailNode)
	{
		CheckItem detailObject;
		if(!valueDetailCheckItem["CheckStatus"].isNull())
			detailObject.checkStatus = valueDetailCheckItem["CheckStatus"].asString();
		if(!valueDetailCheckItem["ErrorMessage"].isNull())
			detailObject.errorMessage = valueDetailCheckItem["ErrorMessage"].asString();
		if(!valueDetailCheckItem["ItemName"].isNull())
			detailObject.itemName = valueDetailCheckItem["ItemName"].asString();
		if(!valueDetailCheckItem["RepairMethod"].isNull())
			detailObject.repairMethod = valueDetailCheckItem["RepairMethod"].asString();
		detail_.push_back(detailObject);
	}
	if(!value["Status"].isNull())
		status_ = value["Status"].asString();
	if(!value["Percent"].isNull())
		percent_ = value["Percent"].asString();

}

std::string DescribeSubscriptionObjectModifyStatusResult::getStatus()const
{
	return status_;
}

std::string DescribeSubscriptionObjectModifyStatusResult::getPercent()const
{
	return percent_;
}

std::vector<DescribeSubscriptionObjectModifyStatusResult::CheckItem> DescribeSubscriptionObjectModifyStatusResult::getDetail()const
{
	return detail_;
}

