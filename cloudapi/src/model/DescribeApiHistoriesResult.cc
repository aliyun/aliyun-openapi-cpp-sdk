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

#include <alibabacloud/cloudapi/model/DescribeApiHistoriesResult.h>
#include <json/json.h>

using namespace AlibabaCloud::CloudAPI;
using namespace AlibabaCloud::CloudAPI::Model;

DescribeApiHistoriesResult::DescribeApiHistoriesResult() :
	ServiceResult()
{}

DescribeApiHistoriesResult::DescribeApiHistoriesResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

DescribeApiHistoriesResult::~DescribeApiHistoriesResult()
{}

void DescribeApiHistoriesResult::parse(const std::string &payload)
{
	Json::CharReaderBuilder builder;
	Json::CharReader *reader = builder.newCharReader();
	Json::Value *value;
	JSONCPP_STRING *errs;
	reader->parse(payload.data(), payload.data() + payload.size(), value, errs);
	setRequestId((*value)["RequestId"].asString());
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

int DescribeApiHistoriesResult::getTotalCount()const
{
	return totalCount_;
}

int DescribeApiHistoriesResult::getPageSize()const
{
	return pageSize_;
}

int DescribeApiHistoriesResult::getPageNumber()const
{
	return pageNumber_;
}

std::vector<DescribeApiHistoriesResult::ApiHisItem> DescribeApiHistoriesResult::getApiHisItems()const
{
	return apiHisItems_;
}

