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

#include <alibabacloud/live/model/DescribeLiveCenterTransferResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Live;
using namespace AlibabaCloud::Live::Model;

DescribeLiveCenterTransferResult::DescribeLiveCenterTransferResult() :
	ServiceResult()
{}

DescribeLiveCenterTransferResult::DescribeLiveCenterTransferResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

DescribeLiveCenterTransferResult::~DescribeLiveCenterTransferResult()
{}

void DescribeLiveCenterTransferResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto allLiveCenterTransferInfoListNode = value["LiveCenterTransferInfoList"]["LiveCenterTransferInfo"];
	for (auto valueLiveCenterTransferInfoListLiveCenterTransferInfo : allLiveCenterTransferInfoListNode)
	{
		LiveCenterTransferInfo liveCenterTransferInfoListObject;
		if(!valueLiveCenterTransferInfoListLiveCenterTransferInfo["AppName"].isNull())
			liveCenterTransferInfoListObject.appName = valueLiveCenterTransferInfoListLiveCenterTransferInfo["AppName"].asString();
		if(!valueLiveCenterTransferInfoListLiveCenterTransferInfo["DomainName"].isNull())
			liveCenterTransferInfoListObject.domainName = valueLiveCenterTransferInfoListLiveCenterTransferInfo["DomainName"].asString();
		if(!valueLiveCenterTransferInfoListLiveCenterTransferInfo["DstUrl"].isNull())
			liveCenterTransferInfoListObject.dstUrl = valueLiveCenterTransferInfoListLiveCenterTransferInfo["DstUrl"].asString();
		if(!valueLiveCenterTransferInfoListLiveCenterTransferInfo["EndTime"].isNull())
			liveCenterTransferInfoListObject.endTime = valueLiveCenterTransferInfoListLiveCenterTransferInfo["EndTime"].asString();
		if(!valueLiveCenterTransferInfoListLiveCenterTransferInfo["StartTime"].isNull())
			liveCenterTransferInfoListObject.startTime = valueLiveCenterTransferInfoListLiveCenterTransferInfo["StartTime"].asString();
		if(!valueLiveCenterTransferInfoListLiveCenterTransferInfo["StreamName"].isNull())
			liveCenterTransferInfoListObject.streamName = valueLiveCenterTransferInfoListLiveCenterTransferInfo["StreamName"].asString();
		if(!valueLiveCenterTransferInfoListLiveCenterTransferInfo["TransferArgs"].isNull())
			liveCenterTransferInfoListObject.transferArgs = valueLiveCenterTransferInfoListLiveCenterTransferInfo["TransferArgs"].asString();
		liveCenterTransferInfoList_.push_back(liveCenterTransferInfoListObject);
	}

}

std::vector<DescribeLiveCenterTransferResult::LiveCenterTransferInfo> DescribeLiveCenterTransferResult::getLiveCenterTransferInfoList()const
{
	return liveCenterTransferInfoList_;
}

