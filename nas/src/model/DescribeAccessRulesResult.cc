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

#include <alibabacloud/nas/model/DescribeAccessRulesResult.h>
#include <json/json.h>

using namespace AlibabaCloud::NAS;
using namespace AlibabaCloud::NAS::Model;

DescribeAccessRulesResult::DescribeAccessRulesResult() :
	ServiceResult()
{}

DescribeAccessRulesResult::DescribeAccessRulesResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

DescribeAccessRulesResult::~DescribeAccessRulesResult()
{}

void DescribeAccessRulesResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto allAccessRulesNode = value["AccessRules"]["AccessRule"];
	for (auto valueAccessRulesAccessRule : allAccessRulesNode)
	{
		AccessRule accessRulesObject;
		if(!valueAccessRulesAccessRule["AccessRuleId"].isNull())
			accessRulesObject.accessRuleId = valueAccessRulesAccessRule["AccessRuleId"].asString();
		if(!valueAccessRulesAccessRule["SourceCidrIp"].isNull())
			accessRulesObject.sourceCidrIp = valueAccessRulesAccessRule["SourceCidrIp"].asString();
		if(!valueAccessRulesAccessRule["Ipv6SourceCidrIp"].isNull())
			accessRulesObject.ipv6SourceCidrIp = valueAccessRulesAccessRule["Ipv6SourceCidrIp"].asString();
		if(!valueAccessRulesAccessRule["RWAccess"].isNull())
			accessRulesObject.rWAccess = valueAccessRulesAccessRule["RWAccess"].asString();
		if(!valueAccessRulesAccessRule["UserAccess"].isNull())
			accessRulesObject.userAccess = valueAccessRulesAccessRule["UserAccess"].asString();
		if(!valueAccessRulesAccessRule["Priority"].isNull())
			accessRulesObject.priority = std::stoi(valueAccessRulesAccessRule["Priority"].asString());
		if(!valueAccessRulesAccessRule["FileSystemType"].isNull())
			accessRulesObject.fileSystemType = valueAccessRulesAccessRule["FileSystemType"].asString();
		if(!valueAccessRulesAccessRule["AccessGroupName"].isNull())
			accessRulesObject.accessGroupName = valueAccessRulesAccessRule["AccessGroupName"].asString();
		if(!valueAccessRulesAccessRule["RegionId"].isNull())
			accessRulesObject.regionId = valueAccessRulesAccessRule["RegionId"].asString();
		accessRules_.push_back(accessRulesObject);
	}
	if(!value["TotalCount"].isNull())
		totalCount_ = std::stoi(value["TotalCount"].asString());
	if(!value["PageSize"].isNull())
		pageSize_ = std::stoi(value["PageSize"].asString());
	if(!value["PageNumber"].isNull())
		pageNumber_ = std::stoi(value["PageNumber"].asString());

}

int DescribeAccessRulesResult::getTotalCount()const
{
	return totalCount_;
}

int DescribeAccessRulesResult::getPageSize()const
{
	return pageSize_;
}

int DescribeAccessRulesResult::getPageNumber()const
{
	return pageNumber_;
}

std::vector<DescribeAccessRulesResult::AccessRule> DescribeAccessRulesResult::getAccessRules()const
{
	return accessRules_;
}

