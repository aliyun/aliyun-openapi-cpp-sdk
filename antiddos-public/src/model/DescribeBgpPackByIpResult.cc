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

#include <alibabacloud/antiddos-public/model/DescribeBgpPackByIpResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Antiddos_public;
using namespace AlibabaCloud::Antiddos_public::Model;

DescribeBgpPackByIpResult::DescribeBgpPackByIpResult() :
	ServiceResult()
{}

DescribeBgpPackByIpResult::DescribeBgpPackByIpResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

DescribeBgpPackByIpResult::~DescribeBgpPackByIpResult()
{}

void DescribeBgpPackByIpResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto ddosbgpInfoNode = value["DdosbgpInfo"];
	if(!ddosbgpInfoNode["Ip"].isNull())
		ddosbgpInfo_.ip = ddosbgpInfoNode["Ip"].asString();
	if(!ddosbgpInfoNode["ExpireTime"].isNull())
		ddosbgpInfo_.expireTime = std::stol(ddosbgpInfoNode["ExpireTime"].asString());
	if(!ddosbgpInfoNode["ElasticThreshold"].isNull())
		ddosbgpInfo_.elasticThreshold = std::stoi(ddosbgpInfoNode["ElasticThreshold"].asString());
	if(!ddosbgpInfoNode["BaseThreshold"].isNull())
		ddosbgpInfo_.baseThreshold = std::stoi(ddosbgpInfoNode["BaseThreshold"].asString());
	if(!ddosbgpInfoNode["DdosbgpInstanceId"].isNull())
		ddosbgpInfo_.ddosbgpInstanceId = ddosbgpInfoNode["DdosbgpInstanceId"].asString();
	if(!value["Code"].isNull())
		code_ = std::stoi(value["Code"].asString());
	if(!value["Success"].isNull())
		success_ = value["Success"].asString() == "true";

}

DescribeBgpPackByIpResult::DdosbgpInfo DescribeBgpPackByIpResult::getDdosbgpInfo()const
{
	return ddosbgpInfo_;
}

int DescribeBgpPackByIpResult::getCode()const
{
	return code_;
}

bool DescribeBgpPackByIpResult::getSuccess()const
{
	return success_;
}

