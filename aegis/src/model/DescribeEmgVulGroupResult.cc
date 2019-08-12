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

#include <alibabacloud/aegis/model/DescribeEmgVulGroupResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Aegis;
using namespace AlibabaCloud::Aegis::Model;

DescribeEmgVulGroupResult::DescribeEmgVulGroupResult() :
	ServiceResult()
{}

DescribeEmgVulGroupResult::DescribeEmgVulGroupResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

DescribeEmgVulGroupResult::~DescribeEmgVulGroupResult()
{}

void DescribeEmgVulGroupResult::parse(const std::string &payload)
{
	Json::CharReaderBuilder builder;
	Json::CharReader *reader = builder.newCharReader();
	Json::Value *val;
	Json::Value value;
	JSONCPP_STRING *errs;
	reader->parse(payload.data(), payload.data() + payload.size(), val, errs);
	value = *val;
	setRequestId(value["RequestId"].asString());
	auto allEmgVulGroupList = value["EmgVulGroupList"]["EmgVulGroup"];
	for (auto value : allEmgVulGroupList)
	{
		EmgVulGroup emgVulGroupListObject;
		if(!value["AliasName"].isNull())
			emgVulGroupListObject.aliasName = value["AliasName"].asString();
		if(!value["PendingCount"].isNull())
			emgVulGroupListObject.pendingCount = std::stoi(value["PendingCount"].asString());
		if(!value["Name"].isNull())
			emgVulGroupListObject.name = value["Name"].asString();
		if(!value["GmtPublish"].isNull())
			emgVulGroupListObject.gmtPublish = std::stol(value["GmtPublish"].asString());
		if(!value["Description"].isNull())
			emgVulGroupListObject.description = value["Description"].asString();
		if(!value["Type"].isNull())
			emgVulGroupListObject.type = value["Type"].asString();
		if(!value["Status"].isNull())
			emgVulGroupListObject.status = std::stoi(value["Status"].asString());
		if(!value["Progress"].isNull())
			emgVulGroupListObject.progress = std::stoi(value["Progress"].asString());
		emgVulGroupList_.push_back(emgVulGroupListObject);
	}
	if(!value["TotalCount"].isNull())
		totalCount_ = std::stoi(value["TotalCount"].asString());

}

int DescribeEmgVulGroupResult::getTotalCount()const
{
	return totalCount_;
}

std::vector<DescribeEmgVulGroupResult::EmgVulGroup> DescribeEmgVulGroupResult::getEmgVulGroupList()const
{
	return emgVulGroupList_;
}

