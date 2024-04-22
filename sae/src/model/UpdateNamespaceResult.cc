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

#include <alibabacloud/sae/model/UpdateNamespaceResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Sae;
using namespace AlibabaCloud::Sae::Model;

UpdateNamespaceResult::UpdateNamespaceResult() :
	ServiceResult()
{}

UpdateNamespaceResult::UpdateNamespaceResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

UpdateNamespaceResult::~UpdateNamespaceResult()
{}

void UpdateNamespaceResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto dataNode = value["Data"];
	if(!dataNode["NamespaceDescription"].isNull())
		data_.namespaceDescription = dataNode["NamespaceDescription"].asString();
	if(!dataNode["NamespaceId"].isNull())
		data_.namespaceId = dataNode["NamespaceId"].asString();
	if(!dataNode["NamespaceName"].isNull())
		data_.namespaceName = dataNode["NamespaceName"].asString();
	if(!dataNode["RegionId"].isNull())
		data_.regionId = dataNode["RegionId"].asString();
	if(!dataNode["NameSpaceShortId"].isNull())
		data_.nameSpaceShortId = dataNode["NameSpaceShortId"].asString();
	if(!dataNode["EnableMicroRegistration"].isNull())
		data_.enableMicroRegistration = dataNode["EnableMicroRegistration"].asString() == "true";
	if(!value["Message"].isNull())
		message_ = value["Message"].asString();
	if(!value["TraceId"].isNull())
		traceId_ = value["TraceId"].asString();
	if(!value["ErrorCode"].isNull())
		errorCode_ = value["ErrorCode"].asString();
	if(!value["Code"].isNull())
		code_ = value["Code"].asString();
	if(!value["Success"].isNull())
		success_ = value["Success"].asString() == "true";

}

std::string UpdateNamespaceResult::getMessage()const
{
	return message_;
}

std::string UpdateNamespaceResult::getTraceId()const
{
	return traceId_;
}

UpdateNamespaceResult::Data UpdateNamespaceResult::getData()const
{
	return data_;
}

std::string UpdateNamespaceResult::getErrorCode()const
{
	return errorCode_;
}

std::string UpdateNamespaceResult::getCode()const
{
	return code_;
}

bool UpdateNamespaceResult::getSuccess()const
{
	return success_;
}

