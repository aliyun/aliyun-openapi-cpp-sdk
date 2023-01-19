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

#include <alibabacloud/sas/model/GetModuleConfigResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Sas;
using namespace AlibabaCloud::Sas::Model;

GetModuleConfigResult::GetModuleConfigResult() :
	ServiceResult()
{}

GetModuleConfigResult::GetModuleConfigResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

GetModuleConfigResult::~GetModuleConfigResult()
{}

void GetModuleConfigResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto allModuleConfigListNode = value["ModuleConfigList"]["ModuleConfig"];
	for (auto valueModuleConfigListModuleConfig : allModuleConfigListNode)
	{
		ModuleConfig moduleConfigListObject;
		if(!valueModuleConfigListModuleConfig["ModuleName"].isNull())
			moduleConfigListObject.moduleName = valueModuleConfigListModuleConfig["ModuleName"].asString();
		if(!valueModuleConfigListModuleConfig["ConfigName"].isNull())
			moduleConfigListObject.configName = valueModuleConfigListModuleConfig["ConfigName"].asString();
		auto allItemsNode = valueModuleConfigListModuleConfig["Items"]["Item"];
		for (auto valueModuleConfigListModuleConfigItemsItem : allItemsNode)
		{
			ModuleConfig::Item itemsObject;
			if(!valueModuleConfigListModuleConfigItemsItem["Uuid"].isNull())
				itemsObject.uuid = valueModuleConfigListModuleConfigItemsItem["Uuid"].asString();
			if(!valueModuleConfigListModuleConfigItemsItem["GroupId"].isNull())
				itemsObject.groupId = std::stoi(valueModuleConfigListModuleConfigItemsItem["GroupId"].asString());
			if(!valueModuleConfigListModuleConfigItemsItem["InstanceName"].isNull())
				itemsObject.instanceName = valueModuleConfigListModuleConfigItemsItem["InstanceName"].asString();
			if(!valueModuleConfigListModuleConfigItemsItem["Region"].isNull())
				itemsObject.region = valueModuleConfigListModuleConfigItemsItem["Region"].asString();
			if(!valueModuleConfigListModuleConfigItemsItem["Ip"].isNull())
				itemsObject.ip = valueModuleConfigListModuleConfigItemsItem["Ip"].asString();
			if(!valueModuleConfigListModuleConfigItemsItem["InstanceId"].isNull())
				itemsObject.instanceId = valueModuleConfigListModuleConfigItemsItem["InstanceId"].asString();
			moduleConfigListObject.items.push_back(itemsObject);
		}
		moduleConfigList_.push_back(moduleConfigListObject);
	}
	auto pageInfoNode = value["PageInfo"];
	if(!pageInfoNode["CurrentPage"].isNull())
		pageInfo_.currentPage = std::stoi(pageInfoNode["CurrentPage"].asString());
	if(!pageInfoNode["PageSize"].isNull())
		pageInfo_.pageSize = std::stoi(pageInfoNode["PageSize"].asString());
	if(!pageInfoNode["TotalCount"].isNull())
		pageInfo_.totalCount = std::stoi(pageInfoNode["TotalCount"].asString());
	if(!pageInfoNode["Count"].isNull())
		pageInfo_.count = std::stoi(pageInfoNode["Count"].asString());
	if(!value["HttpStatusCode"].isNull())
		httpStatusCode_ = std::stoi(value["HttpStatusCode"].asString());
	if(!value["Success"].isNull())
		success_ = value["Success"].asString() == "true";

}

GetModuleConfigResult::PageInfo GetModuleConfigResult::getPageInfo()const
{
	return pageInfo_;
}

int GetModuleConfigResult::getHttpStatusCode()const
{
	return httpStatusCode_;
}

std::vector<GetModuleConfigResult::ModuleConfig> GetModuleConfigResult::getModuleConfigList()const
{
	return moduleConfigList_;
}

bool GetModuleConfigResult::getSuccess()const
{
	return success_;
}

