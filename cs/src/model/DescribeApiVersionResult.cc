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

#include <alibabacloud/cs/model/DescribeApiVersionResult.h>
#include <json/json.h>

using namespace AlibabaCloud::CS;
using namespace AlibabaCloud::CS::Model;

DescribeApiVersionResult::DescribeApiVersionResult() :
	ServiceResult()
{}

DescribeApiVersionResult::DescribeApiVersionResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

DescribeApiVersionResult::~DescribeApiVersionResult()
{}

void DescribeApiVersionResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	if(!value["version"].isNull())
		version_ = value["version"].asString();
	if(!value["build"].isNull())
		build_ = value["build"].asString();
	if(!value["docker_version"].isNull())
		docker_version_ = value["docker_version"].asString();
	if(!value["docker_region_versions"].isNull())
		docker_region_versions_ = value["docker_region_versions"].asString();

}

std::string DescribeApiVersionResult::getDocker_version()const
{
	return docker_version_;
}

std::string DescribeApiVersionResult::getVersion()const
{
	return version_;
}

std::string DescribeApiVersionResult::getBuild()const
{
	return build_;
}

std::string DescribeApiVersionResult::getDocker_region_versions()const
{
	return docker_region_versions_;
}

