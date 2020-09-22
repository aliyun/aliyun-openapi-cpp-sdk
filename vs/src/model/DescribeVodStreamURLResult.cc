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

#include <alibabacloud/vs/model/DescribeVodStreamURLResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Vs;
using namespace AlibabaCloud::Vs::Model;

DescribeVodStreamURLResult::DescribeVodStreamURLResult() :
	ServiceResult()
{}

DescribeVodStreamURLResult::DescribeVodStreamURLResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

DescribeVodStreamURLResult::~DescribeVodStreamURLResult()
{}

void DescribeVodStreamURLResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	if(!value["Url"].isNull())
		url_ = value["Url"].asString();
	if(!value["OutProtocol"].isNull())
		outProtocol_ = value["OutProtocol"].asString();
	if(!value["Port"].isNull())
		port_ = std::stol(value["Port"].asString());
	if(!value["TxId"].isNull())
		txId_ = value["TxId"].asString();

}

long DescribeVodStreamURLResult::getPort()const
{
	return port_;
}

std::string DescribeVodStreamURLResult::getTxId()const
{
	return txId_;
}

std::string DescribeVodStreamURLResult::getOutProtocol()const
{
	return outProtocol_;
}

std::string DescribeVodStreamURLResult::getUrl()const
{
	return url_;
}

