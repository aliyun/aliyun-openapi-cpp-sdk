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

#include <alibabacloud/sophonsoar/model/DescribeSoarRecordsResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Sophonsoar;
using namespace AlibabaCloud::Sophonsoar::Model;

DescribeSoarRecordsResult::DescribeSoarRecordsResult() :
	ServiceResult()
{}

DescribeSoarRecordsResult::DescribeSoarRecordsResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

DescribeSoarRecordsResult::~DescribeSoarRecordsResult()
{}

void DescribeSoarRecordsResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto allSoarExecuteRecordsNode = value["SoarExecuteRecords"]["Data"];
	for (auto valueSoarExecuteRecordsData : allSoarExecuteRecordsNode)
	{
		Data soarExecuteRecordsObject;
		if(!valueSoarExecuteRecordsData["TriggerType"].isNull())
			soarExecuteRecordsObject.triggerType = valueSoarExecuteRecordsData["TriggerType"].asString();
		if(!valueSoarExecuteRecordsData["TriggerDataId"].isNull())
			soarExecuteRecordsObject.triggerDataId = valueSoarExecuteRecordsData["TriggerDataId"].asString();
		if(!valueSoarExecuteRecordsData["TaskName"].isNull())
			soarExecuteRecordsObject.taskName = valueSoarExecuteRecordsData["TaskName"].asString();
		if(!valueSoarExecuteRecordsData["StartTime"].isNull())
			soarExecuteRecordsObject.startTime = std::stol(valueSoarExecuteRecordsData["StartTime"].asString());
		if(!valueSoarExecuteRecordsData["EndTime"].isNull())
			soarExecuteRecordsObject.endTime = std::stol(valueSoarExecuteRecordsData["EndTime"].asString());
		if(!valueSoarExecuteRecordsData["Status"].isNull())
			soarExecuteRecordsObject.status = valueSoarExecuteRecordsData["Status"].asString();
		if(!valueSoarExecuteRecordsData["Success"].isNull())
			soarExecuteRecordsObject.success = std::stoi(valueSoarExecuteRecordsData["Success"].asString());
		if(!valueSoarExecuteRecordsData["RequestUuid"].isNull())
			soarExecuteRecordsObject.requestUuid = valueSoarExecuteRecordsData["RequestUuid"].asString();
		if(!valueSoarExecuteRecordsData["TriggerUser"].isNull())
			soarExecuteRecordsObject.triggerUser = valueSoarExecuteRecordsData["TriggerUser"].asString();
		if(!valueSoarExecuteRecordsData["ErrorMsg"].isNull())
			soarExecuteRecordsObject.errorMsg = valueSoarExecuteRecordsData["ErrorMsg"].asString();
		if(!valueSoarExecuteRecordsData["DataSourceName"].isNull())
			soarExecuteRecordsObject.dataSourceName = valueSoarExecuteRecordsData["DataSourceName"].asString();
		if(!valueSoarExecuteRecordsData["RawEventReq"].isNull())
			soarExecuteRecordsObject.rawEventReq = valueSoarExecuteRecordsData["RawEventReq"].asString();
		if(!valueSoarExecuteRecordsData["ResultMessage"].isNull())
			soarExecuteRecordsObject.resultMessage = valueSoarExecuteRecordsData["ResultMessage"].asString();
		if(!valueSoarExecuteRecordsData["ResultDetailInfo"].isNull())
			soarExecuteRecordsObject.resultDetailInfo = valueSoarExecuteRecordsData["ResultDetailInfo"].asString();
		if(!valueSoarExecuteRecordsData["TaskTenantId"].isNull())
			soarExecuteRecordsObject.taskTenantId = valueSoarExecuteRecordsData["TaskTenantId"].asString();
		if(!valueSoarExecuteRecordsData["TaskType"].isNull())
			soarExecuteRecordsObject.taskType = valueSoarExecuteRecordsData["TaskType"].asString();
		if(!valueSoarExecuteRecordsData["TaskflowMd5"].isNull())
			soarExecuteRecordsObject.taskflowMd5 = valueSoarExecuteRecordsData["TaskflowMd5"].asString();
		if(!valueSoarExecuteRecordsData["FlowTag"].isNull())
			soarExecuteRecordsObject.flowTag = std::stoi(valueSoarExecuteRecordsData["FlowTag"].asString());
		soarExecuteRecords_.push_back(soarExecuteRecordsObject);
	}
	auto pageNode = value["Page"];
	if(!pageNode["TotalCount"].isNull())
		page_.totalCount = std::stoi(pageNode["TotalCount"].asString());
	if(!pageNode["PageNumber"].isNull())
		page_.pageNumber = std::stoi(pageNode["PageNumber"].asString());
	if(!pageNode["PageSize"].isNull())
		page_.pageSize = std::stoi(pageNode["PageSize"].asString());

}

DescribeSoarRecordsResult::Page DescribeSoarRecordsResult::getPage()const
{
	return page_;
}

std::vector<DescribeSoarRecordsResult::Data> DescribeSoarRecordsResult::getSoarExecuteRecords()const
{
	return soarExecuteRecords_;
}

