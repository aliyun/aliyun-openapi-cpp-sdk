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

#include <alibabacloud/ivision/model/DescribeTrainResultResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Ivision;
using namespace AlibabaCloud::Ivision::Model;

DescribeTrainResultResult::DescribeTrainResultResult() :
	ServiceResult()
{}

DescribeTrainResultResult::DescribeTrainResultResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

DescribeTrainResultResult::~DescribeTrainResultResult()
{}

void DescribeTrainResultResult::parse(const std::string &payload)
{
	Json::CharReaderBuilder builder;
	Json::CharReader *reader = builder.newCharReader();
	Json::Value *value;
	JSONCPP_STRING *errs;
	reader->parse(payload.data(), payload.data() + payload.size(), value, errs);
	setRequestId((*value)["RequestId"].asString());
	auto trainResultNode = value["TrainResult"];
	if(!trainResultNode["ProjectId"].isNull())
		trainResult_.projectId = trainResultNode["ProjectId"].asString();
	if(!trainResultNode["IterationId"].isNull())
		trainResult_.iterationId = trainResultNode["IterationId"].asString();
	if(!trainResultNode["IterationName"].isNull())
		trainResult_.iterationName = trainResultNode["IterationName"].asString();
	if(!trainResultNode["Precision"].isNull())
		trainResult_.precision = trainResultNode["Precision"].asString();
	if(!trainResultNode["Recall"].isNull())
		trainResult_.recall = trainResultNode["Recall"].asString();
	if(!trainResultNode["MAP"].isNull())
		trainResult_.mAP = trainResultNode["MAP"].asString();
	if(!trainResultNode["Threshold"].isNull())
		trainResult_.threshold = trainResultNode["Threshold"].asString();
	if(!trainResultNode["Status"].isNull())
		trainResult_.status = trainResultNode["Status"].asString();
	if(!trainResultNode["StartTime"].isNull())
		trainResult_.startTime = trainResultNode["StartTime"].asString();
	if(!trainResultNode["EndTime"].isNull())
		trainResult_.endTime = trainResultNode["EndTime"].asString();
	if(!trainResultNode["ErrorCode"].isNull())
		trainResult_.errorCode = trainResultNode["ErrorCode"].asString();
	if(!trainResultNode["ErrorMessage"].isNull())
		trainResult_.errorMessage = trainResultNode["ErrorMessage"].asString();
	auto allTagResults = value["TagResults"]["TagResult"];
	for (auto value : allTagResults)
	{
		TrainResult::TagResult tagResultObject;
		if(!value["TagId"].isNull())
			tagResultObject.tagId = value["TagId"].asString();
		if(!value["TagName"].isNull())
			tagResultObject.tagName = value["TagName"].asString();
		if(!value["Precision"].isNull())
			tagResultObject.precision = value["Precision"].asString();
		if(!value["Recall"].isNull())
			tagResultObject.recall = value["Recall"].asString();
		if(!value["AP"].isNull())
			tagResultObject.aP = value["AP"].asString();
		trainResult_.tagResults.push_back(tagResultObject);
	}

}

DescribeTrainResultResult::TrainResult DescribeTrainResultResult::getTrainResult()const
{
	return trainResult_;
}

