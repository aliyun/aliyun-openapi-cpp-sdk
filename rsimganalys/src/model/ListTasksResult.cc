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

#include <alibabacloud/rsimganalys/model/ListTasksResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Rsimganalys;
using namespace AlibabaCloud::Rsimganalys::Model;

ListTasksResult::ListTasksResult() :
	ServiceResult()
{}

ListTasksResult::ListTasksResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

ListTasksResult::~ListTasksResult()
{}

void ListTasksResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto allDataNode = value["Data"]["Contents"];
	for (auto valueDataContents : allDataNode)
	{
		Contents dataObject;
		if(!valueDataContents["Appkey"].isNull())
			dataObject.appkey = valueDataContents["Appkey"].asString();
		if(!valueDataContents["UserId"].isNull())
			dataObject.userId = valueDataContents["UserId"].asString();
		if(!valueDataContents["JobId"].isNull())
			dataObject.jobId = valueDataContents["JobId"].asString();
		if(!valueDataContents["Status"].isNull())
			dataObject.status = valueDataContents["Status"].asString();
		if(!valueDataContents["Request"].isNull())
			dataObject.request = valueDataContents["Request"].asString();
		if(!valueDataContents["Progress"].isNull())
			dataObject.progress = std::stoi(valueDataContents["Progress"].asString());
		if(!valueDataContents["Namespace"].isNull())
			dataObject._namespace = valueDataContents["Namespace"].asString();
		if(!valueDataContents["Version"].isNull())
			dataObject.version = valueDataContents["Version"].asString();
		if(!valueDataContents["CreateTime"].isNull())
			dataObject.createTime = std::stol(valueDataContents["CreateTime"].asString());
		if(!valueDataContents["LastUpdateTime"].isNull())
			dataObject.lastUpdateTime = std::stol(valueDataContents["LastUpdateTime"].asString());
		if(!valueDataContents["Response"].isNull())
			dataObject.response = valueDataContents["Response"].asString();
		if(!valueDataContents["StatusMessage"].isNull())
			dataObject.statusMessage = valueDataContents["StatusMessage"].asString();
		if(!valueDataContents["StatusCode"].isNull())
			dataObject.statusCode = std::stoi(valueDataContents["StatusCode"].asString());
		if(!valueDataContents["EnableZoneIdentification"].isNull())
			dataObject.enableZoneIdentification = std::stoi(valueDataContents["EnableZoneIdentification"].asString());
		if(!valueDataContents["PublishStatus"].isNull())
			dataObject.publishStatus = std::stoi(valueDataContents["PublishStatus"].asString());
		data_.push_back(dataObject);
	}
	if(!value["ResultCode"].isNull())
		resultCode_ = std::stoi(value["ResultCode"].asString());
	if(!value["TotalCount"].isNull())
		totalCount_ = std::stoi(value["TotalCount"].asString());
	if(!value["PageNumber"].isNull())
		pageNumber_ = std::stoi(value["PageNumber"].asString());
	if(!value["PageSize"].isNull())
		pageSize_ = std::stoi(value["PageSize"].asString());
	if(!value["ResultMessage"].isNull())
		resultMessage_ = value["ResultMessage"].asString();

}

int ListTasksResult::getTotalCount()const
{
	return totalCount_;
}

int ListTasksResult::getPageSize()const
{
	return pageSize_;
}

int ListTasksResult::getPageNumber()const
{
	return pageNumber_;
}

std::vector<ListTasksResult::Contents> ListTasksResult::getData()const
{
	return data_;
}

std::string ListTasksResult::getResultMessage()const
{
	return resultMessage_;
}

int ListTasksResult::getResultCode()const
{
	return resultCode_;
}

