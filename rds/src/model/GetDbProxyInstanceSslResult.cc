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

#include <alibabacloud/rds/model/GetDbProxyInstanceSslResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Rds;
using namespace AlibabaCloud::Rds::Model;

GetDbProxyInstanceSslResult::GetDbProxyInstanceSslResult() :
	ServiceResult()
{}

GetDbProxyInstanceSslResult::GetDbProxyInstanceSslResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

GetDbProxyInstanceSslResult::~GetDbProxyInstanceSslResult()
{}

void GetDbProxyInstanceSslResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto allDbProxyCertListItemsNode = value["DbProxyCertListItems"]["DbProxyCertListItemsItem"];
	for (auto valueDbProxyCertListItemsDbProxyCertListItemsItem : allDbProxyCertListItemsNode)
	{
		DbProxyCertListItemsItem dbProxyCertListItemsObject;
		if(!valueDbProxyCertListItemsDbProxyCertListItemsItem["CertCommonName"].isNull())
			dbProxyCertListItemsObject.certCommonName = valueDbProxyCertListItemsDbProxyCertListItemsItem["CertCommonName"].asString();
		if(!valueDbProxyCertListItemsDbProxyCertListItemsItem["DbInstanceName"].isNull())
			dbProxyCertListItemsObject.dbInstanceName = valueDbProxyCertListItemsDbProxyCertListItemsItem["DbInstanceName"].asString();
		if(!valueDbProxyCertListItemsDbProxyCertListItemsItem["EndpointName"].isNull())
			dbProxyCertListItemsObject.endpointName = valueDbProxyCertListItemsDbProxyCertListItemsItem["EndpointName"].asString();
		if(!valueDbProxyCertListItemsDbProxyCertListItemsItem["EndpointType"].isNull())
			dbProxyCertListItemsObject.endpointType = valueDbProxyCertListItemsDbProxyCertListItemsItem["EndpointType"].asString();
		if(!valueDbProxyCertListItemsDbProxyCertListItemsItem["SslExpiredTime"].isNull())
			dbProxyCertListItemsObject.sslExpiredTime = valueDbProxyCertListItemsDbProxyCertListItemsItem["SslExpiredTime"].asString();
		dbProxyCertListItems_.push_back(dbProxyCertListItemsObject);
	}

}

std::vector<GetDbProxyInstanceSslResult::DbProxyCertListItemsItem> GetDbProxyInstanceSslResult::getDbProxyCertListItems()const
{
	return dbProxyCertListItems_;
}

