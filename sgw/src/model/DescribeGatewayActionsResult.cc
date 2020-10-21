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

#include <alibabacloud/sgw/model/DescribeGatewayActionsResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Sgw;
using namespace AlibabaCloud::Sgw::Model;

DescribeGatewayActionsResult::DescribeGatewayActionsResult() :
	ServiceResult()
{}

DescribeGatewayActionsResult::DescribeGatewayActionsResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

DescribeGatewayActionsResult::~DescribeGatewayActionsResult()
{}

void DescribeGatewayActionsResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto allActionsNode = value["Actions"]["Action"];
	for (auto valueActionsAction : allActionsNode)
	{
		Action actionsObject;
		if(!valueActionsAction["GatewayId"].isNull())
			actionsObject.gatewayId = valueActionsAction["GatewayId"].asString();
		if(!valueActionsAction["Self"].isNull())
			actionsObject.self = valueActionsAction["Self"].asString();
		if(!valueActionsAction["Monitor"].isNull())
			actionsObject.monitor = valueActionsAction["Monitor"].asString();
		if(!valueActionsAction["Disk"].isNull())
			actionsObject.disk = valueActionsAction["Disk"].asString();
		if(!valueActionsAction["Cache"].isNull())
			actionsObject.cache = valueActionsAction["Cache"].asString();
		if(!valueActionsAction["SmbUser"].isNull())
			actionsObject.smbUser = valueActionsAction["SmbUser"].asString();
		if(!valueActionsAction["AdLdap"].isNull())
			actionsObject.adLdap = valueActionsAction["AdLdap"].asString();
		if(!valueActionsAction["Target"].isNull())
			actionsObject.target = valueActionsAction["Target"].asString();
		actions_.push_back(actionsObject);
	}
	if(!value["Success"].isNull())
		success_ = value["Success"].asString() == "true";
	if(!value["Code"].isNull())
		code_ = value["Code"].asString();
	if(!value["Message"].isNull())
		message_ = value["Message"].asString();

}

std::string DescribeGatewayActionsResult::getMessage()const
{
	return message_;
}

std::vector<DescribeGatewayActionsResult::Action> DescribeGatewayActionsResult::getActions()const
{
	return actions_;
}

std::string DescribeGatewayActionsResult::getCode()const
{
	return code_;
}

bool DescribeGatewayActionsResult::getSuccess()const
{
	return success_;
}

