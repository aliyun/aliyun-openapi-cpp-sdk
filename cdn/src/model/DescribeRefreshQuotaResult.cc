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

#include <alibabacloud/cdn/model/DescribeRefreshQuotaResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Cdn;
using namespace AlibabaCloud::Cdn::Model;

DescribeRefreshQuotaResult::DescribeRefreshQuotaResult() :
	ServiceResult()
{}

DescribeRefreshQuotaResult::DescribeRefreshQuotaResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

DescribeRefreshQuotaResult::~DescribeRefreshQuotaResult()
{}

void DescribeRefreshQuotaResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);

	setRequestId(value["RequestId"].asString());
	urlQuota_ = value["UrlQuota"].asString();
	dirQuota_ = value["DirQuota"].asString();
	urlRemain_ = value["UrlRemain"].asString();
	dirRemain_ = value["DirRemain"].asString();
	preloadQuota_ = value["PreloadQuota"].asString();
	blockQuota_ = value["BlockQuota"].asString();
	preloadRemain_ = value["PreloadRemain"].asString();
	blockRemain_ = value["blockRemain"].asString();

}

std::string DescribeRefreshQuotaResult::getUrlRemain()const
{
	return urlRemain_;
}

void DescribeRefreshQuotaResult::setUrlRemain(const std::string& urlRemain)
{
	urlRemain_ = urlRemain;
}

std::string DescribeRefreshQuotaResult::getPreloadRemain()const
{
	return preloadRemain_;
}

void DescribeRefreshQuotaResult::setPreloadRemain(const std::string& preloadRemain)
{
	preloadRemain_ = preloadRemain;
}

std::string DescribeRefreshQuotaResult::getBlockRemain()const
{
	return blockRemain_;
}

void DescribeRefreshQuotaResult::setBlockRemain(const std::string& blockRemain)
{
	blockRemain_ = blockRemain;
}

std::string DescribeRefreshQuotaResult::getDirRemain()const
{
	return dirRemain_;
}

void DescribeRefreshQuotaResult::setDirRemain(const std::string& dirRemain)
{
	dirRemain_ = dirRemain;
}

std::string DescribeRefreshQuotaResult::getBlockQuota()const
{
	return blockQuota_;
}

void DescribeRefreshQuotaResult::setBlockQuota(const std::string& blockQuota)
{
	blockQuota_ = blockQuota;
}

std::string DescribeRefreshQuotaResult::getUrlQuota()const
{
	return urlQuota_;
}

void DescribeRefreshQuotaResult::setUrlQuota(const std::string& urlQuota)
{
	urlQuota_ = urlQuota;
}

std::string DescribeRefreshQuotaResult::getDirQuota()const
{
	return dirQuota_;
}

void DescribeRefreshQuotaResult::setDirQuota(const std::string& dirQuota)
{
	dirQuota_ = dirQuota;
}

std::string DescribeRefreshQuotaResult::getPreloadQuota()const
{
	return preloadQuota_;
}

void DescribeRefreshQuotaResult::setPreloadQuota(const std::string& preloadQuota)
{
	preloadQuota_ = preloadQuota;
}

