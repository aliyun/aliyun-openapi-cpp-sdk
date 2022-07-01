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

#include <alibabacloud/ddoscoo/model/DescribePortMaxConnsResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Ddoscoo;
using namespace AlibabaCloud::Ddoscoo::Model;

DescribePortMaxConnsResult::DescribePortMaxConnsResult() :
	ServiceResult()
{}

DescribePortMaxConnsResult::DescribePortMaxConnsResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

DescribePortMaxConnsResult::~DescribePortMaxConnsResult()
{}

void DescribePortMaxConnsResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto allPortMaxConnsNode = value["PortMaxConns"]["PortMaxConnsItem"];
	for (auto valuePortMaxConnsPortMaxConnsItem : allPortMaxConnsNode)
	{
		PortMaxConnsItem portMaxConnsObject;
		if(!valuePortMaxConnsPortMaxConnsItem["Ip"].isNull())
			portMaxConnsObject.ip = valuePortMaxConnsPortMaxConnsItem["Ip"].asString();
		if(!valuePortMaxConnsPortMaxConnsItem["Port"].isNull())
			portMaxConnsObject.port = valuePortMaxConnsPortMaxConnsItem["Port"].asString();
		if(!valuePortMaxConnsPortMaxConnsItem["Cps"].isNull())
			portMaxConnsObject.cps = std::stol(valuePortMaxConnsPortMaxConnsItem["Cps"].asString());
		portMaxConns_.push_back(portMaxConnsObject);
	}

}

std::vector<DescribePortMaxConnsResult::PortMaxConnsItem> DescribePortMaxConnsResult::getPortMaxConns()const
{
	return portMaxConns_;
}

