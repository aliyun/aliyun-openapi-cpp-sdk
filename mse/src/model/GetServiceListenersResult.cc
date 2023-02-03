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

#include <alibabacloud/mse/model/GetServiceListenersResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Mse;
using namespace AlibabaCloud::Mse::Model;

GetServiceListenersResult::GetServiceListenersResult() :
	ServiceResult()
{}

GetServiceListenersResult::GetServiceListenersResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

GetServiceListenersResult::~GetServiceListenersResult()
{}

void GetServiceListenersResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto allDataNode = value["Data"]["dataItem"];
	for (auto valueDatadataItem : allDataNode)
	{
		DataItem dataObject;
		if(!valueDatadataItem["Addr"].isNull())
			dataObject.addr = valueDatadataItem["Addr"].asString();
		if(!valueDatadataItem["Agent"].isNull())
			dataObject.agent = valueDatadataItem["Agent"].asString();
		if(!valueDatadataItem["App"].isNull())
			dataObject.app = valueDatadataItem["App"].asString();
		if(!valueDatadataItem["IP"].isNull())
			dataObject.iP = valueDatadataItem["IP"].asString();
		if(!valueDatadataItem["Port"].isNull())
			dataObject.port = valueDatadataItem["Port"].asString();
		if(!valueDatadataItem["NamespaceId"].isNull())
			dataObject.namespaceId = valueDatadataItem["NamespaceId"].asString();
		if(!valueDatadataItem["ServiceName"].isNull())
			dataObject.serviceName = valueDatadataItem["ServiceName"].asString();
		if(!valueDatadataItem["Cluster"].isNull())
			dataObject.cluster = valueDatadataItem["Cluster"].asString();
		data_.push_back(dataObject);
	}
	if(!value["PageNumber"].isNull())
		pageNumber_ = std::stoi(value["PageNumber"].asString());
	if(!value["TotalCount"].isNull())
		totalCount_ = std::stoi(value["TotalCount"].asString());
	if(!value["PageSize"].isNull())
		pageSize_ = std::stoi(value["PageSize"].asString());
	if(!value["Success"].isNull())
		success_ = value["Success"].asString() == "true";
	if(!value["Message"].isNull())
		message_ = value["Message"].asString();
	if(!value["ErrorCode"].isNull())
		errorCode_ = value["ErrorCode"].asString();
	if(!value["HttpCode"].isNull())
		httpCode_ = value["HttpCode"].asString();

}

std::string GetServiceListenersResult::getHttpCode()const
{
	return httpCode_;
}

int GetServiceListenersResult::getTotalCount()const
{
	return totalCount_;
}

int GetServiceListenersResult::getPageSize()const
{
	return pageSize_;
}

std::string GetServiceListenersResult::getMessage()const
{
	return message_;
}

int GetServiceListenersResult::getPageNumber()const
{
	return pageNumber_;
}

std::vector<GetServiceListenersResult::DataItem> GetServiceListenersResult::getData()const
{
	return data_;
}

std::string GetServiceListenersResult::getErrorCode()const
{
	return errorCode_;
}

bool GetServiceListenersResult::getSuccess()const
{
	return success_;
}

