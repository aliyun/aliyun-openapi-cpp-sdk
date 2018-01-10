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

#include <alibabacloud/ecs/model/DescribeTaskAttributeResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Ecs;
using namespace AlibabaCloud::Ecs::Model;

DescribeTaskAttributeResult::DescribeTaskAttributeResult() :
	ServiceResult()
{}

DescribeTaskAttributeResult::DescribeTaskAttributeResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

DescribeTaskAttributeResult::~DescribeTaskAttributeResult()
{}

void DescribeTaskAttributeResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);

	setRequestId(value["RequestId"].asString());
	auto allOperationProgressSet = value["OperationProgressSet"]["OperationProgress"];
	for (auto value : allOperationProgressSet)
	{
		OperationProgress operationProgressObject;
		operationProgressObject.operationStatus = value["OperationStatus"].asString();
		operationProgressObject.errorCode = value["ErrorCode"].asString();
		operationProgressObject.errorMsg = value["ErrorMsg"].asString();
		auto allRelatedItemSet = value["RelatedItemSet"]["RelatedItem"];
		for (auto value : allRelatedItemSet)
		{
			OperationProgress::RelatedItem relatedItemObject;
			relatedItemObject.name = value["Name"].asString();
			relatedItemObject.value = value["Value"].asString();
			operationProgressObject.relatedItemSet.push_back(relatedItemObject);
		}
		operationProgressSet_.push_back(operationProgressObject);
	}
	taskId_ = value["TaskId"].asString();
	regionId_ = value["RegionId"].asString();
	taskAction_ = value["TaskAction"].asString();
	taskStatus_ = value["TaskStatus"].asString();
	taskProcess_ = value["TaskProcess"].asString();
	supportCancel_ = value["SupportCancel"].asString();
	totalCount_ = std::stoi(value["TotalCount"].asString());
	successCount_ = std::stoi(value["SuccessCount"].asString());
	failedCount_ = std::stoi(value["FailedCount"].asString());
	creationTime_ = value["CreationTime"].asString();
	finishedTime_ = value["FinishedTime"].asString();

}

int DescribeTaskAttributeResult::getTotalCount()const
{
	return totalCount_;
}

void DescribeTaskAttributeResult::setTotalCount(int totalCount)
{
	totalCount_ = totalCount;
}

std::string DescribeTaskAttributeResult::getTaskId()const
{
	return taskId_;
}

void DescribeTaskAttributeResult::setTaskId(const std::string& taskId)
{
	taskId_ = taskId;
}

std::string DescribeTaskAttributeResult::getTaskProcess()const
{
	return taskProcess_;
}

void DescribeTaskAttributeResult::setTaskProcess(const std::string& taskProcess)
{
	taskProcess_ = taskProcess;
}

std::string DescribeTaskAttributeResult::getTaskAction()const
{
	return taskAction_;
}

void DescribeTaskAttributeResult::setTaskAction(const std::string& taskAction)
{
	taskAction_ = taskAction;
}

std::string DescribeTaskAttributeResult::getSupportCancel()const
{
	return supportCancel_;
}

void DescribeTaskAttributeResult::setSupportCancel(const std::string& supportCancel)
{
	supportCancel_ = supportCancel;
}

std::string DescribeTaskAttributeResult::getCreationTime()const
{
	return creationTime_;
}

void DescribeTaskAttributeResult::setCreationTime(const std::string& creationTime)
{
	creationTime_ = creationTime;
}

int DescribeTaskAttributeResult::getFailedCount()const
{
	return failedCount_;
}

void DescribeTaskAttributeResult::setFailedCount(int failedCount)
{
	failedCount_ = failedCount;
}

std::string DescribeTaskAttributeResult::getRegionId()const
{
	return regionId_;
}

void DescribeTaskAttributeResult::setRegionId(const std::string& regionId)
{
	regionId_ = regionId;
}

std::string DescribeTaskAttributeResult::getTaskStatus()const
{
	return taskStatus_;
}

void DescribeTaskAttributeResult::setTaskStatus(const std::string& taskStatus)
{
	taskStatus_ = taskStatus;
}

int DescribeTaskAttributeResult::getSuccessCount()const
{
	return successCount_;
}

void DescribeTaskAttributeResult::setSuccessCount(int successCount)
{
	successCount_ = successCount;
}

std::string DescribeTaskAttributeResult::getFinishedTime()const
{
	return finishedTime_;
}

void DescribeTaskAttributeResult::setFinishedTime(const std::string& finishedTime)
{
	finishedTime_ = finishedTime;
}

