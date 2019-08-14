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

#include <alibabacloud/r-kvstore/model/DescribeInstanceSSLResult.h>
#include <json/json.h>

using namespace AlibabaCloud::R_kvstore;
using namespace AlibabaCloud::R_kvstore::Model;

DescribeInstanceSSLResult::DescribeInstanceSSLResult() :
	ServiceResult()
{}

DescribeInstanceSSLResult::DescribeInstanceSSLResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

DescribeInstanceSSLResult::~DescribeInstanceSSLResult()
{}

void DescribeInstanceSSLResult::parse(const std::string &payload)
{
	Json::CharReaderBuilder builder;
	Json::CharReader *reader = builder.newCharReader();
	Json::Value *val;
	Json::Value value;
	JSONCPP_STRING *errs;
	reader->parse(payload.data(), payload.data() + payload.size(), val, errs);
	value = *val;
	setRequestId(value["RequestId"].asString());
	if(!value["InstanceId"].isNull())
		instanceId_ = value["InstanceId"].asString();
	if(!value["SSLEnabled"].isNull())
		sSLEnabled_ = value["SSLEnabled"].asString();
	if(!value["CertCommonName"].isNull())
		certCommonName_ = value["CertCommonName"].asString();
	if(!value["SSLExpiredTime"].isNull())
		sSLExpiredTime_ = value["SSLExpiredTime"].asString();

}

std::string DescribeInstanceSSLResult::getSSLExpiredTime()const
{
	return sSLExpiredTime_;
}

std::string DescribeInstanceSSLResult::getSSLEnabled()const
{
	return sSLEnabled_;
}

std::string DescribeInstanceSSLResult::getInstanceId()const
{
	return instanceId_;
}

std::string DescribeInstanceSSLResult::getCertCommonName()const
{
	return certCommonName_;
}

