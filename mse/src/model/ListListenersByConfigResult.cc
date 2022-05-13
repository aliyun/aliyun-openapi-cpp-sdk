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

#include <alibabacloud/mse/model/ListListenersByConfigResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Mse;
using namespace AlibabaCloud::Mse::Model;

ListListenersByConfigResult::ListListenersByConfigResult() :
	ServiceResult()
{}

ListListenersByConfigResult::ListListenersByConfigResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

ListListenersByConfigResult::~ListListenersByConfigResult()
{}

void ListListenersByConfigResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto allListenersNode = value["Listeners"]["Listener"];
	for (auto valueListenersListener : allListenersNode)
	{
		Listener listenersObject;
		if(!valueListenersListener["Ip"].isNull())
			listenersObject.ip = valueListenersListener["Ip"].asString();
		if(!valueListenersListener["Md5"].isNull())
			listenersObject.md5 = valueListenersListener["Md5"].asString();
		if(!valueListenersListener["Status"].isNull())
			listenersObject.status = valueListenersListener["Status"].asString();
		listeners_.push_back(listenersObject);
	}
	if(!value["HttpCode"].isNull())
		httpCode_ = value["HttpCode"].asString();
	if(!value["TotalCount"].isNull())
		totalCount_ = std::stoi(value["TotalCount"].asString());
	if(!value["Message"].isNull())
		message_ = value["Message"].asString();
	if(!value["PageSize"].isNull())
		pageSize_ = std::stoi(value["PageSize"].asString());
	if(!value["PageNumber"].isNull())
		pageNumber_ = std::stoi(value["PageNumber"].asString());
	if(!value["ErrorCode"].isNull())
		errorCode_ = value["ErrorCode"].asString();
	if(!value["Success"].isNull())
		success_ = value["Success"].asString() == "true";

}

std::string ListListenersByConfigResult::getHttpCode()const
{
	return httpCode_;
}

std::vector<ListListenersByConfigResult::Listener> ListListenersByConfigResult::getListeners()const
{
	return listeners_;
}

int ListListenersByConfigResult::getTotalCount()const
{
	return totalCount_;
}

std::string ListListenersByConfigResult::getMessage()const
{
	return message_;
}

int ListListenersByConfigResult::getPageSize()const
{
	return pageSize_;
}

int ListListenersByConfigResult::getPageNumber()const
{
	return pageNumber_;
}

std::string ListListenersByConfigResult::getErrorCode()const
{
	return errorCode_;
}

bool ListListenersByConfigResult::getSuccess()const
{
	return success_;
}

