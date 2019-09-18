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
	auto allRecords = value["Records"]["HotlineRecord"];
	for (auto value : allRecords)
	{
		HotlineRecord recordsObject;
		if(!value["Id"].isNull())
			recordsObject.id = value["Id"].asString();
		if(!value["VisitorId"].isNull())
			recordsObject.visitorId = value["VisitorId"].asString();
		if(!value["VisitorPhone"].isNull())
			recordsObject.visitorPhone = value["VisitorPhone"].asString();
		if(!value["VisitorProvince"].isNull())
			recordsObject.visitorProvince = value["VisitorProvince"].asString();
		if(!value["CallType"].isNull())
			recordsObject.callType = value["CallType"].asString();
		if(!value["AgentId"].isNull())
			recordsObject.agentId = value["AgentId"].asString();
		if(!value["AgentName"].isNull())
			recordsObject.agentName = value["AgentName"].asString();
		if(!value["GroupId"].isNull())
			recordsObject.groupId = value["GroupId"].asString();
		if(!value["GroupName"].isNull())
			recordsObject.groupName = value["GroupName"].asString();
		if(!value["CreateTime"].isNull())
			recordsObject.createTime = value["CreateTime"].asString();
		if(!value["FinishTime"].isNull())
			recordsObject.finishTime = value["FinishTime"].asString();
		if(!value["Status"].isNull())
			recordsObject.status = value["Status"].asString();
		if(!value["Memo"].isNull())
			recordsObject.memo = value["Memo"].asString();
		if(!value["HangupType"].isNull())
			recordsObject.hangupType = value["HangupType"].asString();
		if(!value["Satisfaction"].isNull())
			recordsObject.satisfaction = value["Satisfaction"].asString();
		if(!value["OutboundTaskId"].isNull())
			recordsObject.outboundTaskId = value["OutboundTaskId"].asString();
		if(!value["Categories"].isNull())
			recordsObject.categories = value["Categories"].asString();
		if(!value["CcsInstanceId"].isNull())
			recordsObject.ccsInstanceId = value["CcsInstanceId"].asString();
		if(!value["TalkDuration"].isNull())
			recordsObject.talkDuration = std::stol(value["TalkDuration"].asString());
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

