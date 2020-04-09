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

#include <alibabacloud/retailcloud/model/ListAppEnvironmentResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Retailcloud;
using namespace AlibabaCloud::Retailcloud::Model;

ListAppEnvironmentResult::ListAppEnvironmentResult() :
	ServiceResult()
{}

ListAppEnvironmentResult::ListAppEnvironmentResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

ListAppEnvironmentResult::~ListAppEnvironmentResult()
{}

void ListAppEnvironmentResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto allDataNode = value["Data"]["AppEnvironmentResponse"];
	for (auto valueDataAppEnvironmentResponse : allDataNode)
	{
		AppEnvironmentResponse dataObject;
		if(!valueDataAppEnvironmentResponse["AppId"].isNull())
			dataObject.appId = std::stol(valueDataAppEnvironmentResponse["AppId"].asString());
		if(!valueDataAppEnvironmentResponse["EnvId"].isNull())
			dataObject.envId = std::stol(valueDataAppEnvironmentResponse["EnvId"].asString());
		if(!valueDataAppEnvironmentResponse["EnvName"].isNull())
			dataObject.envName = valueDataAppEnvironmentResponse["EnvName"].asString();
		if(!valueDataAppEnvironmentResponse["EnvType"].isNull())
			dataObject.envType = std::stoi(valueDataAppEnvironmentResponse["EnvType"].asString());
		if(!valueDataAppEnvironmentResponse["EnvTypeName"].isNull())
			dataObject.envTypeName = valueDataAppEnvironmentResponse["EnvTypeName"].asString();
		if(!valueDataAppEnvironmentResponse["AppSchemaId"].isNull())
			dataObject.appSchemaId = std::stol(valueDataAppEnvironmentResponse["AppSchemaId"].asString());
		if(!valueDataAppEnvironmentResponse["Region"].isNull())
			dataObject.region = valueDataAppEnvironmentResponse["Region"].asString();
		data_.push_back(dataObject);
	}
	if(!value["Code"].isNull())
		code_ = std::stoi(value["Code"].asString());
	if(!value["PageNumber"].isNull())
		pageNumber_ = std::stoi(value["PageNumber"].asString());
	if(!value["PageSize"].isNull())
		pageSize_ = std::stoi(value["PageSize"].asString());
	if(!value["TotalCount"].isNull())
		totalCount_ = std::stol(value["TotalCount"].asString());
	if(!value["ErrorMsg"].isNull())
		errorMsg_ = value["ErrorMsg"].asString();

}

long ListAppEnvironmentResult::getTotalCount()const
{
	return totalCount_;
}

int ListAppEnvironmentResult::getPageSize()const
{
	return pageSize_;
}

int ListAppEnvironmentResult::getPageNumber()const
{
	return pageNumber_;
}

std::string ListAppEnvironmentResult::getErrorMsg()const
{
	return errorMsg_;
}

std::vector<ListAppEnvironmentResult::AppEnvironmentResponse> ListAppEnvironmentResult::getData()const
{
	return data_;
}

int ListAppEnvironmentResult::getCode()const
{
	return code_;
}

