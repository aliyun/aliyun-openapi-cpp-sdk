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

#include <alibabacloud/arms/model/GetCommercialStatusResult.h>
#include <json/json.h>

using namespace AlibabaCloud::ARMS;
using namespace AlibabaCloud::ARMS::Model;

GetCommercialStatusResult::GetCommercialStatusResult() :
	ServiceResult()
{}

GetCommercialStatusResult::GetCommercialStatusResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

GetCommercialStatusResult::~GetCommercialStatusResult()
{}

void GetCommercialStatusResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto userAndCommodityStatusNode = value["UserAndCommodityStatus"];
	if(!userAndCommodityStatusNode["Status"].isNull())
		userAndCommodityStatus_.status = userAndCommodityStatusNode["Status"].asString();
	if(!userAndCommodityStatusNode["FreeDays"].isNull())
		userAndCommodityStatus_.freeDays = std::stol(userAndCommodityStatusNode["FreeDays"].asString());
	if(!userAndCommodityStatusNode["Basic"].isNull())
		userAndCommodityStatus_.basic = userAndCommodityStatusNode["Basic"].asString() == "true";
	if(!userAndCommodityStatusNode["ChargeType"].isNull())
		userAndCommodityStatus_.chargeType = userAndCommodityStatusNode["ChargeType"].asString();
	if(!userAndCommodityStatusNode["Lable"].isNull())
		userAndCommodityStatus_.lable = userAndCommodityStatusNode["Lable"].asString();
	if(!userAndCommodityStatusNode["ExtraInfo"].isNull())
		userAndCommodityStatus_.extraInfo = userAndCommodityStatusNode["ExtraInfo"].asString();
	if(!userAndCommodityStatusNode["Enable"].isNull())
		userAndCommodityStatus_.enable = userAndCommodityStatusNode["Enable"].asString() == "true";

}

GetCommercialStatusResult::UserAndCommodityStatus GetCommercialStatusResult::getUserAndCommodityStatus()const
{
	return userAndCommodityStatus_;
}

