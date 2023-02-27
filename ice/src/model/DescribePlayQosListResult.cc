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

#include <alibabacloud/ice/model/DescribePlayQosListResult.h>
#include <json/json.h>

using namespace AlibabaCloud::ICE;
using namespace AlibabaCloud::ICE::Model;

DescribePlayQosListResult::DescribePlayQosListResult() :
	ServiceResult()
{}

DescribePlayQosListResult::DescribePlayQosListResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

DescribePlayQosListResult::~DescribePlayQosListResult()
{}

void DescribePlayQosListResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto allQosInfoListNode = value["QosInfoList"]["Data"];
	for (auto valueQosInfoListData : allQosInfoListNode)
	{
		Data qosInfoListObject;
		if(!valueQosInfoListData["QosPlayFail"].isNull())
			qosInfoListObject.qosPlayFail = valueQosInfoListData["QosPlayFail"].asString();
		if(!valueQosInfoListData["QosPlay"].isNull())
			qosInfoListObject.qosPlay = valueQosInfoListData["QosPlay"].asString();
		if(!valueQosInfoListData["QosStuckRate"].isNull())
			qosInfoListObject.qosStuckRate = valueQosInfoListData["QosStuckRate"].asString();
		if(!valueQosInfoListData["TraceId"].isNull())
			qosInfoListObject.traceId = valueQosInfoListData["TraceId"].asString();
		if(!valueQosInfoListData["QosFirstFrame"].isNull())
			qosInfoListObject.qosFirstFrame = valueQosInfoListData["QosFirstFrame"].asString();
		if(!valueQosInfoListData["QosKbps"].isNull())
			qosInfoListObject.qosKbps = valueQosInfoListData["QosKbps"].asString();
		if(!valueQosInfoListData["QosSeedFailRate"].isNull())
			qosInfoListObject.qosSeedFailRate = valueQosInfoListData["QosSeedFailRate"].asString();
		if(!valueQosInfoListData["QosRealPlay"].isNull())
			qosInfoListObject.qosRealPlay = valueQosInfoListData["QosRealPlay"].asString();
		qosInfoList_.push_back(qosInfoListObject);
	}
	if(!value["TotalCount"].isNull())
		totalCount_ = std::stol(value["TotalCount"].asString());
	if(!value["PageNo"].isNull())
		pageNo_ = std::stol(value["PageNo"].asString());
	if(!value["PageSize"].isNull())
		pageSize_ = std::stol(value["PageSize"].asString());

}

long DescribePlayQosListResult::getTotalCount()const
{
	return totalCount_;
}

long DescribePlayQosListResult::getPageSize()const
{
	return pageSize_;
}

std::vector<DescribePlayQosListResult::Data> DescribePlayQosListResult::getQosInfoList()const
{
	return qosInfoList_;
}

long DescribePlayQosListResult::getPageNo()const
{
	return pageNo_;
}

