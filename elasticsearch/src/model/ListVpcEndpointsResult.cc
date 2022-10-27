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

#include <alibabacloud/elasticsearch/model/ListVpcEndpointsResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Elasticsearch;
using namespace AlibabaCloud::Elasticsearch::Model;

ListVpcEndpointsResult::ListVpcEndpointsResult() :
	ServiceResult()
{}

ListVpcEndpointsResult::ListVpcEndpointsResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

ListVpcEndpointsResult::~ListVpcEndpointsResult()
{}

void ListVpcEndpointsResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto allResultNode = value["Result"]["ResultItem"];
	for (auto valueResultResultItem : allResultNode)
	{
		ResultItem resultObject;
		if(!valueResultResultItem["endpointBusinessStatus"].isNull())
			resultObject.endpointBusinessStatus = valueResultResultItem["endpointBusinessStatus"].asString();
		if(!valueResultResultItem["serviceId"].isNull())
			resultObject.serviceId = valueResultResultItem["serviceId"].asString();
		if(!valueResultResultItem["endpointName"].isNull())
			resultObject.endpointName = valueResultResultItem["endpointName"].asString();
		if(!valueResultResultItem["endpointId"].isNull())
			resultObject.endpointId = valueResultResultItem["endpointId"].asString();
		if(!valueResultResultItem["serviceName"].isNull())
			resultObject.serviceName = valueResultResultItem["serviceName"].asString();
		if(!valueResultResultItem["createTime"].isNull())
			resultObject.createTime = valueResultResultItem["createTime"].asString();
		if(!valueResultResultItem["connectionStatus"].isNull())
			resultObject.connectionStatus = valueResultResultItem["connectionStatus"].asString();
		if(!valueResultResultItem["endpointDomain"].isNull())
			resultObject.endpointDomain = valueResultResultItem["endpointDomain"].asString();
		if(!valueResultResultItem["endpointStatus"].isNull())
			resultObject.endpointStatus = valueResultResultItem["endpointStatus"].asString();
		result_.push_back(resultObject);
	}

}

std::vector<ListVpcEndpointsResult::ResultItem> ListVpcEndpointsResult::getResult()const
{
	return result_;
}

