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

#include <alibabacloud/outboundbot/model/ListMediasResult.h>
#include <json/json.h>

using namespace AlibabaCloud::OutboundBot;
using namespace AlibabaCloud::OutboundBot::Model;

ListMediasResult::ListMediasResult() :
	ServiceResult()
{}

ListMediasResult::ListMediasResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

ListMediasResult::~ListMediasResult()
{}

void ListMediasResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto allMediaListNode = value["MediaList"]["Media"];
	for (auto valueMediaListMedia : allMediaListNode)
	{
		Media mediaListObject;
		if(!valueMediaListMedia["MediaId"].isNull())
			mediaListObject.mediaId = valueMediaListMedia["MediaId"].asString();
		if(!valueMediaListMedia["Name"].isNull())
			mediaListObject.name = valueMediaListMedia["Name"].asString();
		mediaList_.push_back(mediaListObject);
	}
	if(!value["Success"].isNull())
		success_ = value["Success"].asString() == "true";
	if(!value["Code"].isNull())
		code_ = value["Code"].asString();
	if(!value["Message"].isNull())
		message_ = value["Message"].asString();
	if(!value["HttpStatusCode"].isNull())
		httpStatusCode_ = std::stoi(value["HttpStatusCode"].asString());
	if(!value["TotalCount"].isNull())
		totalCount_ = std::stoi(value["TotalCount"].asString());
	if(!value["PageNumber"].isNull())
		pageNumber_ = std::stoi(value["PageNumber"].asString());
	if(!value["PageSize"].isNull())
		pageSize_ = std::stoi(value["PageSize"].asString());

}

std::vector<ListMediasResult::Media> ListMediasResult::getMediaList()const
{
	return mediaList_;
}

int ListMediasResult::getTotalCount()const
{
	return totalCount_;
}

std::string ListMediasResult::getMessage()const
{
	return message_;
}

int ListMediasResult::getPageSize()const
{
	return pageSize_;
}

int ListMediasResult::getPageNumber()const
{
	return pageNumber_;
}

int ListMediasResult::getHttpStatusCode()const
{
	return httpStatusCode_;
}

std::string ListMediasResult::getCode()const
{
	return code_;
}

bool ListMediasResult::getSuccess()const
{
	return success_;
}

