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

#include <alibabacloud/ots/model/ListVpcInfoByVpcResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Ots;
using namespace AlibabaCloud::Ots::Model;

ListVpcInfoByVpcResult::ListVpcInfoByVpcResult() :
	ServiceResult()
{}

ListVpcInfoByVpcResult::ListVpcInfoByVpcResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

ListVpcInfoByVpcResult::~ListVpcInfoByVpcResult()
{}

void ListVpcInfoByVpcResult::parse(const std::string &payload)
{
	Json::CharReaderBuilder builder;
	Json::CharReader *reader = builder.newCharReader();
	Json::Value *val;
	Json::Value value;
	JSONCPP_STRING *errs;
	reader->parse(payload.data(), payload.data() + payload.size(), val, errs);
	value = *val;
	setRequestId(value["RequestId"].asString());
	auto allVpcInfos = value["VpcInfos"]["VpcInfo"];
	for (auto value : allVpcInfos)
	{
		VpcInfo vpcInfosObject;
		if(!value["InstanceName"].isNull())
			vpcInfosObject.instanceName = value["InstanceName"].asString();
		if(!value["InstanceVpcName"].isNull())
			vpcInfosObject.instanceVpcName = value["InstanceVpcName"].asString();
		if(!value["Endpoint"].isNull())
			vpcInfosObject.endpoint = value["Endpoint"].asString();
		if(!value["Domain"].isNull())
			vpcInfosObject.domain = value["Domain"].asString();
		if(!value["RegionNo"].isNull())
			vpcInfosObject.regionNo = value["RegionNo"].asString();
		vpcInfos_.push_back(vpcInfosObject);
	}
	if(!value["TotalCount"].isNull())
		totalCount_ = std::stol(value["TotalCount"].asString());
	if(!value["PageNum"].isNull())
		pageNum_ = std::stol(value["PageNum"].asString());
	if(!value["PageSize"].isNull())
		pageSize_ = std::stol(value["PageSize"].asString());
	if(!value["VpcId"].isNull())
		vpcId_ = value["VpcId"].asString();

}

long ListVpcInfoByVpcResult::getTotalCount()const
{
	return totalCount_;
}

long ListVpcInfoByVpcResult::getPageNum()const
{
	return pageNum_;
}

long ListVpcInfoByVpcResult::getPageSize()const
{
	return pageSize_;
}

std::string ListVpcInfoByVpcResult::getVpcId()const
{
	return vpcId_;
}

std::vector<ListVpcInfoByVpcResult::VpcInfo> ListVpcInfoByVpcResult::getVpcInfos()const
{
	return vpcInfos_;
}

