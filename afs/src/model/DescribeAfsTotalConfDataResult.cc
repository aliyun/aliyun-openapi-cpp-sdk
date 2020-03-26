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

#include <alibabacloud/afs/model/DescribeAfsTotalConfDataResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Afs;
using namespace AlibabaCloud::Afs::Model;

DescribeAfsTotalConfDataResult::DescribeAfsTotalConfDataResult() :
	ServiceResult()
{}

DescribeAfsTotalConfDataResult::DescribeAfsTotalConfDataResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

DescribeAfsTotalConfDataResult::~DescribeAfsTotalConfDataResult()
{}

void DescribeAfsTotalConfDataResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto allNcTotalConfVerifyDatasNode = value["NcTotalConfVerifyDatas"]["AfsTotalConfData"];
	for (auto valueNcTotalConfVerifyDatasAfsTotalConfData : allNcTotalConfVerifyDatasNode)
	{
		AfsTotalConfData ncTotalConfVerifyDatasObject;
		if(!valueNcTotalConfVerifyDatasAfsTotalConfData["Time"].isNull())
			ncTotalConfVerifyDatasObject.time = valueNcTotalConfVerifyDatasAfsTotalConfData["Time"].asString();
		if(!valueNcTotalConfVerifyDatasAfsTotalConfData["Category"].isNull())
			ncTotalConfVerifyDatasObject.category = valueNcTotalConfVerifyDatasAfsTotalConfData["Category"].asString();
		if(!valueNcTotalConfVerifyDatasAfsTotalConfData["Value"].isNull())
			ncTotalConfVerifyDatasObject.value = std::stol(valueNcTotalConfVerifyDatasAfsTotalConfData["Value"].asString());
		ncTotalConfVerifyDatas_.push_back(ncTotalConfVerifyDatasObject);
	}
	auto allNcTotalConfSigDatasNode = value["NcTotalConfSigDatas"]["AfsTotalConfData"];
	for (auto valueNcTotalConfSigDatasAfsTotalConfData : allNcTotalConfSigDatasNode)
	{
		AfsTotalConfData ncTotalConfSigDatasObject;
		if(!valueNcTotalConfSigDatasAfsTotalConfData["Time"].isNull())
			ncTotalConfSigDatasObject.time = valueNcTotalConfSigDatasAfsTotalConfData["Time"].asString();
		if(!valueNcTotalConfSigDatasAfsTotalConfData["Category"].isNull())
			ncTotalConfSigDatasObject.category = valueNcTotalConfSigDatasAfsTotalConfData["Category"].asString();
		if(!valueNcTotalConfSigDatasAfsTotalConfData["Value"].isNull())
			ncTotalConfSigDatasObject.value = std::stol(valueNcTotalConfSigDatasAfsTotalConfData["Value"].asString());
		ncTotalConfSigDatas_.push_back(ncTotalConfSigDatasObject);
	}
	auto allNcTotalConfBlockDatasNode = value["NcTotalConfBlockDatas"]["AfsTotalConfData"];
	for (auto valueNcTotalConfBlockDatasAfsTotalConfData : allNcTotalConfBlockDatasNode)
	{
		AfsTotalConfData ncTotalConfBlockDatasObject;
		if(!valueNcTotalConfBlockDatasAfsTotalConfData["Time"].isNull())
			ncTotalConfBlockDatasObject.time = valueNcTotalConfBlockDatasAfsTotalConfData["Time"].asString();
		if(!valueNcTotalConfBlockDatasAfsTotalConfData["Category"].isNull())
			ncTotalConfBlockDatasObject.category = valueNcTotalConfBlockDatasAfsTotalConfData["Category"].asString();
		if(!valueNcTotalConfBlockDatasAfsTotalConfData["Value"].isNull())
			ncTotalConfBlockDatasObject.value = std::stol(valueNcTotalConfBlockDatasAfsTotalConfData["Value"].asString());
		ncTotalConfBlockDatas_.push_back(ncTotalConfBlockDatasObject);
	}
	auto allIcTotalConfVerifyDatasNode = value["IcTotalConfVerifyDatas"]["AfsTotalConfData"];
	for (auto valueIcTotalConfVerifyDatasAfsTotalConfData : allIcTotalConfVerifyDatasNode)
	{
		AfsTotalConfData icTotalConfVerifyDatasObject;
		if(!valueIcTotalConfVerifyDatasAfsTotalConfData["Time"].isNull())
			icTotalConfVerifyDatasObject.time = valueIcTotalConfVerifyDatasAfsTotalConfData["Time"].asString();
		if(!valueIcTotalConfVerifyDatasAfsTotalConfData["Category"].isNull())
			icTotalConfVerifyDatasObject.category = valueIcTotalConfVerifyDatasAfsTotalConfData["Category"].asString();
		if(!valueIcTotalConfVerifyDatasAfsTotalConfData["Value"].isNull())
			icTotalConfVerifyDatasObject.value = std::stol(valueIcTotalConfVerifyDatasAfsTotalConfData["Value"].asString());
		icTotalConfVerifyDatas_.push_back(icTotalConfVerifyDatasObject);
	}
	auto allIcTotalConfSecVerifyDatasNode = value["IcTotalConfSecVerifyDatas"]["AfsTotalConfData"];
	for (auto valueIcTotalConfSecVerifyDatasAfsTotalConfData : allIcTotalConfSecVerifyDatasNode)
	{
		AfsTotalConfData icTotalConfSecVerifyDatasObject;
		if(!valueIcTotalConfSecVerifyDatasAfsTotalConfData["Time"].isNull())
			icTotalConfSecVerifyDatasObject.time = valueIcTotalConfSecVerifyDatasAfsTotalConfData["Time"].asString();
		if(!valueIcTotalConfSecVerifyDatasAfsTotalConfData["Category"].isNull())
			icTotalConfSecVerifyDatasObject.category = valueIcTotalConfSecVerifyDatasAfsTotalConfData["Category"].asString();
		if(!valueIcTotalConfSecVerifyDatasAfsTotalConfData["Value"].isNull())
			icTotalConfSecVerifyDatasObject.value = std::stol(valueIcTotalConfSecVerifyDatasAfsTotalConfData["Value"].asString());
		icTotalConfSecVerifyDatas_.push_back(icTotalConfSecVerifyDatasObject);
	}
	auto allIcTotalConfSigDatasNode = value["IcTotalConfSigDatas"]["AfsTotalConfData"];
	for (auto valueIcTotalConfSigDatasAfsTotalConfData : allIcTotalConfSigDatasNode)
	{
		AfsTotalConfData icTotalConfSigDatasObject;
		if(!valueIcTotalConfSigDatasAfsTotalConfData["Time"].isNull())
			icTotalConfSigDatasObject.time = valueIcTotalConfSigDatasAfsTotalConfData["Time"].asString();
		if(!valueIcTotalConfSigDatasAfsTotalConfData["Category"].isNull())
			icTotalConfSigDatasObject.category = valueIcTotalConfSigDatasAfsTotalConfData["Category"].asString();
		if(!valueIcTotalConfSigDatasAfsTotalConfData["Value"].isNull())
			icTotalConfSigDatasObject.value = std::stol(valueIcTotalConfSigDatasAfsTotalConfData["Value"].asString());
		icTotalConfSigDatas_.push_back(icTotalConfSigDatasObject);
	}
	auto allIcTotalConfBlockDatasNode = value["IcTotalConfBlockDatas"]["AfsTotalConfData"];
	for (auto valueIcTotalConfBlockDatasAfsTotalConfData : allIcTotalConfBlockDatasNode)
	{
		AfsTotalConfData icTotalConfBlockDatasObject;
		if(!valueIcTotalConfBlockDatasAfsTotalConfData["Time"].isNull())
			icTotalConfBlockDatasObject.time = valueIcTotalConfBlockDatasAfsTotalConfData["Time"].asString();
		if(!valueIcTotalConfBlockDatasAfsTotalConfData["Category"].isNull())
			icTotalConfBlockDatasObject.category = valueIcTotalConfBlockDatasAfsTotalConfData["Category"].asString();
		if(!valueIcTotalConfBlockDatasAfsTotalConfData["Value"].isNull())
			icTotalConfBlockDatasObject.value = std::stol(valueIcTotalConfBlockDatasAfsTotalConfData["Value"].asString());
		icTotalConfBlockDatas_.push_back(icTotalConfBlockDatasObject);
	}
	auto allNvcTotalConfVerifyDatasNode = value["NvcTotalConfVerifyDatas"]["AfsTotalConfData"];
	for (auto valueNvcTotalConfVerifyDatasAfsTotalConfData : allNvcTotalConfVerifyDatasNode)
	{
		AfsTotalConfData nvcTotalConfVerifyDatasObject;
		if(!valueNvcTotalConfVerifyDatasAfsTotalConfData["Time"].isNull())
			nvcTotalConfVerifyDatasObject.time = valueNvcTotalConfVerifyDatasAfsTotalConfData["Time"].asString();
		if(!valueNvcTotalConfVerifyDatasAfsTotalConfData["Category"].isNull())
			nvcTotalConfVerifyDatasObject.category = valueNvcTotalConfVerifyDatasAfsTotalConfData["Category"].asString();
		if(!valueNvcTotalConfVerifyDatasAfsTotalConfData["Value"].isNull())
			nvcTotalConfVerifyDatasObject.value = std::stol(valueNvcTotalConfVerifyDatasAfsTotalConfData["Value"].asString());
		nvcTotalConfVerifyDatas_.push_back(nvcTotalConfVerifyDatasObject);
	}
	auto allNvcTotalConfSecVerifyDatasNode = value["NvcTotalConfSecVerifyDatas"]["AfsTotalConfData"];
	for (auto valueNvcTotalConfSecVerifyDatasAfsTotalConfData : allNvcTotalConfSecVerifyDatasNode)
	{
		AfsTotalConfData nvcTotalConfSecVerifyDatasObject;
		if(!valueNvcTotalConfSecVerifyDatasAfsTotalConfData["Time"].isNull())
			nvcTotalConfSecVerifyDatasObject.time = valueNvcTotalConfSecVerifyDatasAfsTotalConfData["Time"].asString();
		if(!valueNvcTotalConfSecVerifyDatasAfsTotalConfData["Category"].isNull())
			nvcTotalConfSecVerifyDatasObject.category = valueNvcTotalConfSecVerifyDatasAfsTotalConfData["Category"].asString();
		if(!valueNvcTotalConfSecVerifyDatasAfsTotalConfData["Value"].isNull())
			nvcTotalConfSecVerifyDatasObject.value = std::stol(valueNvcTotalConfSecVerifyDatasAfsTotalConfData["Value"].asString());
		nvcTotalConfSecVerifyDatas_.push_back(nvcTotalConfSecVerifyDatasObject);
	}
	if(!value["BizCode"].isNull())
		bizCode_ = value["BizCode"].asString();
	if(!value["HasData"].isNull())
		hasData_ = value["HasData"].asString() == "true";

}

