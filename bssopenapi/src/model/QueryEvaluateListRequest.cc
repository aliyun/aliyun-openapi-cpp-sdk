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

#include <alibabacloud/bssopenapi/model/QueryEvaluateListRequest.h>

using AlibabaCloud::BssOpenApi::Model::QueryEvaluateListRequest;

QueryEvaluateListRequest::QueryEvaluateListRequest() :
	RpcServiceRequest("bssopenapi", "2017-12-14", "QueryEvaluateList")
{
	setMethod(HttpRequest::Method::Post);
}

QueryEvaluateListRequest::~QueryEvaluateListRequest()
{}

std::string QueryEvaluateListRequest::getEndSearchTime()const
{
	return endSearchTime_;
}

void QueryEvaluateListRequest::setEndSearchTime(const std::string& endSearchTime)
{
	endSearchTime_ = endSearchTime;
	setCoreParameter("EndSearchTime", endSearchTime);
}

std::string QueryEvaluateListRequest::getOutBizId()const
{
	return outBizId_;
}

void QueryEvaluateListRequest::setOutBizId(const std::string& outBizId)
{
	outBizId_ = outBizId;
	setCoreParameter("OutBizId", outBizId);
}

int QueryEvaluateListRequest::getSortType()const
{
	return sortType_;
}

void QueryEvaluateListRequest::setSortType(int sortType)
{
	sortType_ = sortType;
	setCoreParameter("SortType", std::to_string(sortType));
}

int QueryEvaluateListRequest::getType()const
{
	return type_;
}

void QueryEvaluateListRequest::setType(int type)
{
	type_ = type;
	setCoreParameter("Type", std::to_string(type));
}

int QueryEvaluateListRequest::getPageNum()const
{
	return pageNum_;
}

void QueryEvaluateListRequest::setPageNum(int pageNum)
{
	pageNum_ = pageNum;
	setCoreParameter("PageNum", std::to_string(pageNum));
}

int QueryEvaluateListRequest::getPageSize()const
{
	return pageSize_;
}

void QueryEvaluateListRequest::setPageSize(int pageSize)
{
	pageSize_ = pageSize;
	setCoreParameter("PageSize", std::to_string(pageSize));
}

long QueryEvaluateListRequest::getEndAmount()const
{
	return endAmount_;
}

void QueryEvaluateListRequest::setEndAmount(long endAmount)
{
	endAmount_ = endAmount;
	setCoreParameter("EndAmount", std::to_string(endAmount));
}

std::string QueryEvaluateListRequest::getBillCycle()const
{
	return billCycle_;
}

void QueryEvaluateListRequest::setBillCycle(const std::string& billCycle)
{
	billCycle_ = billCycle;
	setCoreParameter("BillCycle", billCycle);
}

std::vector<std::string> QueryEvaluateListRequest::getBizTypeList()const
{
	return bizTypeList_;
}

void QueryEvaluateListRequest::setBizTypeList(const std::vector<std::string>& bizTypeList)
{
	bizTypeList_ = bizTypeList;
	for(int dep1 = 0; dep1!= bizTypeList.size(); dep1++) {
		setCoreParameter("BizTypeList."+ std::to_string(dep1), bizTypeList.at(dep1));
	}
}

long QueryEvaluateListRequest::getOwnerId()const
{
	return ownerId_;
}

void QueryEvaluateListRequest::setOwnerId(long ownerId)
{
	ownerId_ = ownerId;
	setCoreParameter("OwnerId", std::to_string(ownerId));
}

std::string QueryEvaluateListRequest::getStartSearchTime()const
{
	return startSearchTime_;
}

void QueryEvaluateListRequest::setStartSearchTime(const std::string& startSearchTime)
{
	startSearchTime_ = startSearchTime;
	setCoreParameter("StartSearchTime", startSearchTime);
}

std::string QueryEvaluateListRequest::getEndBizTime()const
{
	return endBizTime_;
}

void QueryEvaluateListRequest::setEndBizTime(const std::string& endBizTime)
{
	endBizTime_ = endBizTime;
	setCoreParameter("EndBizTime", endBizTime);
}

long QueryEvaluateListRequest::getStartAmount()const
{
	return startAmount_;
}

void QueryEvaluateListRequest::setStartAmount(long startAmount)
{
	startAmount_ = startAmount;
	setCoreParameter("StartAmount", std::to_string(startAmount));
}

std::string QueryEvaluateListRequest::getStartBizTime()const
{
	return startBizTime_;
}

void QueryEvaluateListRequest::setStartBizTime(const std::string& startBizTime)
{
	startBizTime_ = startBizTime;
	setCoreParameter("StartBizTime", startBizTime);
}

