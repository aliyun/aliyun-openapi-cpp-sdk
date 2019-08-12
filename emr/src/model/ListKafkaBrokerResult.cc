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

#include <alibabacloud/emr/model/ListKafkaBrokerResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Emr;
using namespace AlibabaCloud::Emr::Model;

ListKafkaBrokerResult::ListKafkaBrokerResult() :
	ServiceResult()
{}

ListKafkaBrokerResult::ListKafkaBrokerResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

ListKafkaBrokerResult::~ListKafkaBrokerResult()
{}

void ListKafkaBrokerResult::parse(const std::string &payload)
{
	Json::CharReaderBuilder builder;
	Json::CharReader *reader = builder.newCharReader();
	Json::Value *val;
	Json::Value value;
	JSONCPP_STRING *errs;
	reader->parse(payload.data(), payload.data() + payload.size(), val, errs);
	value = *val;
	setRequestId(value["RequestId"].asString());
	auto allBrokerList = value["BrokerList"]["Broker"];
	for (auto value : allBrokerList)
	{
		Broker brokerListObject;
		if(!value["BrokerId"].isNull())
			brokerListObject.brokerId = std::stoi(value["BrokerId"].asString());
		if(!value["HostId"].isNull())
			brokerListObject.hostId = value["HostId"].asString();
		if(!value["HostName"].isNull())
			brokerListObject.hostName = value["HostName"].asString();
		if(!value["HostIp"].isNull())
			brokerListObject.hostIp = value["HostIp"].asString();
		if(!value["Status"].isNull())
			brokerListObject.status = value["Status"].asString();
		if(!value["PartitionCount"].isNull())
			brokerListObject.partitionCount = std::stoi(value["PartitionCount"].asString());
		if(!value["LeaderCount"].isNull())
			brokerListObject.leaderCount = std::stoi(value["LeaderCount"].asString());
		if(!value["TopicCount"].isNull())
			brokerListObject.topicCount = std::stoi(value["TopicCount"].asString());
		if(!value["DiskUnbalanceRate"].isNull())
			brokerListObject.diskUnbalanceRate = value["DiskUnbalanceRate"].asString();
		if(!value["DiskUsageMean"].isNull())
			brokerListObject.diskUsageMean = value["DiskUsageMean"].asString();
		if(!value["DiskUsageMax"].isNull())
			brokerListObject.diskUsageMax = value["DiskUsageMax"].asString();
		if(!value["DiskCapacity"].isNull())
			brokerListObject.diskCapacity = std::stoi(value["DiskCapacity"].asString());
		if(!value["TrafficIn"].isNull())
			brokerListObject.trafficIn = value["TrafficIn"].asString();
		if(!value["TrafficOut"].isNull())
			brokerListObject.trafficOut = value["TrafficOut"].asString();
		brokerList_.push_back(brokerListObject);
	}
	if(!value["Total"].isNull())
		total_ = std::stoi(value["Total"].asString());
	if(!value["PageSize"].isNull())
		pageSize_ = std::stoi(value["PageSize"].asString());
	if(!value["PageNumber"].isNull())
		pageNumber_ = std::stoi(value["PageNumber"].asString());

}

int ListKafkaBrokerResult::getPageSize()const
{
	return pageSize_;
}

int ListKafkaBrokerResult::getPageNumber()const
{
	return pageNumber_;
}

int ListKafkaBrokerResult::getTotal()const
{
	return total_;
}

std::vector<ListKafkaBrokerResult::Broker> ListKafkaBrokerResult::getBrokerList()const
{
	return brokerList_;
}

