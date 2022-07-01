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

#include <alibabacloud/ddoscoo/model/DescribePortConnsCountResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Ddoscoo;
using namespace AlibabaCloud::Ddoscoo::Model;

DescribePortConnsCountResult::DescribePortConnsCountResult() :
	ServiceResult()
{}

DescribePortConnsCountResult::DescribePortConnsCountResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

DescribePortConnsCountResult::~DescribePortConnsCountResult()
{}

void DescribePortConnsCountResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	if(!value["InActConns"].isNull())
		inActConns_ = std::stol(value["InActConns"].asString());
	if(!value["ActConns"].isNull())
		actConns_ = std::stol(value["ActConns"].asString());
	if(!value["Cps"].isNull())
		cps_ = std::stol(value["Cps"].asString());
	if(!value["Conns"].isNull())
		conns_ = std::stol(value["Conns"].asString());

}

long DescribePortConnsCountResult::getConns()const
{
	return conns_;
}

long DescribePortConnsCountResult::getCps()const
{
	return cps_;
}

long DescribePortConnsCountResult::getInActConns()const
{
	return inActConns_;
}

long DescribePortConnsCountResult::getActConns()const
{
	return actConns_;
}

