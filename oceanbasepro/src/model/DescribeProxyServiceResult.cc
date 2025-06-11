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

#include <alibabacloud/oceanbasepro/model/DescribeProxyServiceResult.h>
#include <json/json.h>

using namespace AlibabaCloud::OceanBasePro;
using namespace AlibabaCloud::OceanBasePro::Model;

DescribeProxyServiceResult::DescribeProxyServiceResult() :
	ServiceResult()
{}

DescribeProxyServiceResult::DescribeProxyServiceResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

DescribeProxyServiceResult::~DescribeProxyServiceResult()
{}

void DescribeProxyServiceResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto dataNode = value["Data"];
	if(!dataNode["ProxyClusterId"].isNull())
		data_.proxyClusterId = dataNode["ProxyClusterId"].asString();
	if(!dataNode["ProxyMode"].isNull())
		data_.proxyMode = dataNode["ProxyMode"].asString();
	if(!dataNode["Zone"].isNull())
		data_.zone = dataNode["Zone"].asString();
	if(!dataNode["UnitSpec"].isNull())
		data_.unitSpec = dataNode["UnitSpec"].asString();
	if(!dataNode["UnitNum"].isNull())
		data_.unitNum = std::stol(dataNode["UnitNum"].asString());
	if(!dataNode["CurrentEndpointNum"].isNull())
		data_.currentEndpointNum = std::stol(dataNode["CurrentEndpointNum"].asString());
	if(!dataNode["EndpointNumQuota"].isNull())
		data_.endpointNumQuota = std::stol(dataNode["EndpointNumQuota"].asString());
	if(!dataNode["CreateTime"].isNull())
		data_.createTime = dataNode["CreateTime"].asString();
	if(!dataNode["Status"].isNull())
		data_.status = dataNode["Status"].asString();
	if(!dataNode["ProxyServiceVersion"].isNull())
		data_.proxyServiceVersion = dataNode["ProxyServiceVersion"].asString();
	if(!dataNode["ExpireTime"].isNull())
		data_.expireTime = dataNode["ExpireTime"].asString();
	if(!dataNode["UnitNumLimit"].isNull())
		data_.unitNumLimit = std::stol(dataNode["UnitNumLimit"].asString());
	if(!dataNode["ProxyVersion"].isNull())
		data_.proxyVersion = dataNode["ProxyVersion"].asString();

}

DescribeProxyServiceResult::Data DescribeProxyServiceResult::getData()const
{
	return data_;
}

