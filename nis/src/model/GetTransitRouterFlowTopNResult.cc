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

#include <alibabacloud/nis/model/GetTransitRouterFlowTopNResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Nis;
using namespace AlibabaCloud::Nis::Model;

GetTransitRouterFlowTopNResult::GetTransitRouterFlowTopNResult() :
	ServiceResult()
{}

GetTransitRouterFlowTopNResult::GetTransitRouterFlowTopNResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

GetTransitRouterFlowTopNResult::~GetTransitRouterFlowTopNResult()
{}

void GetTransitRouterFlowTopNResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto allTransitRouterFlowTopNNode = value["TransitRouterFlowTopN"]["TrFlowlogTopN"];
	for (auto valueTransitRouterFlowTopNTrFlowlogTopN : allTransitRouterFlowTopNNode)
	{
		TrFlowlogTopN transitRouterFlowTopNObject;
		if(!valueTransitRouterFlowTopNTrFlowlogTopN["AccountId"].isNull())
			transitRouterFlowTopNObject.accountId = valueTransitRouterFlowTopNTrFlowlogTopN["AccountId"].asString();
		if(!valueTransitRouterFlowTopNTrFlowlogTopN["CenId"].isNull())
			transitRouterFlowTopNObject.cenId = valueTransitRouterFlowTopNTrFlowlogTopN["CenId"].asString();
		if(!valueTransitRouterFlowTopNTrFlowlogTopN["ThisRegion"].isNull())
			transitRouterFlowTopNObject.thisRegion = valueTransitRouterFlowTopNTrFlowlogTopN["ThisRegion"].asString();
		if(!valueTransitRouterFlowTopNTrFlowlogTopN["ThisIp"].isNull())
			transitRouterFlowTopNObject.thisIp = valueTransitRouterFlowTopNTrFlowlogTopN["ThisIp"].asString();
		if(!valueTransitRouterFlowTopNTrFlowlogTopN["ThisPort"].isNull())
			transitRouterFlowTopNObject.thisPort = valueTransitRouterFlowTopNTrFlowlogTopN["ThisPort"].asString();
		if(!valueTransitRouterFlowTopNTrFlowlogTopN["OtherRegion"].isNull())
			transitRouterFlowTopNObject.otherRegion = valueTransitRouterFlowTopNTrFlowlogTopN["OtherRegion"].asString();
		if(!valueTransitRouterFlowTopNTrFlowlogTopN["OtherIp"].isNull())
			transitRouterFlowTopNObject.otherIp = valueTransitRouterFlowTopNTrFlowlogTopN["OtherIp"].asString();
		if(!valueTransitRouterFlowTopNTrFlowlogTopN["OtherPort"].isNull())
			transitRouterFlowTopNObject.otherPort = valueTransitRouterFlowTopNTrFlowlogTopN["OtherPort"].asString();
		if(!valueTransitRouterFlowTopNTrFlowlogTopN["Protocol"].isNull())
			transitRouterFlowTopNObject.protocol = valueTransitRouterFlowTopNTrFlowlogTopN["Protocol"].asString();
		if(!valueTransitRouterFlowTopNTrFlowlogTopN["StartTime"].isNull())
			transitRouterFlowTopNObject.startTime = valueTransitRouterFlowTopNTrFlowlogTopN["StartTime"].asString();
		if(!valueTransitRouterFlowTopNTrFlowlogTopN["EndTime"].isNull())
			transitRouterFlowTopNObject.endTime = valueTransitRouterFlowTopNTrFlowlogTopN["EndTime"].asString();
		if(!valueTransitRouterFlowTopNTrFlowlogTopN["Packets"].isNull())
			transitRouterFlowTopNObject.packets = valueTransitRouterFlowTopNTrFlowlogTopN["Packets"].asString();
		if(!valueTransitRouterFlowTopNTrFlowlogTopN["Bytes"].isNull())
			transitRouterFlowTopNObject.bytes = valueTransitRouterFlowTopNTrFlowlogTopN["Bytes"].asString();
		if(!valueTransitRouterFlowTopNTrFlowlogTopN["BandwithPackageId"].isNull())
			transitRouterFlowTopNObject.bandwithPackageId = valueTransitRouterFlowTopNTrFlowlogTopN["BandwithPackageId"].asString();
		transitRouterFlowTopN_.push_back(transitRouterFlowTopNObject);
	}

}

std::vector<GetTransitRouterFlowTopNResult::TrFlowlogTopN> GetTransitRouterFlowTopNResult::getTransitRouterFlowTopN()const
{
	return transitRouterFlowTopN_;
}

