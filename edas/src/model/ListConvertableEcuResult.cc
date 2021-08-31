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

#include <alibabacloud/edas/model/ListConvertableEcuResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Edas;
using namespace AlibabaCloud::Edas::Model;

ListConvertableEcuResult::ListConvertableEcuResult() :
	ServiceResult()
{}

ListConvertableEcuResult::ListConvertableEcuResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

ListConvertableEcuResult::~ListConvertableEcuResult()
{}

void ListConvertableEcuResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto allInstanceListNode = value["InstanceList"]["Instance"];
	for (auto valueInstanceListInstance : allInstanceListNode)
	{
		Instance instanceListObject;
		if(!valueInstanceListInstance["InstanceId"].isNull())
			instanceListObject.instanceId = valueInstanceListInstance["InstanceId"].asString();
		if(!valueInstanceListInstance["InstanceName"].isNull())
			instanceListObject.instanceName = valueInstanceListInstance["InstanceName"].asString();
		if(!valueInstanceListInstance["EcuId"].isNull())
			instanceListObject.ecuId = valueInstanceListInstance["EcuId"].asString();
		if(!valueInstanceListInstance["VpcId"].isNull())
			instanceListObject.vpcId = valueInstanceListInstance["VpcId"].asString();
		if(!valueInstanceListInstance["VpcName"].isNull())
			instanceListObject.vpcName = valueInstanceListInstance["VpcName"].asString();
		if(!valueInstanceListInstance["Expired"].isNull())
			instanceListObject.expired = valueInstanceListInstance["Expired"].asString() == "true";
		if(!valueInstanceListInstance["Status"].isNull())
			instanceListObject.status = valueInstanceListInstance["Status"].asString();
		if(!valueInstanceListInstance["RegionId"].isNull())
			instanceListObject.regionId = valueInstanceListInstance["RegionId"].asString();
		if(!valueInstanceListInstance["Cpu"].isNull())
			instanceListObject.cpu = std::stoi(valueInstanceListInstance["Cpu"].asString());
		if(!valueInstanceListInstance["Mem"].isNull())
			instanceListObject.mem = std::stoi(valueInstanceListInstance["Mem"].asString());
		if(!valueInstanceListInstance["PublicIp"].isNull())
			instanceListObject.publicIp = valueInstanceListInstance["PublicIp"].asString();
		if(!valueInstanceListInstance["InnerIp"].isNull())
			instanceListObject.innerIp = valueInstanceListInstance["InnerIp"].asString();
		if(!valueInstanceListInstance["PrivateIp"].isNull())
			instanceListObject.privateIp = valueInstanceListInstance["PrivateIp"].asString();
		if(!valueInstanceListInstance["Eip"].isNull())
			instanceListObject.eip = valueInstanceListInstance["Eip"].asString();
		instanceList_.push_back(instanceListObject);
	}
	if(!value["Code"].isNull())
		code_ = std::stoi(value["Code"].asString());
	if(!value["Message"].isNull())
		message_ = value["Message"].asString();

}

std::string ListConvertableEcuResult::getMessage()const
{
	return message_;
}

std::vector<ListConvertableEcuResult::Instance> ListConvertableEcuResult::getInstanceList()const
{
	return instanceList_;
}

int ListConvertableEcuResult::getCode()const
{
	return code_;
}

