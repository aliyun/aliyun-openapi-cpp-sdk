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

#include <alibabacloud/retailcloud/model/ListSlbAPsResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Retailcloud;
using namespace AlibabaCloud::Retailcloud::Model;

ListSlbAPsResult::ListSlbAPsResult() :
	ServiceResult()
{}

ListSlbAPsResult::ListSlbAPsResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

ListSlbAPsResult::~ListSlbAPsResult()
{}

void ListSlbAPsResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto allDataNode = value["Data"]["SlbAPInstance"];
	for (auto valueDataSlbAPInstance : allDataNode)
	{
		SlbAPInstance dataObject;
		if(!valueDataSlbAPInstance["AppId"].isNull())
			dataObject.appId = std::stol(valueDataSlbAPInstance["AppId"].asString());
		if(!valueDataSlbAPInstance["CookieTimeout"].isNull())
			dataObject.cookieTimeout = std::stoi(valueDataSlbAPInstance["CookieTimeout"].asString());
		if(!valueDataSlbAPInstance["EnvId"].isNull())
			dataObject.envId = std::stol(valueDataSlbAPInstance["EnvId"].asString());
		if(!valueDataSlbAPInstance["EstablishedTimeout"].isNull())
			dataObject.establishedTimeout = std::stoi(valueDataSlbAPInstance["EstablishedTimeout"].asString());
		if(!valueDataSlbAPInstance["ListenerPort"].isNull())
			dataObject.listenerPort = std::stoi(valueDataSlbAPInstance["ListenerPort"].asString());
		if(!valueDataSlbAPInstance["Name"].isNull())
			dataObject.name = valueDataSlbAPInstance["Name"].asString();
		if(!valueDataSlbAPInstance["NetworkMode"].isNull())
			dataObject.networkMode = valueDataSlbAPInstance["NetworkMode"].asString();
		if(!valueDataSlbAPInstance["Protocol"].isNull())
			dataObject.protocol = valueDataSlbAPInstance["Protocol"].asString();
		if(!valueDataSlbAPInstance["RealServerPort"].isNull())
			dataObject.realServerPort = std::stoi(valueDataSlbAPInstance["RealServerPort"].asString());
		if(!valueDataSlbAPInstance["SlbAPId"].isNull())
			dataObject.slbAPId = std::stol(valueDataSlbAPInstance["SlbAPId"].asString());
		if(!valueDataSlbAPInstance["SlbId"].isNull())
			dataObject.slbId = valueDataSlbAPInstance["SlbId"].asString();
		if(!valueDataSlbAPInstance["SlbIp"].isNull())
			dataObject.slbIp = valueDataSlbAPInstance["SlbIp"].asString();
		if(!valueDataSlbAPInstance["SslCertId"].isNull())
			dataObject.sslCertId = valueDataSlbAPInstance["SslCertId"].asString();
		if(!valueDataSlbAPInstance["StickySession"].isNull())
			dataObject.stickySession = std::stoi(valueDataSlbAPInstance["StickySession"].asString());
		data_.push_back(dataObject);
	}
	if(!value["Code"].isNull())
		code_ = std::stoi(value["Code"].asString());
	if(!value["ErrorMsg"].isNull())
		errorMsg_ = value["ErrorMsg"].asString();
	if(!value["PageNumber"].isNull())
		pageNumber_ = std::stoi(value["PageNumber"].asString());
	if(!value["PageSize"].isNull())
		pageSize_ = std::stoi(value["PageSize"].asString());
	if(!value["TotalCount"].isNull())
		totalCount_ = std::stol(value["TotalCount"].asString());

}

long ListSlbAPsResult::getTotalCount()const
{
	return totalCount_;
}

int ListSlbAPsResult::getPageSize()const
{
	return pageSize_;
}

int ListSlbAPsResult::getPageNumber()const
{
	return pageNumber_;
}

std::string ListSlbAPsResult::getErrorMsg()const
{
	return errorMsg_;
}

std::vector<ListSlbAPsResult::SlbAPInstance> ListSlbAPsResult::getData()const
{
	return data_;
}

int ListSlbAPsResult::getCode()const
{
	return code_;
}

