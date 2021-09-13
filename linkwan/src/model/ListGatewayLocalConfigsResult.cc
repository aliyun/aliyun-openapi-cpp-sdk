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

#include <alibabacloud/linkwan/model/ListGatewayLocalConfigsResult.h>
#include <json/json.h>

using namespace AlibabaCloud::LinkWAN;
using namespace AlibabaCloud::LinkWAN::Model;

ListGatewayLocalConfigsResult::ListGatewayLocalConfigsResult() :
	ServiceResult()
{}

ListGatewayLocalConfigsResult::ListGatewayLocalConfigsResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

ListGatewayLocalConfigsResult::~ListGatewayLocalConfigsResult()
{}

void ListGatewayLocalConfigsResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto allDataNode = value["Data"]["D2dConfig"];
	for (auto valueDataD2dConfig : allDataNode)
	{
		D2dConfig dataObject;
		if(!valueDataD2dConfig["DevType"].isNull())
			dataObject.devType = valueDataD2dConfig["DevType"].asString();
		if(!valueDataD2dConfig["Eui"].isNull())
			dataObject.eui = valueDataD2dConfig["Eui"].asString();
		if(!valueDataD2dConfig["D2dAddr"].isNull())
			dataObject.d2dAddr = valueDataD2dConfig["D2dAddr"].asString();
		if(!valueDataD2dConfig["D2dKey"].isNull())
			dataObject.d2dKey = valueDataD2dConfig["D2dKey"].asString();
		if(!valueDataD2dConfig["Freq"].isNull())
			dataObject.freq = std::stoi(valueDataD2dConfig["Freq"].asString());
		if(!valueDataD2dConfig["Datr"].isNull())
			dataObject.datr = std::stoi(valueDataD2dConfig["Datr"].asString());
		if(!valueDataD2dConfig["TaskId"].isNull())
			dataObject.taskId = std::stol(valueDataD2dConfig["TaskId"].asString());
		if(!valueDataD2dConfig["CreateMillis"].isNull())
			dataObject.createMillis = std::stol(valueDataD2dConfig["CreateMillis"].asString());
		if(!valueDataD2dConfig["ModifiedMillis"].isNull())
			dataObject.modifiedMillis = std::stol(valueDataD2dConfig["ModifiedMillis"].asString());
		data_.push_back(dataObject);
	}
	if(!value["Success"].isNull())
		success_ = value["Success"].asString() == "true";
	if(!value["Code"].isNull())
		code_ = value["Code"].asString();
	if(!value["ErrorMessage"].isNull())
		errorMessage_ = value["ErrorMessage"].asString();

}

std::vector<ListGatewayLocalConfigsResult::D2dConfig> ListGatewayLocalConfigsResult::getData()const
{
	return data_;
}

std::string ListGatewayLocalConfigsResult::getErrorMessage()const
{
	return errorMessage_;
}

std::string ListGatewayLocalConfigsResult::getCode()const
{
	return code_;
}

bool ListGatewayLocalConfigsResult::getSuccess()const
{
	return success_;
}

