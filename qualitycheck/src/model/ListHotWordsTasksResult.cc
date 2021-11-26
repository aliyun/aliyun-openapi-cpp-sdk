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

#include <alibabacloud/qualitycheck/model/ListHotWordsTasksResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Qualitycheck;
using namespace AlibabaCloud::Qualitycheck::Model;

ListHotWordsTasksResult::ListHotWordsTasksResult() :
	ServiceResult()
{}

ListHotWordsTasksResult::ListHotWordsTasksResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

ListHotWordsTasksResult::~ListHotWordsTasksResult()
{}

void ListHotWordsTasksResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto allDataNode = value["Data"]["HotWordsTaskPo"];
	for (auto valueDataHotWordsTaskPo : allDataNode)
	{
		HotWordsTaskPo dataObject;
		if(!valueDataHotWordsTaskPo["EndTime"].isNull())
			dataObject.endTime = valueDataHotWordsTaskPo["EndTime"].asString();
		if(!valueDataHotWordsTaskPo["Type"].isNull())
			dataObject.type = std::stoi(valueDataHotWordsTaskPo["Type"].asString());
		if(!valueDataHotWordsTaskPo["Status"].isNull())
			dataObject.status = std::stoi(valueDataHotWordsTaskPo["Status"].asString());
		if(!valueDataHotWordsTaskPo["TimeInterval"].isNull())
			dataObject.timeInterval = std::stoi(valueDataHotWordsTaskPo["TimeInterval"].asString());
		if(!valueDataHotWordsTaskPo["StartTime"].isNull())
			dataObject.startTime = valueDataHotWordsTaskPo["StartTime"].asString();
		if(!valueDataHotWordsTaskPo["TaskConfigId"].isNull())
			dataObject.taskConfigId = std::stol(valueDataHotWordsTaskPo["TaskConfigId"].asString());
		if(!valueDataHotWordsTaskPo["Message"].isNull())
			dataObject.message = valueDataHotWordsTaskPo["Message"].asString();
		if(!valueDataHotWordsTaskPo["InstanceStatus"].isNull())
			dataObject.instanceStatus = std::stoi(valueDataHotWordsTaskPo["InstanceStatus"].asString());
		if(!valueDataHotWordsTaskPo["LastExecutionTime"].isNull())
			dataObject.lastExecutionTime = valueDataHotWordsTaskPo["LastExecutionTime"].asString();
		if(!valueDataHotWordsTaskPo["Name"].isNull())
			dataObject.name = valueDataHotWordsTaskPo["Name"].asString();
		if(!valueDataHotWordsTaskPo["TimeUnit"].isNull())
			dataObject.timeUnit = std::stoi(valueDataHotWordsTaskPo["TimeUnit"].asString());
		auto dialogueParamNode = value["DialogueParam"];
		if(!dialogueParamNode["EndTime"].isNull())
			dataObject.dialogueParam.endTime = dialogueParamNode["EndTime"].asString();
		if(!dialogueParamNode["DialogueId"].isNull())
			dataObject.dialogueParam.dialogueId = std::stol(dialogueParamNode["DialogueId"].asString());
		if(!dialogueParamNode["EndIndex"].isNull())
			dataObject.dialogueParam.endIndex = std::stoi(dialogueParamNode["EndIndex"].asString());
		if(!dialogueParamNode["StartTime"].isNull())
			dataObject.dialogueParam.startTime = dialogueParamNode["StartTime"].asString();
		if(!dialogueParamNode["SourceType"].isNull())
			dataObject.dialogueParam.sourceType = std::stoi(dialogueParamNode["SourceType"].asString());
		if(!dialogueParamNode["StartIndex"].isNull())
			dataObject.dialogueParam.startIndex = std::stoi(dialogueParamNode["StartIndex"].asString());
		if(!dialogueParamNode["Role"].isNull())
			dataObject.dialogueParam.role = std::stoi(dialogueParamNode["Role"].asString());
		if(!dialogueParamNode["DataSetIds"].isNull())
			dataObject.dialogueParam.dataSetIds = dialogueParamNode["DataSetIds"].asString();
		auto wordsParamNode = value["WordsParam"];
		if(!wordsParamNode["Excludes"].isNull())
			dataObject.wordsParam.excludes = wordsParamNode["Excludes"].asString();
		if(!wordsParamNode["Includes"].isNull())
			dataObject.wordsParam.includes = wordsParamNode["Includes"].asString();
		if(!wordsParamNode["ExtraConfigId"].isNull())
			dataObject.wordsParam.extraConfigId = std::stol(wordsParamNode["ExtraConfigId"].asString());
		data_.push_back(dataObject);
	}
	if(!value["Success"].isNull())
		success_ = value["Success"].asString() == "true";
	if(!value["Code"].isNull())
		code_ = value["Code"].asString();
	if(!value["Message"].isNull())
		message_ = value["Message"].asString();
	if(!value["PageNumber"].isNull())
		pageNumber_ = std::stoi(value["PageNumber"].asString());
	if(!value["PageSize"].isNull())
		pageSize_ = std::stoi(value["PageSize"].asString());
	if(!value["Count"].isNull())
		count_ = std::stoi(value["Count"].asString());

}

std::string ListHotWordsTasksResult::getMessage()const
{
	return message_;
}

int ListHotWordsTasksResult::getPageSize()const
{
	return pageSize_;
}

int ListHotWordsTasksResult::getPageNumber()const
{
	return pageNumber_;
}

std::vector<ListHotWordsTasksResult::HotWordsTaskPo> ListHotWordsTasksResult::getData()const
{
	return data_;
}

int ListHotWordsTasksResult::getCount()const
{
	return count_;
}

std::string ListHotWordsTasksResult::getCode()const
{
	return code_;
}

bool ListHotWordsTasksResult::getSuccess()const
{
	return success_;
}

