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

#include <alibabacloud/mse/model/CreateEngineNamespaceResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Mse;
using namespace AlibabaCloud::Mse::Model;

CreateEngineNamespaceResult::CreateEngineNamespaceResult() :
	ServiceResult()
{}

CreateEngineNamespaceResult::CreateEngineNamespaceResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

CreateEngineNamespaceResult::~CreateEngineNamespaceResult()
{}

void CreateEngineNamespaceResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto dataNode = value["Data"];
	if(!dataNode["Type"].isNull())
		data_.type = std::stoi(dataNode["Type"].asString());
	if(!dataNode["NamespaceShowName"].isNull())
		data_.namespaceShowName = dataNode["NamespaceShowName"].asString();
	if(!dataNode["Quota"].isNull())
		data_.quota = std::stoi(dataNode["Quota"].asString());
	if(!dataNode["Namespace"].isNull())
		data_._namespace = dataNode["Namespace"].asString();
	if(!dataNode["NamespaceDesc"].isNull())
		data_.namespaceDesc = dataNode["NamespaceDesc"].asString();
	if(!dataNode["ConfigCount"].isNull())
		data_.configCount = std::stoi(dataNode["ConfigCount"].asString());
	if(!dataNode["ServiceCount"].isNull())
		data_.serviceCount = std::stoi(dataNode["ServiceCount"].asString());
	if(!value["Message"].isNull())
		message_ = value["Message"].asString();
	if(!value["ClusterId"].isNull())
		clusterId_ = value["ClusterId"].asString();
	if(!value["ErrorCode"].isNull())
		errorCode_ = value["ErrorCode"].asString();
	if(!value["Success"].isNull())
		success_ = value["Success"].asString() == "true";

}

std::string CreateEngineNamespaceResult::getMessage()const
{
	return message_;
}

std::string CreateEngineNamespaceResult::getClusterId()const
{
	return clusterId_;
}

CreateEngineNamespaceResult::Data CreateEngineNamespaceResult::getData()const
{
	return data_;
}

std::string CreateEngineNamespaceResult::getErrorCode()const
{
	return errorCode_;
}

bool CreateEngineNamespaceResult::getSuccess()const
{
	return success_;
}

