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

#include <alibabacloud/sddp/model/DescribeEventTopResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Sddp;
using namespace AlibabaCloud::Sddp::Model;

DescribeEventTopResult::DescribeEventTopResult() :
	ServiceResult()
{}

DescribeEventTopResult::DescribeEventTopResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

DescribeEventTopResult::~DescribeEventTopResult()
{}

void DescribeEventTopResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto allDataCountListNode = value["DataCountList"]["DataCount"];
	for (auto valueDataCountListDataCount : allDataCountListNode)
	{
		DataCount dataCountListObject;
		if(!valueDataCountListDataCount["EventName"].isNull())
			dataCountListObject.eventName = valueDataCountListDataCount["EventName"].asString();
		if(!valueDataCountListDataCount["InstanceName"].isNull())
			dataCountListObject.instanceName = valueDataCountListDataCount["InstanceName"].asString();
		if(!valueDataCountListDataCount["ProductCode"].isNull())
			dataCountListObject.productCode = valueDataCountListDataCount["ProductCode"].asString();
		if(!valueDataCountListDataCount["UserName"].isNull())
			dataCountListObject.userName = valueDataCountListDataCount["UserName"].asString();
		if(!valueDataCountListDataCount["RemoteIp"].isNull())
			dataCountListObject.remoteIp = valueDataCountListDataCount["RemoteIp"].asString();
		if(!valueDataCountListDataCount["Id"].isNull())
			dataCountListObject.id = std::stol(valueDataCountListDataCount["Id"].asString());
		dataCountList_.push_back(dataCountListObject);
	}

}

std::vector<DescribeEventTopResult::DataCount> DescribeEventTopResult::getDataCountList()const
{
	return dataCountList_;
}

