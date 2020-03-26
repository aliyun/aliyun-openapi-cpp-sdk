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

#include <alibabacloud/afs/model/DescribeAfsVerifySigDataResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Afs;
using namespace AlibabaCloud::Afs::Model;

DescribeAfsVerifySigDataResult::DescribeAfsVerifySigDataResult() :
	ServiceResult()
{}

DescribeAfsVerifySigDataResult::DescribeAfsVerifySigDataResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

DescribeAfsVerifySigDataResult::~DescribeAfsVerifySigDataResult()
{}

void DescribeAfsVerifySigDataResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto allNcVerifyDatasNode = value["NcVerifyDatas"]["AfsNcVerifyData"];
	for (auto valueNcVerifyDatasAfsNcVerifyData : allNcVerifyDatasNode)
	{
		AfsNcVerifyData ncVerifyDatasObject;
		if(!valueNcVerifyDatasAfsNcVerifyData["Time"].isNull())
			ncVerifyDatasObject.time = valueNcVerifyDatasAfsNcVerifyData["Time"].asString();
		if(!valueNcVerifyDatasAfsNcVerifyData["NcVerifyPass"].isNull())
			ncVerifyDatasObject.ncVerifyPass = std::stol(valueNcVerifyDatasAfsNcVerifyData["NcVerifyPass"].asString());
		if(!valueNcVerifyDatasAfsNcVerifyData["NcVerifyBlock"].isNull())
			ncVerifyDatasObject.ncVerifyBlock = std::stol(valueNcVerifyDatasAfsNcVerifyData["NcVerifyBlock"].asString());
		ncVerifyDatas_.push_back(ncVerifyDatasObject);
	}
	auto allNcSigDatasNode = value["NcSigDatas"]["AfsNcSigData"];
	for (auto valueNcSigDatasAfsNcSigData : allNcSigDatasNode)
	{
		AfsNcSigData ncSigDatasObject;
		if(!valueNcSigDatasAfsNcSigData["Time"].isNull())
			ncSigDatasObject.time = valueNcSigDatasAfsNcSigData["Time"].asString();
		if(!valueNcSigDatasAfsNcSigData["NcSigPass"].isNull())
			ncSigDatasObject.ncSigPass = std::stol(valueNcSigDatasAfsNcSigData["NcSigPass"].asString());
		if(!valueNcSigDatasAfsNcSigData["NcSigBlock"].isNull())
			ncSigDatasObject.ncSigBlock = std::stol(valueNcSigDatasAfsNcSigData["NcSigBlock"].asString());
		ncSigDatas_.push_back(ncSigDatasObject);
	}
	auto allIcSecVerifyDatasNode = value["IcSecVerifyDatas"]["AfsIcSecVerifyData"];
	for (auto valueIcSecVerifyDatasAfsIcSecVerifyData : allIcSecVerifyDatasNode)
	{
		AfsIcSecVerifyData icSecVerifyDatasObject;
		if(!valueIcSecVerifyDatasAfsIcSecVerifyData["Time"].isNull())
			icSecVerifyDatasObject.time = valueIcSecVerifyDatasAfsIcSecVerifyData["Time"].asString();
		if(!valueIcSecVerifyDatasAfsIcSecVerifyData["IcSecPass"].isNull())
			icSecVerifyDatasObject.icSecPass = std::stol(valueIcSecVerifyDatasAfsIcSecVerifyData["IcSecPass"].asString());
		if(!valueIcSecVerifyDatasAfsIcSecVerifyData["IcSecBlock"].isNull())
			icSecVerifyDatasObject.icSecBlock = std::stol(valueIcSecVerifyDatasAfsIcSecVerifyData["IcSecBlock"].asString());
		icSecVerifyDatas_.push_back(icSecVerifyDatasObject);
	}
	auto allIcVerifyDatasNode = value["IcVerifyDatas"]["AfsIcVerifyData"];
	for (auto valueIcVerifyDatasAfsIcVerifyData : allIcVerifyDatasNode)
	{
		AfsIcVerifyData icVerifyDatasObject;
		if(!valueIcVerifyDatasAfsIcVerifyData["Time"].isNull())
			icVerifyDatasObject.time = valueIcVerifyDatasAfsIcVerifyData["Time"].asString();
		if(!valueIcVerifyDatasAfsIcVerifyData["IcVerifyCnt"].isNull())
			icVerifyDatasObject.icVerifyCnt = std::stol(valueIcVerifyDatasAfsIcVerifyData["IcVerifyCnt"].asString());
		if(!valueIcVerifyDatasAfsIcVerifyData["IcSecVerifyCnt"].isNull())
			icVerifyDatasObject.icSecVerifyCnt = std::stol(valueIcVerifyDatasAfsIcVerifyData["IcSecVerifyCnt"].asString());
		if(!valueIcVerifyDatasAfsIcVerifyData["IcSigCnt"].isNull())
			icVerifyDatasObject.icSigCnt = std::stol(valueIcVerifyDatasAfsIcVerifyData["IcSigCnt"].asString());
		if(!valueIcVerifyDatasAfsIcVerifyData["IcBlockCnt"].isNull())
			icVerifyDatasObject.icBlockCnt = std::stol(valueIcVerifyDatasAfsIcVerifyData["IcBlockCnt"].asString());
		icVerifyDatas_.push_back(icVerifyDatasObject);
	}
	auto allNvcVerifyDatasNode = value["NvcVerifyDatas"]["AfsNvcVerifyData"];
	for (auto valueNvcVerifyDatasAfsNvcVerifyData : allNvcVerifyDatasNode)
	{
		AfsNvcVerifyData nvcVerifyDatasObject;
		if(!valueNvcVerifyDatasAfsNvcVerifyData["Time"].isNull())
			nvcVerifyDatasObject.time = valueNvcVerifyDatasAfsNvcVerifyData["Time"].asString();
		if(!valueNvcVerifyDatasAfsNvcVerifyData["NvcVerifyCnt"].isNull())
			nvcVerifyDatasObject.nvcVerifyCnt = std::stol(valueNvcVerifyDatasAfsNvcVerifyData["NvcVerifyCnt"].asString());
		if(!valueNvcVerifyDatasAfsNvcVerifyData["NvcSecVerifyCnt"].isNull())
			nvcVerifyDatasObject.nvcSecVerifyCnt = std::stol(valueNvcVerifyDatasAfsNvcVerifyData["NvcSecVerifyCnt"].asString());
		nvcVerifyDatas_.push_back(nvcVerifyDatasObject);
	}
	auto allNvcSecDatasNode = value["NvcSecDatas"]["AfsNvcSecData"];
	for (auto valueNvcSecDatasAfsNvcSecData : allNvcSecDatasNode)
	{
		AfsNvcSecData nvcSecDatasObject;
		if(!valueNvcSecDatasAfsNvcSecData["Time"].isNull())
			nvcSecDatasObject.time = valueNvcSecDatasAfsNvcSecData["Time"].asString();
		if(!valueNvcSecDatasAfsNvcSecData["NvcSecPass"].isNull())
			nvcSecDatasObject.nvcSecPass = std::stol(valueNvcSecDatasAfsNvcSecData["NvcSecPass"].asString());
		if(!valueNvcSecDatasAfsNvcSecData["NvcSecBlock"].isNull())
			nvcSecDatasObject.nvcSecBlock = std::stol(valueNvcSecDatasAfsNvcSecData["NvcSecBlock"].asString());
		nvcSecDatas_.push_back(nvcSecDatasObject);
	}
	auto allNvcCodeDatasNode = value["NvcCodeDatas"]["AfsNvcCodeData"];
	for (auto valueNvcCodeDatasAfsNvcCodeData : allNvcCodeDatasNode)
	{
		AfsNvcCodeData nvcCodeDatasObject;
		if(!valueNvcCodeDatasAfsNvcCodeData["Time"].isNull())
			nvcCodeDatasObject.time = valueNvcCodeDatasAfsNvcCodeData["Time"].asString();
		if(!valueNvcCodeDatasAfsNvcCodeData["NvcCode200"].isNull())
			nvcCodeDatasObject.nvcCode200 = std::stol(valueNvcCodeDatasAfsNvcCodeData["NvcCode200"].asString());
		if(!valueNvcCodeDatasAfsNvcCodeData["NvcCode400"].isNull())
			nvcCodeDatasObject.nvcCode400 = std::stol(valueNvcCodeDatasAfsNvcCodeData["NvcCode400"].asString());
		if(!valueNvcCodeDatasAfsNvcCodeData["NvcCode600"].isNull())
			nvcCodeDatasObject.nvcCode600 = std::stol(valueNvcCodeDatasAfsNvcCodeData["NvcCode600"].asString());
		if(!valueNvcCodeDatasAfsNvcCodeData["NvcCode800"].isNull())
			nvcCodeDatasObject.nvcCode800 = std::stol(valueNvcCodeDatasAfsNvcCodeData["NvcCode800"].asString());
		nvcCodeDatas_.push_back(nvcCodeDatasObject);
	}
	if(!value["BizCode"].isNull())
		bizCode_ = value["BizCode"].asString();
	if(!value["HasData"].isNull())
		hasData_ = value["HasData"].asString() == "true";

}

