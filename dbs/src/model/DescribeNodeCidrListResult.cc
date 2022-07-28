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

#include <alibabacloud/dbs/model/DescribeNodeCidrListResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Dbs;
using namespace AlibabaCloud::Dbs::Model;

DescribeNodeCidrListResult::DescribeNodeCidrListResult() :
	ServiceResult()
{}

DescribeNodeCidrListResult::DescribeNodeCidrListResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

DescribeNodeCidrListResult::~DescribeNodeCidrListResult()
{}

void DescribeNodeCidrListResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto allIntranetIPs = value["IntranetIPs"]["IntranetIP"];
	for (const auto &item : allIntranetIPs)
		intranetIPs_.push_back(item.asString());
	auto allInternetIPs = value["InternetIPs"]["InternetIP"];
	for (const auto &item : allInternetIPs)
		internetIPs_.push_back(item.asString());
	if(!value["HttpStatusCode"].isNull())
		httpStatusCode_ = std::stoi(value["HttpStatusCode"].asString());
	if(!value["ErrCode"].isNull())
		errCode_ = value["ErrCode"].asString();
	if(!value["Success"].isNull())
		success_ = value["Success"].asString() == "true";
	if(!value["ErrMessage"].isNull())
		errMessage_ = value["ErrMessage"].asString();

}

std::vector<std::string> DescribeNodeCidrListResult::getInternetIPs()const
{
	return internetIPs_;
}

int DescribeNodeCidrListResult::getHttpStatusCode()const
{
	return httpStatusCode_;
}

std::vector<std::string> DescribeNodeCidrListResult::getIntranetIPs()const
{
	return intranetIPs_;
}

std::string DescribeNodeCidrListResult::getErrMessage()const
{
	return errMessage_;
}

bool DescribeNodeCidrListResult::getSuccess()const
{
	return success_;
}

std::string DescribeNodeCidrListResult::getErrCode()const
{
	return errCode_;
}

