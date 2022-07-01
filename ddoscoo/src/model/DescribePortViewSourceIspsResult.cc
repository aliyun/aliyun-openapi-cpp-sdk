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

#include <alibabacloud/ddoscoo/model/DescribePortViewSourceIspsResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Ddoscoo;
using namespace AlibabaCloud::Ddoscoo::Model;

DescribePortViewSourceIspsResult::DescribePortViewSourceIspsResult() :
	ServiceResult()
{}

DescribePortViewSourceIspsResult::DescribePortViewSourceIspsResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

DescribePortViewSourceIspsResult::~DescribePortViewSourceIspsResult()
{}

void DescribePortViewSourceIspsResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto allIspsNode = value["Isps"]["Isp"];
	for (auto valueIspsIsp : allIspsNode)
	{
		Isp ispsObject;
		if(!valueIspsIsp["Count"].isNull())
			ispsObject.count = std::stol(valueIspsIsp["Count"].asString());
		if(!valueIspsIsp["IspId"].isNull())
			ispsObject.ispId = valueIspsIsp["IspId"].asString();
		isps_.push_back(ispsObject);
	}

}

std::vector<DescribePortViewSourceIspsResult::Isp> DescribePortViewSourceIspsResult::getIsps()const
{
	return isps_;
}

