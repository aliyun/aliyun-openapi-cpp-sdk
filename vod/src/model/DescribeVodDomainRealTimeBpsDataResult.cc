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

#include <alibabacloud/vod/model/DescribeVodDomainRealTimeBpsDataResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Vod;
using namespace AlibabaCloud::Vod::Model;

DescribeVodDomainRealTimeBpsDataResult::DescribeVodDomainRealTimeBpsDataResult() :
	ServiceResult()
{}

DescribeVodDomainRealTimeBpsDataResult::DescribeVodDomainRealTimeBpsDataResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

DescribeVodDomainRealTimeBpsDataResult::~DescribeVodDomainRealTimeBpsDataResult()
{}

void DescribeVodDomainRealTimeBpsDataResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto allDataNode = value["Data"]["BpsModel"];
	for (auto valueDataBpsModel : allDataNode)
	{
		BpsModel dataObject;
		if(!valueDataBpsModel["Bps"].isNull())
			dataObject.bps = std::stof(valueDataBpsModel["Bps"].asString());
		if(!valueDataBpsModel["TimeStamp"].isNull())
			dataObject.timeStamp = valueDataBpsModel["TimeStamp"].asString();
		data_.push_back(dataObject);
	}

}

std::vector<DescribeVodDomainRealTimeBpsDataResult::BpsModel> DescribeVodDomainRealTimeBpsDataResult::getData()const
{
	return data_;
}

