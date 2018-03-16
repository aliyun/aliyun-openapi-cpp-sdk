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

#include <alibabacloud/ecs/model/DescribeEventDetailResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Ecs;
using namespace AlibabaCloud::Ecs::Model;

DescribeEventDetailResult::DescribeEventDetailResult() :
	ServiceResult()
{}

DescribeEventDetailResult::DescribeEventDetailResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

DescribeEventDetailResult::~DescribeEventDetailResult()
{}

void DescribeEventDetailResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);

	setRequestId(value["RequestId"].asString());
	if(!value["ResourceId"].isNull())
		resourceId_ = value["ResourceId"].asString();
	if(!value["EventType"].isNull())
		eventType_ = value["EventType"].asString();
	if(!value["EventCategory"].isNull())
		eventCategory_ = value["EventCategory"].asString();
	if(!value["Status"].isNull())
		status_ = value["Status"].asString();
	if(!value["SupportModify"].isNull())
		supportModify_ = value["SupportModify"].asString();
	if(!value["PlanTime"].isNull())
		planTime_ = value["PlanTime"].asString();
	if(!value["ExpireTime"].isNull())
		expireTime_ = value["ExpireTime"].asString();
	if(!value["EventId"].isNull())
		eventId_ = value["EventId"].asString();
	if(!value["StartTime"].isNull())
		startTime_ = value["StartTime"].asString();
	if(!value["EndTime"].isNull())
		endTime_ = value["EndTime"].asString();
	if(!value["EffectTime"].isNull())
		effectTime_ = value["EffectTime"].asString();
	if(!value["LimitTime"].isNull())
		limitTime_ = value["LimitTime"].asString();
	if(!value["Mark"].isNull())
		mark_ = value["Mark"].asString();

}

std::string DescribeEventDetailResult::getStatus()const
{
	return status_;
}

std::string DescribeEventDetailResult::getLimitTime()const
{
	return limitTime_;
}

std::string DescribeEventDetailResult::getEventCategory()const
{
	return eventCategory_;
}

std::string DescribeEventDetailResult::getEndTime()const
{
	return endTime_;
}

std::string DescribeEventDetailResult::getEventType()const
{
	return eventType_;
}

std::string DescribeEventDetailResult::getStartTime()const
{
	return startTime_;
}

std::string DescribeEventDetailResult::getEffectTime()const
{
	return effectTime_;
}

std::string DescribeEventDetailResult::getMark()const
{
	return mark_;
}

std::string DescribeEventDetailResult::getPlanTime()const
{
	return planTime_;
}

std::string DescribeEventDetailResult::getResourceId()const
{
	return resourceId_;
}

std::string DescribeEventDetailResult::getSupportModify()const
{
	return supportModify_;
}

std::string DescribeEventDetailResult::getEventId()const
{
	return eventId_;
}

std::string DescribeEventDetailResult::getExpireTime()const
{
	return expireTime_;
}

