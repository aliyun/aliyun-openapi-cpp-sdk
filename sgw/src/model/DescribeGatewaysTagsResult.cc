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

#include <alibabacloud/sgw/model/DescribeGatewaysTagsResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Sgw;
using namespace AlibabaCloud::Sgw::Model;

DescribeGatewaysTagsResult::DescribeGatewaysTagsResult() :
	ServiceResult()
{}

DescribeGatewaysTagsResult::DescribeGatewaysTagsResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

DescribeGatewaysTagsResult::~DescribeGatewaysTagsResult()
{}

void DescribeGatewaysTagsResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto allGatewayTagsNode = value["GatewayTags"]["GatewayTag"];
	for (auto valueGatewayTagsGatewayTag : allGatewayTagsNode)
	{
		GatewayTag gatewayTagsObject;
		if(!valueGatewayTagsGatewayTag["GatewayId"].isNull())
			gatewayTagsObject.gatewayId = valueGatewayTagsGatewayTag["GatewayId"].asString();
		auto allTagsNode = valueGatewayTagsGatewayTag["Tags"]["Tag"];
		for (auto valueGatewayTagsGatewayTagTagsTag : allTagsNode)
		{
			GatewayTag::Tag tagsObject;
			if(!valueGatewayTagsGatewayTagTagsTag["TagKey"].isNull())
				tagsObject.tagKey = valueGatewayTagsGatewayTagTagsTag["TagKey"].asString();
			if(!valueGatewayTagsGatewayTagTagsTag["TagValue"].isNull())
				tagsObject.tagValue = valueGatewayTagsGatewayTagTagsTag["TagValue"].asString();
			gatewayTagsObject.tags.push_back(tagsObject);
		}
		gatewayTags_.push_back(gatewayTagsObject);
	}
	if(!value["Success"].isNull())
		success_ = value["Success"].asString() == "true";
	if(!value["Code"].isNull())
		code_ = value["Code"].asString();
	if(!value["Message"].isNull())
		message_ = value["Message"].asString();

}

std::string DescribeGatewaysTagsResult::getMessage()const
{
	return message_;
}

std::vector<DescribeGatewaysTagsResult::GatewayTag> DescribeGatewaysTagsResult::getGatewayTags()const
{
	return gatewayTags_;
}

std::string DescribeGatewaysTagsResult::getCode()const
{
	return code_;
}

bool DescribeGatewaysTagsResult::getSuccess()const
{
	return success_;
}

