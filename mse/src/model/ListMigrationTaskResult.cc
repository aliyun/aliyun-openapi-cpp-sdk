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

#include <alibabacloud/mse/model/ListMigrationTaskResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Mse;
using namespace AlibabaCloud::Mse::Model;

ListMigrationTaskResult::ListMigrationTaskResult() :
	ServiceResult()
{}

ListMigrationTaskResult::ListMigrationTaskResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

ListMigrationTaskResult::~ListMigrationTaskResult()
{}

void ListMigrationTaskResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto allDataNode = value["Data"]["dataItem"];
	for (auto valueDatadataItem : allDataNode)
	{
		DataItem dataObject;
		if(!valueDatadataItem["Id"].isNull())
			dataObject.id = std::stol(valueDatadataItem["Id"].asString());
		if(!valueDatadataItem["UserId"].isNull())
			dataObject.userId = valueDatadataItem["UserId"].asString();
		if(!valueDatadataItem["ClusterType"].isNull())
			dataObject.clusterType = valueDatadataItem["ClusterType"].asString();
		if(!valueDatadataItem["OriginInstanceAddress"].isNull())
			dataObject.originInstanceAddress = valueDatadataItem["OriginInstanceAddress"].asString();
		if(!valueDatadataItem["OriginInstanceName"].isNull())
			dataObject.originInstanceName = valueDatadataItem["OriginInstanceName"].asString();
		if(!valueDatadataItem["OriginInstanceNamespace"].isNull())
			dataObject.originInstanceNamespace = valueDatadataItem["OriginInstanceNamespace"].asString();
		if(!valueDatadataItem["TargetInstanceId"].isNull())
			dataObject.targetInstanceId = valueDatadataItem["TargetInstanceId"].asString();
		if(!valueDatadataItem["TargetClusterName"].isNull())
			dataObject.targetClusterName = valueDatadataItem["TargetClusterName"].asString();
		if(!valueDatadataItem["TargetClusterUrl"].isNull())
			dataObject.targetClusterUrl = valueDatadataItem["TargetClusterUrl"].asString();
		if(!valueDatadataItem["ProjectDesc"].isNull())
			dataObject.projectDesc = valueDatadataItem["ProjectDesc"].asString();
		if(!valueDatadataItem["GmtCreate"].isNull())
			dataObject.gmtCreate = valueDatadataItem["GmtCreate"].asString();
		if(!valueDatadataItem["GmtModified"].isNull())
			dataObject.gmtModified = valueDatadataItem["GmtModified"].asString();
		data_.push_back(dataObject);
	}
	if(!value["HttpCode"].isNull())
		httpCode_ = value["HttpCode"].asString();
	if(!value["PageSize"].isNull())
		pageSize_ = std::stol(value["PageSize"].asString());
	if(!value["PageNumber"].isNull())
		pageNumber_ = std::stol(value["PageNumber"].asString());
	if(!value["TotalCount"].isNull())
		totalCount_ = std::stol(value["TotalCount"].asString());
	if(!value["Message"].isNull())
		message_ = value["Message"].asString();
	if(!value["ErrorCode"].isNull())
		errorCode_ = value["ErrorCode"].asString();
	if(!value["Success"].isNull())
		success_ = value["Success"].asString() == "true";

}

std::string ListMigrationTaskResult::getHttpCode()const
{
	return httpCode_;
}

long ListMigrationTaskResult::getTotalCount()const
{
	return totalCount_;
}

long ListMigrationTaskResult::getPageSize()const
{
	return pageSize_;
}

std::string ListMigrationTaskResult::getMessage()const
{
	return message_;
}

long ListMigrationTaskResult::getPageNumber()const
{
	return pageNumber_;
}

std::vector<ListMigrationTaskResult::DataItem> ListMigrationTaskResult::getData()const
{
	return data_;
}

std::string ListMigrationTaskResult::getErrorCode()const
{
	return errorCode_;
}

bool ListMigrationTaskResult::getSuccess()const
{
	return success_;
}

