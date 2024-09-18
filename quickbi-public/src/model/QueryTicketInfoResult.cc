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

#include <alibabacloud/quickbi-public/model/QueryTicketInfoResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Quickbi_public;
using namespace AlibabaCloud::Quickbi_public::Model;

QueryTicketInfoResult::QueryTicketInfoResult() :
	ServiceResult()
{}

QueryTicketInfoResult::QueryTicketInfoResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

QueryTicketInfoResult::~QueryTicketInfoResult()
{}

void QueryTicketInfoResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto resultNode = value["Result"];
	if(!resultNode["AccessTicket"].isNull())
		result_.accessTicket = resultNode["AccessTicket"].asString();
	if(!resultNode["CmptId"].isNull())
		result_.cmptId = resultNode["CmptId"].asString();
	if(!resultNode["GlobalParam"].isNull())
		result_.globalParam = resultNode["GlobalParam"].asString();
	if(!resultNode["InvalidTime"].isNull())
		result_.invalidTime = resultNode["InvalidTime"].asString();
	if(!resultNode["MaxTicketNum"].isNull())
		result_.maxTicketNum = std::stoi(resultNode["MaxTicketNum"].asString());
	if(!resultNode["OrganizationId"].isNull())
		result_.organizationId = resultNode["OrganizationId"].asString();
	if(!resultNode["RegisterTime"].isNull())
		result_.registerTime = resultNode["RegisterTime"].asString();
	if(!resultNode["UsedTicketNum"].isNull())
		result_.usedTicketNum = std::stoi(resultNode["UsedTicketNum"].asString());
	if(!resultNode["UserId"].isNull())
		result_.userId = resultNode["UserId"].asString();
	if(!resultNode["WatermarkParam"].isNull())
		result_.watermarkParam = resultNode["WatermarkParam"].asString();
	if(!resultNode["WorksId"].isNull())
		result_.worksId = resultNode["WorksId"].asString();
	if(!value["Success"].isNull())
		success_ = value["Success"].asString() == "true";

}

bool QueryTicketInfoResult::getSuccess()const
{
	return success_;
}

QueryTicketInfoResult::Result QueryTicketInfoResult::getResult()const
{
	return result_;
}

