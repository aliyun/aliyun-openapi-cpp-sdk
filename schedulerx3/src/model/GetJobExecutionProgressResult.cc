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

#include <alibabacloud/schedulerx3/model/GetJobExecutionProgressResult.h>
#include <json/json.h>

using namespace AlibabaCloud::SchedulerX3;
using namespace AlibabaCloud::SchedulerX3::Model;

GetJobExecutionProgressResult::GetJobExecutionProgressResult() :
	ServiceResult()
{}

GetJobExecutionProgressResult::GetJobExecutionProgressResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

GetJobExecutionProgressResult::~GetJobExecutionProgressResult()
{}

void GetJobExecutionProgressResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto dataNode = value["Data"];
	if(!dataNode["JobDescription"].isNull())
		data_.jobDescription = dataNode["JobDescription"].asString();
	if(!dataNode["StatisticDetail"].isNull())
		data_.statisticDetail = dataNode["StatisticDetail"].asString();
	auto allTaskProgressNode = dataNode["TaskProgress"]["taskProgressItem"];
	for (auto dataNodeTaskProgresstaskProgressItem : allTaskProgressNode)
	{
		Data::TaskProgressItem taskProgressItemObject;
		if(!dataNodeTaskProgresstaskProgressItem["Name"].isNull())
			taskProgressItemObject.name = dataNodeTaskProgresstaskProgressItem["Name"].asString();
		if(!dataNodeTaskProgresstaskProgressItem["Total"].isNull())
			taskProgressItemObject.total = std::stoi(dataNodeTaskProgresstaskProgressItem["Total"].asString());
		if(!dataNodeTaskProgresstaskProgressItem["Pulled"].isNull())
			taskProgressItemObject.pulled = std::stoi(dataNodeTaskProgresstaskProgressItem["Pulled"].asString());
		if(!dataNodeTaskProgresstaskProgressItem["Queue"].isNull())
			taskProgressItemObject.queue = std::stoi(dataNodeTaskProgresstaskProgressItem["Queue"].asString());
		if(!dataNodeTaskProgresstaskProgressItem["Running"].isNull())
			taskProgressItemObject.running = std::stoi(dataNodeTaskProgresstaskProgressItem["Running"].asString());
		if(!dataNodeTaskProgresstaskProgressItem["Success"].isNull())
			taskProgressItemObject.success = std::stoi(dataNodeTaskProgresstaskProgressItem["Success"].asString());
		if(!dataNodeTaskProgresstaskProgressItem["Failed"].isNull())
			taskProgressItemObject.failed = std::stoi(dataNodeTaskProgresstaskProgressItem["Failed"].asString());
		data_.taskProgress.push_back(taskProgressItemObject);
	}
	auto allShardingProgressNode = dataNode["ShardingProgress"]["shardingProgressItem"];
	for (auto dataNodeShardingProgressshardingProgressItem : allShardingProgressNode)
	{
		Data::ShardingProgressItem shardingProgressItemObject;
		if(!dataNodeShardingProgressshardingProgressItem["Id"].isNull())
			shardingProgressItemObject.id = std::stol(dataNodeShardingProgressshardingProgressItem["Id"].asString());
		if(!dataNodeShardingProgressshardingProgressItem["WorkerAddr"].isNull())
			shardingProgressItemObject.workerAddr = dataNodeShardingProgressshardingProgressItem["WorkerAddr"].asString();
		if(!dataNodeShardingProgressshardingProgressItem["Status"].isNull())
			shardingProgressItemObject.status = std::stoi(dataNodeShardingProgressshardingProgressItem["Status"].asString());
		if(!dataNodeShardingProgressshardingProgressItem["JobExecutionId"].isNull())
			shardingProgressItemObject.jobExecutionId = dataNodeShardingProgressshardingProgressItem["JobExecutionId"].asString();
		if(!dataNodeShardingProgressshardingProgressItem["Result"].isNull())
			shardingProgressItemObject.result = dataNodeShardingProgressshardingProgressItem["Result"].asString();
		auto statusTypeNode = value["StatusType"];
		if(!statusTypeNode["Code"].isNull())
			shardingProgressItemObject.statusType.code = statusTypeNode["Code"].asString();
		if(!statusTypeNode["Name"].isNull())
			shardingProgressItemObject.statusType.name = statusTypeNode["Name"].asString();
		if(!statusTypeNode["Tips"].isNull())
			shardingProgressItemObject.statusType.tips = statusTypeNode["Tips"].asString();
		data_.shardingProgress.push_back(shardingProgressItemObject);
	}
	auto allWorkerProgressNode = dataNode["WorkerProgress"]["workerProgressItem"];
	for (auto dataNodeWorkerProgressworkerProgressItem : allWorkerProgressNode)
	{
		Data::WorkerProgressItem workerProgressItemObject;
		if(!dataNodeWorkerProgressworkerProgressItem["WorkerAddr"].isNull())
			workerProgressItemObject.workerAddr = dataNodeWorkerProgressworkerProgressItem["WorkerAddr"].asString();
		if(!dataNodeWorkerProgressworkerProgressItem["Total"].isNull())
			workerProgressItemObject.total = std::stoi(dataNodeWorkerProgressworkerProgressItem["Total"].asString());
		if(!dataNodeWorkerProgressworkerProgressItem["Pulled"].isNull())
			workerProgressItemObject.pulled = std::stoi(dataNodeWorkerProgressworkerProgressItem["Pulled"].asString());
		if(!dataNodeWorkerProgressworkerProgressItem["Queue"].isNull())
			workerProgressItemObject.queue = std::stoi(dataNodeWorkerProgressworkerProgressItem["Queue"].asString());
		if(!dataNodeWorkerProgressworkerProgressItem["Running"].isNull())
			workerProgressItemObject.running = std::stoi(dataNodeWorkerProgressworkerProgressItem["Running"].asString());
		if(!dataNodeWorkerProgressworkerProgressItem["Success"].isNull())
			workerProgressItemObject.success = std::stoi(dataNodeWorkerProgressworkerProgressItem["Success"].asString());
		if(!dataNodeWorkerProgressworkerProgressItem["Failed"].isNull())
			workerProgressItemObject.failed = std::stoi(dataNodeWorkerProgressworkerProgressItem["Failed"].asString());
		if(!dataNodeWorkerProgressworkerProgressItem["TraceId"].isNull())
			workerProgressItemObject.traceId = dataNodeWorkerProgressworkerProgressItem["TraceId"].asString();
		data_.workerProgress.push_back(workerProgressItemObject);
	}
	auto totalProgressNode = dataNode["TotalProgress"];
	if(!totalProgressNode["Total"].isNull())
		data_.totalProgress.total = std::stol(totalProgressNode["Total"].asString());
	if(!totalProgressNode["Finished"].isNull())
		data_.totalProgress.finished = std::stol(totalProgressNode["Finished"].asString());
	auto rootProgressNode = dataNode["RootProgress"];
	if(!rootProgressNode["Total"].isNull())
		data_.rootProgress.total = std::stol(rootProgressNode["Total"].asString());
	if(!rootProgressNode["Finished"].isNull())
		data_.rootProgress.finished = std::stol(rootProgressNode["Finished"].asString());
	if(!value["Code"].isNull())
		code_ = std::stoi(value["Code"].asString());
	if(!value["Message"].isNull())
		message_ = value["Message"].asString();
	if(!value["Success"].isNull())
		success_ = value["Success"].asString() == "true";

}

std::string GetJobExecutionProgressResult::getMessage()const
{
	return message_;
}

GetJobExecutionProgressResult::Data GetJobExecutionProgressResult::getData()const
{
	return data_;
}

int GetJobExecutionProgressResult::getCode()const
{
	return code_;
}

bool GetJobExecutionProgressResult::getSuccess()const
{
	return success_;
}

