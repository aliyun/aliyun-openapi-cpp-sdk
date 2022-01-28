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

#include <alibabacloud/ens/model/DescribeDataDownloadURLResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Ens;
using namespace AlibabaCloud::Ens::Model;

DescribeDataDownloadURLResult::DescribeDataDownloadURLResult() :
	ServiceResult()
{}

DescribeDataDownloadURLResult::DescribeDataDownloadURLResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

DescribeDataDownloadURLResult::~DescribeDataDownloadURLResult()
{}

void DescribeDataDownloadURLResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto dataNode = value["Data"];
	if(!dataNode["Url"].isNull())
		data_.url = dataNode["Url"].asString();
	if(!dataNode["ExpireTime"].isNull())
		data_.expireTime = dataNode["ExpireTime"].asString();
	auto allServerListNode = dataNode["ServerList"]["ServerListItem"];
	for (auto dataNodeServerListServerListItem : allServerListNode)
	{
		Data::ServerListItem serverListItemObject;
		if(!dataNodeServerListServerListItem["Host"].isNull())
			serverListItemObject.host = dataNodeServerListServerListItem["Host"].asString();
		if(!dataNodeServerListServerListItem["RegionId"].isNull())
			serverListItemObject.regionId = dataNodeServerListServerListItem["RegionId"].asString();
		data_.serverList.push_back(serverListItemObject);
	}
	if(!value["Code"].isNull())
		code_ = std::stol(value["Code"].asString());
	if(!value["Message"].isNull())
		message_ = value["Message"].asString();

}

std::string DescribeDataDownloadURLResult::getMessage()const
{
	return message_;
}

DescribeDataDownloadURLResult::Data DescribeDataDownloadURLResult::getData()const
{
	return data_;
}

long DescribeDataDownloadURLResult::getCode()const
{
	return code_;
}

