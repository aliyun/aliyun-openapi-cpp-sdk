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

#include <alibabacloud/edas/model/ListVpcResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Edas;
using namespace AlibabaCloud::Edas::Model;

ListVpcResult::ListVpcResult() :
	ServiceResult()
{}

ListVpcResult::ListVpcResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

ListVpcResult::~ListVpcResult()
{}

void ListVpcResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto allVpcListNode = value["VpcList"]["VpcEntity"];
	for (auto valueVpcListVpcEntity : allVpcListNode)
	{
		VpcEntity vpcListObject;
		if(!valueVpcListVpcEntity["VpcId"].isNull())
			vpcListObject.vpcId = valueVpcListVpcEntity["VpcId"].asString();
		if(!valueVpcListVpcEntity["VpcName"].isNull())
			vpcListObject.vpcName = valueVpcListVpcEntity["VpcName"].asString();
		if(!valueVpcListVpcEntity["RegionId"].isNull())
			vpcListObject.regionId = valueVpcListVpcEntity["RegionId"].asString();
		if(!valueVpcListVpcEntity["UserId"].isNull())
			vpcListObject.userId = valueVpcListVpcEntity["UserId"].asString();
		if(!valueVpcListVpcEntity["Expired"].isNull())
			vpcListObject.expired = valueVpcListVpcEntity["Expired"].asString() == "true";
		if(!valueVpcListVpcEntity["EcsNum"].isNull())
			vpcListObject.ecsNum = std::stoi(valueVpcListVpcEntity["EcsNum"].asString());
		vpcList_.push_back(vpcListObject);
	}
	if(!value["Code"].isNull())
		code_ = std::stoi(value["Code"].asString());
	if(!value["Message"].isNull())
		message_ = value["Message"].asString();

}

std::string ListVpcResult::getMessage()const
{
	return message_;
}

std::vector<ListVpcResult::VpcEntity> ListVpcResult::getVpcList()const
{
	return vpcList_;
}

int ListVpcResult::getCode()const
{
	return code_;
}

