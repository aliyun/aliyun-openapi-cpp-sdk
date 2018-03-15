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
	auto allData = value["Data"];
	for (auto value : allData)
	{
		Data dataObject;
		if(!value["LastUpdate"].isNull())
			dataObject.lastUpdate = value["LastUpdate"].asString();
		auto allClusters = value["Clusters"]["cluster"];
		for (auto value : allClusters)
		{
			Data::Cluster clusterObject;
			if(!value["Cluster"].isNull())
				clusterObject.cluster = value["Cluster"].asString();
			if(!value["Region"].isNull())
				clusterObject.region = value["Region"].asString();
			if(!value["MachineRoom"].isNull())
				clusterObject.machineRoom = value["MachineRoom"].asString();
			auto allSaleInfos = value["SaleInfos"]["saleInfo"];
			for (auto value : allSaleInfos)
			{
				Data::Cluster::SaleInfo saleInfosObject;
				if(!value["SaleMode"].isNull())
					saleInfosObject.saleMode = value["SaleMode"].asString();
				if(!value["Uid"].isNull())
					saleInfosObject.uid = value["Uid"].asString();
				if(!value["Mem"].isNull())
					saleInfosObject.mem = std::stol(value["Mem"].asString());
				if(!value["Cpu"].isNull())
					saleInfosObject.cpu = std::stol(value["Cpu"].asString());
				if(!value["BizCategory"].isNull())
					saleInfosObject.bizCategory = value["BizCategory"].asString();
				if(!value["Owner"].isNull())
					saleInfosObject.owner = value["Owner"].asString();
				if(!value["QueryDate"].isNull())
					saleInfosObject.queryDate = value["QueryDate"].asString();
				clusterObject.saleInfos.push_back(saleInfosObject);
			}
			dataObject.clusters.push_back(clusterObject);
		}
		data_.push_back(dataObject);
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

std::vector<QueryCustomerSaleInfoResult::Data> QueryCustomerSaleInfoResult::getData()const
{
	return data_;
}

int QueryCustomerSaleInfoResult::getCode()const
{
	return code_;
}

