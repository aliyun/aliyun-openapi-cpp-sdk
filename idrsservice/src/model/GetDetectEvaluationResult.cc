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

#include <alibabacloud/idrsservice/model/GetDetectEvaluationResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Idrsservice;
using namespace AlibabaCloud::Idrsservice::Model;

GetDetectEvaluationResult::GetDetectEvaluationResult() :
	ServiceResult()
{}

GetDetectEvaluationResult::GetDetectEvaluationResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

GetDetectEvaluationResult::~GetDetectEvaluationResult()
{}

void GetDetectEvaluationResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto allDataNode = value["Data"]["DataItem"];
	for (auto valueDataDataItem : allDataNode)
	{
		DataItem dataObject;
		if(!valueDataDataItem["Day"].isNull())
			dataObject.day = valueDataDataItem["Day"].asString();
		auto allEvaluationItemListNode = valueDataDataItem["EvaluationItemList"]["EvaluationItemListItem"];
		for (auto valueDataDataItemEvaluationItemListEvaluationItemListItem : allEvaluationItemListNode)
		{
			DataItem::EvaluationItemListItem evaluationItemListObject;
			if(!valueDataDataItemEvaluationItemListEvaluationItemListItem["Name"].isNull())
				evaluationItemListObject.name = valueDataDataItemEvaluationItemListEvaluationItemListItem["Name"].asString();
			if(!valueDataDataItemEvaluationItemListEvaluationItemListItem["HandleCount"].isNull())
				evaluationItemListObject.handleCount = std::stoi(valueDataDataItemEvaluationItemListEvaluationItemListItem["HandleCount"].asString());
			if(!valueDataDataItemEvaluationItemListEvaluationItemListItem["SuccessCount"].isNull())
				evaluationItemListObject.successCount = std::stoi(valueDataDataItemEvaluationItemListEvaluationItemListItem["SuccessCount"].asString());
			if(!valueDataDataItemEvaluationItemListEvaluationItemListItem["SuccessRate"].isNull())
				evaluationItemListObject.successRate = valueDataDataItemEvaluationItemListEvaluationItemListItem["SuccessRate"].asString();
			dataObject.evaluationItemList.push_back(evaluationItemListObject);
		}
		data_.push_back(dataObject);
	}
	if(!value["Code"].isNull())
		code_ = value["Code"].asString();
	if(!value["Message"].isNull())
		message_ = value["Message"].asString();

}

std::string GetDetectEvaluationResult::getMessage()const
{
	return message_;
}

std::vector<GetDetectEvaluationResult::DataItem> GetDetectEvaluationResult::getData()const
{
	return data_;
}

std::string GetDetectEvaluationResult::getCode()const
{
	return code_;
}

