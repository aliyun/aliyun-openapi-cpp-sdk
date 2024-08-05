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

#include <alibabacloud/arms/model/CreateRumAppResult.h>
#include <json/json.h>

using namespace AlibabaCloud::ARMS;
using namespace AlibabaCloud::ARMS::Model;

CreateRumAppResult::CreateRumAppResult() :
	ServiceResult()
{}

CreateRumAppResult::CreateRumAppResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

CreateRumAppResult::~CreateRumAppResult()
{}

void CreateRumAppResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto dataNode = value["Data"];
	if(!dataNode["Pid"].isNull())
		data_.pid = dataNode["Pid"].asString();
	if(!dataNode["Endpoint"].isNull())
		data_.endpoint = dataNode["Endpoint"].asString();
	if(!dataNode["CdnDomain"].isNull())
		data_.cdnDomain = dataNode["CdnDomain"].asString();
	if(!value["Code"].isNull())
		code_ = std::stoi(value["Code"].asString());
	if(!value["Success"].isNull())
		success_ = value["Success"].asString() == "true";
	if(!value["Message"].isNull())
		message_ = value["Message"].asString();
	if(!value["HttpStatusCode"].isNull())
		httpStatusCode_ = std::stoi(value["HttpStatusCode"].asString());
	if(!value["ResourceGroupId"].isNull())
		resourceGroupId_ = value["ResourceGroupId"].asString();

}

std::string CreateRumAppResult::getMessage()const
{
	return message_;
}

std::string CreateRumAppResult::getResourceGroupId()const
{
	return resourceGroupId_;
}

int CreateRumAppResult::getHttpStatusCode()const
{
	return httpStatusCode_;
}

CreateRumAppResult::Data CreateRumAppResult::getData()const
{
	return data_;
}

int CreateRumAppResult::getCode()const
{
	return code_;
}

bool CreateRumAppResult::getSuccess()const
{
	return success_;
}

