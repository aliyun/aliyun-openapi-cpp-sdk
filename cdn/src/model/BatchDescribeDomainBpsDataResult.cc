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

#include <alibabacloud/cdn/model/BatchDescribeDomainBpsDataResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Cdn;
using namespace AlibabaCloud::Cdn::Model;

BatchDescribeDomainBpsDataResult::BatchDescribeDomainBpsDataResult() :
	ServiceResult()
{}

BatchDescribeDomainBpsDataResult::BatchDescribeDomainBpsDataResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

BatchDescribeDomainBpsDataResult::~BatchDescribeDomainBpsDataResult()
{}

void BatchDescribeDomainBpsDataResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);

	setRequestId(value["RequestId"].asString());
	auto allBpsDatas = value["BpsDatas"]["DataModule"];
	for (auto value : allBpsDatas)
	{
		DataModule dataModuleObject;
		dataModuleObject.timestamp = value["Timestamp"].asString();
		dataModuleObject.l1Bps = std::stof(value["L1Bps"].asString());
		dataModuleObject.l1InnerBps = std::stof(value["L1InnerBps"].asString());
		dataModuleObject.l1OutBps = std::stof(value["L1OutBps"].asString());
		dataModuleObject.domainName = value["DomainName"].asString();
		bpsDatas_.push_back(dataModuleObject);
	}
	pageNumber_ = std::stoi(value["PageNumber"].asString());
	pageSize_ = std::stoi(value["PageSize"].asString());
	totalCount_ = std::stoi(value["TotalCount"].asString());

}

int BatchDescribeDomainBpsDataResult::getTotalCount()const
{
	return totalCount_;
}

void BatchDescribeDomainBpsDataResult::setTotalCount(int totalCount)
{
	totalCount_ = totalCount;
}

int BatchDescribeDomainBpsDataResult::getPageSize()const
{
	return pageSize_;
}

void BatchDescribeDomainBpsDataResult::setPageSize(int pageSize)
{
	pageSize_ = pageSize;
}

int BatchDescribeDomainBpsDataResult::getPageNumber()const
{
	return pageNumber_;
}

void BatchDescribeDomainBpsDataResult::setPageNumber(int pageNumber)
{
	pageNumber_ = pageNumber;
}

