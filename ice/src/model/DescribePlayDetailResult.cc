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

#include <alibabacloud/ice/model/DescribePlayDetailResult.h>
#include <json/json.h>

using namespace AlibabaCloud::ICE;
using namespace AlibabaCloud::ICE::Model;

DescribePlayDetailResult::DescribePlayDetailResult() :
	ServiceResult()
{}

DescribePlayDetailResult::DescribePlayDetailResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

DescribePlayDetailResult::~DescribePlayDetailResult()
{}

void DescribePlayDetailResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto allBaseInfosNode = value["BaseInfos"]["Data"];
	for (auto valueBaseInfosData : allBaseInfosNode)
	{
		Data baseInfosObject;
		if(!valueBaseInfosData["Status"].isNull())
			baseInfosObject.status = valueBaseInfosData["Status"].asString();
		if(!valueBaseInfosData["SdkVersion"].isNull())
			baseInfosObject.sdkVersion = valueBaseInfosData["SdkVersion"].asString();
		if(!valueBaseInfosData["IsHardDecode"].isNull())
			baseInfosObject.isHardDecode = valueBaseInfosData["IsHardDecode"].asString();
		if(!valueBaseInfosData["Os"].isNull())
			baseInfosObject.os = valueBaseInfosData["Os"].asString();
		if(!valueBaseInfosData["Bps"].isNull())
			baseInfosObject.bps = valueBaseInfosData["Bps"].asString();
		if(!valueBaseInfosData["TerminalType"].isNull())
			baseInfosObject.terminalType = valueBaseInfosData["TerminalType"].asString();
		if(!valueBaseInfosData["FirstFrameDuration"].isNull())
			baseInfosObject.firstFrameDuration = valueBaseInfosData["FirstFrameDuration"].asString();
		if(!valueBaseInfosData["PlayerReadyDuration"].isNull())
			baseInfosObject.playerReadyDuration = valueBaseInfosData["PlayerReadyDuration"].asString();
		if(!valueBaseInfosData["NetworkDuration"].isNull())
			baseInfosObject.networkDuration = valueBaseInfosData["NetworkDuration"].asString();
		if(!valueBaseInfosData["DecodeStuckTime"].isNull())
			baseInfosObject.decodeStuckTime = valueBaseInfosData["DecodeStuckTime"].asString();
		if(!valueBaseInfosData["Definition"].isNull())
			baseInfosObject.definition = valueBaseInfosData["Definition"].asString();
		if(!valueBaseInfosData["Fps"].isNull())
			baseInfosObject.fps = valueBaseInfosData["Fps"].asString();
		if(!valueBaseInfosData["Moov"].isNull())
			baseInfosObject.moov = valueBaseInfosData["Moov"].asString();
		if(!valueBaseInfosData["Mdat"].isNull())
			baseInfosObject.mdat = valueBaseInfosData["Mdat"].asString();
		if(!valueBaseInfosData["PlayTs"].isNull())
			baseInfosObject.playTs = valueBaseInfosData["PlayTs"].asString();
		if(!valueBaseInfosData["Codec"].isNull())
			baseInfosObject.codec = valueBaseInfosData["Codec"].asString();
		if(!valueBaseInfosData["BroadcastPace"].isNull())
			baseInfosObject.broadcastPace = valueBaseInfosData["BroadcastPace"].asString();
		if(!valueBaseInfosData["Network"].isNull())
			baseInfosObject.network = valueBaseInfosData["Network"].asString();
		if(!valueBaseInfosData["NetworkStuckTime"].isNull())
			baseInfosObject.networkStuckTime = valueBaseInfosData["NetworkStuckTime"].asString();
		if(!valueBaseInfosData["PlayerLoadDuration"].isNull())
			baseInfosObject.playerLoadDuration = valueBaseInfosData["PlayerLoadDuration"].asString();
		if(!valueBaseInfosData["PlayerPreDealDuration"].isNull())
			baseInfosObject.playerPreDealDuration = valueBaseInfosData["PlayerPreDealDuration"].asString();
		if(!valueBaseInfosData["AppName"].isNull())
			baseInfosObject.appName = valueBaseInfosData["AppName"].asString();
		if(!valueBaseInfosData["SessionId"].isNull())
			baseInfosObject.sessionId = valueBaseInfosData["SessionId"].asString();
		if(!valueBaseInfosData["ClientIP"].isNull())
			baseInfosObject.clientIP = valueBaseInfosData["ClientIP"].asString();
		baseInfos_.push_back(baseInfosObject);
	}

}

std::vector<DescribePlayDetailResult::Data> DescribePlayDetailResult::getBaseInfos()const
{
	return baseInfos_;
}

