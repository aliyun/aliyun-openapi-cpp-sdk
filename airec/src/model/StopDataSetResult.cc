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

#include <alibabacloud/airec/model/StopDataSetResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Airec;
using namespace AlibabaCloud::Airec::Model;

StopDataSetResult::StopDataSetResult() :
	ServiceResult()
{}

StopDataSetResult::StopDataSetResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

StopDataSetResult::~StopDataSetResult()
{}

void StopDataSetResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto resultNode = value["Result"];
	if(!resultNode["InstanceId"].isNull())
		result_.instanceId = resultNode["InstanceId"].asString();
	if(!resultNode["VersionId"].isNull())
		result_.versionId = resultNode["VersionId"].asString();
	if(!resultNode["State"].isNull())
		result_.state = resultNode["State"].asString();
	if(!resultNode["GmtCreate"].isNull())
		result_.gmtCreate = std::stol(resultNode["GmtCreate"].asString());
	if(!resultNode["GmtModified"].isNull())
		result_.gmtModified = std::stol(resultNode["GmtModified"].asString());
	if(!value["Code"].isNull())
		code_ = value["Code"].asString();
	if(!value["Message"].isNull())
		message_ = value["Message"].asString();

}

std::string StopDataSetResult::getMessage()const
{
	return message_;
}

std::string StopDataSetResult::getCode()const
{
	return code_;
}

StopDataSetResult::Result StopDataSetResult::getResult()const
{
	return result_;
}

