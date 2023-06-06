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

#include <alibabacloud/sas/model/DescribeBruteForceRecordsResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Sas;
using namespace AlibabaCloud::Sas::Model;

DescribeBruteForceRecordsResult::DescribeBruteForceRecordsResult() :
	ServiceResult()
{}

DescribeBruteForceRecordsResult::DescribeBruteForceRecordsResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

DescribeBruteForceRecordsResult::~DescribeBruteForceRecordsResult()
{}

void DescribeBruteForceRecordsResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto allMachineListNode = value["MachineList"]["BruteForceRecord"];
	for (auto valueMachineListBruteForceRecord : allMachineListNode)
	{
		BruteForceRecord machineListObject;
		if(!valueMachineListBruteForceRecord["Status"].isNull())
			machineListObject.status = std::stoi(valueMachineListBruteForceRecord["Status"].asString());
		if(!valueMachineListBruteForceRecord["BlockExpireDate"].isNull())
			machineListObject.blockExpireDate = std::stol(valueMachineListBruteForceRecord["BlockExpireDate"].asString());
		if(!valueMachineListBruteForceRecord["Uuid"].isNull())
			machineListObject.uuid = valueMachineListBruteForceRecord["Uuid"].asString();
		if(!valueMachineListBruteForceRecord["InternetIp"].isNull())
			machineListObject.internetIp = valueMachineListBruteForceRecord["InternetIp"].asString();
		if(!valueMachineListBruteForceRecord["InstanceName"].isNull())
			machineListObject.instanceName = valueMachineListBruteForceRecord["InstanceName"].asString();
		if(!valueMachineListBruteForceRecord["BlockIp"].isNull())
			machineListObject.blockIp = valueMachineListBruteForceRecord["BlockIp"].asString();
		if(!valueMachineListBruteForceRecord["Port"].isNull())
			machineListObject.port = valueMachineListBruteForceRecord["Port"].asString();
		if(!valueMachineListBruteForceRecord["Source"].isNull())
			machineListObject.source = valueMachineListBruteForceRecord["Source"].asString();
		if(!valueMachineListBruteForceRecord["IntranetIp"].isNull())
			machineListObject.intranetIp = valueMachineListBruteForceRecord["IntranetIp"].asString();
		if(!valueMachineListBruteForceRecord["Id"].isNull())
			machineListObject.id = std::stol(valueMachineListBruteForceRecord["Id"].asString());
		if(!valueMachineListBruteForceRecord["RuleName"].isNull())
			machineListObject.ruleName = valueMachineListBruteForceRecord["RuleName"].asString();
		if(!valueMachineListBruteForceRecord["ErrorCode"].isNull())
			machineListObject.errorCode = valueMachineListBruteForceRecord["ErrorCode"].asString();
		if(!valueMachineListBruteForceRecord["successInfo"].isNull())
			machineListObject.successInfo = valueMachineListBruteForceRecord["successInfo"].asString();
		if(!valueMachineListBruteForceRecord["BlockType"].isNull())
			machineListObject.blockType = valueMachineListBruteForceRecord["BlockType"].asString();
		if(!valueMachineListBruteForceRecord["AliNetOnline"].isNull())
			machineListObject.aliNetOnline = valueMachineListBruteForceRecord["AliNetOnline"].asString() == "true";
		machineList_.push_back(machineListObject);
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

}

std::vector<DescribeBruteForceRecordsResult::BruteForceRecord> DescribeBruteForceRecordsResult::getMachineList()const
{
	return machineList_;
}

DescribeBruteForceRecordsResult::PageInfo DescribeBruteForceRecordsResult::getPageInfo()const
{
	return pageInfo_;
}

