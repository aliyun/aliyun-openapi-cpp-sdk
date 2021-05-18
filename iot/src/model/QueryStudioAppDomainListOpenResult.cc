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

#include <alibabacloud/iot/model/QueryStudioAppDomainListOpenResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Iot;
using namespace AlibabaCloud::Iot::Model;

QueryStudioAppDomainListOpenResult::QueryStudioAppDomainListOpenResult() :
	ServiceResult()
{}

QueryStudioAppDomainListOpenResult::QueryStudioAppDomainListOpenResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

QueryStudioAppDomainListOpenResult::~QueryStudioAppDomainListOpenResult()
{}

void QueryStudioAppDomainListOpenResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto dataNode = value["Data"];
	if(!dataNode["PageNo"].isNull())
		data_.pageNo = std::stoi(dataNode["PageNo"].asString());
	if(!dataNode["PageSize"].isNull())
		data_.pageSize = std::stoi(dataNode["PageSize"].asString());
	if(!dataNode["Total"].isNull())
		data_.total = std::stoi(dataNode["Total"].asString());
	if(!dataNode["TotalPage"].isNull())
		data_.totalPage = std::stoi(dataNode["TotalPage"].asString());
	auto allListNode = dataNode["List"]["DomainInfo"];
	for (auto dataNodeListDomainInfo : allListNode)
	{
		Data::DomainInfo domainInfoObject;
		if(!dataNodeListDomainInfo["TenantId"].isNull())
			domainInfoObject.tenantId = dataNodeListDomainInfo["TenantId"].asString();
		if(!dataNodeListDomainInfo["AppId"].isNull())
			domainInfoObject.appId = dataNodeListDomainInfo["AppId"].asString();
		if(!dataNodeListDomainInfo["ProjectId"].isNull())
			domainInfoObject.projectId = dataNodeListDomainInfo["ProjectId"].asString();
		if(!dataNodeListDomainInfo["Host"].isNull())
			domainInfoObject.host = dataNodeListDomainInfo["Host"].asString();
		if(!dataNodeListDomainInfo["Id"].isNull())
			domainInfoObject.id = std::stoi(dataNodeListDomainInfo["Id"].asString());
		if(!dataNodeListDomainInfo["IsBeian"].isNull())
			domainInfoObject.isBeian = dataNodeListDomainInfo["IsBeian"].asString();
		if(!dataNodeListDomainInfo["Protocol"].isNull())
			domainInfoObject.protocol = dataNodeListDomainInfo["Protocol"].asString();
		if(!dataNodeListDomainInfo["GmtCreate"].isNull())
			domainInfoObject.gmtCreate = dataNodeListDomainInfo["GmtCreate"].asString();
		if(!dataNodeListDomainInfo["GmtModified"].isNull())
			domainInfoObject.gmtModified = dataNodeListDomainInfo["GmtModified"].asString();
		data_.list.push_back(domainInfoObject);
	}
	if(!value["Success"].isNull())
		success_ = value["Success"].asString() == "true";
	if(!value["Code"].isNull())
		code_ = value["Code"].asString();
	if(!value["ErrorMessage"].isNull())
		errorMessage_ = value["ErrorMessage"].asString();

}

QueryStudioAppDomainListOpenResult::Data QueryStudioAppDomainListOpenResult::getData()const
{
	return data_;
}

std::string QueryStudioAppDomainListOpenResult::getErrorMessage()const
{
	return errorMessage_;
}

std::string QueryStudioAppDomainListOpenResult::getCode()const
{
	return code_;
}

bool QueryStudioAppDomainListOpenResult::getSuccess()const
{
	return success_;
}

