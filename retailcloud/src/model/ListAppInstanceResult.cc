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

#include <alibabacloud/retailcloud/model/ListAppInstanceResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Retailcloud;
using namespace AlibabaCloud::Retailcloud::Model;

ListAppInstanceResult::ListAppInstanceResult() :
	ServiceResult()
{}

ListAppInstanceResult::ListAppInstanceResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

ListAppInstanceResult::~ListAppInstanceResult()
{}

void ListAppInstanceResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto allDataNode = value["Data"]["AppInstanceDetail"];
	for (auto valueDataAppInstanceDetail : allDataNode)
	{
		AppInstanceDetail dataObject;
		if(!valueDataAppInstanceDetail["AppInstanceId"].isNull())
			dataObject.appInstanceId = valueDataAppInstanceDetail["AppInstanceId"].asString();
		if(!valueDataAppInstanceDetail["CreateTime"].isNull())
			dataObject.createTime = valueDataAppInstanceDetail["CreateTime"].asString();
		if(!valueDataAppInstanceDetail["Spec"].isNull())
			dataObject.spec = valueDataAppInstanceDetail["Spec"].asString();
		if(!valueDataAppInstanceDetail["RestartCount"].isNull())
			dataObject.restartCount = std::stoi(valueDataAppInstanceDetail["RestartCount"].asString());
		if(!valueDataAppInstanceDetail["HostIp"].isNull())
			dataObject.hostIp = valueDataAppInstanceDetail["HostIp"].asString();
		if(!valueDataAppInstanceDetail["PodIp"].isNull())
			dataObject.podIp = valueDataAppInstanceDetail["PodIp"].asString();
		if(!valueDataAppInstanceDetail["Health"].isNull())
			dataObject.health = valueDataAppInstanceDetail["Health"].asString();
		if(!valueDataAppInstanceDetail["Requests"].isNull())
			dataObject.requests = valueDataAppInstanceDetail["Requests"].asString();
		if(!valueDataAppInstanceDetail["Limits"].isNull())
			dataObject.limits = valueDataAppInstanceDetail["Limits"].asString();
		if(!valueDataAppInstanceDetail["Version"].isNull())
			dataObject.version = valueDataAppInstanceDetail["Version"].asString();
		if(!valueDataAppInstanceDetail["Status"].isNull())
			dataObject.status = valueDataAppInstanceDetail["Status"].asString();
		data_.push_back(dataObject);
	}
	if(!value["Code"].isNull())
		code_ = std::stoi(value["Code"].asString());
	if(!value["PageSize"].isNull())
		pageSize_ = std::stoi(value["PageSize"].asString());
	if(!value["PageNumber"].isNull())
		pageNumber_ = std::stoi(value["PageNumber"].asString());
	if(!value["TotalCount"].isNull())
		totalCount_ = std::stol(value["TotalCount"].asString());
	if(!value["ErrMsg"].isNull())
		errMsg_ = value["ErrMsg"].asString();

}

long ListAppInstanceResult::getTotalCount()const
{
	return totalCount_;
}

int ListAppInstanceResult::getPageSize()const
{
	return pageSize_;
}

int ListAppInstanceResult::getPageNumber()const
{
	return pageNumber_;
}

std::string ListAppInstanceResult::getErrMsg()const
{
	return errMsg_;
}

std::vector<ListAppInstanceResult::AppInstanceDetail> ListAppInstanceResult::getData()const
{
	return data_;
}

int ListAppInstanceResult::getCode()const
{
	return code_;
}

