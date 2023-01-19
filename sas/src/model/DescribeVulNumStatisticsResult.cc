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

#include <alibabacloud/sas/model/DescribeVulNumStatisticsResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Sas;
using namespace AlibabaCloud::Sas::Model;

DescribeVulNumStatisticsResult::DescribeVulNumStatisticsResult() :
	ServiceResult()
{}

DescribeVulNumStatisticsResult::DescribeVulNumStatisticsResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

DescribeVulNumStatisticsResult::~DescribeVulNumStatisticsResult()
{}

void DescribeVulNumStatisticsResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	if(!value["ImageVulAsapSum"].isNull())
		imageVulAsapSum_ = std::stoi(value["ImageVulAsapSum"].asString());
	if(!value["AppNum"].isNull())
		appNum_ = std::stoi(value["AppNum"].asString());
	if(!value["ImageVulLaterSum"].isNull())
		imageVulLaterSum_ = std::stoi(value["ImageVulLaterSum"].asString());
	if(!value["ScaNum"].isNull())
		scaNum_ = std::stoi(value["ScaNum"].asString());
	if(!value["VulLaterSum"].isNull())
		vulLaterSum_ = std::stoi(value["VulLaterSum"].asString());
	if(!value["AppCnt"].isNull())
		appCnt_ = std::stoi(value["AppCnt"].asString());
	if(!value["CveNum"].isNull())
		cveNum_ = std::stoi(value["CveNum"].asString());
	if(!value["EmgNum"].isNull())
		emgNum_ = std::stoi(value["EmgNum"].asString());
	if(!value["CmsDealedTotalNum"].isNull())
		cmsDealedTotalNum_ = std::stoi(value["CmsDealedTotalNum"].asString());
	if(!value["VulDealedTotalNum"].isNull())
		vulDealedTotalNum_ = std::stoi(value["VulDealedTotalNum"].asString());
	if(!value["VulNntfSum"].isNull())
		vulNntfSum_ = std::stoi(value["VulNntfSum"].asString());
	if(!value["CmsNum"].isNull())
		cmsNum_ = std::stoi(value["CmsNum"].asString());
	if(!value["VulAsapSum"].isNull())
		vulAsapSum_ = std::stoi(value["VulAsapSum"].asString());
	if(!value["ImageVulNntfSum"].isNull())
		imageVulNntfSum_ = std::stoi(value["ImageVulNntfSum"].asString());
	if(!value["SysNum"].isNull())
		sysNum_ = std::stoi(value["SysNum"].asString());
	if(!value["ImageVulTotalSum"].isNull())
		imageVulTotalSum_ = std::stoi(value["ImageVulTotalSum"].asString());

}

int DescribeVulNumStatisticsResult::getAppCnt()const
{
	return appCnt_;
}

int DescribeVulNumStatisticsResult::getVulDealedTotalNum()const
{
	return vulDealedTotalNum_;
}

int DescribeVulNumStatisticsResult::getVulLaterSum()const
{
	return vulLaterSum_;
}

int DescribeVulNumStatisticsResult::getImageVulTotalSum()const
{
	return imageVulTotalSum_;
}

int DescribeVulNumStatisticsResult::getEmgNum()const
{
	return emgNum_;
}

int DescribeVulNumStatisticsResult::getAppNum()const
{
	return appNum_;
}

int DescribeVulNumStatisticsResult::getImageVulAsapSum()const
{
	return imageVulAsapSum_;
}

int DescribeVulNumStatisticsResult::getVulAsapSum()const
{
	return vulAsapSum_;
}

int DescribeVulNumStatisticsResult::getVulNntfSum()const
{
	return vulNntfSum_;
}

int DescribeVulNumStatisticsResult::getCveNum()const
{
	return cveNum_;
}

int DescribeVulNumStatisticsResult::getScaNum()const
{
	return scaNum_;
}

int DescribeVulNumStatisticsResult::getCmsNum()const
{
	return cmsNum_;
}

int DescribeVulNumStatisticsResult::getCmsDealedTotalNum()const
{
	return cmsDealedTotalNum_;
}

int DescribeVulNumStatisticsResult::getSysNum()const
{
	return sysNum_;
}

int DescribeVulNumStatisticsResult::getImageVulLaterSum()const
{
	return imageVulLaterSum_;
}

int DescribeVulNumStatisticsResult::getImageVulNntfSum()const
{
	return imageVulNntfSum_;
}

