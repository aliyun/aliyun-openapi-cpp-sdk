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

#include <alibabacloud/mse/model/GetEngineNamepaceResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Mse;
using namespace AlibabaCloud::Mse::Model;

GetEngineNamepaceResult::GetEngineNamepaceResult() :
	ServiceResult()
{}

GetEngineNamepaceResult::GetEngineNamepaceResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

GetEngineNamepaceResult::~GetEngineNamepaceResult()
{}

void GetEngineNamepaceResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	if(!value["HttpCode"].isNull())
		httpCode_ = value["HttpCode"].asString();
	if(!value["Type"].isNull())
		type_ = value["Type"].asString();
	if(!value["Quota"].isNull())
		quota_ = value["Quota"].asString();
	if(!value["Message"].isNull())
		message_ = value["Message"].asString();
	if(!value["ConfigCount"].isNull())
		configCount_ = value["ConfigCount"].asString();
	if(!value["NamespaceShowName"].isNull())
		namespaceShowName_ = value["NamespaceShowName"].asString();
	if(!value["ErrorCode"].isNull())
		errorCode_ = value["ErrorCode"].asString();
	if(!value["Success"].isNull())
		success_ = value["Success"].asString() == "true";
	if(!value["NamespaceDesc"].isNull())
		namespaceDesc_ = value["NamespaceDesc"].asString();
	if(!value["Namespace"].isNull())
		_namespace_ = value["Namespace"].asString();

}

std::string GetEngineNamepaceResult::getHttpCode()const
{
	return httpCode_;
}

std::string GetEngineNamepaceResult::getType()const
{
	return type_;
}

std::string GetEngineNamepaceResult::getQuota()const
{
	return quota_;
}

std::string GetEngineNamepaceResult::getMessage()const
{
	return message_;
}

std::string GetEngineNamepaceResult::getConfigCount()const
{
	return configCount_;
}

std::string GetEngineNamepaceResult::getNamespaceShowName()const
{
	return namespaceShowName_;
}

std::string GetEngineNamepaceResult::get_Namespace()const
{
	return _namespace_;
}

std::string GetEngineNamepaceResult::getErrorCode()const
{
	return errorCode_;
}

bool GetEngineNamepaceResult::getSuccess()const
{
	return success_;
}

std::string GetEngineNamepaceResult::getNamespaceDesc()const
{
	return namespaceDesc_;
}

