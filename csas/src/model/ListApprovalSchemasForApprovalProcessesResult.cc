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

#include <alibabacloud/csas/model/ListApprovalSchemasForApprovalProcessesResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Csas;
using namespace AlibabaCloud::Csas::Model;

ListApprovalSchemasForApprovalProcessesResult::ListApprovalSchemasForApprovalProcessesResult() :
	ServiceResult()
{}

ListApprovalSchemasForApprovalProcessesResult::ListApprovalSchemasForApprovalProcessesResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

ListApprovalSchemasForApprovalProcessesResult::~ListApprovalSchemasForApprovalProcessesResult()
{}

void ListApprovalSchemasForApprovalProcessesResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto allProcessesNode = value["Processes"]["data"];
	for (auto valueProcessesdata : allProcessesNode)
	{
		Data processesObject;
		if(!valueProcessesdata["ProcessId"].isNull())
			processesObject.processId = valueProcessesdata["ProcessId"].asString();
		auto allSchemasNode = valueProcessesdata["Schemas"]["schemasItem"];
		for (auto valueProcessesdataSchemasschemasItem : allSchemasNode)
		{
			Data::SchemasItem schemasObject;
			if(!valueProcessesdataSchemasschemasItem["CreateTime"].isNull())
				schemasObject.createTime = valueProcessesdataSchemasschemasItem["CreateTime"].asString();
			if(!valueProcessesdataSchemasschemasItem["SchemaId"].isNull())
				schemasObject.schemaId = valueProcessesdataSchemasschemasItem["SchemaId"].asString();
			if(!valueProcessesdataSchemasschemasItem["SchemaName"].isNull())
				schemasObject.schemaName = valueProcessesdataSchemasschemasItem["SchemaName"].asString();
			if(!valueProcessesdataSchemasschemasItem["Description"].isNull())
				schemasObject.description = valueProcessesdataSchemasschemasItem["Description"].asString();
			if(!valueProcessesdataSchemasschemasItem["SchemaContent"].isNull())
				schemasObject.schemaContent = valueProcessesdataSchemasschemasItem["SchemaContent"].asString();
			if(!valueProcessesdataSchemasschemasItem["SchemaVersion"].isNull())
				schemasObject.schemaVersion = std::stol(valueProcessesdataSchemasschemasItem["SchemaVersion"].asString());
			if(!valueProcessesdataSchemasschemasItem["PolicyType"].isNull())
				schemasObject.policyType = valueProcessesdataSchemasschemasItem["PolicyType"].asString();
			if(!valueProcessesdataSchemasschemasItem["IsDefault"].isNull())
				schemasObject.isDefault = valueProcessesdataSchemasschemasItem["IsDefault"].asString() == "true";
			processesObject.schemas.push_back(schemasObject);
		}
		processes_.push_back(processesObject);
	}

}

std::vector<ListApprovalSchemasForApprovalProcessesResult::Data> ListApprovalSchemasForApprovalProcessesResult::getProcesses()const
{
	return processes_;
}

