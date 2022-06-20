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

#include <alibabacloud/sas/model/QueryGroupedSecurityEventMarkMissListResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Sas;
using namespace AlibabaCloud::Sas::Model;

QueryGroupedSecurityEventMarkMissListResult::QueryGroupedSecurityEventMarkMissListResult() :
	ServiceResult()
{}

QueryGroupedSecurityEventMarkMissListResult::QueryGroupedSecurityEventMarkMissListResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

QueryGroupedSecurityEventMarkMissListResult::~QueryGroupedSecurityEventMarkMissListResult()
{}

void QueryGroupedSecurityEventMarkMissListResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto allListNode = value["List"]["ListItem"];
	for (auto valueListListItem : allListNode)
	{
		ListItem listObject;
		if(!valueListListItem["GmtCreate"].isNull())
			listObject.gmtCreate = std::stol(valueListListItem["GmtCreate"].asString());
		if(!valueListListItem["GmtModified"].isNull())
			listObject.gmtModified = std::stol(valueListListItem["GmtModified"].asString());
		if(!valueListListItem["AliUid"].isNull())
			listObject.aliUid = std::stol(valueListListItem["AliUid"].asString());
		if(!valueListListItem["EventType"].isNull())
			listObject.eventType = valueListListItem["EventType"].asString();
		if(!valueListListItem["EventTypeOriginal"].isNull())
			listObject.eventTypeOriginal = valueListListItem["EventTypeOriginal"].asString();
		if(!valueListListItem["EventName"].isNull())
			listObject.eventName = valueListListItem["EventName"].asString();
		if(!valueListListItem["EventNameOriginal"].isNull())
			listObject.eventNameOriginal = valueListListItem["EventNameOriginal"].asString();
		if(!valueListListItem["Uuids"].isNull())
			listObject.uuids = valueListListItem["Uuids"].asString();
		if(!valueListListItem["Field"].isNull())
			listObject.field = valueListListItem["Field"].asString();
		if(!valueListListItem["FiledAliasName"].isNull())
			listObject.filedAliasName = valueListListItem["FiledAliasName"].asString();
		if(!valueListListItem["FieldValue"].isNull())
			listObject.fieldValue = valueListListItem["FieldValue"].asString();
		if(!valueListListItem["Operate"].isNull())
			listObject.operate = valueListListItem["Operate"].asString();
		if(!valueListListItem["DisposalWay"].isNull())
			listObject.disposalWay = valueListListItem["DisposalWay"].asString();
		list_.push_back(listObject);
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

QueryGroupedSecurityEventMarkMissListResult::PageInfo QueryGroupedSecurityEventMarkMissListResult::getPageInfo()const
{
	return pageInfo_;
}

std::string QueryGroupedSecurityEventMarkMissListResult::getMessage()const
{
	return message_;
}

int QueryGroupedSecurityEventMarkMissListResult::getHttpStatusCode()const
{
	return httpStatusCode_;
}

std::vector<QueryGroupedSecurityEventMarkMissListResult::ListItem> QueryGroupedSecurityEventMarkMissListResult::getList()const
{
	return list_;
}

long QueryGroupedSecurityEventMarkMissListResult::getTimeCost()const
{
	return timeCost_;
}

std::string QueryGroupedSecurityEventMarkMissListResult::getCode()const
{
	return code_;
}

bool QueryGroupedSecurityEventMarkMissListResult::getSuccess()const
{
	return success_;
}

