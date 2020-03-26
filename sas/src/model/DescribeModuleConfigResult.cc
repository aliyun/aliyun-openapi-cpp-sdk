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

#include <alibabacloud/sas/model/DescribeModuleConfigResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Sas;
using namespace AlibabaCloud::Sas::Model;

DescribeModuleConfigResult::DescribeModuleConfigResult() :
	ServiceResult()
{}

DescribeModuleConfigResult::DescribeModuleConfigResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

DescribeModuleConfigResult::~DescribeModuleConfigResult()
{}

void DescribeModuleConfigResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto allModuleConfigListNode = value["ModuleConfigList"]["ModuleConfig"];
	for (auto valueModuleConfigListModuleConfig : allModuleConfigListNode)
	{
		ModuleConfig moduleConfigListObject;
		if(!valueModuleConfigListModuleConfig["ConfigName"].isNull())
			moduleConfigListObject.configName = valueModuleConfigListModuleConfig["ConfigName"].asString();
		if(!valueModuleConfigListModuleConfig["ModuleName"].isNull())
			moduleConfigListObject.moduleName = valueModuleConfigListModuleConfig["ModuleName"].asString();
		auto allItemsNode = allModuleConfigListNode["Items"]["Item"];
		for (auto allModuleConfigListNodeItemsItem : allItemsNode)
		{
			ModuleConfig::Item itemsObject;
			if(!allModuleConfigListNodeItemsItem["InstanceId"].isNull())
				itemsObject.instanceId = allModuleConfigListNodeItemsItem["InstanceId"].asString();
			if(!allModuleConfigListNodeItemsItem["InstanceName"].isNull())
				itemsObject.instanceName = allModuleConfigListNodeItemsItem["InstanceName"].asString();
			if(!allModuleConfigListNodeItemsItem["GroupId"].isNull())
				itemsObject.groupId = std::stoi(allModuleConfigListNodeItemsItem["GroupId"].asString());
			if(!allModuleConfigListNodeItemsItem["Ip"].isNull())
				itemsObject.ip = allModuleConfigListNodeItemsItem["Ip"].asString();
			if(!allModuleConfigListNodeItemsItem["Region"].isNull())
				itemsObject.region = allModuleConfigListNodeItemsItem["Region"].asString();
			if(!allModuleConfigListNodeItemsItem["Uuid"].isNull())
				itemsObject.uuid = allModuleConfigListNodeItemsItem["Uuid"].asString();
			moduleConfigListObject.items.push_back(itemsObject);
		}
		moduleConfigList_.push_back(moduleConfigListObject);
	}
	if(!value["Success"].isNull())
		success_ = value["Success"].asString() == "true";
	if(!value["Count"].isNull())
		count_ = std::stoi(value["Count"].asString());
	if(!value["HttpStatusCode"].isNull())
		httpStatusCode_ = std::stoi(value["HttpStatusCode"].asString());

}

int DescribeModuleConfigResult::getHttpStatusCode()const
{
	return httpStatusCode_;
}

int DescribeModuleConfigResult::getCount()const
{
	return count_;
}

std::vector<DescribeModuleConfigResult::ModuleConfig> DescribeModuleConfigResult::getModuleConfigList()const
{
	return moduleConfigList_;
}

bool DescribeModuleConfigResult::getSuccess()const
{
	return success_;
}

