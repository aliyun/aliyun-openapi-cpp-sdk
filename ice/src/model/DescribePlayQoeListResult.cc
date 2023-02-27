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

#include <alibabacloud/ice/model/DescribePlayQoeListResult.h>
#include <json/json.h>

using namespace AlibabaCloud::ICE;
using namespace AlibabaCloud::ICE::Model;

DescribePlayQoeListResult::DescribePlayQoeListResult() :
	ServiceResult()
{}

DescribePlayQoeListResult::DescribePlayQoeListResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

DescribePlayQoeListResult::~DescribePlayQoeListResult()
{}

void DescribePlayQoeListResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto allQoeInfoListNode = value["QoeInfoList"]["Data"];
	for (auto valueQoeInfoListData : allQoeInfoListNode)
	{
		Data qoeInfoListObject;
		if(!valueQoeInfoListData["QoeUVVDuration"].isNull())
			qoeInfoListObject.qoeUVVDuration = std::stof(valueQoeInfoListData["QoeUVVDuration"].asString());
		if(!valueQoeInfoListData["QoeUV"].isNull())
			qoeInfoListObject.qoeUV = std::stof(valueQoeInfoListData["QoeUV"].asString());
		if(!valueQoeInfoListData["QoeUVVTime"].isNull())
			qoeInfoListObject.qoeUVVTime = std::stof(valueQoeInfoListData["QoeUVVTime"].asString());
		if(!valueQoeInfoListData["QoeFinishedVV"].isNull())
			qoeInfoListObject.qoeFinishedVV = std::stof(valueQoeInfoListData["QoeFinishedVV"].asString());
		if(!valueQoeInfoListData["TraceId"].isNull())
			qoeInfoListObject.traceId = valueQoeInfoListData["TraceId"].asString();
		if(!valueQoeInfoListData["QoeVVDuration"].isNull())
			qoeInfoListObject.qoeVVDuration = std::stof(valueQoeInfoListData["QoeVVDuration"].asString());
		if(!valueQoeInfoListData["QoeVDuration"].isNull())
			qoeInfoListObject.qoeVDuration = std::stof(valueQoeInfoListData["QoeVDuration"].asString());
		if(!valueQoeInfoListData["QoeFinishedVVRate"].isNull())
			qoeInfoListObject.qoeFinishedVVRate = std::stof(valueQoeInfoListData["QoeFinishedVVRate"].asString());
		if(!valueQoeInfoListData["QoeUFinishedVVTime"].isNull())
			qoeInfoListObject.qoeUFinishedVVTime = std::stof(valueQoeInfoListData["QoeUFinishedVVTime"].asString());
		qoeInfoList_.push_back(qoeInfoListObject);
	}
	if(!value["TotalCount"].isNull())
		totalCount_ = std::stol(value["TotalCount"].asString());
	if(!value["PageNo"].isNull())
		pageNo_ = std::stol(value["PageNo"].asString());
	if(!value["PageSize"].isNull())
		pageSize_ = std::stol(value["PageSize"].asString());

}

long DescribePlayQoeListResult::getTotalCount()const
{
	return totalCount_;
}

long DescribePlayQoeListResult::getPageSize()const
{
	return pageSize_;
}

std::vector<DescribePlayQoeListResult::Data> DescribePlayQoeListResult::getQoeInfoList()const
{
	return qoeInfoList_;
}

long DescribePlayQoeListResult::getPageNo()const
{
	return pageNo_;
}

