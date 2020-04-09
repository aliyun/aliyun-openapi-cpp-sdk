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

#include <alibabacloud/retailcloud/model/DescribeAppEnvironmentDetailResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Retailcloud;
using namespace AlibabaCloud::Retailcloud::Model;

DescribeAppEnvironmentDetailResult::DescribeAppEnvironmentDetailResult() :
	ServiceResult()
{}

DescribeAppEnvironmentDetailResult::DescribeAppEnvironmentDetailResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

DescribeAppEnvironmentDetailResult::~DescribeAppEnvironmentDetailResult()
{}

void DescribeAppEnvironmentDetailResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto resultNode = value["Result"];
	if(!resultNode["AppId"].isNull())
		result_.appId = std::stol(resultNode["AppId"].asString());
	if(!resultNode["EnvId"].isNull())
		result_.envId = std::stol(resultNode["EnvId"].asString());
	if(!resultNode["EnvName"].isNull())
		result_.envName = resultNode["EnvName"].asString();
	if(!resultNode["EnvType"].isNull())
		result_.envType = std::stoi(resultNode["EnvType"].asString());
	if(!resultNode["EnvTypeName"].isNull())
		result_.envTypeName = resultNode["EnvTypeName"].asString();
	if(!resultNode["AppSchemaId"].isNull())
		result_.appSchemaId = std::stol(resultNode["AppSchemaId"].asString());
	if(!resultNode["Region"].isNull())
		result_.region = resultNode["Region"].asString();
	if(!resultNode["Replicas"].isNull())
		result_.replicas = std::stoi(resultNode["Replicas"].asString());
	if(!value["Code"].isNull())
		code_ = std::stoi(value["Code"].asString());
	if(!value["ErrMsg"].isNull())
		errMsg_ = value["ErrMsg"].asString();

}

std::string DescribeAppEnvironmentDetailResult::getErrMsg()const
{
	return errMsg_;
}

int DescribeAppEnvironmentDetailResult::getCode()const
{
	return code_;
}

DescribeAppEnvironmentDetailResult::Result DescribeAppEnvironmentDetailResult::getResult()const
{
	return result_;
}

