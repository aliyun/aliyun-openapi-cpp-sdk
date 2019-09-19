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
	auto allDataViewNode = value["DataView"]["dataViewItem"];
	for (auto valueDataViewdataViewItem : allDataViewNode)
	{
		DataViewItem dataViewObject;
		if(!valueDataViewdataViewItem["DataTime"].isNull())
			dataViewObject.dataTime = valueDataViewdataViewItem["DataTime"].asString();
		if(!valueDataViewdataViewItem["CallTimes"].isNull())
			dataViewObject.callTimes = std::stol(valueDataViewdataViewItem["CallTimes"].asString());
		if(!valueDataViewdataViewItem["TotalHit"].isNull())
			dataViewObject.totalHit = std::stol(valueDataViewdataViewItem["TotalHit"].asString());
		if(!valueDataViewdataViewItem["HitRate"].isNull())
			dataViewObject.hitRate = std::stol(valueDataViewdataViewItem["HitRate"].asString());
		if(!valueDataViewdataViewItem["IsGreyPhone"].isNull())
			dataViewObject.isGreyPhone = std::stol(valueDataViewdataViewItem["IsGreyPhone"].asString());
		if(!valueDataViewdataViewItem["IsBlackPhone"].isNull())
			dataViewObject.isBlackPhone = std::stol(valueDataViewdataViewItem["IsBlackPhone"].asString());
		if(!valueDataViewdataViewItem["IsVirtualOperator"].isNull())
			dataViewObject.isVirtualOperator = std::stol(valueDataViewdataViewItem["IsVirtualOperator"].asString());
		if(!valueDataViewdataViewItem["IsOpenCommonPort1d"].isNull())
			dataViewObject.isOpenCommonPort1d = std::stol(valueDataViewdataViewItem["IsOpenCommonPort1d"].asString());
		if(!valueDataViewdataViewItem["IsOpenCommonPort7d"].isNull())
			dataViewObject.isOpenCommonPort7d = std::stol(valueDataViewdataViewItem["IsOpenCommonPort7d"].asString());
		if(!valueDataViewdataViewItem["IsOpenCommonPort30d"].isNull())
			dataViewObject.isOpenCommonPort30d = std::stol(valueDataViewdataViewItem["IsOpenCommonPort30d"].asString());
		if(!valueDataViewdataViewItem["IsCheatFlow1d"].isNull())
			dataViewObject.isCheatFlow1d = std::stol(valueDataViewdataViewItem["IsCheatFlow1d"].asString());
		if(!valueDataViewdataViewItem["IsCheatFlow7d"].isNull())
			dataViewObject.isCheatFlow7d = std::stol(valueDataViewdataViewItem["IsCheatFlow7d"].asString());
		if(!valueDataViewdataViewItem["IsCheatFlow30d"].isNull())
			dataViewObject.isCheatFlow30d = std::stol(valueDataViewdataViewItem["IsCheatFlow30d"].asString());
		if(!valueDataViewdataViewItem["IsProxy1d"].isNull())
			dataViewObject.isProxy1d = std::stol(valueDataViewdataViewItem["IsProxy1d"].asString());
		if(!valueDataViewdataViewItem["IsProxy7d"].isNull())
			dataViewObject.isProxy7d = std::stol(valueDataViewdataViewItem["IsProxy7d"].asString());
		if(!valueDataViewdataViewItem["IsProxy30d"].isNull())
			dataViewObject.isProxy30d = std::stol(valueDataViewdataViewItem["IsProxy30d"].asString());
		if(!valueDataViewdataViewItem["IsHiJack1d"].isNull())
			dataViewObject.isHiJack1d = std::stol(valueDataViewdataViewItem["IsHiJack1d"].asString());
		if(!valueDataViewdataViewItem["IsHiJack7d"].isNull())
			dataViewObject.isHiJack7d = std::stol(valueDataViewdataViewItem["IsHiJack7d"].asString());
		if(!valueDataViewdataViewItem["IsHiJack30d"].isNull())
			dataViewObject.isHiJack30d = std::stol(valueDataViewdataViewItem["IsHiJack30d"].asString());
		if(!valueDataViewdataViewItem["IsC21d"].isNull())
			dataViewObject.isC21d = std::stol(valueDataViewdataViewItem["IsC21d"].asString());
		if(!valueDataViewdataViewItem["IsC27d"].isNull())
			dataViewObject.isC27d = std::stol(valueDataViewdataViewItem["IsC27d"].asString());
		if(!valueDataViewdataViewItem["IsC230d"].isNull())
			dataViewObject.isC230d = std::stol(valueDataViewdataViewItem["IsC230d"].asString());
		if(!valueDataViewdataViewItem["IsBotnet1d"].isNull())
			dataViewObject.isBotnet1d = std::stol(valueDataViewdataViewItem["IsBotnet1d"].asString());
		if(!valueDataViewdataViewItem["IsBotnet7d"].isNull())
			dataViewObject.isBotnet7d = std::stol(valueDataViewdataViewItem["IsBotnet7d"].asString());
		if(!valueDataViewdataViewItem["IsBotnet30d"].isNull())
			dataViewObject.isBotnet30d = std::stol(valueDataViewdataViewItem["IsBotnet30d"].asString());
		if(!valueDataViewdataViewItem["IsNetAttack1d"].isNull())
			dataViewObject.isNetAttack1d = std::stol(valueDataViewdataViewItem["IsNetAttack1d"].asString());
		if(!valueDataViewdataViewItem["IsNetAttack7d"].isNull())
			dataViewObject.isNetAttack7d = std::stol(valueDataViewdataViewItem["IsNetAttack7d"].asString());
		if(!valueDataViewdataViewItem["IsNetAttack30d"].isNull())
			dataViewObject.isNetAttack30d = std::stol(valueDataViewdataViewItem["IsNetAttack30d"].asString());
		if(!valueDataViewdataViewItem["IsBlackCampaign1d"].isNull())
			dataViewObject.isBlackCampaign1d = std::stol(valueDataViewdataViewItem["IsBlackCampaign1d"].asString());
		if(!valueDataViewdataViewItem["IsBlackCampaign7d"].isNull())
			dataViewObject.isBlackCampaign7d = std::stol(valueDataViewdataViewItem["IsBlackCampaign7d"].asString());
		if(!valueDataViewdataViewItem["IsBlackCampaign30d"].isNull())
			dataViewObject.isBlackCampaign30d = std::stol(valueDataViewdataViewItem["IsBlackCampaign30d"].asString());
		dataView_.push_back(dataViewObject);
	}

}

std::vector<DescribePerDateDataResult::DataViewItem> DescribePerDateDataResult::getDataView()const
{
	return dataView_;
}

