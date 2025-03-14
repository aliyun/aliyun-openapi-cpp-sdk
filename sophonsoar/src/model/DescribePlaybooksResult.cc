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

#include <alibabacloud/sophonsoar/model/DescribePlaybooksResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Sophonsoar;
using namespace AlibabaCloud::Sophonsoar::Model;

DescribePlaybooksResult::DescribePlaybooksResult() :
	ServiceResult()
{}

DescribePlaybooksResult::DescribePlaybooksResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

DescribePlaybooksResult::~DescribePlaybooksResult()
{}

void DescribePlaybooksResult::parse(const std::string &payload)
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
		if(!valuePlaybooksData["Active"].isNull())
			playbooksObject.active = std::stoi(valuePlaybooksData["Active"].asString());
		if(!valuePlaybooksData["LastRuntime"].isNull())
			playbooksObject.lastRuntime = std::stol(valuePlaybooksData["LastRuntime"].asString());
		if(!valuePlaybooksData["Permission"].isNull())
			playbooksObject.permission = std::stoi(valuePlaybooksData["Permission"].asString());
		if(!valuePlaybooksData["GmtCreate"].isNull())
			playbooksObject.gmtCreate = std::stol(valuePlaybooksData["GmtCreate"].asString());
		if(!valuePlaybooksData["PlaybookStatus"].isNull())
			playbooksObject.playbookStatus = std::stoi(valuePlaybooksData["PlaybookStatus"].asString());
		if(!valuePlaybooksData["GmtModified"].isNull())
			playbooksObject.gmtModified = valuePlaybooksData["GmtModified"].asString();
		if(!valuePlaybooksData["ParamType"].isNull())
			playbooksObject.paramType = valuePlaybooksData["ParamType"].asString();
		playbooks_.push_back(playbooksObject);
	}
	auto pageNode = value["Page"];
	if(!pageNode["TotalCount"].isNull())
		page_.totalCount = std::stoi(pageNode["TotalCount"].asString());
	if(!pageNode["PageNumber"].isNull())
		page_.pageNumber = std::stoi(pageNode["PageNumber"].asString());
	if(!pageNode["PageSize"].isNull())
		page_.pageSize = std::stoi(pageNode["PageSize"].asString());

}

std::vector<DescribePlaybooksResult::Data> DescribePlaybooksResult::getPlaybooks()const
{
	return playbooks_;
}

DescribePlaybooksResult::Page DescribePlaybooksResult::getPage()const
{
	return page_;
}

