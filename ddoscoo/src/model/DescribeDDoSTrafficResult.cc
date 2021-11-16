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

#include <alibabacloud/ddoscoo/model/DescribeDDoSTrafficResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Ddoscoo;
using namespace AlibabaCloud::Ddoscoo::Model;

DescribeDDoSTrafficResult::DescribeDDoSTrafficResult() :
	ServiceResult()
{}

DescribeDDoSTrafficResult::DescribeDDoSTrafficResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

DescribeDDoSTrafficResult::~DescribeDDoSTrafficResult()
{}

void DescribeDDoSTrafficResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto allDDoSTrafficPointsNode = value["DDoSTrafficPoints"]["DDoSTrafficPoint"];
	for (auto valueDDoSTrafficPointsDDoSTrafficPoint : allDDoSTrafficPointsNode)
	{
		DDoSTrafficPoint dDoSTrafficPointsObject;
		if(!valueDDoSTrafficPointsDDoSTrafficPoint["Time"].isNull())
			dDoSTrafficPointsObject.time = std::stol(valueDDoSTrafficPointsDDoSTrafficPoint["Time"].asString());
		if(!valueDDoSTrafficPointsDDoSTrafficPoint["DefenseMaxInBps"].isNull())
			dDoSTrafficPointsObject.defenseMaxInBps = std::stol(valueDDoSTrafficPointsDDoSTrafficPoint["DefenseMaxInBps"].asString());
		if(!valueDDoSTrafficPointsDDoSTrafficPoint["SourceMaxInBps"].isNull())
			dDoSTrafficPointsObject.sourceMaxInBps = std::stol(valueDDoSTrafficPointsDDoSTrafficPoint["SourceMaxInBps"].asString());
		dDoSTrafficPoints_.push_back(dDoSTrafficPointsObject);
	}
	if(!value["DefenseInBytes"].isNull())
		defenseInBytes_ = std::stol(value["DefenseInBytes"].asString());
	if(!value["SourceInBytes"].isNull())
		sourceInBytes_ = std::stol(value["SourceInBytes"].asString());

}

long DescribeDDoSTrafficResult::getDefenseInBytes()const
{
	return defenseInBytes_;
}

std::vector<DescribeDDoSTrafficResult::DDoSTrafficPoint> DescribeDDoSTrafficResult::getDDoSTrafficPoints()const
{
	return dDoSTrafficPoints_;
}

long DescribeDDoSTrafficResult::getSourceInBytes()const
{
	return sourceInBytes_;
}

