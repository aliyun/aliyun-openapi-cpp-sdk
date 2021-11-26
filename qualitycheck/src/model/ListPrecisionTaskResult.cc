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

#include <alibabacloud/qualitycheck/model/ListPrecisionTaskResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Qualitycheck;
using namespace AlibabaCloud::Qualitycheck::Model;

ListPrecisionTaskResult::ListPrecisionTaskResult() :
	ServiceResult()
{}

ListPrecisionTaskResult::ListPrecisionTaskResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

ListPrecisionTaskResult::~ListPrecisionTaskResult()
{}

void ListPrecisionTaskResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto allDataNode = value["Data"]["PrecisionTask"];
	for (auto valueDataPrecisionTask : allDataNode)
	{
		PrecisionTask dataObject;
		if(!valueDataPrecisionTask["Status"].isNull())
			dataObject.status = std::stoi(valueDataPrecisionTask["Status"].asString());
		if(!valueDataPrecisionTask["UpdateTime"].isNull())
			dataObject.updateTime = valueDataPrecisionTask["UpdateTime"].asString();
		if(!valueDataPrecisionTask["IncorrectWords"].isNull())
			dataObject.incorrectWords = std::stoi(valueDataPrecisionTask["IncorrectWords"].asString());
		if(!valueDataPrecisionTask["CreateTime"].isNull())
			dataObject.createTime = valueDataPrecisionTask["CreateTime"].asString();
		if(!valueDataPrecisionTask["DataSetId"].isNull())
			dataObject.dataSetId = std::stol(valueDataPrecisionTask["DataSetId"].asString());
		if(!valueDataPrecisionTask["VerifiedCount"].isNull())
			dataObject.verifiedCount = std::stoi(valueDataPrecisionTask["VerifiedCount"].asString());
		if(!valueDataPrecisionTask["Source"].isNull())
			dataObject.source = std::stoi(valueDataPrecisionTask["Source"].asString());
		if(!valueDataPrecisionTask["TotalCount"].isNull())
			dataObject.totalCount = std::stoi(valueDataPrecisionTask["TotalCount"].asString());
		if(!valueDataPrecisionTask["DataSetName"].isNull())
			dataObject.dataSetName = valueDataPrecisionTask["DataSetName"].asString();
		if(!valueDataPrecisionTask["Duration"].isNull())
			dataObject.duration = std::stoi(valueDataPrecisionTask["Duration"].asString());
		if(!valueDataPrecisionTask["Name"].isNull())
			dataObject.name = valueDataPrecisionTask["Name"].asString();
		if(!valueDataPrecisionTask["TaskId"].isNull())
			dataObject.taskId = valueDataPrecisionTask["TaskId"].asString();
		auto allPrecisionsNode = valueDataPrecisionTask["Precisions"]["Precision"];
		for (auto valueDataPrecisionTaskPrecisionsPrecision : allPrecisionsNode)
		{
			PrecisionTask::Precision precisionsObject;
			if(!valueDataPrecisionTaskPrecisionsPrecision["Status"].isNull())
				precisionsObject.status = std::stoi(valueDataPrecisionTaskPrecisionsPrecision["Status"].asString());
			if(!valueDataPrecisionTaskPrecisionsPrecision["CreateTime"].isNull())
				precisionsObject.createTime = valueDataPrecisionTaskPrecisionsPrecision["CreateTime"].asString();
			if(!valueDataPrecisionTaskPrecisionsPrecision["ModelName"].isNull())
				precisionsObject.modelName = valueDataPrecisionTaskPrecisionsPrecision["ModelName"].asString();
			if(!valueDataPrecisionTaskPrecisionsPrecision["TaskId"].isNull())
				precisionsObject.taskId = valueDataPrecisionTaskPrecisionsPrecision["TaskId"].asString();
			if(!valueDataPrecisionTaskPrecisionsPrecision["ModelId"].isNull())
				precisionsObject.modelId = std::stol(valueDataPrecisionTaskPrecisionsPrecision["ModelId"].asString());
			if(!valueDataPrecisionTaskPrecisionsPrecision["Precision"].isNull())
				precisionsObject.precision = std::stof(valueDataPrecisionTaskPrecisionsPrecision["Precision"].asString());
			dataObject.precisions.push_back(precisionsObject);
		}
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

std::string ListPrecisionTaskResult::getMessage()const
{
	return message_;
}

int ListPrecisionTaskResult::getPageSize()const
{
	return pageSize_;
}

int ListPrecisionTaskResult::getPageNumber()const
{
	return pageNumber_;
}

std::vector<ListPrecisionTaskResult::PrecisionTask> ListPrecisionTaskResult::getData()const
{
	return data_;
}

int ListPrecisionTaskResult::getCount()const
{
	return count_;
}

std::string ListPrecisionTaskResult::getCode()const
{
	return code_;
}

bool ListPrecisionTaskResult::getSuccess()const
{
	return success_;
}

