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
	Json::CharReaderBuilder builder;
	Json::CharReader *reader = builder.newCharReader();
	Json::Value *val;
	Json::Value value;
	JSONCPP_STRING *errs;
	reader->parse(payload.data(), payload.data() + payload.size(), val, errs);
	value = *val;
	setRequestId(value["RequestId"].asString());
	auto allOperationProgressSet = value["OperationProgressSet"]["OperationProgress"];
	for (auto value : allOperationProgressSet)
	{
		OperationProgress operationProgressSetObject;
		if(!value["OperationStatus"].isNull())
			operationProgressSetObject.operationStatus = value["OperationStatus"].asString();
		if(!value["ErrorCode"].isNull())
			operationProgressSetObject.errorCode = value["ErrorCode"].asString();
		if(!value["ErrorMsg"].isNull())
			operationProgressSetObject.errorMsg = value["ErrorMsg"].asString();
		auto allRelatedItemSet = value["RelatedItemSet"]["RelatedItem"];
		for (auto value : allRelatedItemSet)
		{
			OperationProgress::RelatedItem relatedItemSetObject;
			if(!value["Name"].isNull())
				relatedItemSetObject.name = value["Name"].asString();
			if(!value["Value"].isNull())
				relatedItemSetObject.value = value["Value"].asString();
			operationProgressSetObject.relatedItemSet.push_back(relatedItemSetObject);
		}
		operationProgressSet_.push_back(operationProgressSetObject);
	}
	if(!value["TaskId"].isNull())
		taskId_ = value["TaskId"].asString();
	if(!value["RegionId"].isNull())
		regionId_ = value["RegionId"].asString();
	if(!value["TaskAction"].isNull())
		taskAction_ = value["TaskAction"].asString();
	if(!value["TaskStatus"].isNull())
		taskStatus_ = value["TaskStatus"].asString();
	if(!value["TaskProcess"].isNull())
		taskProcess_ = value["TaskProcess"].asString();
	if(!value["SupportCancel"].isNull())
		supportCancel_ = value["SupportCancel"].asString();
	if(!value["TotalCount"].isNull())
		totalCount_ = std::stoi(value["TotalCount"].asString());
	if(!value["SuccessCount"].isNull())
		successCount_ = std::stoi(value["SuccessCount"].asString());
	if(!value["FailedCount"].isNull())
		failedCount_ = std::stoi(value["FailedCount"].asString());
	if(!value["CreationTime"].isNull())
		creationTime_ = value["CreationTime"].asString();
	if(!value["FinishedTime"].isNull())
		finishedTime_ = value["FinishedTime"].asString();

}

int DescribeTaskAttributeResult::getTotalCount()const
{
	return totalCount_;
}

std::string DescribeTaskAttributeResult::getTaskId()const
{
	return taskId_;
}

std::string DescribeTaskAttributeResult::getTaskProcess()const
{
	return taskProcess_;
}

std::vector<DescribeTaskAttributeResult::OperationProgress> DescribeTaskAttributeResult::getOperationProgressSet()const
{
	return operationProgressSet_;
}

std::string DescribeTaskAttributeResult::getTaskAction()const
{
	return taskAction_;
}

std::string DescribeTaskAttributeResult::getSupportCancel()const
{
	return supportCancel_;
}

std::string DescribeTaskAttributeResult::getCreationTime()const
{
	return creationTime_;
}

int DescribeTaskAttributeResult::getFailedCount()const
{
	return failedCount_;
}

std::string DescribeTaskAttributeResult::getRegionId()const
{
	return regionId_;
}

std::string DescribeTaskAttributeResult::getTaskStatus()const
{
	return taskStatus_;
}

int DescribeTaskAttributeResult::getSuccessCount()const
{
	return successCount_;
}

std::string DescribeTaskAttributeResult::getFinishedTime()const
{
	return finishedTime_;
}

