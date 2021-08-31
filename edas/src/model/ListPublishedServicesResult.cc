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

#include <alibabacloud/edas/model/ListPublishedServicesResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Edas;
using namespace AlibabaCloud::Edas::Model;

ListPublishedServicesResult::ListPublishedServicesResult() :
	ServiceResult()
{}

ListPublishedServicesResult::ListPublishedServicesResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

ListPublishedServicesResult::~ListPublishedServicesResult()
{}

void ListPublishedServicesResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto allPublishedServicesListNode = value["PublishedServicesList"]["ListPublishedServices"];
	for (auto valuePublishedServicesListListPublishedServices : allPublishedServicesListNode)
	{
		ListPublishedServices publishedServicesListObject;
		if(!valuePublishedServicesListListPublishedServices["AppId"].isNull())
			publishedServicesListObject.appId = valuePublishedServicesListListPublishedServices["AppId"].asString();
		if(!valuePublishedServicesListListPublishedServices["DockerApplication"].isNull())
			publishedServicesListObject.dockerApplication = valuePublishedServicesListListPublishedServices["DockerApplication"].asString() == "true";
		if(!valuePublishedServicesListListPublishedServices["Group2Ip"].isNull())
			publishedServicesListObject.group2Ip = valuePublishedServicesListListPublishedServices["Group2Ip"].asString();
		if(!valuePublishedServicesListListPublishedServices["Name"].isNull())
			publishedServicesListObject.name = valuePublishedServicesListListPublishedServices["Name"].asString();
		if(!valuePublishedServicesListListPublishedServices["Type"].isNull())
			publishedServicesListObject.type = valuePublishedServicesListListPublishedServices["Type"].asString();
		if(!valuePublishedServicesListListPublishedServices["Version"].isNull())
			publishedServicesListObject.version = valuePublishedServicesListListPublishedServices["Version"].asString();
		auto allGroups = value["Groups"]["group"];
		for (auto value : allGroups)
			publishedServicesListObject.groups.push_back(value.asString());
		auto allIps = value["Ips"]["ip"];
		for (auto value : allIps)
			publishedServicesListObject.ips.push_back(value.asString());
		publishedServicesList_.push_back(publishedServicesListObject);
	}
	if(!value["Code"].isNull())
		code_ = std::stoi(value["Code"].asString());
	if(!value["Message"].isNull())
		message_ = value["Message"].asString();

}

std::string ListPublishedServicesResult::getMessage()const
{
	return message_;
}

std::vector<ListPublishedServicesResult::ListPublishedServices> ListPublishedServicesResult::getPublishedServicesList()const
{
	return publishedServicesList_;
}

int ListPublishedServicesResult::getCode()const
{
	return code_;
}

