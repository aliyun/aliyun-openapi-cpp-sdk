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

#include <alibabacloud/emr/model/ListScalingActivityResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Emr;
using namespace AlibabaCloud::Emr::Model;

ListScalingActivityResult::ListScalingActivityResult() :
	ServiceResult()
{}

ListScalingActivityResult::ListScalingActivityResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

ListScalingActivityResult::~ListScalingActivityResult()
{}

void ListScalingActivityResult::parse(const std::string &payload)
{
	Json::CharReaderBuilder builder;
	Json::CharReader *reader = builder.newCharReader();
	Json::Value *val;
	Json::Value value;
	JSONCPP_STRING *errs;
	reader->parse(payload.data(), payload.data() + payload.size(), val, errs);
	value = *val;
	setRequestId(value["RequestId"].asString());
	auto allScalingActivityList = value["ScalingActivityList"]["ScalingActivity"];
	for (auto value : allScalingActivityList)
	{
		ScalingActivity scalingActivityListObject;
		if(!value["BizId"].isNull())
			scalingActivityListObject.bizId = value["BizId"].asString();
		if(!value["StartTime"].isNull())
			scalingActivityListObject.startTime = std::stol(value["StartTime"].asString());
		if(!value["EndTime"].isNull())
			scalingActivityListObject.endTime = std::stol(value["EndTime"].asString());
		if(!value["InstanceIds"].isNull())
			scalingActivityListObject.instanceIds = value["InstanceIds"].asString();
		if(!value["TotalCapacity"].isNull())
			scalingActivityListObject.totalCapacity = std::stoi(value["TotalCapacity"].asString());
		if(!value["Cause"].isNull())
			scalingActivityListObject.cause = value["Cause"].asString();
		if(!value["Description"].isNull())
			scalingActivityListObject.description = value["Description"].asString();
		if(!value["Status"].isNull())
			scalingActivityListObject.status = value["Status"].asString();
		if(!value["Transition"].isNull())
			scalingActivityListObject.transition = value["Transition"].asString();
		if(!value["ScalingRuleId"].isNull())
			scalingActivityListObject.scalingRuleId = value["ScalingRuleId"].asString();
		if(!value["ExpectNum"].isNull())
			scalingActivityListObject.expectNum = std::stoi(value["ExpectNum"].asString());
		scalingActivityList_.push_back(scalingActivityListObject);
	}
	if(!value["PageNumber"].isNull())
		pageNumber_ = std::stoi(value["PageNumber"].asString());
	if(!value["PageSize"].isNull())
		pageSize_ = std::stoi(value["PageSize"].asString());
	if(!value["Total"].isNull())
		total_ = std::stoi(value["Total"].asString());

}

int ListScalingActivityResult::getPageSize()const
{
	return pageSize_;
}

int ListScalingActivityResult::getPageNumber()const
{
	return pageNumber_;
}

int ListScalingActivityResult::getTotal()const
{
	return total_;
}

std::vector<ListScalingActivityResult::ScalingActivity> ListScalingActivityResult::getScalingActivityList()const
{
	return scalingActivityList_;
}

