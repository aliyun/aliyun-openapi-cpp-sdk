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

#include <alibabacloud/aegis/model/DescribeWhiteListAssetRequest.h>

using AlibabaCloud::Aegis::Model::DescribeWhiteListAssetRequest;

DescribeWhiteListAssetRequest::DescribeWhiteListAssetRequest() :
	RpcServiceRequest("aegis", "2016-11-11", "DescribeWhiteListAsset")
{}

DescribeWhiteListAssetRequest::~DescribeWhiteListAssetRequest()
{}

int DescribeWhiteListAssetRequest::getType()const
{
	return type_;
}

void DescribeWhiteListAssetRequest::setType(int type)
{
	type_ = type;
	setCoreParameter("Type", std::to_string(type));
}

std::string DescribeWhiteListAssetRequest::getSourceIp()const
{
	return sourceIp_;
}

void DescribeWhiteListAssetRequest::setSourceIp(const std::string& sourceIp)
{
	sourceIp_ = sourceIp;
	setCoreParameter("SourceIp", sourceIp);
}

long DescribeWhiteListAssetRequest::getLastMaxId()const
{
	return lastMaxId_;
}

void DescribeWhiteListAssetRequest::setLastMaxId(long lastMaxId)
{
	lastMaxId_ = lastMaxId;
	setCoreParameter("LastMaxId", std::to_string(lastMaxId));
}

int DescribeWhiteListAssetRequest::getPageSize()const
{
	return pageSize_;
}

void DescribeWhiteListAssetRequest::setPageSize(int pageSize)
{
	pageSize_ = pageSize;
	setCoreParameter("PageSize", std::to_string(pageSize));
}

long DescribeWhiteListAssetRequest::getStrategyId()const
{
	return strategyId_;
}

void DescribeWhiteListAssetRequest::setStrategyId(long strategyId)
{
	strategyId_ = strategyId;
	setCoreParameter("StrategyId", std::to_string(strategyId));
}

std::string DescribeWhiteListAssetRequest::getLang()const
{
	return lang_;
}

void DescribeWhiteListAssetRequest::setLang(const std::string& lang)
{
	lang_ = lang;
	setCoreParameter("Lang", lang);
}

