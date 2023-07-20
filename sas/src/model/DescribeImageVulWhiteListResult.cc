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

#include <alibabacloud/sas/model/DescribeImageVulWhiteListResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Sas;
using namespace AlibabaCloud::Sas::Model;

DescribeImageVulWhiteListResult::DescribeImageVulWhiteListResult() :
	ServiceResult()
{}

DescribeImageVulWhiteListResult::DescribeImageVulWhiteListResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

DescribeImageVulWhiteListResult::~DescribeImageVulWhiteListResult()
{}

void DescribeImageVulWhiteListResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto allImageVulWhitelistNode = value["ImageVulWhitelist"]["VulList"];
	for (auto valueImageVulWhitelistVulList : allImageVulWhitelistNode)
	{
		VulList imageVulWhitelistObject;
		if(!valueImageVulWhitelistVulList["Name"].isNull())
			imageVulWhitelistObject.name = valueImageVulWhitelistVulList["Name"].asString();
		if(!valueImageVulWhitelistVulList["AliasName"].isNull())
			imageVulWhitelistObject.aliasName = valueImageVulWhitelistVulList["AliasName"].asString();
		if(!valueImageVulWhitelistVulList["Target"].isNull())
			imageVulWhitelistObject.target = valueImageVulWhitelistVulList["Target"].asString();
		if(!valueImageVulWhitelistVulList["Reason"].isNull())
			imageVulWhitelistObject.reason = valueImageVulWhitelistVulList["Reason"].asString();
		if(!valueImageVulWhitelistVulList["Type"].isNull())
			imageVulWhitelistObject.type = valueImageVulWhitelistVulList["Type"].asString();
		if(!valueImageVulWhitelistVulList["Id"].isNull())
			imageVulWhitelistObject.id = std::stol(valueImageVulWhitelistVulList["Id"].asString());
		imageVulWhitelist_.push_back(imageVulWhitelistObject);
	}
	auto pageInfoNode = value["PageInfo"];
	if(!pageInfoNode["CurrentPage"].isNull())
		pageInfo_.currentPage = std::stoi(pageInfoNode["CurrentPage"].asString());
	if(!pageInfoNode["PageSize"].isNull())
		pageInfo_.pageSize = std::stoi(pageInfoNode["PageSize"].asString());
	if(!pageInfoNode["TotalCount"].isNull())
		pageInfo_.totalCount = std::stoi(pageInfoNode["TotalCount"].asString());
	if(!pageInfoNode["Count"].isNull())
		pageInfo_.count = std::stoi(pageInfoNode["Count"].asString());
	if(!value["Success"].isNull())
		success_ = value["Success"].asString() == "true";
	if(!value["Code"].isNull())
		code_ = value["Code"].asString();
	if(!value["Message"].isNull())
		message_ = value["Message"].asString();
	if(!value["HttpStatusCode"].isNull())
		httpStatusCode_ = std::stoi(value["HttpStatusCode"].asString());
	if(!value["TimeCost"].isNull())
		timeCost_ = std::stol(value["TimeCost"].asString());

}

DescribeImageVulWhiteListResult::PageInfo DescribeImageVulWhiteListResult::getPageInfo()const
{
	return pageInfo_;
}

std::string DescribeImageVulWhiteListResult::getMessage()const
{
	return message_;
}

int DescribeImageVulWhiteListResult::getHttpStatusCode()const
{
	return httpStatusCode_;
}

long DescribeImageVulWhiteListResult::getTimeCost()const
{
	return timeCost_;
}

std::string DescribeImageVulWhiteListResult::getCode()const
{
	return code_;
}

bool DescribeImageVulWhiteListResult::getSuccess()const
{
	return success_;
}

std::vector<DescribeImageVulWhiteListResult::VulList> DescribeImageVulWhiteListResult::getImageVulWhitelist()const
{
	return imageVulWhitelist_;
}

