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

#include <alibabacloud/emr/model/DescribeHostPoolResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Emr;
using namespace AlibabaCloud::Emr::Model;

DescribeHostPoolResult::DescribeHostPoolResult() :
	ServiceResult()
{}

DescribeHostPoolResult::DescribeHostPoolResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

DescribeHostPoolResult::~DescribeHostPoolResult()
{}

void DescribeHostPoolResult::parse(const std::string &payload)
{
	Json::CharReaderBuilder builder;
	Json::CharReader *reader = builder.newCharReader();
	Json::Value *val;
	Json::Value value;
	JSONCPP_STRING *errs;
	reader->parse(payload.data(), payload.data() + payload.size(), val, errs);
	value = *val;
	setRequestId(value["RequestId"].asString());
	if(!value["Name"].isNull())
		name_ = value["Name"].asString();
	if(!value["BizId"].isNull())
		bizId_ = value["BizId"].asString();
	if(!value["Status"].isNull())
		status_ = value["Status"].asString();
	if(!value["Type"].isNull())
		type_ = value["Type"].asString();
	if(!value["Description"].isNull())
		description_ = value["Description"].asString();
	if(!value["HostCount"].isNull())
		hostCount_ = std::stoi(value["HostCount"].asString());
	if(!value["GmtCreate"].isNull())
		gmtCreate_ = std::stol(value["GmtCreate"].asString());

}

std::string DescribeHostPoolResult::getStatus()const
{
	return status_;
}

std::string DescribeHostPoolResult::getType()const
{
	return type_;
}

long DescribeHostPoolResult::getGmtCreate()const
{
	return gmtCreate_;
}

std::string DescribeHostPoolResult::getDescription()const
{
	return description_;
}

int DescribeHostPoolResult::getHostCount()const
{
	return hostCount_;
}

std::string DescribeHostPoolResult::getBizId()const
{
	return bizId_;
}

std::string DescribeHostPoolResult::getName()const
{
	return name_;
}

