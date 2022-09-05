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

#include <alibabacloud/cdn/model/DescribeDomainDetailDataByLayerResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Cdn;
using namespace AlibabaCloud::Cdn::Model;

DescribeDomainDetailDataByLayerResult::DescribeDomainDetailDataByLayerResult() :
	ServiceResult()
{}

DescribeDomainDetailDataByLayerResult::DescribeDomainDetailDataByLayerResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

DescribeDomainDetailDataByLayerResult::~DescribeDomainDetailDataByLayerResult()
{}

void DescribeDomainDetailDataByLayerResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto allDataNode = value["Data"]["DataModule"];
	for (auto valueDataDataModule : allDataNode)
	{
		DataModule dataObject;
		if(!valueDataDataModule["Traf"].isNull())
			dataObject.traf = std::stol(valueDataDataModule["Traf"].asString());
		if(!valueDataDataModule["Qps"].isNull())
			dataObject.qps = std::stof(valueDataDataModule["Qps"].asString());
		if(!valueDataDataModule["Ipv6Qps"].isNull())
			dataObject.ipv6Qps = std::stof(valueDataDataModule["Ipv6Qps"].asString());
		if(!valueDataDataModule["Ipv6Bps"].isNull())
			dataObject.ipv6Bps = std::stof(valueDataDataModule["Ipv6Bps"].asString());
		if(!valueDataDataModule["Acc"].isNull())
			dataObject.acc = std::stol(valueDataDataModule["Acc"].asString());
		if(!valueDataDataModule["Ipv6Traf"].isNull())
			dataObject.ipv6Traf = std::stol(valueDataDataModule["Ipv6Traf"].asString());
		if(!valueDataDataModule["Ipv6Acc"].isNull())
			dataObject.ipv6Acc = std::stol(valueDataDataModule["Ipv6Acc"].asString());
		if(!valueDataDataModule["TimeStamp"].isNull())
			dataObject.timeStamp = valueDataDataModule["TimeStamp"].asString();
		if(!valueDataDataModule["HttpCode"].isNull())
			dataObject.httpCode = valueDataDataModule["HttpCode"].asString();
		if(!valueDataDataModule["Bps"].isNull())
			dataObject.bps = std::stof(valueDataDataModule["Bps"].asString());
		if(!valueDataDataModule["DomainName"].isNull())
			dataObject.domainName = valueDataDataModule["DomainName"].asString();
		data_.push_back(dataObject);
	}

}

std::vector<DescribeDomainDetailDataByLayerResult::DataModule> DescribeDomainDetailDataByLayerResult::getData()const
{
	return data_;
}

