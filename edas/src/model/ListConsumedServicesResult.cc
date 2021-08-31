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

#include <alibabacloud/edas/model/ListConsumedServicesResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Edas;
using namespace AlibabaCloud::Edas::Model;

ListConsumedServicesResult::ListConsumedServicesResult() :
	ServiceResult()
{}

ListConsumedServicesResult::ListConsumedServicesResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

ListConsumedServicesResult::~ListConsumedServicesResult()
{}

void ListConsumedServicesResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto allConsumedServicesListNode = value["ConsumedServicesList"]["ListConsumedServices"];
	for (auto valueConsumedServicesListListConsumedServices : allConsumedServicesListNode)
	{
		ListConsumedServices consumedServicesListObject;
		if(!valueConsumedServicesListListConsumedServices["AppId"].isNull())
			consumedServicesListObject.appId = valueConsumedServicesListListConsumedServices["AppId"].asString();
		if(!valueConsumedServicesListListConsumedServices["DockerApplication"].isNull())
			consumedServicesListObject.dockerApplication = valueConsumedServicesListListConsumedServices["DockerApplication"].asString() == "true";
		if(!valueConsumedServicesListListConsumedServices["Group2Ip"].isNull())
			consumedServicesListObject.group2Ip = valueConsumedServicesListListConsumedServices["Group2Ip"].asString();
		if(!valueConsumedServicesListListConsumedServices["Name"].isNull())
			consumedServicesListObject.name = valueConsumedServicesListListConsumedServices["Name"].asString();
		if(!valueConsumedServicesListListConsumedServices["Type"].isNull())
			consumedServicesListObject.type = valueConsumedServicesListListConsumedServices["Type"].asString();
		if(!valueConsumedServicesListListConsumedServices["Version"].isNull())
			consumedServicesListObject.version = valueConsumedServicesListListConsumedServices["Version"].asString();
		auto allGroups = value["Groups"]["group"];
		for (auto value : allGroups)
			consumedServicesListObject.groups.push_back(value.asString());
		auto allIps = value["Ips"]["ip"];
		for (auto value : allIps)
			consumedServicesListObject.ips.push_back(value.asString());
		consumedServicesList_.push_back(consumedServicesListObject);
	}
	if(!value["Code"].isNull())
		code_ = std::stoi(value["Code"].asString());
	if(!value["Message"].isNull())
		message_ = value["Message"].asString();

}

std::string ListConsumedServicesResult::getMessage()const
{
	return message_;
}

std::vector<ListConsumedServicesResult::ListConsumedServices> ListConsumedServicesResult::getConsumedServicesList()const
{
	return consumedServicesList_;
}

int ListConsumedServicesResult::getCode()const
{
	return code_;
}

