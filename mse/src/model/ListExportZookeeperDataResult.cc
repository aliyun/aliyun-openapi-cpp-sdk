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

#include <alibabacloud/mse/model/ListExportZookeeperDataResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Mse;
using namespace AlibabaCloud::Mse::Model;

ListExportZookeeperDataResult::ListExportZookeeperDataResult() :
	ServiceResult()
{}

ListExportZookeeperDataResult::ListExportZookeeperDataResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

ListExportZookeeperDataResult::~ListExportZookeeperDataResult()
{}

void ListExportZookeeperDataResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto allDataNode = value["Data"]["DataItem"];
	for (auto valueDataDataItem : allDataNode)
	{
		DataItem dataObject;
		if(!valueDataDataItem["InstanceId"].isNull())
			dataObject.instanceId = valueDataDataItem["InstanceId"].asString();
		if(!valueDataDataItem["ExportType"].isNull())
			dataObject.exportType = valueDataDataItem["ExportType"].asString();
		if(!valueDataDataItem["ContentMap"].isNull())
			dataObject.contentMap = valueDataDataItem["ContentMap"].asString();
		if(!valueDataDataItem["Extend"].isNull())
			dataObject.extend = valueDataDataItem["Extend"].asString();
		if(!valueDataDataItem["Status"].isNull())
			dataObject.status = valueDataDataItem["Status"].asString();
		if(!valueDataDataItem["KubeoneTaskIds"].isNull())
			dataObject.kubeoneTaskIds = valueDataDataItem["KubeoneTaskIds"].asString();
		if(!valueDataDataItem["Id"].isNull())
			dataObject.id = std::stoi(valueDataDataItem["Id"].asString());
		if(!valueDataDataItem["CreateTime"].isNull())
			dataObject.createTime = std::stol(valueDataDataItem["CreateTime"].asString());
		if(!valueDataDataItem["UpdateTime"].isNull())
			dataObject.updateTime = std::stol(valueDataDataItem["UpdateTime"].asString());
		data_.push_back(dataObject);
	}
	if(!value["Success"].isNull())
		success_ = value["Success"].asString() == "true";
	if(!value["Message"].isNull())
		message_ = value["Message"].asString();
	if(!value["DynamicMessage"].isNull())
		dynamicMessage_ = value["DynamicMessage"].asString();
	if(!value["ErrorCode"].isNull())
		errorCode_ = value["ErrorCode"].asString();
	if(!value["HttpStatusCode"].isNull())
		httpStatusCode_ = value["HttpStatusCode"].asString();

}

std::string ListExportZookeeperDataResult::getMessage()const
{
	return message_;
}

std::string ListExportZookeeperDataResult::getHttpStatusCode()const
{
	return httpStatusCode_;
}

std::vector<ListExportZookeeperDataResult::DataItem> ListExportZookeeperDataResult::getData()const
{
	return data_;
}

std::string ListExportZookeeperDataResult::getDynamicMessage()const
{
	return dynamicMessage_;
}

std::string ListExportZookeeperDataResult::getErrorCode()const
{
	return errorCode_;
}

bool ListExportZookeeperDataResult::getSuccess()const
{
	return success_;
}

