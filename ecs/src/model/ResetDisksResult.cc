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

#include <alibabacloud/ecs/model/ResetDisksResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Ecs;
using namespace AlibabaCloud::Ecs::Model;

ResetDisksResult::ResetDisksResult() :
	ServiceResult()
{}

ResetDisksResult::ResetDisksResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

ResetDisksResult::~ResetDisksResult()
{}

void ResetDisksResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto allOperationProgressSetNode = value["OperationProgressSet"]["OperationProgress"];
	for (auto valueOperationProgressSetOperationProgress : allOperationProgressSetNode)
	{
		OperationProgress operationProgressSetObject;
		if(!valueOperationProgressSetOperationProgress["ErrorMsg"].isNull())
			operationProgressSetObject.errorMsg = valueOperationProgressSetOperationProgress["ErrorMsg"].asString();
		if(!valueOperationProgressSetOperationProgress["ErrorCode"].isNull())
			operationProgressSetObject.errorCode = valueOperationProgressSetOperationProgress["ErrorCode"].asString();
		if(!valueOperationProgressSetOperationProgress["OperationStatus"].isNull())
			operationProgressSetObject.operationStatus = valueOperationProgressSetOperationProgress["OperationStatus"].asString();
		auto allRelatedItemSetNode = valueOperationProgressSetOperationProgress["RelatedItemSet"]["RelatedItem"];
		for (auto valueOperationProgressSetOperationProgressRelatedItemSetRelatedItem : allRelatedItemSetNode)
		{
			OperationProgress::RelatedItem relatedItemSetObject;
			if(!valueOperationProgressSetOperationProgressRelatedItemSetRelatedItem["Name"].isNull())
				relatedItemSetObject.name = valueOperationProgressSetOperationProgressRelatedItemSetRelatedItem["Name"].asString();
			if(!valueOperationProgressSetOperationProgressRelatedItemSetRelatedItem["Value"].isNull())
				relatedItemSetObject.value = valueOperationProgressSetOperationProgressRelatedItemSetRelatedItem["Value"].asString();
			operationProgressSetObject.relatedItemSet.push_back(relatedItemSetObject);
		}
		operationProgressSet_.push_back(operationProgressSetObject);
	}

}

std::vector<ResetDisksResult::OperationProgress> ResetDisksResult::getOperationProgressSet()const
{
	return operationProgressSet_;
}

