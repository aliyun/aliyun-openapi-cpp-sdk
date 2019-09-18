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

#include <alibabacloud/afs/model/DescribeOrderInfoResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Afs;
using namespace AlibabaCloud::Afs::Model;

DescribeOrderInfoResult::DescribeOrderInfoResult() :
	ServiceResult()
{}

DescribeOrderInfoResult::DescribeOrderInfoResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

DescribeOrderInfoResult::~DescribeOrderInfoResult()
{}

void DescribeOrderInfoResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	if(!value["BizCode"].isNull())
		bizCode_ = value["BizCode"].asString();
	if(!value["OrderLevel"].isNull())
		orderLevel_ = value["OrderLevel"].asString();
	if(!value["Num"].isNull())
		num_ = value["Num"].asString();
	if(!value["BeginDate"].isNull())
		beginDate_ = value["BeginDate"].asString();
	if(!value["EndDate"].isNull())
		endDate_ = value["EndDate"].asString();

}

std::string DescribeOrderInfoResult::getOrderLevel()const
{
	return orderLevel_;
}

std::string DescribeOrderInfoResult::getNum()const
{
	return num_;
}

std::string DescribeOrderInfoResult::getEndDate()const
{
	return endDate_;
}

std::string DescribeOrderInfoResult::getBizCode()const
{
	return bizCode_;
}

std::string DescribeOrderInfoResult::getBeginDate()const
{
	return beginDate_;
}

