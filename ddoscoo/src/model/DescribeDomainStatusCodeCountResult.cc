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

#include <alibabacloud/ddoscoo/model/DescribeDomainStatusCodeCountResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Ddoscoo;
using namespace AlibabaCloud::Ddoscoo::Model;

DescribeDomainStatusCodeCountResult::DescribeDomainStatusCodeCountResult() :
	ServiceResult()
{}

DescribeDomainStatusCodeCountResult::DescribeDomainStatusCodeCountResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

DescribeDomainStatusCodeCountResult::~DescribeDomainStatusCodeCountResult()
{}

void DescribeDomainStatusCodeCountResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	if(!value["Status502"].isNull())
		status502_ = std::stol(value["Status502"].asString());
	if(!value["Status405"].isNull())
		status405_ = std::stol(value["Status405"].asString());
	if(!value["Status3XX"].isNull())
		status3XX_ = std::stol(value["Status3XX"].asString());
	if(!value["Status503"].isNull())
		status503_ = std::stol(value["Status503"].asString());
	if(!value["Status4XX"].isNull())
		status4XX_ = std::stol(value["Status4XX"].asString());
	if(!value["Status2XX"].isNull())
		status2XX_ = std::stol(value["Status2XX"].asString());
	if(!value["Status5XX"].isNull())
		status5XX_ = std::stol(value["Status5XX"].asString());
	if(!value["Status504"].isNull())
		status504_ = std::stol(value["Status504"].asString());
	if(!value["Status200"].isNull())
		status200_ = std::stol(value["Status200"].asString());
	if(!value["Status403"].isNull())
		status403_ = std::stol(value["Status403"].asString());
	if(!value["Status404"].isNull())
		status404_ = std::stol(value["Status404"].asString());
	if(!value["Status501"].isNull())
		status501_ = std::stol(value["Status501"].asString());

}

long DescribeDomainStatusCodeCountResult::getStatus501()const
{
	return status501_;
}

long DescribeDomainStatusCodeCountResult::getStatus502()const
{
	return status502_;
}

long DescribeDomainStatusCodeCountResult::getStatus403()const
{
	return status403_;
}

long DescribeDomainStatusCodeCountResult::getStatus503()const
{
	return status503_;
}

long DescribeDomainStatusCodeCountResult::getStatus404()const
{
	return status404_;
}

long DescribeDomainStatusCodeCountResult::getStatus405()const
{
	return status405_;
}

long DescribeDomainStatusCodeCountResult::getStatus504()const
{
	return status504_;
}

long DescribeDomainStatusCodeCountResult::getStatus2XX()const
{
	return status2XX_;
}

long DescribeDomainStatusCodeCountResult::getStatus200()const
{
	return status200_;
}

long DescribeDomainStatusCodeCountResult::getStatus3XX()const
{
	return status3XX_;
}

long DescribeDomainStatusCodeCountResult::getStatus4XX()const
{
	return status4XX_;
}

long DescribeDomainStatusCodeCountResult::getStatus5XX()const
{
	return status5XX_;
}

