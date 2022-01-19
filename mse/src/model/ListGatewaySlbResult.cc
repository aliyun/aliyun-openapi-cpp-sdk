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

#include <alibabacloud/mse/model/ListGatewaySlbResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Mse;
using namespace AlibabaCloud::Mse::Model;

ListGatewaySlbResult::ListGatewaySlbResult() :
	ServiceResult()
{}

ListGatewaySlbResult::ListGatewaySlbResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

ListGatewaySlbResult::~ListGatewaySlbResult()
{}

void ListGatewaySlbResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto allDataNode = value["Data"]["Sources"];
	for (auto valueDataSources : allDataNode)
	{
		Sources dataObject;
		if(!valueDataSources["Id"].isNull())
			dataObject.id = valueDataSources["Id"].asString();
		if(!valueDataSources["SlbId"].isNull())
			dataObject.slbId = valueDataSources["SlbId"].asString();
		if(!valueDataSources["SlbIp"].isNull())
			dataObject.slbIp = valueDataSources["SlbIp"].asString();
		if(!valueDataSources["SlbPort"].isNull())
			dataObject.slbPort = valueDataSources["SlbPort"].asString();
		if(!valueDataSources["Type"].isNull())
			dataObject.type = valueDataSources["Type"].asString();
		if(!valueDataSources["GatewayId"].isNull())
			dataObject.gatewayId = valueDataSources["GatewayId"].asString();
		if(!valueDataSources["GmtCreate"].isNull())
			dataObject.gmtCreate = valueDataSources["GmtCreate"].asString();
		if(!valueDataSources["GatewaySlbMode"].isNull())
			dataObject.gatewaySlbMode = valueDataSources["GatewaySlbMode"].asString();
		if(!valueDataSources["GatewaySlbStatus"].isNull())
			dataObject.gatewaySlbStatus = valueDataSources["GatewaySlbStatus"].asString();
		if(!valueDataSources["StatusDesc"].isNull())
			dataObject.statusDesc = valueDataSources["StatusDesc"].asString();
		data_.push_back(dataObject);
	}
	if(!value["HttpStatusCode"].isNull())
		httpStatusCode_ = std::stoi(value["HttpStatusCode"].asString());
	if(!value["Message"].isNull())
		message_ = value["Message"].asString();
	if(!value["Code"].isNull())
		code_ = std::stoi(value["Code"].asString());
	if(!value["Success"].isNull())
		success_ = value["Success"].asString() == "true";

}

std::string ListGatewaySlbResult::getMessage()const
{
	return message_;
}

int ListGatewaySlbResult::getHttpStatusCode()const
{
	return httpStatusCode_;
}

std::vector<ListGatewaySlbResult::Sources> ListGatewaySlbResult::getData()const
{
	return data_;
}

int ListGatewaySlbResult::getCode()const
{
	return code_;
}

bool ListGatewaySlbResult::getSuccess()const
{
	return success_;
}

