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

#include <alibabacloud/nis/model/GetInternetTupleResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Nis;
using namespace AlibabaCloud::Nis::Model;

GetInternetTupleResult::GetInternetTupleResult() :
	ServiceResult()
{}

GetInternetTupleResult::GetInternetTupleResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

GetInternetTupleResult::~GetInternetTupleResult()
{}

void GetInternetTupleResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto allDataNode = value["Data"]["DataItem"];
	for (auto valueDataDataItem : allDataNode)
	{
		DataItem dataObject;
		if(!valueDataDataItem["BeginTime"].isNull())
			dataObject.beginTime = valueDataDataItem["BeginTime"].asString();
		if(!valueDataDataItem["Direction"].isNull())
			dataObject.direction = valueDataDataItem["Direction"].asString();
		if(!valueDataDataItem["InstanceId"].isNull())
			dataObject.instanceId = valueDataDataItem["InstanceId"].asString();
		if(!valueDataDataItem["AccessRegion"].isNull())
			dataObject.accessRegion = valueDataDataItem["AccessRegion"].asString();
		if(!valueDataDataItem["CloudIp"].isNull())
			dataObject.cloudIp = valueDataDataItem["CloudIp"].asString();
		if(!valueDataDataItem["CloudPort"].isNull())
			dataObject.cloudPort = valueDataDataItem["CloudPort"].asString();
		if(!valueDataDataItem["OtherIp"].isNull())
			dataObject.otherIp = valueDataDataItem["OtherIp"].asString();
		if(!valueDataDataItem["OtherPort"].isNull())
			dataObject.otherPort = valueDataDataItem["OtherPort"].asString();
		if(!valueDataDataItem["Protocol"].isNull())
			dataObject.protocol = valueDataDataItem["Protocol"].asString();
		if(!valueDataDataItem["CloudCountry"].isNull())
			dataObject.cloudCountry = valueDataDataItem["CloudCountry"].asString();
		if(!valueDataDataItem["CloudProvince"].isNull())
			dataObject.cloudProvince = valueDataDataItem["CloudProvince"].asString();
		if(!valueDataDataItem["CloudCity"].isNull())
			dataObject.cloudCity = valueDataDataItem["CloudCity"].asString();
		if(!valueDataDataItem["CloudIsp"].isNull())
			dataObject.cloudIsp = valueDataDataItem["CloudIsp"].asString();
		if(!valueDataDataItem["CloudProduct"].isNull())
			dataObject.cloudProduct = valueDataDataItem["CloudProduct"].asString();
		if(!valueDataDataItem["OtherCountry"].isNull())
			dataObject.otherCountry = valueDataDataItem["OtherCountry"].asString();
		if(!valueDataDataItem["OtherProvince"].isNull())
			dataObject.otherProvince = valueDataDataItem["OtherProvince"].asString();
		if(!valueDataDataItem["OtherCity"].isNull())
			dataObject.otherCity = valueDataDataItem["OtherCity"].asString();
		if(!valueDataDataItem["OtherIsp"].isNull())
			dataObject.otherIsp = valueDataDataItem["OtherIsp"].asString();
		if(!valueDataDataItem["OtherProduct"].isNull())
			dataObject.otherProduct = valueDataDataItem["OtherProduct"].asString();
		if(!valueDataDataItem["Rtt"].isNull())
			dataObject.rtt = valueDataDataItem["Rtt"].asString();
		if(!valueDataDataItem["ByteCount"].isNull())
			dataObject.byteCount = valueDataDataItem["ByteCount"].asString();
		if(!valueDataDataItem["PacketCount"].isNull())
			dataObject.packetCount = valueDataDataItem["PacketCount"].asString();
		if(!valueDataDataItem["OutOrderCount"].isNull())
			dataObject.outOrderCount = valueDataDataItem["OutOrderCount"].asString();
		if(!valueDataDataItem["RetranCount"].isNull())
			dataObject.retranCount = valueDataDataItem["RetranCount"].asString();
		if(!valueDataDataItem["InByteCount"].isNull())
			dataObject.inByteCount = valueDataDataItem["InByteCount"].asString();
		if(!valueDataDataItem["OutByteCount"].isNull())
			dataObject.outByteCount = valueDataDataItem["OutByteCount"].asString();
		if(!valueDataDataItem["InPacketCount"].isNull())
			dataObject.inPacketCount = valueDataDataItem["InPacketCount"].asString();
		if(!valueDataDataItem["OutPacketCount"].isNull())
			dataObject.outPacketCount = valueDataDataItem["OutPacketCount"].asString();
		if(!valueDataDataItem["InOutOrderCount"].isNull())
			dataObject.inOutOrderCount = valueDataDataItem["InOutOrderCount"].asString();
		if(!valueDataDataItem["OutOutOrderCount"].isNull())
			dataObject.outOutOrderCount = valueDataDataItem["OutOutOrderCount"].asString();
		if(!valueDataDataItem["InRetranCount"].isNull())
			dataObject.inRetranCount = valueDataDataItem["InRetranCount"].asString();
		if(!valueDataDataItem["OutRetranCount"].isNull())
			dataObject.outRetranCount = valueDataDataItem["OutRetranCount"].asString();
		if(!valueDataDataItem["RetransmitRate"].isNull())
			dataObject.retransmitRate = valueDataDataItem["RetransmitRate"].asString();
		data_.push_back(dataObject);
	}

}

std::vector<GetInternetTupleResult::DataItem> GetInternetTupleResult::getData()const
{
	return data_;
}