std::vector<DescribeAfsTotalConfDataResult::AfsTotalConfData> DescribeAfsTotalConfDataResult::getIcTotalConfSigDatas()const
{
	return icTotalConfSigDatas_;
}

std::vector<DescribeAfsTotalConfDataResult::AfsTotalConfData> DescribeAfsTotalConfDataResult::getNvcTotalConfSecVerifyDatas()const
{
	return nvcTotalConfSecVerifyDatas_;
}

std::vector<DescribeAfsTotalConfDataResult::AfsTotalConfData> DescribeAfsTotalConfDataResult::getIcTotalConfVerifyDatas()const
{
	return icTotalConfVerifyDatas_;
}

std::vector<DescribeAfsTotalConfDataResult::AfsTotalConfData> DescribeAfsTotalConfDataResult::getNvcTotalConfVerifyDatas()const
{
	return nvcTotalConfVerifyDatas_;
}

std::vector<DescribeAfsTotalConfDataResult::AfsTotalConfData> DescribeAfsTotalConfDataResult::getIcTotalConfSecVerifyDatas()const
{
	return icTotalConfSecVerifyDatas_;
}

std::vector<DescribeAfsTotalConfDataResult::AfsTotalConfData> DescribeAfsTotalConfDataResult::getNcTotalConfBlockDatas()const
{
	return ncTotalConfBlockDatas_;
}

std::vector<DescribeAfsTotalConfDataResult::AfsTotalConfData> DescribeAfsTotalConfDataResult::getNcTotalConfSigDatas()const
{
	return ncTotalConfSigDatas_;
}

std::vector<DescribeAfsTotalConfDataResult::AfsTotalConfData> DescribeAfsTotalConfDataResult::getIcTotalConfBlockDatas()const
{
	return icTotalConfBlockDatas_;
}

std::vector<DescribeAfsTotalConfDataResult::AfsTotalConfData> DescribeAfsTotalConfDataResult::getNcTotalConfVerifyDatas()const
{
	return ncTotalConfVerifyDatas_;
}

std::string DescribeAfsTotalConfDataResult::getBizCode()const
{
	return bizCode_;
}

bool DescribeAfsTotalConfDataResult::getHasData()const
{
	return hasData_;
}

