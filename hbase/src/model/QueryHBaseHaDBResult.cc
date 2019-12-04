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

#include <alibabacloud/hbase/model/QueryHBaseHaDBResult.h>
#include <json/json.h>

using namespace AlibabaCloud::HBase;
using namespace AlibabaCloud::HBase::Model;

QueryHBaseHaDBResult::QueryHBaseHaDBResult() :
	ServiceResult()
{}

QueryHBaseHaDBResult::QueryHBaseHaDBResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

QueryHBaseHaDBResult::~QueryHBaseHaDBResult()
{}

void QueryHBaseHaDBResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto allClusterListNode = value["ClusterList"]["Cluster"];
	for (auto valueClusterListCluster : allClusterListNode)
	{
		Cluster clusterListObject;
		if(!valueClusterListCluster["HaName"].isNull())
			clusterListObject.haName = valueClusterListCluster["HaName"].asString();
		if(!valueClusterListCluster["BdsName"].isNull())
			clusterListObject.bdsName = valueClusterListCluster["BdsName"].asString();
		if(!valueClusterListCluster["ActiveName"].isNull())
			clusterListObject.activeName = valueClusterListCluster["ActiveName"].asString();
		if(!valueClusterListCluster["StandbyName"].isNull())
			clusterListObject.standbyName = valueClusterListCluster["StandbyName"].asString();
		auto allHaSlbConnListNode = allClusterListNode["HaSlbConnList"]["HaSlbConn"];
		for (auto allClusterListNodeHaSlbConnListHaSlbConn : allHaSlbConnListNode)
		{
			Cluster::HaSlbConn haSlbConnListObject;
			if(!allClusterListNodeHaSlbConnListHaSlbConn["SlbType"].isNull())
				haSlbConnListObject.slbType = allClusterListNodeHaSlbConnListHaSlbConn["SlbType"].asString();
			if(!allClusterListNodeHaSlbConnListHaSlbConn["SlbConnAddr"].isNull())
				haSlbConnListObject.slbConnAddr = allClusterListNodeHaSlbConnListHaSlbConn["SlbConnAddr"].asString();
			if(!allClusterListNodeHaSlbConnListHaSlbConn["HbaseType"].isNull())
				haSlbConnListObject.hbaseType = allClusterListNodeHaSlbConnListHaSlbConn["HbaseType"].asString();
			clusterListObject.haSlbConnList.push_back(haSlbConnListObject);
		}
		clusterList_.push_back(clusterListObject);
	}
	if(!value["TotalCount"].isNull())
		totalCount_ = std::stol(value["TotalCount"].asString());
	if(!value["PageNumber"].isNull())
		pageNumber_ = std::stoi(value["PageNumber"].asString());
	if(!value["PageSize"].isNull())
		pageSize_ = std::stoi(value["PageSize"].asString());

}

long QueryHBaseHaDBResult::getTotalCount()const
{
	return totalCount_;
}

std::vector<QueryHBaseHaDBResult::Cluster> QueryHBaseHaDBResult::getClusterList()const
{
	return clusterList_;
}

int QueryHBaseHaDBResult::getPageSize()const
{
	return pageSize_;
}

int QueryHBaseHaDBResult::getPageNumber()const
{
	return pageNumber_;
}

