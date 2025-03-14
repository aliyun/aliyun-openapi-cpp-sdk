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

#include <alibabacloud/sophonsoar/model/DescribeComponentPlaybookResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Sophonsoar;
using namespace AlibabaCloud::Sophonsoar::Model;

DescribeComponentPlaybookResult::DescribeComponentPlaybookResult() :
	ServiceResult()
{}

DescribeComponentPlaybookResult::DescribeComponentPlaybookResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

DescribeComponentPlaybookResult::~DescribeComponentPlaybookResult()
{}

void DescribeComponentPlaybookResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto allPlaybooksNode = value["Playbooks"]["Data"];
	for (auto valuePlaybooksData : allPlaybooksNode)
	{
		Data playbooksObject;
		if(!valuePlaybooksData["DisplayName"].isNull())
			playbooksObject.displayName = valuePlaybooksData["DisplayName"].asString();
		if(!valuePlaybooksData["PlaybookUuid"].isNull())
			playbooksObject.playbookUuid = valuePlaybooksData["PlaybookUuid"].asString();
		if(!valuePlaybooksData["OwnType"].isNull())
			playbooksObject.ownType = valuePlaybooksData["OwnType"].asString();
		if(!valuePlaybooksData["InputParams"].isNull())
			playbooksObject.inputParams = valuePlaybooksData["InputParams"].asString();
		if(!valuePlaybooksData["OutputParams"].isNull())
			playbooksObject.outputParams = valuePlaybooksData["OutputParams"].asString();
		if(!valuePlaybooksData["Description"].isNull())
			playbooksObject.description = valuePlaybooksData["Description"].asString();
		if(!valuePlaybooksData["TenantId"].isNull())
			playbooksObject.tenantId = valuePlaybooksData["TenantId"].asString();
		playbooks_.push_back(playbooksObject);
	}

}

std::vector<DescribeComponentPlaybookResult::Data> DescribeComponentPlaybookResult::getPlaybooks()const
{
	return playbooks_;
}

