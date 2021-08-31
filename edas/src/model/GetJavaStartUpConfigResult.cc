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

#include <alibabacloud/edas/model/GetJavaStartUpConfigResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Edas;
using namespace AlibabaCloud::Edas::Model;

GetJavaStartUpConfigResult::GetJavaStartUpConfigResult() :
	ServiceResult()
{}

GetJavaStartUpConfigResult::GetJavaStartUpConfigResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

GetJavaStartUpConfigResult::~GetJavaStartUpConfigResult()
{}

void GetJavaStartUpConfigResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto javaStartUpConfigNode = value["JavaStartUpConfig"];
	if(!javaStartUpConfigNode["OriginalConfigs"].isNull())
		javaStartUpConfig_.originalConfigs = javaStartUpConfigNode["OriginalConfigs"].asString();
	if(!javaStartUpConfigNode["StartUpArgs"].isNull())
		javaStartUpConfig_.startUpArgs = javaStartUpConfigNode["StartUpArgs"].asString();
	if(!value["Code"].isNull())
		code_ = std::stoi(value["Code"].asString());
	if(!value["Message"].isNull())
		message_ = value["Message"].asString();

}

std::string GetJavaStartUpConfigResult::getMessage()const
{
	return message_;
}

GetJavaStartUpConfigResult::JavaStartUpConfig GetJavaStartUpConfigResult::getJavaStartUpConfig()const
{
	return javaStartUpConfig_;
}

int GetJavaStartUpConfigResult::getCode()const
{
	return code_;
}

