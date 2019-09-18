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

#include <alibabacloud/drds/model/DescribeDrdsInstanceNetInfoForInnerResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Drds;
using namespace AlibabaCloud::Drds::Model;

DescribeDrdsInstanceNetInfoForInnerResult::DescribeDrdsInstanceNetInfoForInnerResult() :
	ServiceResult()
{}

DescribeDrdsInstanceNetInfoForInnerResult::DescribeDrdsInstanceNetInfoForInnerResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

DescribeDrdsInstanceNetInfoForInnerResult::~DescribeDrdsInstanceNetInfoForInnerResult()
{}

void DescribeDrdsInstanceNetInfoForInnerResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto allNetInfos = value["NetInfos"]["NetInfo"];
	for (auto value : allNetInfos)
	{
		NetInfo netInfosObject;
		if(!value["IP"].isNull())
			netInfosObject.iP = value["IP"].asString();
		if(!value["Port"].isNull())
			netInfosObject.port = value["Port"].asString();
		if(!value["Type"].isNull())
			netInfosObject.type = value["Type"].asString();
		if(!value["IsForVpc"].isNull())
			netInfosObject.isForVpc = value["IsForVpc"].asString() == "true";
		netInfos_.push_back(netInfosObject);
	}
	if(!value["Success"].isNull())
		success_ = value["Success"].asString() == "true";
	if(!value["DrdsInstanceId"].isNull())
		drdsInstanceId_ = value["DrdsInstanceId"].asString();
	if(!value["NetworkType"].isNull())
		networkType_ = value["NetworkType"].asString();

}

std::vector<DescribeDrdsInstanceNetInfoForInnerResult::NetInfo> DescribeDrdsInstanceNetInfoForInnerResult::getNetInfos()const
{
	return netInfos_;
}

std::string DescribeDrdsInstanceNetInfoForInnerResult::getDrdsInstanceId()const
{
	return drdsInstanceId_;
}

std::string DescribeDrdsInstanceNetInfoForInnerResult::getNetworkType()const
{
	return networkType_;
}

bool DescribeDrdsInstanceNetInfoForInnerResult::getSuccess()const
{
	return success_;
}

