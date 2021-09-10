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

#include <alibabacloud/cloudauth/model/DescribeWhitelistSettingResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Cloudauth;
using namespace AlibabaCloud::Cloudauth::Model;

DescribeWhitelistSettingResult::DescribeWhitelistSettingResult() :
	ServiceResult()
{}

DescribeWhitelistSettingResult::DescribeWhitelistSettingResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

DescribeWhitelistSettingResult::~DescribeWhitelistSettingResult()
{}

void DescribeWhitelistSettingResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto allItemsNode = value["Items"]["Item"];
	for (auto valueItemsItem : allItemsNode)
	{
		Item itemsObject;
		if(!valueItemsItem["Id"].isNull())
			itemsObject.id = std::stol(valueItemsItem["Id"].asString());
		if(!valueItemsItem["SceneId"].isNull())
			itemsObject.sceneId = std::stol(valueItemsItem["SceneId"].asString());
		if(!valueItemsItem["ValidStartDate"].isNull())
			itemsObject.validStartDate = valueItemsItem["ValidStartDate"].asString();
		if(!valueItemsItem["ValidEndDate"].isNull())
			itemsObject.validEndDate = valueItemsItem["ValidEndDate"].asString();
		if(!valueItemsItem["CertNo"].isNull())
			itemsObject.certNo = valueItemsItem["CertNo"].asString();
		if(!valueItemsItem["CertifyId"].isNull())
			itemsObject.certifyId = valueItemsItem["CertifyId"].asString();
		if(!valueItemsItem["Status"].isNull())
			itemsObject.status = valueItemsItem["Status"].asString();
		if(!valueItemsItem["GmtCreate"].isNull())
			itemsObject.gmtCreate = valueItemsItem["GmtCreate"].asString();
		if(!valueItemsItem["GmtModified"].isNull())
			itemsObject.gmtModified = valueItemsItem["GmtModified"].asString();
		items_.push_back(itemsObject);
	}
	if(!value["TotalCount"].isNull())
		totalCount_ = std::stoi(value["TotalCount"].asString());
	if(!value["CurrentPage"].isNull())
		currentPage_ = std::stoi(value["CurrentPage"].asString());
	if(!value["PageSize"].isNull())
		pageSize_ = std::stoi(value["PageSize"].asString());

}

int DescribeWhitelistSettingResult::getTotalCount()const
{
	return totalCount_;
}

int DescribeWhitelistSettingResult::getPageSize()const
{
	return pageSize_;
}

int DescribeWhitelistSettingResult::getCurrentPage()const
{
	return currentPage_;
}

std::vector<DescribeWhitelistSettingResult::Item> DescribeWhitelistSettingResult::getItems()const
{
	return items_;
}

