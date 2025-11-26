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

#include <alibabacloud/outboundbot/model/ListApiPluginsResult.h>
#include <json/json.h>

using namespace AlibabaCloud::OutboundBot;
using namespace AlibabaCloud::OutboundBot::Model;

ListApiPluginsResult::ListApiPluginsResult() :
	ServiceResult()
{}

ListApiPluginsResult::ListApiPluginsResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

ListApiPluginsResult::~ListApiPluginsResult()
{}

void ListApiPluginsResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto allApiPluginsNode = value["ApiPlugins"]["ApiPlugin"];
	for (auto valueApiPluginsApiPlugin : allApiPluginsNode)
	{
		ApiPlugin apiPluginsObject;
		if(!valueApiPluginsApiPlugin["DraftedConfigJson"].isNull())
			apiPluginsObject.draftedConfigJson = valueApiPluginsApiPlugin["DraftedConfigJson"].asString();
		if(!valueApiPluginsApiPlugin["Status"].isNull())
			apiPluginsObject.status = valueApiPluginsApiPlugin["Status"].asString();
		if(!valueApiPluginsApiPlugin["Type"].isNull())
			apiPluginsObject.type = valueApiPluginsApiPlugin["Type"].asString();
		if(!valueApiPluginsApiPlugin["PublishedConfigJson"].isNull())
			apiPluginsObject.publishedConfigJson = valueApiPluginsApiPlugin["PublishedConfigJson"].asString();
		if(!valueApiPluginsApiPlugin["Uuid"].isNull())
			apiPluginsObject.uuid = valueApiPluginsApiPlugin["Uuid"].asString();
		if(!valueApiPluginsApiPlugin["Description"].isNull())
			apiPluginsObject.description = valueApiPluginsApiPlugin["Description"].asString();
		if(!valueApiPluginsApiPlugin["GmtCreate"].isNull())
			apiPluginsObject.gmtCreate = std::stol(valueApiPluginsApiPlugin["GmtCreate"].asString());
		if(!valueApiPluginsApiPlugin["InstanceId"].isNull())
			apiPluginsObject.instanceId = valueApiPluginsApiPlugin["InstanceId"].asString();
		if(!valueApiPluginsApiPlugin["GmtModified"].isNull())
			apiPluginsObject.gmtModified = std::stol(valueApiPluginsApiPlugin["GmtModified"].asString());
		if(!valueApiPluginsApiPlugin["Name"].isNull())
			apiPluginsObject.name = valueApiPluginsApiPlugin["Name"].asString();
		apiPlugins_.push_back(apiPluginsObject);
	}
	if(!value["HttpStatusCode"].isNull())
		httpStatusCode_ = std::stoi(value["HttpStatusCode"].asString());
	if(!value["Code"].isNull())
		code_ = value["Code"].asString();
	if(!value["Message"].isNull())
		message_ = value["Message"].asString();
	if(!value["Success"].isNull())
		success_ = value["Success"].asString() == "true";
	if(!value["PageSize"].isNull())
		pageSize_ = std::stoi(value["PageSize"].asString());
	if(!value["PageNumber"].isNull())
		pageNumber_ = std::stoi(value["PageNumber"].asString());
	if(!value["TotalCount"].isNull())
		totalCount_ = std::stol(value["TotalCount"].asString());

}

long ListApiPluginsResult::getTotalCount()const
{
	return totalCount_;
}

std::string ListApiPluginsResult::getMessage()const
{
	return message_;
}

int ListApiPluginsResult::getPageSize()const
{
	return pageSize_;
}

int ListApiPluginsResult::getPageNumber()const
{
	return pageNumber_;
}

std::vector<ListApiPluginsResult::ApiPlugin> ListApiPluginsResult::getApiPlugins()const
{
	return apiPlugins_;
}

int ListApiPluginsResult::getHttpStatusCode()const
{
	return httpStatusCode_;
}

std::string ListApiPluginsResult::getCode()const
{
	return code_;
}

bool ListApiPluginsResult::getSuccess()const
{
	return success_;
}

