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

#include <alibabacloud/mse/model/DeleteGatewayServiceResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Mse;
using namespace AlibabaCloud::Mse::Model;

DeleteGatewayServiceResult::DeleteGatewayServiceResult() :
	ServiceResult()
{}

DeleteGatewayServiceResult::DeleteGatewayServiceResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

DeleteGatewayServiceResult::~DeleteGatewayServiceResult()
{}

void DeleteGatewayServiceResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto dataNode = value["Data"];
	if(!dataNode["Id"].isNull())
		data_.id = std::stol(dataNode["Id"].asString());
	if(!dataNode["Name"].isNull())
		data_.name = dataNode["Name"].asString();
	if(!dataNode["GatewayUniqueId"].isNull())
		data_.gatewayUniqueId = dataNode["GatewayUniqueId"].asString();
	if(!dataNode["GatewayId"].isNull())
		data_.gatewayId = std::stol(dataNode["GatewayId"].asString());
	if(!dataNode["SourceType"].isNull())
		data_.sourceType = dataNode["SourceType"].asString();
	if(!dataNode["Namespace"].isNull())
		data_._namespace = dataNode["Namespace"].asString();
	if(!dataNode["GroupName"].isNull())
		data_.groupName = dataNode["GroupName"].asString();
	if(!dataNode["SourceId"].isNull())
		data_.sourceId = std::stol(dataNode["SourceId"].asString());
	if(!dataNode["ServiceNameInRegistry"].isNull())
		data_.serviceNameInRegistry = dataNode["ServiceNameInRegistry"].asString();
	if(!dataNode["MetaInfo"].isNull())
		data_.metaInfo = dataNode["MetaInfo"].asString();
	if(!dataNode["GmtCreate"].isNull())
		data_.gmtCreate = dataNode["GmtCreate"].asString();
	if(!dataNode["GmtModified"].isNull())
		data_.gmtModified = dataNode["GmtModified"].asString();
		auto allIps = dataNode["Ips"]["Ips"];
		for (auto value : allIps)
			data_.ips.push_back(value.asString());
	if(!value["HttpStatusCode"].isNull())
		httpStatusCode_ = std::stoi(value["HttpStatusCode"].asString());
	if(!value["Message"].isNull())
		message_ = value["Message"].asString();
	if(!value["Code"].isNull())
		code_ = std::stoi(value["Code"].asString());
	if(!value["Success"].isNull())
		success_ = value["Success"].asString() == "true";

}

std::string DeleteGatewayServiceResult::getMessage()const
{
	return message_;
}

int DeleteGatewayServiceResult::getHttpStatusCode()const
{
	return httpStatusCode_;
}

DeleteGatewayServiceResult::Data DeleteGatewayServiceResult::getData()const
{
	return data_;
}

int DeleteGatewayServiceResult::getCode()const
{
	return code_;
}

bool DeleteGatewayServiceResult::getSuccess()const
{
	return success_;
}

