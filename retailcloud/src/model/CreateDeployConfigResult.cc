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

#include <alibabacloud/retailcloud/model/CreateDeployConfigResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Retailcloud;
using namespace AlibabaCloud::Retailcloud::Model;

CreateDeployConfigResult::CreateDeployConfigResult() :
	ServiceResult()
{}

CreateDeployConfigResult::CreateDeployConfigResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

CreateDeployConfigResult::~CreateDeployConfigResult()
{}

void CreateDeployConfigResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto resultNode = value["Result"];
	if(!resultNode["AppId"].isNull())
		result_.appId = std::stol(resultNode["AppId"].asString());
	if(!resultNode["Name"].isNull())
		result_.name = resultNode["Name"].asString();
	if(!resultNode["SchemaId"].isNull())
		result_.schemaId = std::stol(resultNode["SchemaId"].asString());
	if(!value["Code"].isNull())
		code_ = std::stoi(value["Code"].asString());
	if(!value["ErrMessage"].isNull())
		errMessage_ = value["ErrMessage"].asString();

}

std::string CreateDeployConfigResult::getErrMessage()const
{
	return errMessage_;
}

int CreateDeployConfigResult::getCode()const
{
	return code_;
}

CreateDeployConfigResult::Result CreateDeployConfigResult::getResult()const
{
	return result_;
}

