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

#include <alibabacloud/rds/model/ListClassesResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Rds;
using namespace AlibabaCloud::Rds::Model;

ListClassesResult::ListClassesResult() :
	ServiceResult()
{}

ListClassesResult::ListClassesResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

ListClassesResult::~ListClassesResult()
{}

void ListClassesResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto allItemsNode = value["Items"]["ClassList"];
	for (auto valueItemsClassList : allItemsNode)
	{
		ClassList itemsObject;
		if(!valueItemsClassList["ClassCode"].isNull())
			itemsObject.classCode = valueItemsClassList["ClassCode"].asString();
		if(!valueItemsClassList["ClassGroup"].isNull())
			itemsObject.classGroup = valueItemsClassList["ClassGroup"].asString();
		if(!valueItemsClassList["Cpu"].isNull())
			itemsObject.cpu = valueItemsClassList["Cpu"].asString();
		if(!valueItemsClassList["EncryptedMemory"].isNull())
			itemsObject.encryptedMemory = valueItemsClassList["EncryptedMemory"].asString();
		if(!valueItemsClassList["InstructionSetArch"].isNull())
			itemsObject.instructionSetArch = valueItemsClassList["InstructionSetArch"].asString();
		if(!valueItemsClassList["MaxConnections"].isNull())
			itemsObject.maxConnections = valueItemsClassList["MaxConnections"].asString();
		if(!valueItemsClassList["MaxIOMBPS"].isNull())
			itemsObject.maxIOMBPS = valueItemsClassList["MaxIOMBPS"].asString();
		if(!valueItemsClassList["MaxIOPS"].isNull())
			itemsObject.maxIOPS = valueItemsClassList["MaxIOPS"].asString();
		if(!valueItemsClassList["MemoryClass"].isNull())
			itemsObject.memoryClass = valueItemsClassList["MemoryClass"].asString();
		if(!valueItemsClassList["ReferencePrice"].isNull())
			itemsObject.referencePrice = valueItemsClassList["ReferencePrice"].asString();
		if(!valueItemsClassList["category"].isNull())
			itemsObject.category = valueItemsClassList["category"].asString();
		if(!valueItemsClassList["storageType"].isNull())
			itemsObject.storageType = valueItemsClassList["storageType"].asString();
		items_.push_back(itemsObject);
	}
	if(!value["RegionId"].isNull())
		regionId_ = value["RegionId"].asString();

}

std::vector<ListClassesResult::ClassList> ListClassesResult::getItems()const
{
	return items_;
}

std::string ListClassesResult::getRegionId()const
{
	return regionId_;
}

