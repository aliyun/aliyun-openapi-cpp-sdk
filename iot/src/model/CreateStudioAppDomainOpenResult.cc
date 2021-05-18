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

#include <alibabacloud/iot/model/CreateStudioAppDomainOpenResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Iot;
using namespace AlibabaCloud::Iot::Model;

CreateStudioAppDomainOpenResult::CreateStudioAppDomainOpenResult() :
	ServiceResult()
{}

CreateStudioAppDomainOpenResult::CreateStudioAppDomainOpenResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

CreateStudioAppDomainOpenResult::~CreateStudioAppDomainOpenResult()
{}

void CreateStudioAppDomainOpenResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto dataNode = value["Data"];
	if(!dataNode["TenantId"].isNull())
		data_.tenantId = dataNode["TenantId"].asString();
	if(!dataNode["AppId"].isNull())
		data_.appId = dataNode["AppId"].asString();
	if(!dataNode["ProjectId"].isNull())
		data_.projectId = dataNode["ProjectId"].asString();
	if(!dataNode["Host"].isNull())
		data_.host = dataNode["Host"].asString();
	if(!dataNode["Id"].isNull())
		data_.id = std::stoi(dataNode["Id"].asString());
	if(!dataNode["IsBeian"].isNull())
		data_.isBeian = dataNode["IsBeian"].asString();
	if(!dataNode["Protocol"].isNull())
		data_.protocol = dataNode["Protocol"].asString();
	if(!value["Success"].isNull())
		success_ = value["Success"].asString() == "true";
	if(!value["Code"].isNull())
		code_ = value["Code"].asString();
	if(!value["ErrorMessage"].isNull())
		errorMessage_ = value["ErrorMessage"].asString();

}

CreateStudioAppDomainOpenResult::Data CreateStudioAppDomainOpenResult::getData()const
{
	return data_;
}

std::string CreateStudioAppDomainOpenResult::getErrorMessage()const
{
	return errorMessage_;
}

std::string CreateStudioAppDomainOpenResult::getCode()const
{
	return code_;
}

bool CreateStudioAppDomainOpenResult::getSuccess()const
{
	return success_;
}

