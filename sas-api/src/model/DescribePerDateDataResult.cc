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

#include <alibabacloud/sas-api/model/DescribePerDateDataResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Sas_api;
using namespace AlibabaCloud::Sas_api::Model;

DescribePerDateDataResult::DescribePerDateDataResult() :
	ServiceResult()
{}

DescribePerDateDataResult::DescribePerDateDataResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

DescribePerDateDataResult::~DescribePerDateDataResult()
{}

void DescribePerDateDataResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto allDataView = value["DataView"]["dataViewItem"];
	for (auto value : allDataView)
	{
		DataViewItem dataViewObject;
		if(!value["DataTime"].isNull())
			dataViewObject.dataTime = value["DataTime"].asString();
		if(!value["CallTimes"].isNull())
			dataViewObject.callTimes = std::stol(value["CallTimes"].asString());
		if(!value["TotalHit"].isNull())
			dataViewObject.totalHit = std::stol(value["TotalHit"].asString());
		if(!value["HitRate"].isNull())
			dataViewObject.hitRate = std::stol(value["HitRate"].asString());
		if(!value["IsGreyPhone"].isNull())
			dataViewObject.isGreyPhone = std::stol(value["IsGreyPhone"].asString());
		if(!value["IsBlackPhone"].isNull())
			dataViewObject.isBlackPhone = std::stol(value["IsBlackPhone"].asString());
		if(!value["IsVirtualOperator"].isNull())
			dataViewObject.isVirtualOperator = std::stol(value["IsVirtualOperator"].asString());
		if(!value["IsOpenCommonPort1d"].isNull())
			dataViewObject.isOpenCommonPort1d = std::stol(value["IsOpenCommonPort1d"].asString());
		if(!value["IsOpenCommonPort7d"].isNull())
			dataViewObject.isOpenCommonPort7d = std::stol(value["IsOpenCommonPort7d"].asString());
		if(!value["IsOpenCommonPort30d"].isNull())
			dataViewObject.isOpenCommonPort30d = std::stol(value["IsOpenCommonPort30d"].asString());
		if(!value["IsCheatFlow1d"].isNull())
			dataViewObject.isCheatFlow1d = std::stol(value["IsCheatFlow1d"].asString());
		if(!value["IsCheatFlow7d"].isNull())
			dataViewObject.isCheatFlow7d = std::stol(value["IsCheatFlow7d"].asString());
		if(!value["IsCheatFlow30d"].isNull())
			dataViewObject.isCheatFlow30d = std::stol(value["IsCheatFlow30d"].asString());
		if(!value["IsProxy1d"].isNull())
			dataViewObject.isProxy1d = std::stol(value["IsProxy1d"].asString());
		if(!value["IsProxy7d"].isNull())
			dataViewObject.isProxy7d = std::stol(value["IsProxy7d"].asString());
		if(!value["IsProxy30d"].isNull())
			dataViewObject.isProxy30d = std::stol(value["IsProxy30d"].asString());
		if(!value["IsHiJack1d"].isNull())
			dataViewObject.isHiJack1d = std::stol(value["IsHiJack1d"].asString());
		if(!value["IsHiJack7d"].isNull())
			dataViewObject.isHiJack7d = std::stol(value["IsHiJack7d"].asString());
		if(!value["IsHiJack30d"].isNull())
			dataViewObject.isHiJack30d = std::stol(value["IsHiJack30d"].asString());
		if(!value["IsC21d"].isNull())
			dataViewObject.isC21d = std::stol(value["IsC21d"].asString());
		if(!value["IsC27d"].isNull())
			dataViewObject.isC27d = std::stol(value["IsC27d"].asString());
		if(!value["IsC230d"].isNull())
			dataViewObject.isC230d = std::stol(value["IsC230d"].asString());
		if(!value["IsBotnet1d"].isNull())
			dataViewObject.isBotnet1d = std::stol(value["IsBotnet1d"].asString());
		if(!value["IsBotnet7d"].isNull())
			dataViewObject.isBotnet7d = std::stol(value["IsBotnet7d"].asString());
		if(!value["IsBotnet30d"].isNull())
			dataViewObject.isBotnet30d = std::stol(value["IsBotnet30d"].asString());
		if(!value["IsNetAttack1d"].isNull())
			dataViewObject.isNetAttack1d = std::stol(value["IsNetAttack1d"].asString());
		if(!value["IsNetAttack7d"].isNull())
			dataViewObject.isNetAttack7d = std::stol(value["IsNetAttack7d"].asString());
		if(!value["IsNetAttack30d"].isNull())
			dataViewObject.isNetAttack30d = std::stol(value["IsNetAttack30d"].asString());
		if(!value["IsBlackCampaign1d"].isNull())
			dataViewObject.isBlackCampaign1d = std::stol(value["IsBlackCampaign1d"].asString());
		if(!value["IsBlackCampaign7d"].isNull())
			dataViewObject.isBlackCampaign7d = std::stol(value["IsBlackCampaign7d"].asString());
		if(!value["IsBlackCampaign30d"].isNull())
			dataViewObject.isBlackCampaign30d = std::stol(value["IsBlackCampaign30d"].asString());
		dataView_.push_back(dataViewObject);
	}

}

std::vector<DescribePerDateDataResult::DataViewItem> DescribePerDateDataResult::getDataView()const
{
	return dataView_;
}

