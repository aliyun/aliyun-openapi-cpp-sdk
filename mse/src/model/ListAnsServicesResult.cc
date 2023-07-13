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

#include <alibabacloud/mse/model/ListAnsServicesResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Mse;
using namespace AlibabaCloud::Mse::Model;

ListAnsServicesResult::ListAnsServicesResult() :
	ServiceResult()
{}

ListAnsServicesResult::ListAnsServicesResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

ListAnsServicesResult::~ListAnsServicesResult()
{}

void ListAnsServicesResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto allDataNode = value["Data"]["SimpleNacosAnsService"];
	for (auto valueDataSimpleNacosAnsService : allDataNode)
	{
		SimpleNacosAnsService dataObject;
		if(!valueDataSimpleNacosAnsService["HealthyInstanceCount"].isNull())
			dataObject.healthyInstanceCount = std::stoi(valueDataSimpleNacosAnsService["HealthyInstanceCount"].asString());
		if(!valueDataSimpleNacosAnsService["GroupName"].isNull())
			dataObject.groupName = valueDataSimpleNacosAnsService["GroupName"].asString();
		if(!valueDataSimpleNacosAnsService["IpCount"].isNull())
			dataObject.ipCount = std::stoi(valueDataSimpleNacosAnsService["IpCount"].asString());
		if(!valueDataSimpleNacosAnsService["Name"].isNull())
			dataObject.name = valueDataSimpleNacosAnsService["Name"].asString();
		if(!valueDataSimpleNacosAnsService["ClusterCount"].isNull())
			dataObject.clusterCount = std::stoi(valueDataSimpleNacosAnsService["ClusterCount"].asString());
		if(!valueDataSimpleNacosAnsService["Source"].isNull())
			dataObject.source = valueDataSimpleNacosAnsService["Source"].asString();
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

std::string ListAnsServicesResult::getHttpCode()const
{
	return httpCode_;
}

int ListAnsServicesResult::getTotalCount()const
{
	return totalCount_;
}

std::string ListAnsServicesResult::getMessage()const
{
	return message_;
}

int ListAnsServicesResult::getPageSize()const
{
	return pageSize_;
}

int ListAnsServicesResult::getPageNumber()const
{
	return pageNumber_;
}

std::vector<ListAnsServicesResult::SimpleNacosAnsService> ListAnsServicesResult::getData()const
{
	return data_;
}

std::string ListAnsServicesResult::getErrorCode()const
{
	return errorCode_;
}

bool ListAnsServicesResult::getSuccess()const
{
	return success_;
}

