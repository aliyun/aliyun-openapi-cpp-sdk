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

#include <alibabacloud/ivision/model/DescribeStreamPredictsResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Ivision;
using namespace AlibabaCloud::Ivision::Model;

DescribeStreamPredictsResult::DescribeStreamPredictsResult() :
	ServiceResult()
{}

DescribeStreamPredictsResult::DescribeStreamPredictsResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

DescribeStreamPredictsResult::~DescribeStreamPredictsResult()
{}

void DescribeStreamPredictsResult::parse(const std::string &payload)
{
	Json::CharReaderBuilder builder;
	Json::CharReader *reader = builder.newCharReader();
	Json::Value *val;
	Json::Value value;
	JSONCPP_STRING *errs;
	reader->parse(payload.data(), payload.data() + payload.size(), val, errs);
	value = *val;
	setRequestId(value["RequestId"].asString());
	auto allStreamPredicts = value["StreamPredicts"]["StreamPredict"];
	for (auto value : allStreamPredicts)
	{
		StreamPredict streamPredictsObject;
		if(!value["PredictId"].isNull())
			streamPredictsObject.predictId = value["PredictId"].asString();
		if(!value["StreamType"].isNull())
			streamPredictsObject.streamType = value["StreamType"].asString();
		if(!value["StreamId"].isNull())
			streamPredictsObject.streamId = value["StreamId"].asString();
		if(!value["ModelIds"].isNull())
			streamPredictsObject.modelIds = value["ModelIds"].asString();
		if(!value["ProbabilityThresholds"].isNull())
			streamPredictsObject.probabilityThresholds = value["ProbabilityThresholds"].asString();
		if(!value["Output"].isNull())
			streamPredictsObject.output = value["Output"].asString();
		if(!value["Notify"].isNull())
			streamPredictsObject.notify = value["Notify"].asString();
		if(!value["UserData"].isNull())
			streamPredictsObject.userData = value["UserData"].asString();
		if(!value["CreationTime"].isNull())
			streamPredictsObject.creationTime = value["CreationTime"].asString();
		if(!value["Status"].isNull())
			streamPredictsObject.status = value["Status"].asString();
		streamPredicts_.push_back(streamPredictsObject);
	}
	if(!value["TotalNum"].isNull())
		totalNum_ = std::stol(value["TotalNum"].asString());
	if(!value["CurrentPage"].isNull())
		currentPage_ = std::stol(value["CurrentPage"].asString());
	if(!value["PageSize"].isNull())
		pageSize_ = std::stol(value["PageSize"].asString());
	if(!value["NextPageToken"].isNull())
		nextPageToken_ = value["NextPageToken"].asString();

}

long DescribeStreamPredictsResult::getTotalNum()const
{
	return totalNum_;
}

long DescribeStreamPredictsResult::getPageSize()const
{
	return pageSize_;
}

long DescribeStreamPredictsResult::getCurrentPage()const
{
	return currentPage_;
}

std::string DescribeStreamPredictsResult::getNextPageToken()const
{
	return nextPageToken_;
}

std::vector<DescribeStreamPredictsResult::StreamPredict> DescribeStreamPredictsResult::getStreamPredicts()const
{
	return streamPredicts_;
}

