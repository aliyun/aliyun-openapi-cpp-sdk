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

#include <alibabacloud/dt-oc-info/model/GetOcIpCertificateResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Dt_oc_info;
using namespace AlibabaCloud::Dt_oc_info::Model;

GetOcIpCertificateResult::GetOcIpCertificateResult() :
	ServiceResult()
{}

GetOcIpCertificateResult::GetOcIpCertificateResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

GetOcIpCertificateResult::~GetOcIpCertificateResult()
{}

void GetOcIpCertificateResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto allDataNode = value["Data"]["DataItem"];
	for (auto valueDataDataItem : allDataNode)
	{
		DataItem dataObject;
		if(!valueDataDataItem["EntName"].isNull())
			dataObject.entName = valueDataDataItem["EntName"].asString();
		if(!valueDataDataItem["CertType"].isNull())
			dataObject.certType = valueDataDataItem["CertType"].asString();
		if(!valueDataDataItem["CertNum"].isNull())
			dataObject.certNum = valueDataDataItem["CertNum"].asString();
		if(!valueDataDataItem["ValidStartDate"].isNull())
			dataObject.validStartDate = valueDataDataItem["ValidStartDate"].asString();
		if(!valueDataDataItem["ValidEndDate"].isNull())
			dataObject.validEndDate = valueDataDataItem["ValidEndDate"].asString();
		if(!valueDataDataItem["AuthorizeDate"].isNull())
			dataObject.authorizeDate = valueDataDataItem["AuthorizeDate"].asString();
		if(!valueDataDataItem["AuthorizeDepartment"].isNull())
			dataObject.authorizeDepartment = valueDataDataItem["AuthorizeDepartment"].asString();
		if(!valueDataDataItem["PubDate"].isNull())
			dataObject.pubDate = valueDataDataItem["PubDate"].asString();
		if(!valueDataDataItem["Province"].isNull())
			dataObject.province = valueDataDataItem["Province"].asString();
		if(!valueDataDataItem["CertScope"].isNull())
			dataObject.certScope = valueDataDataItem["CertScope"].asString();
		data_.push_back(dataObject);
	}
	if(!value["Code"].isNull())
		code_ = value["Code"].asString();
	if(!value["Success"].isNull())
		success_ = value["Success"].asString() == "true";
	if(!value["Message"].isNull())
		message_ = value["Message"].asString();
	if(!value["TotalNum"].isNull())
		totalNum_ = std::stoi(value["TotalNum"].asString());
	if(!value["PageIndex"].isNull())
		pageIndex_ = std::stoi(value["PageIndex"].asString());
	if(!value["PageNum"].isNull())
		pageNum_ = std::stoi(value["PageNum"].asString());

}

int GetOcIpCertificateResult::getTotalNum()const
{
	return totalNum_;
}

std::string GetOcIpCertificateResult::getMessage()const
{
	return message_;
}

int GetOcIpCertificateResult::getPageNum()const
{
	return pageNum_;
}

std::vector<GetOcIpCertificateResult::DataItem> GetOcIpCertificateResult::getData()const
{
	return data_;
}

int GetOcIpCertificateResult::getPageIndex()const
{
	return pageIndex_;
}

std::string GetOcIpCertificateResult::getCode()const
{
	return code_;
}

bool GetOcIpCertificateResult::getSuccess()const
{
	return success_;
}

