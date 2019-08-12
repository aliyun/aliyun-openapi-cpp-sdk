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

#include <alibabacloud/emr/model/DescribeJobResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Emr;
using namespace AlibabaCloud::Emr::Model;

DescribeJobResult::DescribeJobResult() :
	ServiceResult()
{}

DescribeJobResult::DescribeJobResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

DescribeJobResult::~DescribeJobResult()
{}

void DescribeJobResult::parse(const std::string &payload)
{
	Json::CharReaderBuilder builder;
	Json::CharReader *reader = builder.newCharReader();
	Json::Value *val;
	Json::Value value;
	JSONCPP_STRING *errs;
	reader->parse(payload.data(), payload.data() + payload.size(), val, errs);
	value = *val;
	setRequestId(value["RequestId"].asString());
	if(!value["Id"].isNull())
		id_ = value["Id"].asString();
	if(!value["Name"].isNull())
		name_ = value["Name"].asString();
	if(!value["FailAct"].isNull())
		failAct_ = value["FailAct"].asString();
	if(!value["Type"].isNull())
		type_ = value["Type"].asString();
	if(!value["MaxRetry"].isNull())
		maxRetry_ = std::stoi(value["MaxRetry"].asString());
	if(!value["RetryInterval"].isNull())
		retryInterval_ = std::stoi(value["RetryInterval"].asString());
	if(!value["RunParameter"].isNull())
		runParameter_ = value["RunParameter"].asString();

}

std::string DescribeJobResult::getFailAct()const
{
	return failAct_;
}

std::string DescribeJobResult::getType()const
{
	return type_;
}

std::string DescribeJobResult::getRunParameter()const
{
	return runParameter_;
}

std::string DescribeJobResult::getId()const
{
	return id_;
}

int DescribeJobResult::getMaxRetry()const
{
	return maxRetry_;
}

int DescribeJobResult::getRetryInterval()const
{
	return retryInterval_;
}

std::string DescribeJobResult::getName()const
{
	return name_;
}

