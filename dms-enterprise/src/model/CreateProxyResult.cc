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

#include <alibabacloud/dms-enterprise/model/CreateProxyResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Dms_enterprise;
using namespace AlibabaCloud::Dms_enterprise::Model;

CreateProxyResult::CreateProxyResult() :
	ServiceResult()
{}

CreateProxyResult::CreateProxyResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

CreateProxyResult::~CreateProxyResult()
{}

void CreateProxyResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	if(!value["Success"].isNull())
		success_ = value["Success"].asString() == "true";
	if(!value["ErrorMessage"].isNull())
		errorMessage_ = value["ErrorMessage"].asString();
	if(!value["ErrorCode"].isNull())
		errorCode_ = value["ErrorCode"].asString();
	if(!value["ProxyId"].isNull())
		proxyId_ = std::stol(value["ProxyId"].asString());

}

long CreateProxyResult::getProxyId()const
{
	return proxyId_;
}

std::string CreateProxyResult::getErrorCode()const
{
	return errorCode_;
}

std::string CreateProxyResult::getErrorMessage()const
{
	return errorMessage_;
}

bool CreateProxyResult::getSuccess()const
{
	return success_;
}

