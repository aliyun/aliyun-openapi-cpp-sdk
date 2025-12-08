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

#include <alibabacloud/vod/model/DescribeVodPlayerCollectDataResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Vod;
using namespace AlibabaCloud::Vod::Model;

DescribeVodPlayerCollectDataResult::DescribeVodPlayerCollectDataResult() :
	ServiceResult()
{}

DescribeVodPlayerCollectDataResult::DescribeVodPlayerCollectDataResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

DescribeVodPlayerCollectDataResult::~DescribeVodPlayerCollectDataResult()
{}

void DescribeVodPlayerCollectDataResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto allDataListNode = value["DataList"]["Datas"];
	for (auto valueDataListDatas : allDataListNode)
	{
		Datas dataListObject;
		if(!valueDataListDatas["Metric"].isNull())
			dataListObject.metric = valueDataListDatas["Metric"].asString();
		if(!valueDataListDatas["Value"].isNull())
			dataListObject.value = valueDataListDatas["Value"].asString();
		if(!valueDataListDatas["ValueRefer"].isNull())
			dataListObject.valueRefer = valueDataListDatas["ValueRefer"].asString();
		if(!valueDataListDatas["ValueRatio"].isNull())
			dataListObject.valueRatio = valueDataListDatas["ValueRatio"].asString();
		dataList_.push_back(dataListObject);
	}

}

std::vector<DescribeVodPlayerCollectDataResult::Datas> DescribeVodPlayerCollectDataResult::getDataList()const
{
	return dataList_;
}

