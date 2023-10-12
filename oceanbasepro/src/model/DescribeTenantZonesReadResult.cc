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

#include <alibabacloud/oceanbasepro/model/DescribeTenantZonesReadResult.h>
#include <json/json.h>

using namespace AlibabaCloud::OceanBasePro;
using namespace AlibabaCloud::OceanBasePro::Model;

DescribeTenantZonesReadResult::DescribeTenantZonesReadResult() :
	ServiceResult()
{}

DescribeTenantZonesReadResult::DescribeTenantZonesReadResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

DescribeTenantZonesReadResult::~DescribeTenantZonesReadResult()
{}

void DescribeTenantZonesReadResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto allTenantZonesNode = value["TenantZones"]["TenantZonesItem"];
	for (auto valueTenantZonesTenantZonesItem : allTenantZonesNode)
	{
		TenantZonesItem tenantZonesObject;
		if(!valueTenantZonesTenantZonesItem["IsElectable"].isNull())
			tenantZonesObject.isElectable = valueTenantZonesTenantZonesItem["IsElectable"].asString() == "true";
		if(!valueTenantZonesTenantZonesItem["IsPrimary"].isNull())
			tenantZonesObject.isPrimary = valueTenantZonesTenantZonesItem["IsPrimary"].asString() == "true";
		if(!valueTenantZonesTenantZonesItem["Zone"].isNull())
			tenantZonesObject.zone = valueTenantZonesTenantZonesItem["Zone"].asString();
		if(!valueTenantZonesTenantZonesItem["IsReadable"].isNull())
			tenantZonesObject.isReadable = valueTenantZonesTenantZonesItem["IsReadable"].asString();
		tenantZones_.push_back(tenantZonesObject);
	}

}

std::vector<DescribeTenantZonesReadResult::TenantZonesItem> DescribeTenantZonesReadResult::getTenantZones()const
{
	return tenantZones_;
}

