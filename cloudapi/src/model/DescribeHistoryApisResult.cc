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

#include <alibabacloud/cloudapi/model/DescribeHistoryApisResult.h>
#include <json/json.h>

using namespace AlibabaCloud::CloudAPI;
using namespace AlibabaCloud::CloudAPI::Model;

DescribeHistoryApisResult::DescribeHistoryApisResult() :
	ServiceResult()
{}

DescribeHistoryApisResult::DescribeHistoryApisResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

DescribeHistoryApisResult::~DescribeHistoryApisResult()
{}

void DescribeHistoryApisResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);

	setRequestId(value["RequestId"].asString());
	auto allApiHisItems = value["ApiHisItems"]["ApiHisItem"];
	for (auto value : allApiHisItems)
	{
		ApiHisItem apiHisItemsObject;
		if(!value["RegionId"].isNull())
			apiHisItemsObject.regionId = value["RegionId"].asString();
		if(!value["ApiId"].isNull())
			apiHisItemsObject.apiId = value["ApiId"].asString();
		if(!value["ApiName"].isNull())
			apiHisItemsObject.apiName = value["ApiName"].asString();
		if(!value["GroupId"].isNull())
			apiHisItemsObject.groupId = value["GroupId"].asString();
		if(!value["GroupName"].isNull())
			apiHisItemsObject.groupName = value["GroupName"].asString();
		if(!value["StageName"].isNull())
			apiHisItemsObject.stageName = value["StageName"].asString();
		if(!value["HistoryVersion"].isNull())
			apiHisItemsObject.historyVersion = value["HistoryVersion"].asString();
		if(!value["Status"].isNull())
			apiHisItemsObject.status = value["Status"].asString();
		if(!value["Description"].isNull())
			apiHisItemsObject.description = value["Description"].asString();
		if(!value["DeployedTime"].isNull())
			apiHisItemsObject.deployedTime = value["DeployedTime"].asString();
		apiHisItems_.push_back(apiHisItemsObject);
	}
	if(!value["TotalCount"].isNull())
		totalCount_ = std::stoi(value["TotalCount"].asString());
	if(!value["PageSize"].isNull())
		pageSize_ = std::stoi(value["PageSize"].asString());
	if(!value["PageNumber"].isNull())
		pageNumber_ = std::stoi(value["PageNumber"].asString());

}

int DescribeHistoryApisResult::getTotalCount()const
{
	return totalCount_;
}

int DescribeHistoryApisResult::getPageSize()const
{
	return pageSize_;
}

int DescribeHistoryApisResult::getPageNumber()const
{
	return pageNumber_;
}

std::vector<DescribeHistoryApisResult::ApiHisItem> DescribeHistoryApisResult::getApiHisItems()const
{
	return apiHisItems_;
}

