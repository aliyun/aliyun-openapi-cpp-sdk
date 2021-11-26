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

#include <alibabacloud/qualitycheck/model/GetTaskFileResultListResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Qualitycheck;
using namespace AlibabaCloud::Qualitycheck::Model;

GetTaskFileResultListResult::GetTaskFileResultListResult() :
	ServiceResult()
{}

GetTaskFileResultListResult::GetTaskFileResultListResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

GetTaskFileResultListResult::~GetTaskFileResultListResult()
{}

void GetTaskFileResultListResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto allDataNode = value["Data"]["TaskResultReviewInfo"];
	for (auto valueDataTaskResultReviewInfo : allDataNode)
	{
		TaskResultReviewInfo dataObject;
		if(!valueDataTaskResultReviewInfo["Status"].isNull())
			dataObject.status = std::stoi(valueDataTaskResultReviewInfo["Status"].asString());
		if(!valueDataTaskResultReviewInfo["DataType"].isNull())
			dataObject.dataType = std::stoi(valueDataTaskResultReviewInfo["DataType"].asString());
		if(!valueDataTaskResultReviewInfo["HitNumber"].isNull())
			dataObject.hitNumber = std::stoi(valueDataTaskResultReviewInfo["HitNumber"].asString());
		if(!valueDataTaskResultReviewInfo["HitRule"].isNull())
			dataObject.hitRule = valueDataTaskResultReviewInfo["HitRule"].asString() == "true";
		if(!valueDataTaskResultReviewInfo["NextVid"].isNull())
			dataObject.nextVid = valueDataTaskResultReviewInfo["NextVid"].asString();
		if(!valueDataTaskResultReviewInfo["PreVid"].isNull())
			dataObject.preVid = valueDataTaskResultReviewInfo["PreVid"].asString();
		if(!valueDataTaskResultReviewInfo["ReviewAccuracyRate"].isNull())
			dataObject.reviewAccuracyRate = std::stof(valueDataTaskResultReviewInfo["ReviewAccuracyRate"].asString());
		if(!valueDataTaskResultReviewInfo["RealViolationNumber"].isNull())
			dataObject.realViolationNumber = std::stoi(valueDataTaskResultReviewInfo["RealViolationNumber"].asString());
		if(!valueDataTaskResultReviewInfo["IsHitRule"].isNull())
			dataObject.isHitRule = valueDataTaskResultReviewInfo["IsHitRule"].asString() == "true";
		if(!valueDataTaskResultReviewInfo["FileName"].isNull())
			dataObject.fileName = valueDataTaskResultReviewInfo["FileName"].asString();
		if(!valueDataTaskResultReviewInfo["TotalScore"].isNull())
			dataObject.totalScore = std::stoi(valueDataTaskResultReviewInfo["TotalScore"].asString());
		if(!valueDataTaskResultReviewInfo["CheckNumber"].isNull())
			dataObject.checkNumber = std::stoi(valueDataTaskResultReviewInfo["CheckNumber"].asString());
		if(!valueDataTaskResultReviewInfo["FileMergeName"].isNull())
			dataObject.fileMergeName = valueDataTaskResultReviewInfo["FileMergeName"].asString();
		if(!valueDataTaskResultReviewInfo["BucketName"].isNull())
			dataObject.bucketName = valueDataTaskResultReviewInfo["BucketName"].asString();
		if(!valueDataTaskResultReviewInfo["HandTaskFile"].isNull())
			dataObject.handTaskFile = valueDataTaskResultReviewInfo["HandTaskFile"].asString() == "true";
		if(!valueDataTaskResultReviewInfo["TaskId"].isNull())
			dataObject.taskId = valueDataTaskResultReviewInfo["TaskId"].asString();
		if(!valueDataTaskResultReviewInfo["Vid"].isNull())
			dataObject.vid = valueDataTaskResultReviewInfo["Vid"].asString();
		auto allHitRuleSet = value["HitRuleSet"]["HitRuleSet"];
		for (auto value : allHitRuleSet)
			dataObject.hitRuleSet.push_back(value.asString());
		data_.push_back(dataObject);
	}
	if(!value["DataSize"].isNull())
		dataSize_ = std::stoi(value["DataSize"].asString());
	if(!value["Success"].isNull())
		success_ = value["Success"].asString() == "true";
	if(!value["Code"].isNull())
		code_ = value["Code"].asString();
	if(!value["Message"].isNull())
		message_ = value["Message"].asString();
	if(!value["PageSize"].isNull())
		pageSize_ = std::stoi(value["PageSize"].asString());
	if(!value["TotalCount"].isNull())
		totalCount_ = std::stoi(value["TotalCount"].asString());

}

int GetTaskFileResultListResult::getTotalCount()const
{
	return totalCount_;
}

std::string GetTaskFileResultListResult::getMessage()const
{
	return message_;
}

int GetTaskFileResultListResult::getPageSize()const
{
	return pageSize_;
}

int GetTaskFileResultListResult::getDataSize()const
{
	return dataSize_;
}

std::vector<GetTaskFileResultListResult::TaskResultReviewInfo> GetTaskFileResultListResult::getData()const
{
	return data_;
}

std::string GetTaskFileResultListResult::getCode()const
{
	return code_;
}

bool GetTaskFileResultListResult::getSuccess()const
{
	return success_;
}

