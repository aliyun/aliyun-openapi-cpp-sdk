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

#include <alibabacloud/aegis/model/DescribeEmgNoticeResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Aegis;
using namespace AlibabaCloud::Aegis::Model;

DescribeEmgNoticeResult::DescribeEmgNoticeResult() :
	ServiceResult()
{}

DescribeEmgNoticeResult::DescribeEmgNoticeResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

DescribeEmgNoticeResult::~DescribeEmgNoticeResult()
{}

void DescribeEmgNoticeResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto allEmgVulGroupListNode = value["EmgVulGroupList"]["EmgVulGroup"];
	for (auto valueEmgVulGroupListEmgVulGroup : allEmgVulGroupListNode)
	{
		EmgVulGroup emgVulGroupListObject;
		if(!valueEmgVulGroupListEmgVulGroup["AliasName"].isNull())
			emgVulGroupListObject.aliasName = valueEmgVulGroupListEmgVulGroup["AliasName"].asString();
		if(!valueEmgVulGroupListEmgVulGroup["Name"].isNull())
			emgVulGroupListObject.name = valueEmgVulGroupListEmgVulGroup["Name"].asString();
		if(!valueEmgVulGroupListEmgVulGroup["GmtPublish"].isNull())
			emgVulGroupListObject.gmtPublish = std::stol(valueEmgVulGroupListEmgVulGroup["GmtPublish"].asString());
		if(!valueEmgVulGroupListEmgVulGroup["Description"].isNull())
			emgVulGroupListObject.description = valueEmgVulGroupListEmgVulGroup["Description"].asString();
		if(!valueEmgVulGroupListEmgVulGroup["Type"].isNull())
			emgVulGroupListObject.type = valueEmgVulGroupListEmgVulGroup["Type"].asString();
		if(!valueEmgVulGroupListEmgVulGroup["Status"].isNull())
			emgVulGroupListObject.status = std::stoi(valueEmgVulGroupListEmgVulGroup["Status"].asString());
		emgVulGroupList_.push_back(emgVulGroupListObject);
	}
	if(!value["TotalCount"].isNull())
		totalCount_ = std::stoi(value["TotalCount"].asString());

}

int DescribeEmgNoticeResult::getTotalCount()const
{
	return totalCount_;
}

std::vector<DescribeEmgNoticeResult::EmgVulGroup> DescribeEmgNoticeResult::getEmgVulGroupList()const
{
	return emgVulGroupList_;
}

