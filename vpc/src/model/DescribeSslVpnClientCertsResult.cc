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

#include <alibabacloud/vpc/model/DescribeSslVpnClientCertsResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Vpc;
using namespace AlibabaCloud::Vpc::Model;

DescribeSslVpnClientCertsResult::DescribeSslVpnClientCertsResult() :
	ServiceResult()
{}

DescribeSslVpnClientCertsResult::DescribeSslVpnClientCertsResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

DescribeSslVpnClientCertsResult::~DescribeSslVpnClientCertsResult()
{}

void DescribeSslVpnClientCertsResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto allSslVpnClientCertKeysNode = value["SslVpnClientCertKeys"]["SslVpnClientCertKey"];
	for (auto valueSslVpnClientCertKeysSslVpnClientCertKey : allSslVpnClientCertKeysNode)
	{
		SslVpnClientCertKey sslVpnClientCertKeysObject;
		if(!valueSslVpnClientCertKeysSslVpnClientCertKey["Status"].isNull())
			sslVpnClientCertKeysObject.status = valueSslVpnClientCertKeysSslVpnClientCertKey["Status"].asString();
		if(!valueSslVpnClientCertKeysSslVpnClientCertKey["EndTime"].isNull())
			sslVpnClientCertKeysObject.endTime = std::stol(valueSslVpnClientCertKeysSslVpnClientCertKey["EndTime"].asString());
		if(!valueSslVpnClientCertKeysSslVpnClientCertKey["CreateTime"].isNull())
			sslVpnClientCertKeysObject.createTime = std::stol(valueSslVpnClientCertKeysSslVpnClientCertKey["CreateTime"].asString());
		if(!valueSslVpnClientCertKeysSslVpnClientCertKey["SslVpnClientCertId"].isNull())
			sslVpnClientCertKeysObject.sslVpnClientCertId = valueSslVpnClientCertKeysSslVpnClientCertKey["SslVpnClientCertId"].asString();
		if(!valueSslVpnClientCertKeysSslVpnClientCertKey["SslVpnServerId"].isNull())
			sslVpnClientCertKeysObject.sslVpnServerId = valueSslVpnClientCertKeysSslVpnClientCertKey["SslVpnServerId"].asString();
		if(!valueSslVpnClientCertKeysSslVpnClientCertKey["Name"].isNull())
			sslVpnClientCertKeysObject.name = valueSslVpnClientCertKeysSslVpnClientCertKey["Name"].asString();
		if(!valueSslVpnClientCertKeysSslVpnClientCertKey["RegionId"].isNull())
			sslVpnClientCertKeysObject.regionId = valueSslVpnClientCertKeysSslVpnClientCertKey["RegionId"].asString();
		if(!valueSslVpnClientCertKeysSslVpnClientCertKey["ResourceGroupId"].isNull())
			sslVpnClientCertKeysObject.resourceGroupId = valueSslVpnClientCertKeysSslVpnClientCertKey["ResourceGroupId"].asString();
		sslVpnClientCertKeys_.push_back(sslVpnClientCertKeysObject);
	}
	if(!value["PageSize"].isNull())
		pageSize_ = std::stoi(value["PageSize"].asString());
	if(!value["PageNumber"].isNull())
		pageNumber_ = std::stoi(value["PageNumber"].asString());
	if(!value["TotalCount"].isNull())
		totalCount_ = std::stoi(value["TotalCount"].asString());

}

int DescribeSslVpnClientCertsResult::getTotalCount()const
{
	return totalCount_;
}

int DescribeSslVpnClientCertsResult::getPageSize()const
{
	return pageSize_;
}

int DescribeSslVpnClientCertsResult::getPageNumber()const
{
	return pageNumber_;
}

std::vector<DescribeSslVpnClientCertsResult::SslVpnClientCertKey> DescribeSslVpnClientCertsResult::getSslVpnClientCertKeys()const
{
	return sslVpnClientCertKeys_;
}

