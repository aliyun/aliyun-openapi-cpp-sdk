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

#include <alibabacloud/mse/model/ListGatewayAuthConsumerResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Mse;
using namespace AlibabaCloud::Mse::Model;

ListGatewayAuthConsumerResult::ListGatewayAuthConsumerResult() :
	ServiceResult()
{}

ListGatewayAuthConsumerResult::ListGatewayAuthConsumerResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

ListGatewayAuthConsumerResult::~ListGatewayAuthConsumerResult()
{}

void ListGatewayAuthConsumerResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto dataNode = value["Data"];
	if(!dataNode["TotalSize"].isNull())
		data_.totalSize = std::stol(dataNode["TotalSize"].asString());
	if(!dataNode["PageNumber"].isNull())
		data_.pageNumber = std::stoi(dataNode["PageNumber"].asString());
	if(!dataNode["PageSize"].isNull())
		data_.pageSize = std::stoi(dataNode["PageSize"].asString());
	auto allResultNode = dataNode["Result"]["Consumers"];
	for (auto dataNodeResultConsumers : allResultNode)
	{
		Data::Consumers consumersObject;
		if(!dataNodeResultConsumers["Id"].isNull())
			consumersObject.id = std::stol(dataNodeResultConsumers["Id"].asString());
		if(!dataNodeResultConsumers["Name"].isNull())
			consumersObject.name = dataNodeResultConsumers["Name"].asString();
		if(!dataNodeResultConsumers["ConsumerStatus"].isNull())
			consumersObject.consumerStatus = dataNodeResultConsumers["ConsumerStatus"].asString() == "true";
		if(!dataNodeResultConsumers["PrimaryUser"].isNull())
			consumersObject.primaryUser = dataNodeResultConsumers["PrimaryUser"].asString();
		if(!dataNodeResultConsumers["GatewayUniqueId"].isNull())
			consumersObject.gatewayUniqueId = dataNodeResultConsumers["GatewayUniqueId"].asString();
		if(!dataNodeResultConsumers["Type"].isNull())
			consumersObject.type = dataNodeResultConsumers["Type"].asString();
		if(!dataNodeResultConsumers["Description"].isNull())
			consumersObject.description = dataNodeResultConsumers["Description"].asString();
		if(!dataNodeResultConsumers["GmtCreate"].isNull())
			consumersObject.gmtCreate = dataNodeResultConsumers["GmtCreate"].asString();
		if(!dataNodeResultConsumers["GmtModified"].isNull())
			consumersObject.gmtModified = dataNodeResultConsumers["GmtModified"].asString();
		data_.result.push_back(consumersObject);
	}
	if(!value["Success"].isNull())
		success_ = value["Success"].asString() == "true";
	if(!value["Code"].isNull())
		code_ = std::stoi(value["Code"].asString());
	if(!value["ErrorCode"].isNull())
		errorCode_ = value["ErrorCode"].asString();
	if(!value["HttpStatusCode"].isNull())
		httpStatusCode_ = std::stoi(value["HttpStatusCode"].asString());
	if(!value["Message"].isNull())
		message_ = value["Message"].asString();
	if(!value["DynamicCode"].isNull())
		dynamicCode_ = value["DynamicCode"].asString();
	if(!value["DynamicMessage"].isNull())
		dynamicMessage_ = value["DynamicMessage"].asString();

}

std::string ListGatewayAuthConsumerResult::getMessage()const
{
	return message_;
}

int ListGatewayAuthConsumerResult::getHttpStatusCode()const
{
	return httpStatusCode_;
}

ListGatewayAuthConsumerResult::Data ListGatewayAuthConsumerResult::getData()const
{
	return data_;
}

std::string ListGatewayAuthConsumerResult::getDynamicCode()const
{
	return dynamicCode_;
}

std::string ListGatewayAuthConsumerResult::getErrorCode()const
{
	return errorCode_;
}

std::string ListGatewayAuthConsumerResult::getDynamicMessage()const
{
	return dynamicMessage_;
}

int ListGatewayAuthConsumerResult::getCode()const
{
	return code_;
}

bool ListGatewayAuthConsumerResult::getSuccess()const
{
	return success_;
}

