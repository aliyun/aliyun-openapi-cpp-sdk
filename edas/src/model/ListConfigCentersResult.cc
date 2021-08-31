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

#include <alibabacloud/edas/model/ListConfigCentersResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Edas;
using namespace AlibabaCloud::Edas::Model;

ListConfigCentersResult::ListConfigCentersResult() :
	ServiceResult()
{}

ListConfigCentersResult::ListConfigCentersResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

ListConfigCentersResult::~ListConfigCentersResult()
{}

void ListConfigCentersResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto allConfigCentersListNode = value["ConfigCentersList"]["ListConfigCenters"];
	for (auto valueConfigCentersListListConfigCenters : allConfigCentersListNode)
	{
		ListConfigCenters configCentersListObject;
		if(!valueConfigCentersListListConfigCenters["AppName"].isNull())
			configCentersListObject.appName = valueConfigCentersListListConfigCenters["AppName"].asString();
		if(!valueConfigCentersListListConfigCenters["DataId"].isNull())
			configCentersListObject.dataId = valueConfigCentersListListConfigCenters["DataId"].asString();
		if(!valueConfigCentersListListConfigCenters["Group"].isNull())
			configCentersListObject.group = valueConfigCentersListListConfigCenters["Group"].asString();
		if(!valueConfigCentersListListConfigCenters["Id"].isNull())
			configCentersListObject.id = valueConfigCentersListListConfigCenters["Id"].asString();
		configCentersList_.push_back(configCentersListObject);
	}
	if(!value["Code"].isNull())
		code_ = std::stoi(value["Code"].asString());
	if(!value["Message"].isNull())
		message_ = value["Message"].asString();

}

std::string ListConfigCentersResult::getMessage()const
{
	return message_;
}

std::vector<ListConfigCentersResult::ListConfigCenters> ListConfigCentersResult::getConfigCentersList()const
{
	return configCentersList_;
}

int ListConfigCentersResult::getCode()const
{
	return code_;
}

