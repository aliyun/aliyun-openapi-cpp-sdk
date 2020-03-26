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

#include <alibabacloud/afs/model/DescribeAfsOneConfDataResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Afs;
using namespace AlibabaCloud::Afs::Model;

DescribeAfsOneConfDataResult::DescribeAfsOneConfDataResult() :
	ServiceResult()
{}

DescribeAfsOneConfDataResult::DescribeAfsOneConfDataResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

DescribeAfsOneConfDataResult::~DescribeAfsOneConfDataResult()
{}

void DescribeAfsOneConfDataResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto allNcOneConfDatasNode = value["NcOneConfDatas"]["AfsNcOneConfData"];
	for (auto valueNcOneConfDatasAfsNcOneConfData : allNcOneConfDatasNode)
	{
		AfsNcOneConfData ncOneConfDatasObject;
		if(!valueNcOneConfDatasAfsNcOneConfData["TableDate"].isNull())
			ncOneConfDatasObject.tableDate = valueNcOneConfDatasAfsNcOneConfData["TableDate"].asString();
		if(!valueNcOneConfDatasAfsNcOneConfData["NcInitCnt"].isNull())
			ncOneConfDatasObject.ncInitCnt = std::stoi(valueNcOneConfDatasAfsNcOneConfData["NcInitCnt"].asString());
		if(!valueNcOneConfDatasAfsNcOneConfData["NcNoActionCnt"].isNull())
			ncOneConfDatasObject.ncNoActionCnt = std::stol(valueNcOneConfDatasAfsNcOneConfData["NcNoActionCnt"].asString());
		if(!valueNcOneConfDatasAfsNcOneConfData["NcVerifyCnt"].isNull())
			ncOneConfDatasObject.ncVerifyCnt = std::stol(valueNcOneConfDatasAfsNcOneConfData["NcVerifyCnt"].asString());
		if(!valueNcOneConfDatasAfsNcOneConfData["NcVerifyBlockCnt"].isNull())
			ncOneConfDatasObject.ncVerifyBlockCnt = std::stol(valueNcOneConfDatasAfsNcOneConfData["NcVerifyBlockCnt"].asString());
		if(!valueNcOneConfDatasAfsNcOneConfData["NcSigCnt"].isNull())
			ncOneConfDatasObject.ncSigCnt = std::stol(valueNcOneConfDatasAfsNcOneConfData["NcSigCnt"].asString());
		if(!valueNcOneConfDatasAfsNcOneConfData["NcSigBlockCnt"].isNull())
			ncOneConfDatasObject.ncSigBlockCnt = std::stol(valueNcOneConfDatasAfsNcOneConfData["NcSigBlockCnt"].asString());
		ncOneConfDatas_.push_back(ncOneConfDatasObject);
	}
	auto allIcOneConfDatasNode = value["IcOneConfDatas"]["AfsIcOneConfData"];
	for (auto valueIcOneConfDatasAfsIcOneConfData : allIcOneConfDatasNode)
	{
		AfsIcOneConfData icOneConfDatasObject;
		if(!valueIcOneConfDatasAfsIcOneConfData["TableDate"].isNull())
			icOneConfDatasObject.tableDate = valueIcOneConfDatasAfsIcOneConfData["TableDate"].asString();
		if(!valueIcOneConfDatasAfsIcOneConfData["IcInitCnt"].isNull())
			icOneConfDatasObject.icInitCnt = std::stol(valueIcOneConfDatasAfsIcOneConfData["IcInitCnt"].asString());
		if(!valueIcOneConfDatasAfsIcOneConfData["IcNoActionCnt"].isNull())
			icOneConfDatasObject.icNoActionCnt = std::stol(valueIcOneConfDatasAfsIcOneConfData["IcNoActionCnt"].asString());
		if(!valueIcOneConfDatasAfsIcOneConfData["IcVerifyCnt"].isNull())
			icOneConfDatasObject.icVerifyCnt = std::stol(valueIcOneConfDatasAfsIcOneConfData["IcVerifyCnt"].asString());
		if(!valueIcOneConfDatasAfsIcOneConfData["IcSecVerifyCnt"].isNull())
			icOneConfDatasObject.icSecVerifyCnt = std::stol(valueIcOneConfDatasAfsIcOneConfData["IcSecVerifyCnt"].asString());
		if(!valueIcOneConfDatasAfsIcOneConfData["IcSigCnt"].isNull())
			icOneConfDatasObject.icSigCnt = std::stol(valueIcOneConfDatasAfsIcOneConfData["IcSigCnt"].asString());
		if(!valueIcOneConfDatasAfsIcOneConfData["IcBlockCnt"].isNull())
			icOneConfDatasObject.icBlockCnt = std::stol(valueIcOneConfDatasAfsIcOneConfData["IcBlockCnt"].asString());
		icOneConfDatas_.push_back(icOneConfDatasObject);
	}
	auto allNvcOneConfDatasNode = value["NvcOneConfDatas"]["AfsNvcOneConfData"];
	for (auto valueNvcOneConfDatasAfsNvcOneConfData : allNvcOneConfDatasNode)
	{
		AfsNvcOneConfData nvcOneConfDatasObject;
		if(!valueNvcOneConfDatasAfsNvcOneConfData["TableDate"].isNull())
			nvcOneConfDatasObject.tableDate = valueNvcOneConfDatasAfsNvcOneConfData["TableDate"].asString();
		if(!valueNvcOneConfDatasAfsNvcOneConfData["NvcInitCnt"].isNull())
			nvcOneConfDatasObject.nvcInitCnt = std::stol(valueNvcOneConfDatasAfsNvcOneConfData["NvcInitCnt"].asString());
		if(!valueNvcOneConfDatasAfsNvcOneConfData["NvcNoActionCnt"].isNull())
			nvcOneConfDatasObject.nvcNoActionCnt = std::stol(valueNvcOneConfDatasAfsNvcOneConfData["NvcNoActionCnt"].asString());
		if(!valueNvcOneConfDatasAfsNvcOneConfData["NvcVerifyCnt"].isNull())
			nvcOneConfDatasObject.nvcVerifyCnt = std::stol(valueNvcOneConfDatasAfsNvcOneConfData["NvcVerifyCnt"].asString());
		if(!valueNvcOneConfDatasAfsNvcOneConfData["NvcSecVerifyCnt"].isNull())
			nvcOneConfDatasObject.nvcSecVerifyCnt = std::stol(valueNvcOneConfDatasAfsNvcOneConfData["NvcSecVerifyCnt"].asString());
		if(!valueNvcOneConfDatasAfsNvcOneConfData["NvcBlockCnt"].isNull())
			nvcOneConfDatasObject.nvcBlockCnt = std::stol(valueNvcOneConfDatasAfsNvcOneConfData["NvcBlockCnt"].asString());
		nvcOneConfDatas_.push_back(nvcOneConfDatasObject);
	}
	if(!value["BizCode"].isNull())
		bizCode_ = value["BizCode"].asString();
	if(!value["HasData"].isNull())
		hasData_ = value["HasData"].asString() == "true";

}

std::vector<DescribeAfsOneConfDataResult::AfsIcOneConfData> DescribeAfsOneConfDataResult::getIcOneConfDatas()const
{
	return icOneConfDatas_;
}

std::vector<DescribeAfsOneConfDataResult::AfsNcOneConfData> DescribeAfsOneConfDataResult::getNcOneConfDatas()const
{
	return ncOneConfDatas_;
}

std::vector<DescribeAfsOneConfDataResult::AfsNvcOneConfData> DescribeAfsOneConfDataResult::getNvcOneConfDatas()const
{
	return nvcOneConfDatas_;
}

std::string DescribeAfsOneConfDataResult::getBizCode()const
{
	return bizCode_;
}

bool DescribeAfsOneConfDataResult::getHasData()const
{
	return hasData_;
}

