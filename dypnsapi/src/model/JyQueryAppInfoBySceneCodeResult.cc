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

#include <alibabacloud/dypnsapi/model/JyQueryAppInfoBySceneCodeResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Dypnsapi;
using namespace AlibabaCloud::Dypnsapi::Model;

JyQueryAppInfoBySceneCodeResult::JyQueryAppInfoBySceneCodeResult() :
	ServiceResult()
{}

JyQueryAppInfoBySceneCodeResult::JyQueryAppInfoBySceneCodeResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

JyQueryAppInfoBySceneCodeResult::~JyQueryAppInfoBySceneCodeResult()
{}

void JyQueryAppInfoBySceneCodeResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto dataNode = value["Data"];
	if(!dataNode["CmAppId"].isNull())
		data_.cmAppId = dataNode["CmAppId"].asString();
	if(!dataNode["CmAppKey"].isNull())
		data_.cmAppKey = dataNode["CmAppKey"].asString();
	if(!dataNode["CtAppId"].isNull())
		data_.ctAppId = dataNode["CtAppId"].asString();
	if(!dataNode["CtAppKey"].isNull())
		data_.ctAppKey = dataNode["CtAppKey"].asString();
	if(!value["Code"].isNull())
		code_ = value["Code"].asString();
	if(!value["Message"].isNull())
		message_ = value["Message"].asString();

}

std::string JyQueryAppInfoBySceneCodeResult::getMessage()const
{
	return message_;
}

JyQueryAppInfoBySceneCodeResult::Data JyQueryAppInfoBySceneCodeResult::getData()const
{
	return data_;
}

std::string JyQueryAppInfoBySceneCodeResult::getCode()const
{
	return code_;
}

