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

#include <alibabacloud/drds/model/DescribeShardTaskInfoResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Drds;
using namespace AlibabaCloud::Drds::Model;

DescribeShardTaskInfoResult::DescribeShardTaskInfoResult() :
	ServiceResult()
{}

DescribeShardTaskInfoResult::DescribeShardTaskInfoResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

DescribeShardTaskInfoResult::~DescribeShardTaskInfoResult()
{}

void DescribeShardTaskInfoResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto dataNode = value["Data"];
	if(!dataNode["Status"].isNull())
		data_.status = dataNode["Status"].asString();
	if(!dataNode["Stage"].isNull())
		data_.stage = dataNode["Stage"].asString();
	if(!dataNode["Progress"].isNull())
		data_.progress = dataNode["Progress"].asString();
	if(!dataNode["Expired"].isNull())
		data_.expired = dataNode["Expired"].asString();
	if(!dataNode["TargetTableName"].isNull())
		data_.targetTableName = dataNode["TargetTableName"].asString();
	if(!dataNode["SourceTableName"].isNull())
		data_.sourceTableName = dataNode["SourceTableName"].asString();
	auto fullNode = dataNode["Full"];
	if(!fullNode["StartTime"].isNull())
		data_.full.startTime = fullNode["StartTime"].asString();
	if(!fullNode["Progress"].isNull())
		data_.full.progress = std::stoi(fullNode["Progress"].asString());
	if(!fullNode["Tps"].isNull())
		data_.full.tps = std::stoi(fullNode["Tps"].asString());
	if(!fullNode["Total"].isNull())
		data_.full.total = std::stoi(fullNode["Total"].asString());
	if(!fullNode["Expired"].isNull())
		data_.full.expired = std::stoi(fullNode["Expired"].asString());
	auto fullCheckNode = dataNode["FullCheck"];
	if(!fullCheckNode["StartTime"].isNull())
		data_.fullCheck.startTime = fullCheckNode["StartTime"].asString();
	if(!fullCheckNode["Progress"].isNull())
		data_.fullCheck.progress = std::stoi(fullCheckNode["Progress"].asString());
	if(!fullCheckNode["Tps"].isNull())
		data_.fullCheck.tps = std::stoi(fullCheckNode["Tps"].asString());
	if(!fullCheckNode["Total"].isNull())
		data_.fullCheck.total = std::stoi(fullCheckNode["Total"].asString());
	if(!fullCheckNode["Expired"].isNull())
		data_.fullCheck.expired = std::stoi(fullCheckNode["Expired"].asString());
	auto fullReviseNode = dataNode["FullRevise"];
	if(!fullReviseNode["StartTime"].isNull())
		data_.fullRevise.startTime = fullReviseNode["StartTime"].asString();
	if(!fullReviseNode["Progress"].isNull())
		data_.fullRevise.progress = std::stoi(fullReviseNode["Progress"].asString());
	if(!fullReviseNode["Tps"].isNull())
		data_.fullRevise.tps = std::stoi(fullReviseNode["Tps"].asString());
	if(!fullReviseNode["Total"].isNull())
		data_.fullRevise.total = std::stoi(fullReviseNode["Total"].asString());
	if(!fullReviseNode["Expired"].isNull())
		data_.fullRevise.expired = std::stoi(fullReviseNode["Expired"].asString());
	auto reviewNode = dataNode["Review"];
	if(!reviewNode["StartTime"].isNull())
		data_.review.startTime = reviewNode["StartTime"].asString();
	if(!reviewNode["Progress"].isNull())
		data_.review.progress = std::stoi(reviewNode["Progress"].asString());
	if(!reviewNode["Tps"].isNull())
		data_.review.tps = std::stoi(reviewNode["Tps"].asString());
	if(!reviewNode["Total"].isNull())
		data_.review.total = std::stoi(reviewNode["Total"].asString());
	if(!reviewNode["Expired"].isNull())
		data_.review.expired = std::stoi(reviewNode["Expired"].asString());
	auto incrementNode = dataNode["Increment"];
	if(!incrementNode["Delay"].isNull())
		data_.increment.delay = std::stoi(incrementNode["Delay"].asString());
	if(!incrementNode["StartTime"].isNull())
		data_.increment.startTime = incrementNode["StartTime"].asString();
	if(!incrementNode["Tps"].isNull())
		data_.increment.tps = std::stoi(incrementNode["Tps"].asString());
	if(!value["Success"].isNull())
		success_ = value["Success"].asString() == "true";

}

DescribeShardTaskInfoResult::Data DescribeShardTaskInfoResult::getData()const
{
	return data_;
}

bool DescribeShardTaskInfoResult::getSuccess()const
{
	return success_;
}

