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

#include <alibabacloud/dms-enterprise/model/ListDDLPublishRecordsResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Dms_enterprise;
using namespace AlibabaCloud::Dms_enterprise::Model;

ListDDLPublishRecordsResult::ListDDLPublishRecordsResult() :
	ServiceResult()
{}

ListDDLPublishRecordsResult::ListDDLPublishRecordsResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

ListDDLPublishRecordsResult::~ListDDLPublishRecordsResult()
{}

void ListDDLPublishRecordsResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto allDDLPublishRecordListNode = value["DDLPublishRecordList"]["DDLPublishRecord"];
	for (auto valueDDLPublishRecordListDDLPublishRecord : allDDLPublishRecordListNode)
	{
		DDLPublishRecord dDLPublishRecordListObject;
		if(!valueDDLPublishRecordListDDLPublishRecord["StatusDesc"].isNull())
			dDLPublishRecordListObject.statusDesc = valueDDLPublishRecordListDDLPublishRecord["StatusDesc"].asString();
		if(!valueDDLPublishRecordListDDLPublishRecord["AuditStatus"].isNull())
			dDLPublishRecordListObject.auditStatus = valueDDLPublishRecordListDDLPublishRecord["AuditStatus"].asString();
		if(!valueDDLPublishRecordListDDLPublishRecord["CreatorId"].isNull())
			dDLPublishRecordListObject.creatorId = std::stol(valueDDLPublishRecordListDDLPublishRecord["CreatorId"].asString());
		if(!valueDDLPublishRecordListDDLPublishRecord["Finality"].isNull())
			dDLPublishRecordListObject.finality = valueDDLPublishRecordListDDLPublishRecord["Finality"].asString() == "true";
		if(!valueDDLPublishRecordListDDLPublishRecord["AuditExpireTime"].isNull())
			dDLPublishRecordListObject.auditExpireTime = valueDDLPublishRecordListDDLPublishRecord["AuditExpireTime"].asString();
		if(!valueDDLPublishRecordListDDLPublishRecord["WorkflowInstanceId"].isNull())
			dDLPublishRecordListObject.workflowInstanceId = std::stol(valueDDLPublishRecordListDDLPublishRecord["WorkflowInstanceId"].asString());
		if(!valueDDLPublishRecordListDDLPublishRecord["RiskLevel"].isNull())
			dDLPublishRecordListObject.riskLevel = valueDDLPublishRecordListDDLPublishRecord["RiskLevel"].asString();
		if(!valueDDLPublishRecordListDDLPublishRecord["FinalityReason"].isNull())
			dDLPublishRecordListObject.finalityReason = valueDDLPublishRecordListDDLPublishRecord["FinalityReason"].asString();
		if(!valueDDLPublishRecordListDDLPublishRecord["PublishStatus"].isNull())
			dDLPublishRecordListObject.publishStatus = valueDDLPublishRecordListDDLPublishRecord["PublishStatus"].asString();
		auto allPublishTaskInfoListNode = valueDDLPublishRecordListDDLPublishRecord["PublishTaskInfoList"]["PublishTaskInfo"];
		for (auto valueDDLPublishRecordListDDLPublishRecordPublishTaskInfoListPublishTaskInfo : allPublishTaskInfoListNode)
		{
			DDLPublishRecord::PublishTaskInfo publishTaskInfoListObject;
			if(!valueDDLPublishRecordListDDLPublishRecordPublishTaskInfoListPublishTaskInfo["StatusDesc"].isNull())
				publishTaskInfoListObject.statusDesc = valueDDLPublishRecordListDDLPublishRecordPublishTaskInfoListPublishTaskInfo["StatusDesc"].asString();
			if(!valueDDLPublishRecordListDDLPublishRecordPublishTaskInfoListPublishTaskInfo["TaskJobStatus"].isNull())
				publishTaskInfoListObject.taskJobStatus = valueDDLPublishRecordListDDLPublishRecordPublishTaskInfoListPublishTaskInfo["TaskJobStatus"].asString();
			if(!valueDDLPublishRecordListDDLPublishRecordPublishTaskInfoListPublishTaskInfo["PublishStrategy"].isNull())
				publishTaskInfoListObject.publishStrategy = valueDDLPublishRecordListDDLPublishRecordPublishTaskInfoListPublishTaskInfo["PublishStrategy"].asString();
			if(!valueDDLPublishRecordListDDLPublishRecordPublishTaskInfoListPublishTaskInfo["DbId"].isNull())
				publishTaskInfoListObject.dbId = std::stol(valueDDLPublishRecordListDDLPublishRecordPublishTaskInfoListPublishTaskInfo["DbId"].asString());
			if(!valueDDLPublishRecordListDDLPublishRecordPublishTaskInfoListPublishTaskInfo["PlanTime"].isNull())
				publishTaskInfoListObject.planTime = valueDDLPublishRecordListDDLPublishRecordPublishTaskInfoListPublishTaskInfo["PlanTime"].asString();
			if(!valueDDLPublishRecordListDDLPublishRecordPublishTaskInfoListPublishTaskInfo["Logic"].isNull())
				publishTaskInfoListObject.logic = valueDDLPublishRecordListDDLPublishRecordPublishTaskInfoListPublishTaskInfo["Logic"].asString() == "true";
			auto allPublishJobListNode = valueDDLPublishRecordListDDLPublishRecordPublishTaskInfoListPublishTaskInfo["PublishJobList"]["PublishJob"];
			for (auto valueDDLPublishRecordListDDLPublishRecordPublishTaskInfoListPublishTaskInfoPublishJobListPublishJob : allPublishJobListNode)
			{
				DDLPublishRecord::PublishTaskInfo::PublishJob publishJobListObject;
				if(!valueDDLPublishRecordListDDLPublishRecordPublishTaskInfoListPublishTaskInfoPublishJobListPublishJob["StatusDesc"].isNull())
					publishJobListObject.statusDesc = valueDDLPublishRecordListDDLPublishRecordPublishTaskInfoListPublishTaskInfoPublishJobListPublishJob["StatusDesc"].asString();
				if(!valueDDLPublishRecordListDDLPublishRecordPublishTaskInfoListPublishTaskInfoPublishJobListPublishJob["TableName"].isNull())
					publishJobListObject.tableName = valueDDLPublishRecordListDDLPublishRecordPublishTaskInfoListPublishTaskInfoPublishJobListPublishJob["TableName"].asString();
				if(!valueDDLPublishRecordListDDLPublishRecordPublishTaskInfoListPublishTaskInfoPublishJobListPublishJob["Scripts"].isNull())
					publishJobListObject.scripts = valueDDLPublishRecordListDDLPublishRecordPublishTaskInfoListPublishTaskInfoPublishJobListPublishJob["Scripts"].asString();
				if(!valueDDLPublishRecordListDDLPublishRecordPublishTaskInfoListPublishTaskInfoPublishJobListPublishJob["TaskJobStatus"].isNull())
					publishJobListObject.taskJobStatus = valueDDLPublishRecordListDDLPublishRecordPublishTaskInfoListPublishTaskInfoPublishJobListPublishJob["TaskJobStatus"].asString();
				if(!valueDDLPublishRecordListDDLPublishRecordPublishTaskInfoListPublishTaskInfoPublishJobListPublishJob["ExecuteCount"].isNull())
					publishJobListObject.executeCount = std::stol(valueDDLPublishRecordListDDLPublishRecordPublishTaskInfoListPublishTaskInfoPublishJobListPublishJob["ExecuteCount"].asString());
				if(!valueDDLPublishRecordListDDLPublishRecordPublishTaskInfoListPublishTaskInfoPublishJobListPublishJob["DBTaskGroupId"].isNull())
					publishJobListObject.dBTaskGroupId = std::stol(valueDDLPublishRecordListDDLPublishRecordPublishTaskInfoListPublishTaskInfoPublishJobListPublishJob["DBTaskGroupId"].asString());
				publishTaskInfoListObject.publishJobList.push_back(publishJobListObject);
			}
			dDLPublishRecordListObject.publishTaskInfoList.push_back(publishTaskInfoListObject);
		}
		dDLPublishRecordList_.push_back(dDLPublishRecordListObject);
	}
	if(!value["ErrorCode"].isNull())
		errorCode_ = value["ErrorCode"].asString();
	if(!value["ErrorMessage"].isNull())
		errorMessage_ = value["ErrorMessage"].asString();
	if(!value["Success"].isNull())
		success_ = value["Success"].asString() == "true";

}

std::string ListDDLPublishRecordsResult::getErrorCode()const
{
	return errorCode_;
}

std::string ListDDLPublishRecordsResult::getErrorMessage()const
{
	return errorMessage_;
}

std::vector<ListDDLPublishRecordsResult::DDLPublishRecord> ListDDLPublishRecordsResult::getDDLPublishRecordList()const
{
	return dDLPublishRecordList_;
}

bool ListDDLPublishRecordsResult::getSuccess()const
{
	return success_;
}

