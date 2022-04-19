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

#include <alibabacloud/sas/model/DescribeAllEntityResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Sas;
using namespace AlibabaCloud::Sas::Model;

DescribeAllEntityResult::DescribeAllEntityResult() :
	ServiceResult()
{}

DescribeAllEntityResult::DescribeAllEntityResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

DescribeAllEntityResult::~DescribeAllEntityResult()
{}

void DescribeAllEntityResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto allEntityListNode = value["EntityList"]["Entity"];
	for (auto valueEntityListEntity : allEntityListNode)
	{
		Entity entityListObject;
		if(!valueEntityListEntity["Uuid"].isNull())
			entityListObject.uuid = valueEntityListEntity["Uuid"].asString();
		if(!valueEntityListEntity["GroupId"].isNull())
			entityListObject.groupId = std::stoi(valueEntityListEntity["GroupId"].asString());
		if(!valueEntityListEntity["InternetIp"].isNull())
			entityListObject.internetIp = valueEntityListEntity["InternetIp"].asString();
		if(!valueEntityListEntity["InstanceName"].isNull())
			entityListObject.instanceName = valueEntityListEntity["InstanceName"].asString();
		if(!valueEntityListEntity["Ip"].isNull())
			entityListObject.ip = valueEntityListEntity["Ip"].asString();
		if(!valueEntityListEntity["Os"].isNull())
			entityListObject.os = valueEntityListEntity["Os"].asString();
		if(!valueEntityListEntity["IntranetIp"].isNull())
			entityListObject.intranetIp = valueEntityListEntity["IntranetIp"].asString();
		entityList_.push_back(entityListObject);
	}

}

std::vector<DescribeAllEntityResult::Entity> DescribeAllEntityResult::getEntityList()const
{
	return entityList_;
}

