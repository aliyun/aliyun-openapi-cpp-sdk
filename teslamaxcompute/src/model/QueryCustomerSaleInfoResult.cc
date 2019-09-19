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

#include <alibabacloud/teslamaxcompute/model/QueryCustomerSaleInfoResult.h>
#include <json/json.h>

using namespace AlibabaCloud::TeslaMaxCompute;
using namespace AlibabaCloud::TeslaMaxCompute::Model;

QueryCustomerSaleInfoResult::QueryCustomerSaleInfoResult() :
	ServiceResult()
{}

QueryCustomerSaleInfoResult::QueryCustomerSaleInfoResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

QueryCustomerSaleInfoResult::~QueryCustomerSaleInfoResult()
{}

void QueryCustomerSaleInfoResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto dataNode = value["Data"];
	if(!dataNode["LastUpdate"].isNull())
		data_.lastUpdate = dataNode["LastUpdate"].asString();
	auto allClustersNode = dataNode["Clusters"]["cluster"];
	for (auto dataNodeClusterscluster : allClustersNode)
	{
		Data::Cluster clusterObject;
		if(!dataNodeClusterscluster["Cluster"].isNull())
			clusterObject.cluster = dataNodeClusterscluster["Cluster"].asString();
		if(!dataNodeClusterscluster["Region"].isNull())
			clusterObject.region = dataNodeClusterscluster["Region"].asString();
		if(!dataNodeClusterscluster["MachineRoom"].isNull())
			clusterObject.machineRoom = dataNodeClusterscluster["MachineRoom"].asString();
		auto allSaleInfosNode = allClustersNode["SaleInfos"]["saleInfo"];
		for (auto allClustersNodeSaleInfossaleInfo : allSaleInfosNode)
		{
			Data::Cluster::SaleInfo saleInfosObject;
			if(!allClustersNodeSaleInfossaleInfo["SaleMode"].isNull())
				saleInfosObject.saleMode = allClustersNodeSaleInfossaleInfo["SaleMode"].asString();
			if(!allClustersNodeSaleInfossaleInfo["Uid"].isNull())
				saleInfosObject.uid = allClustersNodeSaleInfossaleInfo["Uid"].asString();
			if(!allClustersNodeSaleInfossaleInfo["Mem"].isNull())
				saleInfosObject.mem = std::stol(allClustersNodeSaleInfossaleInfo["Mem"].asString());
			if(!allClustersNodeSaleInfossaleInfo["Cpu"].isNull())
				saleInfosObject.cpu = std::stol(allClustersNodeSaleInfossaleInfo["Cpu"].asString());
			if(!allClustersNodeSaleInfossaleInfo["BizCategory"].isNull())
				saleInfosObject.bizCategory = allClustersNodeSaleInfossaleInfo["BizCategory"].asString();
			if(!allClustersNodeSaleInfossaleInfo["Owner"].isNull())
				saleInfosObject.owner = allClustersNodeSaleInfossaleInfo["Owner"].asString();
			if(!allClustersNodeSaleInfossaleInfo["QueryDate"].isNull())
				saleInfosObject.queryDate = allClustersNodeSaleInfossaleInfo["QueryDate"].asString();
			clusterObject.saleInfos.push_back(saleInfosObject);
		}
		data_.clusters.push_back(clusterObject);
	}
	if(!value["Code"].isNull())
		code_ = std::stoi(value["Code"].asString());
	if(!value["Message"].isNull())
		message_ = value["Message"].asString();

}

std::string QueryCustomerSaleInfoResult::getMessage()const
{
	return message_;
}

QueryCustomerSaleInfoResult::Data QueryCustomerSaleInfoResult::getData()const
{
	return data_;
}

int QueryCustomerSaleInfoResult::getCode()const
{
	return code_;
}

