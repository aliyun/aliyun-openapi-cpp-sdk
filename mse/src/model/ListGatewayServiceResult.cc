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

#include <alibabacloud/mse/model/ListGatewayServiceResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Mse;
using namespace AlibabaCloud::Mse::Model;

ListGatewayServiceResult::ListGatewayServiceResult() :
	ServiceResult()
{}

ListGatewayServiceResult::ListGatewayServiceResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

ListGatewayServiceResult::~ListGatewayServiceResult()
{}

void ListGatewayServiceResult::parse(const std::string &payload)
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
	auto allResultNode = dataNode["Result"]["Services"];
	for (auto dataNodeResultServices : allResultNode)
	{
		Data::Services servicesObject;
		if(!dataNodeResultServices["Id"].isNull())
			servicesObject.id = std::stol(dataNodeResultServices["Id"].asString());
		if(!dataNodeResultServices["Name"].isNull())
			servicesObject.name = dataNodeResultServices["Name"].asString();
		if(!dataNodeResultServices["GatewayUniqueId"].isNull())
			servicesObject.gatewayUniqueId = dataNodeResultServices["GatewayUniqueId"].asString();
		if(!dataNodeResultServices["GatewayId"].isNull())
			servicesObject.gatewayId = std::stol(dataNodeResultServices["GatewayId"].asString());
		if(!dataNodeResultServices["SourceType"].isNull())
			servicesObject.sourceType = dataNodeResultServices["SourceType"].asString();
		if(!dataNodeResultServices["Namespace"].isNull())
			servicesObject._namespace = dataNodeResultServices["Namespace"].asString();
		if(!dataNodeResultServices["GroupName"].isNull())
			servicesObject.groupName = dataNodeResultServices["GroupName"].asString();
		if(!dataNodeResultServices["SourceId"].isNull())
			servicesObject.sourceId = std::stol(dataNodeResultServices["SourceId"].asString());
		if(!dataNodeResultServices["ServiceNameInRegistry"].isNull())
			servicesObject.serviceNameInRegistry = dataNodeResultServices["ServiceNameInRegistry"].asString();
		if(!dataNodeResultServices["MetaInfo"].isNull())
			servicesObject.metaInfo = dataNodeResultServices["MetaInfo"].asString();
		if(!dataNodeResultServices["GmtCreate"].isNull())
			servicesObject.gmtCreate = dataNodeResultServices["GmtCreate"].asString();
		if(!dataNodeResultServices["GmtModified"].isNull())
			servicesObject.gmtModified = dataNodeResultServices["GmtModified"].asString();
		if(!dataNodeResultServices["ServiceProtocol"].isNull())
			servicesObject.serviceProtocol = dataNodeResultServices["ServiceProtocol"].asString();
		if(!dataNodeResultServices["ServicePort"].isNull())
			servicesObject.servicePort = std::stol(dataNodeResultServices["ServicePort"].asString());
		auto allVersionsNode = dataNodeResultServices["Versions"]["VersionsItem"];
		for (auto dataNodeResultServicesVersionsVersionsItem : allVersionsNode)
		{
			Data::Services::VersionsItem versionsObject;
			if(!dataNodeResultServicesVersionsVersionsItem["Name"].isNull())
				versionsObject.name = dataNodeResultServicesVersionsVersionsItem["Name"].asString();
			servicesObject.versions.push_back(versionsObject);
		}
		auto allIps = value["Ips"]["Ips"];
		for (auto value : allIps)
			servicesObject.ips.push_back(value.asString());
		data_.result.push_back(servicesObject);
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

std::string ListGatewayServiceResult::getMessage()const
{
	return message_;
}

int ListGatewayServiceResult::getHttpStatusCode()const
{
	return httpStatusCode_;
}

ListGatewayServiceResult::Data ListGatewayServiceResult::getData()const
{
	return data_;
}

int ListGatewayServiceResult::getCode()const
{
	return code_;
}

bool ListGatewayServiceResult::getSuccess()const
{
	return success_;
}

