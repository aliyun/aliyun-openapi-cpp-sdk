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

#include <alibabacloud/mse/model/ListNacosConfigsResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Mse;
using namespace AlibabaCloud::Mse::Model;

ListNacosConfigsResult::ListNacosConfigsResult() :
	ServiceResult()
{}

ListNacosConfigsResult::ListNacosConfigsResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

ListNacosConfigsResult::~ListNacosConfigsResult()
{}

void ListNacosConfigsResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto allConfigurationsNode = value["Configurations"]["NacosConfigForListModel"];
	for (auto valueConfigurationsNacosConfigForListModel : allConfigurationsNode)
	{
		NacosConfigForListModel configurationsObject;
		if(!valueConfigurationsNacosConfigForListModel["AppName"].isNull())
			configurationsObject.appName = valueConfigurationsNacosConfigForListModel["AppName"].asString();
		if(!valueConfigurationsNacosConfigForListModel["DataId"].isNull())
			configurationsObject.dataId = valueConfigurationsNacosConfigForListModel["DataId"].asString();
		if(!valueConfigurationsNacosConfigForListModel["Id"].isNull())
			configurationsObject.id = valueConfigurationsNacosConfigForListModel["Id"].asString();
		if(!valueConfigurationsNacosConfigForListModel["Group"].isNull())
			configurationsObject.group = valueConfigurationsNacosConfigForListModel["Group"].asString();
		configurations_.push_back(configurationsObject);
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
	if(!value["Code"].isNull())
		code_ = std::stoi(value["Code"].asString());
	if(!value["Success"].isNull())
		success_ = value["Success"].asString() == "true";

}

std::string ListNacosConfigsResult::getHttpCode()const
{
	return httpCode_;
}

int ListNacosConfigsResult::getTotalCount()const
{
	return totalCount_;
}

std::string ListNacosConfigsResult::getMessage()const
{
	return message_;
}

int ListNacosConfigsResult::getPageSize()const
{
	return pageSize_;
}

int ListNacosConfigsResult::getPageNumber()const
{
	return pageNumber_;
}

std::string ListNacosConfigsResult::getErrorCode()const
{
	return errorCode_;
}

std::vector<ListNacosConfigsResult::NacosConfigForListModel> ListNacosConfigsResult::getConfigurations()const
{
	return configurations_;
}

int ListNacosConfigsResult::getCode()const
{
	return code_;
}

bool ListNacosConfigsResult::getSuccess()const
{
	return success_;
}

