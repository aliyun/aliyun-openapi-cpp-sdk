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

#include <alibabacloud/beian/model/DeleteUnbeianIpCheckTypeResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Beian;
using namespace AlibabaCloud::Beian::Model;

DeleteUnbeianIpCheckTypeResult::DeleteUnbeianIpCheckTypeResult() :
	ServiceResult()
{}

DeleteUnbeianIpCheckTypeResult::DeleteUnbeianIpCheckTypeResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

DeleteUnbeianIpCheckTypeResult::~DeleteUnbeianIpCheckTypeResult()
{}

void DeleteUnbeianIpCheckTypeResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto huntressIpCheckTypeResultDONode = value["HuntressIpCheckTypeResultDO"];
	if(!huntressIpCheckTypeResultDONode["Msg"].isNull())
		huntressIpCheckTypeResultDO_.msg = huntressIpCheckTypeResultDONode["Msg"].asString();
	if(!huntressIpCheckTypeResultDONode["Success"].isNull())
		huntressIpCheckTypeResultDO_.success = huntressIpCheckTypeResultDONode["Success"].asString() == "true";
	if(!value["ErrorMessage"].isNull())
		errorMessage_ = value["ErrorMessage"].asString();
	if(!value["Success"].isNull())
		success_ = value["Success"].asString() == "true";
	if(!value["ErrorCode"].isNull())
		errorCode_ = std::stoi(value["ErrorCode"].asString());

}

DeleteUnbeianIpCheckTypeResult::HuntressIpCheckTypeResultDO DeleteUnbeianIpCheckTypeResult::getHuntressIpCheckTypeResultDO()const
{
	return huntressIpCheckTypeResultDO_;
}

int DeleteUnbeianIpCheckTypeResult::getErrorCode()const
{
	return errorCode_;
}

std::string DeleteUnbeianIpCheckTypeResult::getErrorMessage()const
{
	return errorMessage_;
}

bool DeleteUnbeianIpCheckTypeResult::getSuccess()const
{
	return success_;
}

