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

#include <alibabacloud/sas/model/ListInstanceCatalogResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Sas;
using namespace AlibabaCloud::Sas::Model;

ListInstanceCatalogResult::ListInstanceCatalogResult() :
	ServiceResult()
{}

ListInstanceCatalogResult::ListInstanceCatalogResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

ListInstanceCatalogResult::~ListInstanceCatalogResult()
{}

void ListInstanceCatalogResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto allVendorsNode = value["Vendors"]["VendorsItem"];
	for (auto valueVendorsVendorsItem : allVendorsNode)
	{
		VendorsItem vendorsObject;
		if(!valueVendorsVendorsItem["Name"].isNull())
			vendorsObject.name = valueVendorsVendorsItem["Name"].asString();
		auto allInstanceTypesNode = valueVendorsVendorsItem["InstanceTypes"]["InstanceTypesItem"];
		for (auto valueVendorsVendorsItemInstanceTypesInstanceTypesItem : allInstanceTypesNode)
		{
			VendorsItem::InstanceTypesItem instanceTypesObject;
			if(!valueVendorsVendorsItemInstanceTypesInstanceTypesItem["Name"].isNull())
				instanceTypesObject.name = valueVendorsVendorsItemInstanceTypesInstanceTypesItem["Name"].asString();
			auto allInstanceSubTypesNode = valueVendorsVendorsItemInstanceTypesInstanceTypesItem["InstanceSubTypes"]["InstanceSubTypesItem"];
			for (auto valueVendorsVendorsItemInstanceTypesInstanceTypesItemInstanceSubTypesInstanceSubTypesItem : allInstanceSubTypesNode)
			{
				VendorsItem::InstanceTypesItem::InstanceSubTypesItem instanceSubTypesObject;
				if(!valueVendorsVendorsItemInstanceTypesInstanceTypesItemInstanceSubTypesInstanceSubTypesItem["Name"].isNull())
					instanceSubTypesObject.name = valueVendorsVendorsItemInstanceTypesInstanceTypesItemInstanceSubTypesInstanceSubTypesItem["Name"].asString();
				instanceTypesObject.instanceSubTypes.push_back(instanceSubTypesObject);
			}
			vendorsObject.instanceTypes.push_back(instanceTypesObject);
		}
		vendors_.push_back(vendorsObject);
	}

}

std::vector<ListInstanceCatalogResult::VendorsItem> ListInstanceCatalogResult::getVendors()const
{
	return vendors_;
}

