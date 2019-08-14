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

#include <alibabacloud/aegis/model/DescribeLogShipperStatusResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Aegis;
using namespace AlibabaCloud::Aegis::Model;

DescribeLogShipperStatusResult::DescribeLogShipperStatusResult() :
	ServiceResult()
{}

DescribeLogShipperStatusResult::DescribeLogShipperStatusResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

DescribeLogShipperStatusResult::~DescribeLogShipperStatusResult()
{}

void DescribeLogShipperStatusResult::parse(const std::string &payload)
{
	Json::CharReaderBuilder builder;
	Json::CharReader *reader = builder.newCharReader();
	Json::Value *val;
	Json::Value value;
	JSONCPP_STRING *errs;
	reader->parse(payload.data(), payload.data() + payload.size(), val, errs);
	value = *val;
	setRequestId(value["RequestId"].asString());
	auto logShipperStatusNode = value["LogShipperStatus"];
	if(!logShipperStatusNode["BuyStatus"].isNull())
		logShipperStatus_.buyStatus = logShipperStatusNode["BuyStatus"].asString();
	if(!logShipperStatusNode["AuthStatus"].isNull())
		logShipperStatus_.authStatus = logShipperStatusNode["AuthStatus"].asString();
	if(!logShipperStatusNode["OpenStatus"].isNull())
		logShipperStatus_.openStatus = logShipperStatusNode["OpenStatus"].asString();
	if(!logShipperStatusNode["SlsServiceStatus"].isNull())
		logShipperStatus_.slsServiceStatus = logShipperStatusNode["SlsServiceStatus"].asString();

}

DescribeLogShipperStatusResult::LogShipperStatus DescribeLogShipperStatusResult::getLogShipperStatus()const
{
	return logShipperStatus_;
}

