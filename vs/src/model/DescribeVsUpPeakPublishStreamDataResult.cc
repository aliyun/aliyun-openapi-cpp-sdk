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

#include <alibabacloud/vs/model/DescribeVsUpPeakPublishStreamDataResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Vs;
using namespace AlibabaCloud::Vs::Model;

DescribeVsUpPeakPublishStreamDataResult::DescribeVsUpPeakPublishStreamDataResult() :
	ServiceResult()
{}

DescribeVsUpPeakPublishStreamDataResult::DescribeVsUpPeakPublishStreamDataResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

DescribeVsUpPeakPublishStreamDataResult::~DescribeVsUpPeakPublishStreamDataResult()
{}

void DescribeVsUpPeakPublishStreamDataResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto allDescribeVsUpPeakPublishStreamDatasNode = value["DescribeVsUpPeakPublishStreamDatas"]["DescribeVsUpPeakPublishStreamData"];
	for (auto valueDescribeVsUpPeakPublishStreamDatasDescribeVsUpPeakPublishStreamData : allDescribeVsUpPeakPublishStreamDatasNode)
	{
		DescribeVsUpPeakPublishStreamData describeVsUpPeakPublishStreamDatasObject;
		if(!valueDescribeVsUpPeakPublishStreamDatasDescribeVsUpPeakPublishStreamData["PublishStreamNum"].isNull())
			describeVsUpPeakPublishStreamDatasObject.publishStreamNum = std::stoi(valueDescribeVsUpPeakPublishStreamDatasDescribeVsUpPeakPublishStreamData["PublishStreamNum"].asString());
		if(!valueDescribeVsUpPeakPublishStreamDatasDescribeVsUpPeakPublishStreamData["PeakTime"].isNull())
			describeVsUpPeakPublishStreamDatasObject.peakTime = valueDescribeVsUpPeakPublishStreamDatasDescribeVsUpPeakPublishStreamData["PeakTime"].asString();
		if(!valueDescribeVsUpPeakPublishStreamDatasDescribeVsUpPeakPublishStreamData["QueryTime"].isNull())
			describeVsUpPeakPublishStreamDatasObject.queryTime = valueDescribeVsUpPeakPublishStreamDatasDescribeVsUpPeakPublishStreamData["QueryTime"].asString();
		if(!valueDescribeVsUpPeakPublishStreamDatasDescribeVsUpPeakPublishStreamData["StatName"].isNull())
			describeVsUpPeakPublishStreamDatasObject.statName = valueDescribeVsUpPeakPublishStreamDatasDescribeVsUpPeakPublishStreamData["StatName"].asString();
		if(!valueDescribeVsUpPeakPublishStreamDatasDescribeVsUpPeakPublishStreamData["BandWidth"].isNull())
			describeVsUpPeakPublishStreamDatasObject.bandWidth = valueDescribeVsUpPeakPublishStreamDatasDescribeVsUpPeakPublishStreamData["BandWidth"].asString();
		describeVsUpPeakPublishStreamDatas_.push_back(describeVsUpPeakPublishStreamDatasObject);
	}

}

std::vector<DescribeVsUpPeakPublishStreamDataResult::DescribeVsUpPeakPublishStreamData> DescribeVsUpPeakPublishStreamDataResult::getDescribeVsUpPeakPublishStreamDatas()const
{
	return describeVsUpPeakPublishStreamDatas_;
}

