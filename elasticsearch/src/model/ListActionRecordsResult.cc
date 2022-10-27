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

#include <alibabacloud/elasticsearch/model/ListActionRecordsResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Elasticsearch;
using namespace AlibabaCloud::Elasticsearch::Model;

ListActionRecordsResult::ListActionRecordsResult() :
	ServiceResult()
{}

ListActionRecordsResult::ListActionRecordsResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

ListActionRecordsResult::~ListActionRecordsResult()
{}

void ListActionRecordsResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto allResultNode = value["Result"]["actionRecord"];
	for (auto valueResultactionRecord : allResultNode)
	{
		ActionRecord resultObject;
		if(!valueResultactionRecord["ActionName"].isNull())
			resultObject.actionName = valueResultactionRecord["ActionName"].asString();
		if(!valueResultactionRecord["ActionParams"].isNull())
			resultObject.actionParams = valueResultactionRecord["ActionParams"].asString();
		if(!valueResultactionRecord["EndTime"].isNull())
			resultObject.endTime = std::stol(valueResultactionRecord["EndTime"].asString());
		if(!valueResultactionRecord["InstanceId"].isNull())
			resultObject.instanceId = valueResultactionRecord["InstanceId"].asString();
		if(!valueResultactionRecord["Process"].isNull())
			resultObject.process = valueResultactionRecord["Process"].asString();
		if(!valueResultactionRecord["RecordDiff"].isNull())
			resultObject.recordDiff = valueResultactionRecord["RecordDiff"].asString();
		if(!valueResultactionRecord["RequestId"].isNull())
			resultObject.requestId = valueResultactionRecord["RequestId"].asString();
		if(!valueResultactionRecord["StartTime"].isNull())
			resultObject.startTime = std::stol(valueResultactionRecord["StartTime"].asString());
		if(!valueResultactionRecord["StateType"].isNull())
			resultObject.stateType = valueResultactionRecord["StateType"].asString();
		if(!valueResultactionRecord["UserId"].isNull())
			resultObject.userId = valueResultactionRecord["UserId"].asString();
		if(!valueResultactionRecord["UserType"].isNull())
			resultObject.userType = valueResultactionRecord["UserType"].asString();
		if(!valueResultactionRecord["OwnerId"].isNull())
			resultObject.ownerId = valueResultactionRecord["OwnerId"].asString();
		if(!valueResultactionRecord["UserInfo"].isNull())
			resultObject.userInfo = valueResultactionRecord["UserInfo"].asString();
		if(!valueResultactionRecord["MetaNow"].isNull())
			resultObject.metaNow = valueResultactionRecord["MetaNow"].asString();
		if(!valueResultactionRecord["MetaOld"].isNull())
			resultObject.metaOld = valueResultactionRecord["MetaOld"].asString();
		auto allStatusInfoNode = valueResultactionRecord["StatusInfo"]["statusInfoItem"];
		for (auto valueResultactionRecordStatusInfostatusInfoItem : allStatusInfoNode)
		{
			ActionRecord::StatusInfoItem statusInfoObject;
			if(!valueResultactionRecordStatusInfostatusInfoItem["subState"].isNull())
				statusInfoObject.subState = valueResultactionRecordStatusInfostatusInfoItem["subState"].asString();
			if(!valueResultactionRecordStatusInfostatusInfoItem["nodeCount"].isNull())
				statusInfoObject.nodeCount = std::stoi(valueResultactionRecordStatusInfostatusInfoItem["nodeCount"].asString());
			if(!valueResultactionRecordStatusInfostatusInfoItem["completeNodeCount"].isNull())
				statusInfoObject.completeNodeCount = std::stoi(valueResultactionRecordStatusInfostatusInfoItem["completeNodeCount"].asString());
			if(!valueResultactionRecordStatusInfostatusInfoItem["exception"].isNull())
				statusInfoObject.exception = valueResultactionRecordStatusInfostatusInfoItem["exception"].asString();
			if(!valueResultactionRecordStatusInfostatusInfoItem["latencyMills"].isNull())
				statusInfoObject.latencyMills = std::stol(valueResultactionRecordStatusInfostatusInfoItem["latencyMills"].asString());
			if(!valueResultactionRecordStatusInfostatusInfoItem["process"].isNull())
				statusInfoObject.process = valueResultactionRecordStatusInfostatusInfoItem["process"].asString();
			if(!valueResultactionRecordStatusInfostatusInfoItem["startTime"].isNull())
				statusInfoObject.startTime = std::stol(valueResultactionRecordStatusInfostatusInfoItem["startTime"].asString());
			if(!valueResultactionRecordStatusInfostatusInfoItem["endTime"].isNull())
				statusInfoObject.endTime = std::stol(valueResultactionRecordStatusInfostatusInfoItem["endTime"].asString());
			if(!valueResultactionRecordStatusInfostatusInfoItem["stateType"].isNull())
				statusInfoObject.stateType = valueResultactionRecordStatusInfostatusInfoItem["stateType"].asString();
			auto allsubStatusInfoNode = valueResultactionRecordStatusInfostatusInfoItem["subStatusInfo"]["subStatusInfoItem"];
			for (auto valueResultactionRecordStatusInfostatusInfoItemsubStatusInfosubStatusInfoItem : allsubStatusInfoNode)
			{
				ActionRecord::StatusInfoItem::SubStatusInfoItem subStatusInfoObject;
				if(!valueResultactionRecordStatusInfostatusInfoItemsubStatusInfosubStatusInfoItem["subState"].isNull())
					subStatusInfoObject.subState = valueResultactionRecordStatusInfostatusInfoItemsubStatusInfosubStatusInfoItem["subState"].asString();
				if(!valueResultactionRecordStatusInfostatusInfoItemsubStatusInfosubStatusInfoItem["nodeCount"].isNull())
					subStatusInfoObject.nodeCount = std::stoi(valueResultactionRecordStatusInfostatusInfoItemsubStatusInfosubStatusInfoItem["nodeCount"].asString());
				if(!valueResultactionRecordStatusInfostatusInfoItemsubStatusInfosubStatusInfoItem["completeNodeCount"].isNull())
					subStatusInfoObject.completeNodeCount = std::stoi(valueResultactionRecordStatusInfostatusInfoItemsubStatusInfosubStatusInfoItem["completeNodeCount"].asString());
				if(!valueResultactionRecordStatusInfostatusInfoItemsubStatusInfosubStatusInfoItem["exception"].isNull())
					subStatusInfoObject.exception = valueResultactionRecordStatusInfostatusInfoItemsubStatusInfosubStatusInfoItem["exception"].asString();
				if(!valueResultactionRecordStatusInfostatusInfoItemsubStatusInfosubStatusInfoItem["latencyMills"].isNull())
					subStatusInfoObject.latencyMills = std::stol(valueResultactionRecordStatusInfostatusInfoItemsubStatusInfosubStatusInfoItem["latencyMills"].asString());
				if(!valueResultactionRecordStatusInfostatusInfoItemsubStatusInfosubStatusInfoItem["process"].isNull())
					subStatusInfoObject.process = valueResultactionRecordStatusInfostatusInfoItemsubStatusInfosubStatusInfoItem["process"].asString();
				if(!valueResultactionRecordStatusInfostatusInfoItemsubStatusInfosubStatusInfoItem["startTime"].isNull())
					subStatusInfoObject.startTime = std::stol(valueResultactionRecordStatusInfostatusInfoItemsubStatusInfosubStatusInfoItem["startTime"].asString());
				if(!valueResultactionRecordStatusInfostatusInfoItemsubStatusInfosubStatusInfoItem["endTime"].isNull())
					subStatusInfoObject.endTime = std::stol(valueResultactionRecordStatusInfostatusInfoItemsubStatusInfosubStatusInfoItem["endTime"].asString());
				if(!valueResultactionRecordStatusInfostatusInfoItemsubStatusInfosubStatusInfoItem["stateType"].isNull())
					subStatusInfoObject.stateType = valueResultactionRecordStatusInfostatusInfoItemsubStatusInfosubStatusInfoItem["stateType"].asString();
				statusInfoObject.subStatusInfo.push_back(subStatusInfoObject);
			}
			resultObject.statusInfo.push_back(statusInfoObject);
		}
		auto allActionResultAccessList = value["ActionResultAccessList"]["actionResultAccessList"];
		for (auto value : allActionResultAccessList)
			resultObject.actionResultAccessList.push_back(value.asString());
		auto allRecordIds = value["RecordIds"]["recordIds"];
		for (auto value : allRecordIds)
			resultObject.recordIds.push_back(value.asString());
		result_.push_back(resultObject);
	}

}

std::vector<ListActionRecordsResult::ActionRecord> ListActionRecordsResult::getResult()const
{
	return result_;
}