std::vector<DescribeAfsVerifySigDataResult::AfsNvcCodeData> DescribeAfsVerifySigDataResult::getNvcCodeDatas()const
{
	return nvcCodeDatas_;
}

std::vector<DescribeAfsVerifySigDataResult::AfsNvcSecData> DescribeAfsVerifySigDataResult::getNvcSecDatas()const
{
	return nvcSecDatas_;
}

std::vector<DescribeAfsVerifySigDataResult::AfsIcVerifyData> DescribeAfsVerifySigDataResult::getIcVerifyDatas()const
{
	return icVerifyDatas_;
}

std::vector<DescribeAfsVerifySigDataResult::AfsNcVerifyData> DescribeAfsVerifySigDataResult::getNcVerifyDatas()const
{
	return ncVerifyDatas_;
}

std::vector<DescribeAfsVerifySigDataResult::AfsIcSecVerifyData> DescribeAfsVerifySigDataResult::getIcSecVerifyDatas()const
{
	return icSecVerifyDatas_;
}

std::vector<DescribeAfsVerifySigDataResult::AfsNvcVerifyData> DescribeAfsVerifySigDataResult::getNvcVerifyDatas()const
{
	return nvcVerifyDatas_;
}

std::vector<DescribeAfsVerifySigDataResult::AfsNcSigData> DescribeAfsVerifySigDataResult::getNcSigDatas()const
{
	return ncSigDatas_;
}

std::string DescribeAfsVerifySigDataResult::getBizCode()const
{
	return bizCode_;
}

bool DescribeAfsVerifySigDataResult::getHasData()const
{
	return hasData_;
}

