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

#include <alibabacloud/arms/model/DescribeEnvCustomJobResult.h>
#include <json/json.h>

using namespace AlibabaCloud::ARMS;
using namespace AlibabaCloud::ARMS::Model;

DescribeEnvCustomJobResult::DescribeEnvCustomJobResult() :
	ServiceResult()
{}

DescribeEnvCustomJobResult::DescribeEnvCustomJobResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

DescribeEnvCustomJobResult::~DescribeEnvCustomJobResult()
{}

void DescribeEnvCustomJobResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto dataNode = value["Data"];
	if(!dataNode["EnvironmentId"].isNull())
		data_.environmentId = dataNode["EnvironmentId"].asString();
	if(!dataNode["RegionId"].isNull())
		data_.regionId = dataNode["RegionId"].asString();
	if(!dataNode["CustomJobName"].isNull())
		data_.customJobName = dataNode["CustomJobName"].asString();
	if(!dataNode["ConfigYaml"].isNull())
		data_.configYaml = dataNode["ConfigYaml"].asString();
	if(!dataNode["Status"].isNull())
		data_.status = dataNode["Status"].asString();
	if(!value["Code"].isNull())
		code_ = std::stoi(value["Code"].asString());
	if(!value["Message"].isNull())
		message_ = value["Message"].asString();

}

std::string DescribeEnvCustomJobResult::getMessage()const
{
	return message_;
}

DescribeEnvCustomJobResult::Data DescribeEnvCustomJobResult::getData()const
{
	return data_;
}

int DescribeEnvCustomJobResult::getCode()const
{
	return code_;
}

