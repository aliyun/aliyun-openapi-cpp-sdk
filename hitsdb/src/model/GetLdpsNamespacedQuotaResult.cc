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

#include <alibabacloud/hitsdb/model/GetLdpsNamespacedQuotaResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Hitsdb;
using namespace AlibabaCloud::Hitsdb::Model;

GetLdpsNamespacedQuotaResult::GetLdpsNamespacedQuotaResult() :
	ServiceResult()
{}

GetLdpsNamespacedQuotaResult::GetLdpsNamespacedQuotaResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

GetLdpsNamespacedQuotaResult::~GetLdpsNamespacedQuotaResult()
{}

void GetLdpsNamespacedQuotaResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto allNamespacedQuotasNode = value["NamespacedQuotas"]["NamespacedQuota"];
	for (auto valueNamespacedQuotasNamespacedQuota : allNamespacedQuotasNode)
	{
		NamespacedQuota namespacedQuotasObject;
		if(!valueNamespacedQuotasNamespacedQuota["Name"].isNull())
			namespacedQuotasObject.name = valueNamespacedQuotasNamespacedQuota["Name"].asString();
		if(!valueNamespacedQuotasNamespacedQuota["CpuAmount"].isNull())
			namespacedQuotasObject.cpuAmount = valueNamespacedQuotasNamespacedQuota["CpuAmount"].asString();
		if(!valueNamespacedQuotasNamespacedQuota["MemoryAmount"].isNull())
			namespacedQuotasObject.memoryAmount = valueNamespacedQuotasNamespacedQuota["MemoryAmount"].asString();
		if(!valueNamespacedQuotasNamespacedQuota["UsedCpu"].isNull())
			namespacedQuotasObject.usedCpu = valueNamespacedQuotasNamespacedQuota["UsedCpu"].asString();
		if(!valueNamespacedQuotasNamespacedQuota["UsedMemory"].isNull())
			namespacedQuotasObject.usedMemory = valueNamespacedQuotasNamespacedQuota["UsedMemory"].asString();
		namespacedQuotas_.push_back(namespacedQuotasObject);
	}

}

std::vector<GetLdpsNamespacedQuotaResult::NamespacedQuota> GetLdpsNamespacedQuotaResult::getNamespacedQuotas()const
{
	return namespacedQuotas_;
}

