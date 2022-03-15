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

#include <alibabacloud/sae/model/ListAppServicesPageResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Sae;
using namespace AlibabaCloud::Sae::Model;

ListAppServicesPageResult::ListAppServicesPageResult() :
	ServiceResult()
{}

ListAppServicesPageResult::ListAppServicesPageResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

ListAppServicesPageResult::~ListAppServicesPageResult()
{}

void ListAppServicesPageResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto allDataNode = value["Data"]["DataItem"];
	for (auto valueDataDataItem : allDataNode)
	{
		DataItem dataObject;
		if(!valueDataDataItem["CurrentPage"].isNull())
			dataObject.currentPage = valueDataDataItem["CurrentPage"].asString();
		if(!valueDataDataItem["TotalSize"].isNull())
			dataObject.totalSize = valueDataDataItem["TotalSize"].asString();
		if(!valueDataDataItem["PageNumber"].isNull())
			dataObject.pageNumber = valueDataDataItem["PageNumber"].asString();
		if(!valueDataDataItem["PageSize"].isNull())
			dataObject.pageSize = valueDataDataItem["PageSize"].asString();
		auto allResultNode = valueDataDataItem["Result"]["MscAgentServiceResponse"];
		for (auto valueDataDataItemResultMscAgentServiceResponse : allResultNode)
		{
			DataItem::MscAgentServiceResponse resultObject;
			if(!valueDataDataItemResultMscAgentServiceResponse["EdasAppName"].isNull())
				resultObject.edasAppName = valueDataDataItemResultMscAgentServiceResponse["EdasAppName"].asString();
			if(!valueDataDataItemResultMscAgentServiceResponse["Version"].isNull())
				resultObject.version = valueDataDataItemResultMscAgentServiceResponse["Version"].asString();
			if(!valueDataDataItemResultMscAgentServiceResponse["InstanceNum"].isNull())
				resultObject.instanceNum = std::stol(valueDataDataItemResultMscAgentServiceResponse["InstanceNum"].asString());
			if(!valueDataDataItemResultMscAgentServiceResponse["EdasAppId"].isNull())
				resultObject.edasAppId = valueDataDataItemResultMscAgentServiceResponse["EdasAppId"].asString();
			if(!valueDataDataItemResultMscAgentServiceResponse["ServiceName"].isNull())
				resultObject.serviceName = valueDataDataItemResultMscAgentServiceResponse["ServiceName"].asString();
			if(!valueDataDataItemResultMscAgentServiceResponse["Group"].isNull())
				resultObject.group = valueDataDataItemResultMscAgentServiceResponse["Group"].asString();
			dataObject.result.push_back(resultObject);
		}
		data_.push_back(dataObject);
	}
	if(!value["Message"].isNull())
		message_ = value["Message"].asString();
	if(!value["TraceId"].isNull())
		traceId_ = value["TraceId"].asString();
	if(!value["ErrorCode"].isNull())
		errorCode_ = value["ErrorCode"].asString();
	if(!value["Code"].isNull())
		code_ = value["Code"].asString();
	if(!value["Success"].isNull())
		success_ = value["Success"].asString() == "true";

}

std::string ListAppServicesPageResult::getMessage()const
{
	return message_;
}

std::string ListAppServicesPageResult::getTraceId()const
{
	return traceId_;
}

std::vector<ListAppServicesPageResult::DataItem> ListAppServicesPageResult::getData()const
{
	return data_;
}

std::string ListAppServicesPageResult::getErrorCode()const
{
	return errorCode_;
}

std::string ListAppServicesPageResult::getCode()const
{
	return code_;
}

bool ListAppServicesPageResult::getSuccess()const
{
	return success_;
}

