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

#include <alibabacloud/retailcloud/model/DescribeSlbAPDetailResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Retailcloud;
using namespace AlibabaCloud::Retailcloud::Model;

DescribeSlbAPDetailResult::DescribeSlbAPDetailResult() :
	ServiceResult()
{}

DescribeSlbAPDetailResult::DescribeSlbAPDetailResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

DescribeSlbAPDetailResult::~DescribeSlbAPDetailResult()
{}

void DescribeSlbAPDetailResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto resultNode = value["Result"];
	if(!resultNode["AppId"].isNull())
		result_.appId = std::stol(resultNode["AppId"].asString());
	if(!resultNode["CookieTimeout"].isNull())
		result_.cookieTimeout = std::stoi(resultNode["CookieTimeout"].asString());
	if(!resultNode["EnvId"].isNull())
		result_.envId = std::stol(resultNode["EnvId"].asString());
	if(!resultNode["EstablishedTimeout"].isNull())
		result_.establishedTimeout = std::stoi(resultNode["EstablishedTimeout"].asString());
	if(!resultNode["ListenerPort"].isNull())
		result_.listenerPort = std::stoi(resultNode["ListenerPort"].asString());
	if(!resultNode["Name"].isNull())
		result_.name = resultNode["Name"].asString();
	if(!resultNode["NetworkMode"].isNull())
		result_.networkMode = resultNode["NetworkMode"].asString();
	if(!resultNode["Protocol"].isNull())
		result_.protocol = resultNode["Protocol"].asString();
	if(!resultNode["RealServerPort"].isNull())
		result_.realServerPort = std::stoi(resultNode["RealServerPort"].asString());
	if(!resultNode["SlbAPId"].isNull())
		result_.slbAPId = std::stol(resultNode["SlbAPId"].asString());
	if(!resultNode["SlbId"].isNull())
		result_.slbId = resultNode["SlbId"].asString();
	if(!resultNode["SlbIp"].isNull())
		result_.slbIp = resultNode["SlbIp"].asString();
	if(!resultNode["SslCertId"].isNull())
		result_.sslCertId = resultNode["SslCertId"].asString();
	if(!resultNode["StickySession"].isNull())
		result_.stickySession = std::stoi(resultNode["StickySession"].asString());
	if(!value["Code"].isNull())
		code_ = std::stoi(value["Code"].asString());
	if(!value["ErrMsg"].isNull())
		errMsg_ = value["ErrMsg"].asString();
	if(!value["Success"].isNull())
		success_ = value["Success"].asString() == "true";

}

std::string DescribeSlbAPDetailResult::getErrMsg()const
{
	return errMsg_;
}

int DescribeSlbAPDetailResult::getCode()const
{
	return code_;
}

bool DescribeSlbAPDetailResult::getSuccess()const
{
	return success_;
}

DescribeSlbAPDetailResult::Result DescribeSlbAPDetailResult::getResult()const
{
	return result_;
}

