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

#include <alibabacloud/mse/model/ListEngineNamespacesResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Mse;
using namespace AlibabaCloud::Mse::Model;

ListEngineNamespacesResult::ListEngineNamespacesResult() :
	ServiceResult()
{}

ListEngineNamespacesResult::ListEngineNamespacesResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

ListEngineNamespacesResult::~ListEngineNamespacesResult()
{}

void ListEngineNamespacesResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto allDataNode = value["Data"]["Namespace"];
	for (auto valueDataNamespace : allDataNode)
	{
		_Namespace dataObject;
		if(!valueDataNamespace["Type"].isNull())
			dataObject.type = std::stoi(valueDataNamespace["Type"].asString());
		if(!valueDataNamespace["NamespaceShowName"].isNull())
			dataObject.namespaceShowName = valueDataNamespace["NamespaceShowName"].asString();
		if(!valueDataNamespace["Quota"].isNull())
			dataObject.quota = std::stoi(valueDataNamespace["Quota"].asString());
		if(!valueDataNamespace["Namespace"].isNull())
			dataObject._namespace = valueDataNamespace["Namespace"].asString();
		if(!valueDataNamespace["NamespaceDesc"].isNull())
			dataObject.namespaceDesc = valueDataNamespace["NamespaceDesc"].asString();
		if(!valueDataNamespace["ConfigCount"].isNull())
			dataObject.configCount = std::stoi(valueDataNamespace["ConfigCount"].asString());
		if(!valueDataNamespace["ServiceCount"].isNull())
			dataObject.serviceCount = valueDataNamespace["ServiceCount"].asString();
		if(!valueDataNamespace["SourceType"].isNull())
			dataObject.sourceType = valueDataNamespace["SourceType"].asString();
		data_.push_back(dataObject);
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

std::string ListEngineNamespacesResult::getHttpCode()const
{
	return httpCode_;
}

int ListEngineNamespacesResult::getTotalCount()const
{
	return totalCount_;
}

std::string ListEngineNamespacesResult::getMessage()const
{
	return message_;
}

int ListEngineNamespacesResult::getPageSize()const
{
	return pageSize_;
}

int ListEngineNamespacesResult::getPageNumber()const
{
	return pageNumber_;
}

std::vector<ListEngineNamespacesResult::_Namespace> ListEngineNamespacesResult::getData()const
{
	return data_;
}

std::string ListEngineNamespacesResult::getErrorCode()const
{
	return errorCode_;
}

bool ListEngineNamespacesResult::getSuccess()const
{
	return success_;
}

