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

#include <alibabacloud/eflo/model/QueryInstanceNcdResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Eflo;
using namespace AlibabaCloud::Eflo::Model;

QueryInstanceNcdResult::QueryInstanceNcdResult() :
	ServiceResult()
{}

QueryInstanceNcdResult::QueryInstanceNcdResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

QueryInstanceNcdResult::~QueryInstanceNcdResult()
{}

void QueryInstanceNcdResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto contentNode = value["Content"];
	if(!contentNode["Ncd"].isNull())
		content_.ncd = std::stoi(contentNode["Ncd"].asString());
	if(!contentNode["InstanceId1"].isNull())
		content_.instanceId1 = contentNode["InstanceId1"].asString();
	if(!contentNode["InstanceId2"].isNull())
		content_.instanceId2 = contentNode["InstanceId2"].asString();
	if(!contentNode["InstanceType"].isNull())
		content_.instanceType = contentNode["InstanceType"].asString();
	if(!value["Code"].isNull())
		code_ = std::stoi(value["Code"].asString());
	if(!value["Message"].isNull())
		message_ = value["Message"].asString();

}

std::string QueryInstanceNcdResult::getMessage()const
{
	return message_;
}

QueryInstanceNcdResult::Content QueryInstanceNcdResult::getContent()const
{
	return content_;
}

int QueryInstanceNcdResult::getCode()const
{
	return code_;
}

