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

#include <alibabacloud/vod/model/DescribeVodDomainMax95BpsDataResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Vod;
using namespace AlibabaCloud::Vod::Model;

DescribeVodDomainMax95BpsDataResult::DescribeVodDomainMax95BpsDataResult() :
	ServiceResult()
{}

DescribeVodDomainMax95BpsDataResult::DescribeVodDomainMax95BpsDataResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

DescribeVodDomainMax95BpsDataResult::~DescribeVodDomainMax95BpsDataResult()
{}

void DescribeVodDomainMax95BpsDataResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto allDetailDataNode = value["DetailData"]["Max95Detail"];
	for (auto valueDetailDataMax95Detail : allDetailDataNode)
	{
		Max95Detail detailDataObject;
		if(!valueDetailDataMax95Detail["TimeStamp"].isNull())
			detailDataObject.timeStamp = valueDetailDataMax95Detail["TimeStamp"].asString();
		if(!valueDetailDataMax95Detail["Area"].isNull())
			detailDataObject.area = valueDetailDataMax95Detail["Area"].asString();
		if(!valueDetailDataMax95Detail["Max95BpsPeakTime"].isNull())
			detailDataObject.max95BpsPeakTime = valueDetailDataMax95Detail["Max95BpsPeakTime"].asString();
		if(!valueDetailDataMax95Detail["Max95Bps"].isNull())
			detailDataObject.max95Bps = std::stof(valueDetailDataMax95Detail["Max95Bps"].asString());
		detailData_.push_back(detailDataObject);
	}
	if(!value["DomainName"].isNull())
		domainName_ = value["DomainName"].asString();
	if(!value["EndTime"].isNull())
		endTime_ = value["EndTime"].asString();
	if(!value["StartTime"].isNull())
		startTime_ = value["StartTime"].asString();
	if(!value["DomesticMax95Bps"].isNull())
		domesticMax95Bps_ = value["DomesticMax95Bps"].asString();
	if(!value["OverseasMax95Bps"].isNull())
		overseasMax95Bps_ = value["OverseasMax95Bps"].asString();
	if(!value["Max95Bps"].isNull())
		max95Bps_ = value["Max95Bps"].asString();

}

std::string DescribeVodDomainMax95BpsDataResult::getEndTime()const
{
	return endTime_;
}

std::string DescribeVodDomainMax95BpsDataResult::getDomainName()const
{
	return domainName_;
}

std::string DescribeVodDomainMax95BpsDataResult::getStartTime()const
{
	return startTime_;
}

std::string DescribeVodDomainMax95BpsDataResult::getDomesticMax95Bps()const
{
	return domesticMax95Bps_;
}

std::string DescribeVodDomainMax95BpsDataResult::getMax95Bps()const
{
	return max95Bps_;
}

std::vector<DescribeVodDomainMax95BpsDataResult::Max95Detail> DescribeVodDomainMax95BpsDataResult::getDetailData()const
{
	return detailData_;
}

std::string DescribeVodDomainMax95BpsDataResult::getOverseasMax95Bps()const
{
	return overseasMax95Bps_;
}

