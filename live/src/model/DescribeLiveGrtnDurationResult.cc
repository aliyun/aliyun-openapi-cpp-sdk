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

#include <alibabacloud/live/model/DescribeLiveGrtnDurationResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Live;
using namespace AlibabaCloud::Live::Model;

DescribeLiveGrtnDurationResult::DescribeLiveGrtnDurationResult() :
	ServiceResult()
{}

DescribeLiveGrtnDurationResult::DescribeLiveGrtnDurationResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

DescribeLiveGrtnDurationResult::~DescribeLiveGrtnDurationResult()
{}

void DescribeLiveGrtnDurationResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto allStreamDetailDataNode = value["StreamDetailData"]["StreamData"];
	for (auto valueStreamDetailDataStreamData : allStreamDetailDataNode)
	{
		StreamData streamDetailDataObject;
		if(!valueStreamDetailDataStreamData["AppId"].isNull())
			streamDetailDataObject.appId = valueStreamDetailDataStreamData["AppId"].asString();
		if(!valueStreamDetailDataStreamData["Duration"].isNull())
			streamDetailDataObject.duration = std::stol(valueStreamDetailDataStreamData["Duration"].asString());
		if(!valueStreamDetailDataStreamData["MediaProfile"].isNull())
			streamDetailDataObject.mediaProfile = valueStreamDetailDataStreamData["MediaProfile"].asString();
		if(!valueStreamDetailDataStreamData["MediaType"].isNull())
			streamDetailDataObject.mediaType = valueStreamDetailDataStreamData["MediaType"].asString();
		if(!valueStreamDetailDataStreamData["TimeStamp"].isNull())
			streamDetailDataObject.timeStamp = valueStreamDetailDataStreamData["TimeStamp"].asString();
		streamDetailData_.push_back(streamDetailDataObject);
	}

}

std::vector<DescribeLiveGrtnDurationResult::StreamData> DescribeLiveGrtnDurationResult::getStreamDetailData()const
{
	return streamDetailData_;
}

