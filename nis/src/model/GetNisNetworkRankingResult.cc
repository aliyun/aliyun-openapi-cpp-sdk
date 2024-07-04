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

#include <alibabacloud/nis/model/GetNisNetworkRankingResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Nis;
using namespace AlibabaCloud::Nis::Model;

GetNisNetworkRankingResult::GetNisNetworkRankingResult() :
	ServiceResult()
{}

GetNisNetworkRankingResult::GetNisNetworkRankingResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

GetNisNetworkRankingResult::~GetNisNetworkRankingResult()
{}

void GetNisNetworkRankingResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto allDataNode = value["Data"]["Rankings"];
	for (auto valueDataRankings : allDataNode)
	{
		Rankings dataObject;
		if(!valueDataRankings["RegionNo"].isNull())
			dataObject.regionNo = valueDataRankings["RegionNo"].asString();
		if(!valueDataRankings["InstanceId"].isNull())
			dataObject.instanceId = valueDataRankings["InstanceId"].asString();
		if(!valueDataRankings["BandwidthPackageId"].isNull())
			dataObject.bandwidthPackageId = valueDataRankings["BandwidthPackageId"].asString();
		if(!valueDataRankings["SourceIp"].isNull())
			dataObject.sourceIp = valueDataRankings["SourceIp"].asString();
		if(!valueDataRankings["SourcePort"].isNull())
			dataObject.sourcePort = valueDataRankings["SourcePort"].asString();
		if(!valueDataRankings["SourceIsp"].isNull())
			dataObject.sourceIsp = valueDataRankings["SourceIsp"].asString();
		if(!valueDataRankings["DestinationIp"].isNull())
			dataObject.destinationIp = valueDataRankings["DestinationIp"].asString();
		if(!valueDataRankings["DestinationPort"].isNull())
			dataObject.destinationPort = valueDataRankings["DestinationPort"].asString();
		if(!valueDataRankings["DestinationIsp"].isNull())
			dataObject.destinationIsp = valueDataRankings["DestinationIsp"].asString();
		if(!valueDataRankings["Protocol"].isNull())
			dataObject.protocol = valueDataRankings["Protocol"].asString();
		if(!valueDataRankings["Country"].isNull())
			dataObject.country = valueDataRankings["Country"].asString();
		if(!valueDataRankings["Province"].isNull())
			dataObject.province = valueDataRankings["Province"].asString();
		if(!valueDataRankings["City"].isNull())
			dataObject.city = valueDataRankings["City"].asString();
		if(!valueDataRankings["Isp"].isNull())
			dataObject.isp = valueDataRankings["Isp"].asString();
		if(!valueDataRankings["Asn"].isNull())
			dataObject.asn = valueDataRankings["Asn"].asString();
		if(!valueDataRankings["IP"].isNull())
			dataObject.iP = valueDataRankings["IP"].asString();
		if(!valueDataRankings["DestinationRegionNo"].isNull())
			dataObject.destinationRegionNo = valueDataRankings["DestinationRegionNo"].asString();
		if(!valueDataRankings["VbrId"].isNull())
			dataObject.vbrId = valueDataRankings["VbrId"].asString();
		if(!valueDataRankings["AttachmentId"].isNull())
			dataObject.attachmentId = valueDataRankings["AttachmentId"].asString();
		if(!valueDataRankings["SourceZone"].isNull())
			dataObject.sourceZone = valueDataRankings["SourceZone"].asString();
		if(!valueDataRankings["DestinationZone"].isNull())
			dataObject.destinationZone = valueDataRankings["DestinationZone"].asString();
		if(!valueDataRankings["ByteCount"].isNull())
			dataObject.byteCount = valueDataRankings["ByteCount"].asString();
		if(!valueDataRankings["PacketCount"].isNull())
			dataObject.packetCount = valueDataRankings["PacketCount"].asString();
		if(!valueDataRankings["RTT"].isNull())
			dataObject.rTT = valueDataRankings["RTT"].asString();
		if(!valueDataRankings["RetransmitRate"].isNull())
			dataObject.retransmitRate = valueDataRankings["RetransmitRate"].asString();
		if(!valueDataRankings["InBps"].isNull())
			dataObject.inBps = valueDataRankings["InBps"].asString();
		if(!valueDataRankings["InPps"].isNull())
			dataObject.inPps = valueDataRankings["InPps"].asString();
		if(!valueDataRankings["OutBps"].isNull())
			dataObject.outBps = valueDataRankings["OutBps"].asString();
		if(!valueDataRankings["OutPps"].isNull())
			dataObject.outPps = valueDataRankings["OutPps"].asString();
		if(!valueDataRankings["NewSessionPerSecond"].isNull())
			dataObject.newSessionPerSecond = valueDataRankings["NewSessionPerSecond"].asString();
		if(!valueDataRankings["ActiveSessionCount"].isNull())
			dataObject.activeSessionCount = valueDataRankings["ActiveSessionCount"].asString();
		data_.push_back(dataObject);
	}

}

std::vector<GetNisNetworkRankingResult::Rankings> GetNisNetworkRankingResult::getData()const
{
	return data_;
}

