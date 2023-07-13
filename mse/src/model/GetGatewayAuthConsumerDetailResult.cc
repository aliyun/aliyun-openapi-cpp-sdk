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

#include <alibabacloud/mse/model/GetGatewayAuthConsumerDetailResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Mse;
using namespace AlibabaCloud::Mse::Model;

GetGatewayAuthConsumerDetailResult::GetGatewayAuthConsumerDetailResult() :
	ServiceResult()
{}

GetGatewayAuthConsumerDetailResult::GetGatewayAuthConsumerDetailResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

GetGatewayAuthConsumerDetailResult::~GetGatewayAuthConsumerDetailResult()
{}

void GetGatewayAuthConsumerDetailResult::parse(const std::string &payload)
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
	if(!dataNode["ConsumerStatus"].isNull())
		data_.consumerStatus = dataNode["ConsumerStatus"].asString() == "true";
	if(!dataNode["PrimaryUser"].isNull())
		data_.primaryUser = dataNode["PrimaryUser"].asString();
	if(!dataNode["GatewayUniqueId"].isNull())
		data_.gatewayUniqueId = dataNode["GatewayUniqueId"].asString();
	if(!dataNode["Type"].isNull())
		data_.type = dataNode["Type"].asString();
	if(!dataNode["GmtCreate"].isNull())
		data_.gmtCreate = dataNode["GmtCreate"].asString();
	if(!dataNode["GmtModified"].isNull())
		data_.gmtModified = dataNode["GmtModified"].asString();
	if(!dataNode["Description"].isNull())
		data_.description = dataNode["Description"].asString();
	if(!dataNode["EncodeType"].isNull())
		data_.encodeType = dataNode["EncodeType"].asString();
	if(!dataNode["Jwks"].isNull())
		data_.jwks = dataNode["Jwks"].asString();
	if(!dataNode["TokenName"].isNull())
		data_.tokenName = dataNode["TokenName"].asString();
	if(!dataNode["TokenPass"].isNull())
		data_.tokenPass = dataNode["TokenPass"].asString() == "true";
	if(!dataNode["TokenPosition"].isNull())
		data_.tokenPosition = dataNode["TokenPosition"].asString();
	if(!dataNode["TokenPrefix"].isNull())
		data_.tokenPrefix = dataNode["TokenPrefix"].asString();
	if(!dataNode["KeyName"].isNull())
		data_.keyName = dataNode["KeyName"].asString();
	if(!dataNode["KeyValue"].isNull())
		data_.keyValue = dataNode["KeyValue"].asString();
	auto allResourceListNode = dataNode["ResourceList"]["resource"];
	for (auto dataNodeResourceListresource : allResourceListNode)
	{
		Data::Resource resourceObject;
		if(!dataNodeResourceListresource["Id"].isNull())
			resourceObject.id = std::stol(dataNodeResourceListresource["Id"].asString());
		if(!dataNodeResourceListresource["ConsumerId"].isNull())
			resourceObject.consumerId = std::stol(dataNodeResourceListresource["ConsumerId"].asString());
		if(!dataNodeResourceListresource["RouteId"].isNull())
			resourceObject.routeId = std::stol(dataNodeResourceListresource["RouteId"].asString());
		if(!dataNodeResourceListresource["RouteName"].isNull())
			resourceObject.routeName = dataNodeResourceListresource["RouteName"].asString();
		if(!dataNodeResourceListresource["ResourceStatus"].isNull())
			resourceObject.resourceStatus = dataNodeResourceListresource["ResourceStatus"].asString() == "true";
		if(!dataNodeResourceListresource["GatewayUniqueId"].isNull())
			resourceObject.gatewayUniqueId = dataNodeResourceListresource["GatewayUniqueId"].asString();
		if(!dataNodeResourceListresource["GmtCreate"].isNull())
			resourceObject.gmtCreate = dataNodeResourceListresource["GmtCreate"].asString();
		if(!dataNodeResourceListresource["GmtModified"].isNull())
			resourceObject.gmtModified = dataNodeResourceListresource["GmtModified"].asString();
		data_.resourceList.push_back(resourceObject);
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

std::string GetGatewayAuthConsumerDetailResult::getMessage()const
{
	return message_;
}

int GetGatewayAuthConsumerDetailResult::getHttpStatusCode()const
{
	return httpStatusCode_;
}

GetGatewayAuthConsumerDetailResult::Data GetGatewayAuthConsumerDetailResult::getData()const
{
	return data_;
}

std::string GetGatewayAuthConsumerDetailResult::getDynamicCode()const
{
	return dynamicCode_;
}

std::string GetGatewayAuthConsumerDetailResult::getErrorCode()const
{
	return errorCode_;
}

std::string GetGatewayAuthConsumerDetailResult::getDynamicMessage()const
{
	return dynamicMessage_;
}

int GetGatewayAuthConsumerDetailResult::getCode()const
{
	return code_;
}

bool GetGatewayAuthConsumerDetailResult::getSuccess()const
{
	return success_;
}

