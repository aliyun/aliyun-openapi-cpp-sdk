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

#include <alibabacloud/appmallsservice/model/TaobaoFilmIssueOrderResult.h>
#include <json/json.h>

using namespace AlibabaCloud::AppMallsService;
using namespace AlibabaCloud::AppMallsService::Model;

TaobaoFilmIssueOrderResult::TaobaoFilmIssueOrderResult() :
	ServiceResult()
{}

TaobaoFilmIssueOrderResult::TaobaoFilmIssueOrderResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

TaobaoFilmIssueOrderResult::~TaobaoFilmIssueOrderResult()
{}

void TaobaoFilmIssueOrderResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	if(!value["ErrorCode"].isNull())
		errorCode_ = value["ErrorCode"].asString();
	if(!value["Msg"].isNull())
		msg_ = value["Msg"].asString();
	if(!value["SubCode"].isNull())
		subCode_ = value["SubCode"].asString();
	if(!value["SubMsg"].isNull())
		subMsg_ = value["SubMsg"].asString();
	if(!value["Message"].isNull())
		message_ = value["Message"].asString();
	if(!value["Status"].isNull())
		status_ = value["Status"].asString();
	if(!value["TbOrderId"].isNull())
		tbOrderId_ = value["TbOrderId"].asString();
	if(!value["TicketContents"].isNull())
		ticketContents_ = value["TicketContents"].asString();
	if(!value["LogsId"].isNull())
		logsId_ = value["LogsId"].asString();

}

std::string TaobaoFilmIssueOrderResult::getMsg()const
{
	return msg_;
}

std::string TaobaoFilmIssueOrderResult::getStatus()const
{
	return status_;
}

std::string TaobaoFilmIssueOrderResult::getSubMsg()const
{
	return subMsg_;
}

std::string TaobaoFilmIssueOrderResult::getMessage()const
{
	return message_;
}

std::string TaobaoFilmIssueOrderResult::getTicketContents()const
{
	return ticketContents_;
}

std::string TaobaoFilmIssueOrderResult::getTbOrderId()const
{
	return tbOrderId_;
}

std::string TaobaoFilmIssueOrderResult::getLogsId()const
{
	return logsId_;
}

std::string TaobaoFilmIssueOrderResult::getErrorCode()const
{
	return errorCode_;
}

std::string TaobaoFilmIssueOrderResult::getSubCode()const
{
	return subCode_;
}

