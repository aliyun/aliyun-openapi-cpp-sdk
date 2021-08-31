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

#include <alibabacloud/edas/model/QueryConfigCenterResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Edas;
using namespace AlibabaCloud::Edas::Model;

QueryConfigCenterResult::QueryConfigCenterResult() :
	ServiceResult()
{}

QueryConfigCenterResult::QueryConfigCenterResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

QueryConfigCenterResult::~QueryConfigCenterResult()
{}

void QueryConfigCenterResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto configCenterInfoNode = value["configCenterInfo"];
	if(!configCenterInfoNode["AppName"].isNull())
		configCenterInfo_.appName = configCenterInfoNode["AppName"].asString();
	if(!configCenterInfoNode["Content"].isNull())
		configCenterInfo_.content = configCenterInfoNode["Content"].asString();
	if(!configCenterInfoNode["DataId"].isNull())
		configCenterInfo_.dataId = configCenterInfoNode["DataId"].asString();
	if(!configCenterInfoNode["Group"].isNull())
		configCenterInfo_.group = configCenterInfoNode["Group"].asString();
	if(!configCenterInfoNode["Id"].isNull())
		configCenterInfo_.id = configCenterInfoNode["Id"].asString();
	if(!value["Code"].isNull())
		code_ = std::stoi(value["Code"].asString());
	if(!value["Message"].isNull())
		message_ = value["Message"].asString();

}

QueryConfigCenterResult::ConfigCenterInfo QueryConfigCenterResult::getConfigCenterInfo()const
{
	return configCenterInfo_;
}

std::string QueryConfigCenterResult::getMessage()const
{
	return message_;
}

int QueryConfigCenterResult::getCode()const
{
	return code_;
}

