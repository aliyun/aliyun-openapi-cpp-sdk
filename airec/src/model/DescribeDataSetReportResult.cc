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

#include <alibabacloud/airec/model/DescribeDataSetReportResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Airec;
using namespace AlibabaCloud::Airec::Model;

DescribeDataSetReportResult::DescribeDataSetReportResult() :
	ServiceResult()
{}

DescribeDataSetReportResult::DescribeDataSetReportResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

DescribeDataSetReportResult::~DescribeDataSetReportResult()
{}

void DescribeDataSetReportResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto resultNode = value["Result"];
	auto allDetailNode = resultNode["Detail"]["DetailItem"];
	for (auto resultNodeDetailDetailItem : allDetailNode)
	{
		Result::DetailItem detailItemObject;
		if(!resultNodeDetailDetailItem["BizDate"].isNull())
			detailItemObject.bizDate = std::stol(resultNodeDetailDetailItem["BizDate"].asString());
		if(!resultNodeDetailDetailItem["Pv"].isNull())
			detailItemObject.pv = std::stol(resultNodeDetailDetailItem["Pv"].asString());
		if(!resultNodeDetailDetailItem["Uv"].isNull())
			detailItemObject.uv = std::stol(resultNodeDetailDetailItem["Uv"].asString());
		if(!resultNodeDetailDetailItem["Click"].isNull())
			detailItemObject.click = std::stol(resultNodeDetailDetailItem["Click"].asString());
		if(!resultNodeDetailDetailItem["Ctr"].isNull())
			detailItemObject.ctr = std::stof(resultNodeDetailDetailItem["Ctr"].asString());
		if(!resultNodeDetailDetailItem["UvCtr"].isNull())
			detailItemObject.uvCtr = std::stof(resultNodeDetailDetailItem["UvCtr"].asString());
		if(!resultNodeDetailDetailItem["PerUvBhv"].isNull())
			detailItemObject.perUvBhv = std::stof(resultNodeDetailDetailItem["PerUvBhv"].asString());
		if(!resultNodeDetailDetailItem["PerUvClick"].isNull())
			detailItemObject.perUvClick = std::stof(resultNodeDetailDetailItem["PerUvClick"].asString());
		if(!resultNodeDetailDetailItem["ClickUser"].isNull())
			detailItemObject.clickUser = std::stol(resultNodeDetailDetailItem["ClickUser"].asString());
		if(!resultNodeDetailDetailItem["ActiveItem"].isNull())
			detailItemObject.activeItem = std::stol(resultNodeDetailDetailItem["ActiveItem"].asString());
		result_.detail.push_back(detailItemObject);
	}
	auto overallNode = resultNode["Overall"];
	if(!overallNode["BhvCount"].isNull())
		result_.overall.bhvCount = std::stoi(overallNode["BhvCount"].asString());
	if(!overallNode["ItemItemCount"].isNull())
		result_.overall.itemItemCount = std::stoi(overallNode["ItemItemCount"].asString());
	if(!overallNode["UserUserCount"].isNull())
		result_.overall.userUserCount = std::stoi(overallNode["UserUserCount"].asString());
	if(!overallNode["ItemRepetitiveRate"].isNull())
		result_.overall.itemRepetitiveRate = std::stof(overallNode["ItemRepetitiveRate"].asString());
	if(!overallNode["UserRepetitiveRate"].isNull())
		result_.overall.userRepetitiveRate = std::stof(overallNode["UserRepetitiveRate"].asString());
	if(!overallNode["UserLegalRate"].isNull())
		result_.overall.userLegalRate = std::stof(overallNode["UserLegalRate"].asString());
	if(!overallNode["ItemLegalRate"].isNull())
		result_.overall.itemLegalRate = std::stof(overallNode["ItemLegalRate"].asString());
	if(!overallNode["BhvLegalRate"].isNull())
		result_.overall.bhvLegalRate = std::stof(overallNode["BhvLegalRate"].asString());
	if(!overallNode["UserCompleteRate"].isNull())
		result_.overall.userCompleteRate = std::stof(overallNode["UserCompleteRate"].asString());
	if(!overallNode["ItemCompleteRate"].isNull())
		result_.overall.itemCompleteRate = std::stof(overallNode["ItemCompleteRate"].asString());
	if(!overallNode["UserLoginRate"].isNull())
		result_.overall.userLoginRate = std::stof(overallNode["UserLoginRate"].asString());
	if(!overallNode["ItemLoginRate"].isNull())
		result_.overall.itemLoginRate = std::stof(overallNode["ItemLoginRate"].asString());
	if(!value["Code"].isNull())
		code_ = value["Code"].asString();
	if(!value["Message"].isNull())
		message_ = value["Message"].asString();

}

std::string DescribeDataSetReportResult::getMessage()const
{
	return message_;
}

std::string DescribeDataSetReportResult::getCode()const
{
	return code_;
}

DescribeDataSetReportResult::Result DescribeDataSetReportResult::getResult()const
{
	return result_;
}

