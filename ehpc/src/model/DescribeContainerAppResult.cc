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

#include <alibabacloud/ehpc/model/DescribeContainerAppResult.h>
#include <json/json.h>

using namespace AlibabaCloud::EHPC;
using namespace AlibabaCloud::EHPC::Model;

DescribeContainerAppResult::DescribeContainerAppResult() :
	ServiceResult()
{}

DescribeContainerAppResult::DescribeContainerAppResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

DescribeContainerAppResult::~DescribeContainerAppResult()
{}

void DescribeContainerAppResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto containerAppInfoNode = value["ContainerAppInfo"];
	if(!containerAppInfoNode["Id"].isNull())
		containerAppInfo_.id = containerAppInfoNode["Id"].asString();
	if(!containerAppInfoNode["Name"].isNull())
		containerAppInfo_.name = containerAppInfoNode["Name"].asString();
	if(!containerAppInfoNode["Description"].isNull())
		containerAppInfo_.description = containerAppInfoNode["Description"].asString();
	if(!containerAppInfoNode["Repository"].isNull())
		containerAppInfo_.repository = containerAppInfoNode["Repository"].asString();
	if(!containerAppInfoNode["ImageTag"].isNull())
		containerAppInfo_.imageTag = containerAppInfoNode["ImageTag"].asString();
	if(!containerAppInfoNode["CreateTime"].isNull())
		containerAppInfo_.createTime = containerAppInfoNode["CreateTime"].asString();
	if(!containerAppInfoNode["Type"].isNull())
		containerAppInfo_.type = containerAppInfoNode["Type"].asString();

}

DescribeContainerAppResult::ContainerAppInfo DescribeContainerAppResult::getContainerAppInfo()const
{
	return containerAppInfo_;
}

