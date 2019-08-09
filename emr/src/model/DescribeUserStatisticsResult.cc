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

#include <alibabacloud/emr/model/DescribeUserStatisticsResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Emr;
using namespace AlibabaCloud::Emr::Model;

DescribeUserStatisticsResult::DescribeUserStatisticsResult() :
	ServiceResult()
{}

DescribeUserStatisticsResult::DescribeUserStatisticsResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

DescribeUserStatisticsResult::~DescribeUserStatisticsResult()
{}

void DescribeUserStatisticsResult::parse(const std::string &payload)
{
	Json::CharReaderBuilder builder;
	Json::CharReader *reader = builder.newCharReader();
	Json::Value *value;
	JSONCPP_STRING *errs;
	reader->parse(payload.data(), payload.data() + payload.size(), value, errs);
	setRequestId((*value)["RequestId"].asString());
	if(!value["Id"].isNull())
		id_ = std::stol(value["Id"].asString());
	if(!value["UserId"].isNull())
		userId_ = value["UserId"].asString();
	if(!value["JobNum"].isNull())
		jobNum_ = std::stoi(value["JobNum"].asString());
	if(!value["ExecutePlanNum"].isNull())
		executePlanNum_ = std::stoi(value["ExecutePlanNum"].asString());
	if(!value["InteractionJobNum"].isNull())
		interactionJobNum_ = std::stoi(value["InteractionJobNum"].asString());
	if(!value["JobMigratedNum"].isNull())
		jobMigratedNum_ = std::stoi(value["JobMigratedNum"].asString());
	if(!value["ExecutePlanMigratedNum"].isNull())
		executePlanMigratedNum_ = std::stoi(value["ExecutePlanMigratedNum"].asString());
	if(!value["InteractionJobMigratedNum"].isNull())
		interactionJobMigratedNum_ = std::stoi(value["InteractionJobMigratedNum"].asString());

}

int DescribeUserStatisticsResult::getJobMigratedNum()const
{
	return jobMigratedNum_;
}

int DescribeUserStatisticsResult::getExecutePlanMigratedNum()const
{
	return executePlanMigratedNum_;
}

int DescribeUserStatisticsResult::getExecutePlanNum()const
{
	return executePlanNum_;
}

std::string DescribeUserStatisticsResult::getUserId()const
{
	return userId_;
}

int DescribeUserStatisticsResult::getInteractionJobNum()const
{
	return interactionJobNum_;
}

int DescribeUserStatisticsResult::getJobNum()const
{
	return jobNum_;
}

long DescribeUserStatisticsResult::getId()const
{
	return id_;
}

int DescribeUserStatisticsResult::getInteractionJobMigratedNum()const
{
	return interactionJobMigratedNum_;
}

