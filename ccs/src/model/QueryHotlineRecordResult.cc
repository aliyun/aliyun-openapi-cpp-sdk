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

#include <alibabacloud/ccs/model/QueryHotlineRecordResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Ccs;
using namespace AlibabaCloud::Ccs::Model;

QueryHotlineRecordResult::QueryHotlineRecordResult() :
	ServiceResult()
{}

QueryHotlineRecordResult::QueryHotlineRecordResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

QueryHotlineRecordResult::~QueryHotlineRecordResult()
{}

void QueryHotlineRecordResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto allRecordsNode = value["Records"]["HotlineRecord"];
	for (auto valueRecordsHotlineRecord : allRecordsNode)
	{
		HotlineRecord recordsObject;
		if(!valueRecordsHotlineRecord["Id"].isNull())
			recordsObject.id = valueRecordsHotlineRecord["Id"].asString();
		if(!valueRecordsHotlineRecord["VisitorId"].isNull())
			recordsObject.visitorId = valueRecordsHotlineRecord["VisitorId"].asString();
		if(!valueRecordsHotlineRecord["VisitorPhone"].isNull())
			recordsObject.visitorPhone = valueRecordsHotlineRecord["VisitorPhone"].asString();
		if(!valueRecordsHotlineRecord["VisitorProvince"].isNull())
			recordsObject.visitorProvince = valueRecordsHotlineRecord["VisitorProvince"].asString();
		if(!valueRecordsHotlineRecord["CallType"].isNull())
			recordsObject.callType = valueRecordsHotlineRecord["CallType"].asString();
		if(!valueRecordsHotlineRecord["AgentId"].isNull())
			recordsObject.agentId = valueRecordsHotlineRecord["AgentId"].asString();
		if(!valueRecordsHotlineRecord["AgentName"].isNull())
			recordsObject.agentName = valueRecordsHotlineRecord["AgentName"].asString();
		if(!valueRecordsHotlineRecord["GroupId"].isNull())
			recordsObject.groupId = valueRecordsHotlineRecord["GroupId"].asString();
		if(!valueRecordsHotlineRecord["GroupName"].isNull())
			recordsObject.groupName = valueRecordsHotlineRecord["GroupName"].asString();
		if(!valueRecordsHotlineRecord["CreateTime"].isNull())
			recordsObject.createTime = valueRecordsHotlineRecord["CreateTime"].asString();
		if(!valueRecordsHotlineRecord["FinishTime"].isNull())
			recordsObject.finishTime = valueRecordsHotlineRecord["FinishTime"].asString();
		if(!valueRecordsHotlineRecord["Status"].isNull())
			recordsObject.status = valueRecordsHotlineRecord["Status"].asString();
		if(!valueRecordsHotlineRecord["Memo"].isNull())
			recordsObject.memo = valueRecordsHotlineRecord["Memo"].asString();
		if(!valueRecordsHotlineRecord["HangupType"].isNull())
			recordsObject.hangupType = valueRecordsHotlineRecord["HangupType"].asString();
		if(!valueRecordsHotlineRecord["Satisfaction"].isNull())
			recordsObject.satisfaction = valueRecordsHotlineRecord["Satisfaction"].asString();
		if(!valueRecordsHotlineRecord["OutboundTaskId"].isNull())
			recordsObject.outboundTaskId = valueRecordsHotlineRecord["OutboundTaskId"].asString();
		if(!valueRecordsHotlineRecord["Categories"].isNull())
			recordsObject.categories = valueRecordsHotlineRecord["Categories"].asString();
		if(!valueRecordsHotlineRecord["CcsInstanceId"].isNull())
			recordsObject.ccsInstanceId = valueRecordsHotlineRecord["CcsInstanceId"].asString();
		if(!valueRecordsHotlineRecord["TalkDuration"].isNull())
			recordsObject.talkDuration = std::stol(valueRecordsHotlineRecord["TalkDuration"].asString());
		records_.push_back(recordsObject);
	}
	if(!value["TotalCount"].isNull())
		totalCount_ = std::stol(value["TotalCount"].asString());
	if(!value["PageNum"].isNull())
		pageNum_ = std::stoi(value["PageNum"].asString());
	if(!value["PageSize"].isNull())
		pageSize_ = std::stoi(value["PageSize"].asString());

}

long QueryHotlineRecordResult::getTotalCount()const
{
	return totalCount_;
}

int QueryHotlineRecordResult::getPageNum()const
{
	return pageNum_;
}

int QueryHotlineRecordResult::getPageSize()const
{
	return pageSize_;
}

std::vector<QueryHotlineRecordResult::HotlineRecord> QueryHotlineRecordResult::getRecords()const
{
	return records_;
}

