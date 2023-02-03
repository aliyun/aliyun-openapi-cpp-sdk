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

#include <alibabacloud/mse/model/GetPluginConfigResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Mse;
using namespace AlibabaCloud::Mse::Model;

GetPluginConfigResult::GetPluginConfigResult() :
	ServiceResult()
{}

GetPluginConfigResult::GetPluginConfigResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

GetPluginConfigResult::~GetPluginConfigResult()
{}

void GetPluginConfigResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto dataNode = value["Data"];
	if(!dataNode["Id"].isNull())
		data_.id = std::stol(dataNode["Id"].asString());
	if(!dataNode["PrimaryUser"].isNull())
		data_.primaryUser = dataNode["PrimaryUser"].asString();
	if(!dataNode["Type"].isNull())
		data_.type = std::stoi(dataNode["Type"].asString());
	if(!dataNode["Category"].isNull())
		data_.category = std::stoi(dataNode["Category"].asString());
	if(!dataNode["Name"].isNull())
		data_.name = dataNode["Name"].asString();
	if(!dataNode["Version"].isNull())
		data_.version = dataNode["Version"].asString();
	if(!dataNode["Summary"].isNull())
		data_.summary = dataNode["Summary"].asString();
	if(!dataNode["Readme"].isNull())
		data_.readme = dataNode["Readme"].asString();
	if(!dataNode["ReadmeEn"].isNull())
		data_.readmeEn = dataNode["ReadmeEn"].asString();
	if(!dataNode["Phase"].isNull())
		data_.phase = std::stoi(dataNode["Phase"].asString());
	if(!dataNode["Priority"].isNull())
		data_.priority = std::stoi(dataNode["Priority"].asString());
	if(!dataNode["ConfigCheck"].isNull())
		data_.configCheck = dataNode["ConfigCheck"].asString();
	if(!dataNode["Mode"].isNull())
		data_.mode = std::stoi(dataNode["Mode"].asString());
	if(!dataNode["WasmLang"].isNull())
		data_.wasmLang = std::stoi(dataNode["WasmLang"].asString());
	if(!dataNode["ImageName"].isNull())
		data_.imageName = dataNode["ImageName"].asString();
	if(!dataNode["PublishState"].isNull())
		data_.publishState = std::stoi(dataNode["PublishState"].asString());
	if(!dataNode["Status"].isNull())
		data_.status = dataNode["Status"].asString();
	if(!dataNode["VersionJson"].isNull())
		data_.versionJson = dataNode["VersionJson"].asString();
	auto allGatewayConfigListNode = dataNode["GatewayConfigList"]["GatewayConfigListItem"];
	for (auto dataNodeGatewayConfigListGatewayConfigListItem : allGatewayConfigListNode)
	{
		Data::GatewayConfigListItem gatewayConfigListItemObject;
		if(!dataNodeGatewayConfigListGatewayConfigListItem["Id"].isNull())
			gatewayConfigListItemObject.id = std::stol(dataNodeGatewayConfigListGatewayConfigListItem["Id"].asString());
		if(!dataNodeGatewayConfigListGatewayConfigListItem["GatewayId"].isNull())
			gatewayConfigListItemObject.gatewayId = std::stol(dataNodeGatewayConfigListGatewayConfigListItem["GatewayId"].asString());
		if(!dataNodeGatewayConfigListGatewayConfigListItem["GatewayUniqueId"].isNull())
			gatewayConfigListItemObject.gatewayUniqueId = dataNodeGatewayConfigListGatewayConfigListItem["GatewayUniqueId"].asString();
		if(!dataNodeGatewayConfigListGatewayConfigListItem["PluginId"].isNull())
			gatewayConfigListItemObject.pluginId = std::stol(dataNodeGatewayConfigListGatewayConfigListItem["PluginId"].asString());
		if(!dataNodeGatewayConfigListGatewayConfigListItem["Enable"].isNull())
			gatewayConfigListItemObject.enable = dataNodeGatewayConfigListGatewayConfigListItem["Enable"].asString() == "true";
		if(!dataNodeGatewayConfigListGatewayConfigListItem["Config"].isNull())
			gatewayConfigListItemObject.config = dataNodeGatewayConfigListGatewayConfigListItem["Config"].asString();
		if(!dataNodeGatewayConfigListGatewayConfigListItem["ConfigLevel"].isNull())
			gatewayConfigListItemObject.configLevel = std::stoi(dataNodeGatewayConfigListGatewayConfigListItem["ConfigLevel"].asString());
		if(!dataNodeGatewayConfigListGatewayConfigListItem["GmtCreate"].isNull())
			gatewayConfigListItemObject.gmtCreate = dataNodeGatewayConfigListGatewayConfigListItem["GmtCreate"].asString();
		if(!dataNodeGatewayConfigListGatewayConfigListItem["GmtModified"].isNull())
			gatewayConfigListItemObject.gmtModified = dataNodeGatewayConfigListGatewayConfigListItem["GmtModified"].asString();
		data_.gatewayConfigList.push_back(gatewayConfigListItemObject);
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

std::string GetPluginConfigResult::getMessage()const
{
	return message_;
}

int GetPluginConfigResult::getHttpStatusCode()const
{
	return httpStatusCode_;
}

GetPluginConfigResult::Data GetPluginConfigResult::getData()const
{
	return data_;
}

std::string GetPluginConfigResult::getDynamicCode()const
{
	return dynamicCode_;
}

std::string GetPluginConfigResult::getErrorCode()const
{
	return errorCode_;
}

std::string GetPluginConfigResult::getDynamicMessage()const
{
	return dynamicMessage_;
}

int GetPluginConfigResult::getCode()const
{
	return code_;
}

bool GetPluginConfigResult::getSuccess()const
{
	return success_;
}

