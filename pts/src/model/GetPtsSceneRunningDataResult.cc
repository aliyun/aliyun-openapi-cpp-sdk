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

#include <alibabacloud/pts/model/GetPtsSceneRunningDataResult.h>
#include <json/json.h>

using namespace AlibabaCloud::PTS;
using namespace AlibabaCloud::PTS::Model;

GetPtsSceneRunningDataResult::GetPtsSceneRunningDataResult() :
	ServiceResult()
{}

GetPtsSceneRunningDataResult::GetPtsSceneRunningDataResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

GetPtsSceneRunningDataResult::~GetPtsSceneRunningDataResult()
{}

void GetPtsSceneRunningDataResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto allAgentLocationNode = value["AgentLocation"]["Location"];
	for (auto valueAgentLocationLocation : allAgentLocationNode)
	{
		Location agentLocationObject;
		if(!valueAgentLocationLocation["Region"].isNull())
			agentLocationObject.region = valueAgentLocationLocation["Region"].asString();
		if(!valueAgentLocationLocation["Isp"].isNull())
			agentLocationObject.isp = valueAgentLocationLocation["Isp"].asString();
		if(!valueAgentLocationLocation["Count"].isNull())
			agentLocationObject.count = std::stoi(valueAgentLocationLocation["Count"].asString());
		if(!valueAgentLocationLocation["Province"].isNull())
			agentLocationObject.province = valueAgentLocationLocation["Province"].asString();
		agentLocation_.push_back(agentLocationObject);
	}
	auto allChainMonitorDataListNode = value["ChainMonitorDataList"]["ChainMonitorData"];
	for (auto valueChainMonitorDataListChainMonitorData : allChainMonitorDataListNode)
	{
		ChainMonitorData chainMonitorDataListObject;
		if(!valueChainMonitorDataListChainMonitorData["TimePoint"].isNull())
			chainMonitorDataListObject.timePoint = std::stol(valueChainMonitorDataListChainMonitorData["TimePoint"].asString());
		if(!valueChainMonitorDataListChainMonitorData["ApiId"].isNull())
			chainMonitorDataListObject.apiId = valueChainMonitorDataListChainMonitorData["ApiId"].asString();
		if(!valueChainMonitorDataListChainMonitorData["MinRt"].isNull())
			chainMonitorDataListObject.minRt = std::stoi(valueChainMonitorDataListChainMonitorData["MinRt"].asString());
		if(!valueChainMonitorDataListChainMonitorData["Qps2XX"].isNull())
			chainMonitorDataListObject.qps2XX = std::stof(valueChainMonitorDataListChainMonitorData["Qps2XX"].asString());
		if(!valueChainMonitorDataListChainMonitorData["MaxRt"].isNull())
			chainMonitorDataListObject.maxRt = std::stoi(valueChainMonitorDataListChainMonitorData["MaxRt"].asString());
		if(!valueChainMonitorDataListChainMonitorData["ConfigQps"].isNull())
			chainMonitorDataListObject.configQps = std::stoi(valueChainMonitorDataListChainMonitorData["ConfigQps"].asString());
		if(!valueChainMonitorDataListChainMonitorData["FailedCount"].isNull())
			chainMonitorDataListObject.failedCount = std::stol(valueChainMonitorDataListChainMonitorData["FailedCount"].asString());
		if(!valueChainMonitorDataListChainMonitorData["FailedQps"].isNull())
			chainMonitorDataListObject.failedQps = std::stof(valueChainMonitorDataListChainMonitorData["FailedQps"].asString());
		if(!valueChainMonitorDataListChainMonitorData["AverageRt"].isNull())
			chainMonitorDataListObject.averageRt = std::stoi(valueChainMonitorDataListChainMonitorData["AverageRt"].asString());
		if(!valueChainMonitorDataListChainMonitorData["Count2XX"].isNull())
			chainMonitorDataListObject.count2XX = std::stol(valueChainMonitorDataListChainMonitorData["Count2XX"].asString());
		if(!valueChainMonitorDataListChainMonitorData["RealQps"].isNull())
			chainMonitorDataListObject.realQps = std::stof(valueChainMonitorDataListChainMonitorData["RealQps"].asString());
		if(!valueChainMonitorDataListChainMonitorData["ApiName"].isNull())
			chainMonitorDataListObject.apiName = valueChainMonitorDataListChainMonitorData["ApiName"].asString();
		if(!valueChainMonitorDataListChainMonitorData["NodeId"].isNull())
			chainMonitorDataListObject.nodeId = std::stol(valueChainMonitorDataListChainMonitorData["NodeId"].asString());
		if(!valueChainMonitorDataListChainMonitorData["Concurrency"].isNull())
			chainMonitorDataListObject.concurrency = std::stof(valueChainMonitorDataListChainMonitorData["Concurrency"].asString());
		auto checkPointResultNode = value["CheckPointResult"];
		if(!checkPointResultNode["SucceedBusinessCount"].isNull())
			chainMonitorDataListObject.checkPointResult.succeedBusinessCount = std::stol(checkPointResultNode["SucceedBusinessCount"].asString());
		if(!checkPointResultNode["SucceedBusinessQps"].isNull())
			chainMonitorDataListObject.checkPointResult.succeedBusinessQps = std::stof(checkPointResultNode["SucceedBusinessQps"].asString());
		if(!checkPointResultNode["FailedBusinessCount"].isNull())
			chainMonitorDataListObject.checkPointResult.failedBusinessCount = std::stol(checkPointResultNode["FailedBusinessCount"].asString());
		if(!checkPointResultNode["FailedBusinessQps"].isNull())
			chainMonitorDataListObject.checkPointResult.failedBusinessQps = std::stof(checkPointResultNode["FailedBusinessQps"].asString());
		chainMonitorDataList_.push_back(chainMonitorDataListObject);
	}
	if(!value["Status"].isNull())
		status_ = std::stoi(value["Status"].asString());
	if(!value["TotalRequestCount"].isNull())
		totalRequestCount_ = std::stol(value["TotalRequestCount"].asString());
	if(!value["HasReport"].isNull())
		hasReport_ = value["HasReport"].asString() == "true";
	if(!value["ConcurrencyLimit"].isNull())
		concurrencyLimit_ = std::stoi(value["ConcurrencyLimit"].asString());
	if(!value["Message"].isNull())
		message_ = value["Message"].asString();
	if(!value["BeginTime"].isNull())
		beginTime_ = std::stol(value["BeginTime"].asString());
	if(!value["Seg90Rt"].isNull())
		seg90Rt_ = std::stol(value["Seg90Rt"].asString());
	if(!value["ResponseBps"].isNull())
		responseBps_ = value["ResponseBps"].asString();
	if(!value["TotalAgents"].isNull())
		totalAgents_ = std::stoi(value["TotalAgents"].asString());
	if(!value["Code"].isNull())
		code_ = value["Code"].asString();
	if(!value["Success"].isNull())
		success_ = value["Success"].asString() == "true";
	if(!value["Vum"].isNull())
		vum_ = std::stol(value["Vum"].asString());
	if(!value["AverageRt"].isNull())
		averageRt_ = std::stol(value["AverageRt"].asString());
	if(!value["RequestBps"].isNull())
		requestBps_ = value["RequestBps"].asString();
	if(!value["FailedBusinessCount"].isNull())
		failedBusinessCount_ = std::stol(value["FailedBusinessCount"].asString());
	if(!value["Concurrency"].isNull())
		concurrency_ = std::stoi(value["Concurrency"].asString());
	if(!value["HttpStatusCode"].isNull())
		httpStatusCode_ = std::stoi(value["HttpStatusCode"].asString());
	if(!value["FailedRequestCount"].isNull())
		failedRequestCount_ = std::stol(value["FailedRequestCount"].asString());
	if(!value["TpsLimit"].isNull())
		tpsLimit_ = std::stoi(value["TpsLimit"].asString());
	if(!value["AliveAgents"].isNull())
		aliveAgents_ = std::stoi(value["AliveAgents"].asString());
	if(!value["TotalRealQps"].isNull())
		totalRealQps_ = std::stoi(value["TotalRealQps"].asString());

}

int GetPtsSceneRunningDataResult::getStatus()const
{
	return status_;
}

long GetPtsSceneRunningDataResult::getTotalRequestCount()const
{
	return totalRequestCount_;
}

bool GetPtsSceneRunningDataResult::getHasReport()const
{
	return hasReport_;
}

int GetPtsSceneRunningDataResult::getConcurrencyLimit()const
{
	return concurrencyLimit_;
}

std::string GetPtsSceneRunningDataResult::getMessage()const
{
	return message_;
}

std::vector<GetPtsSceneRunningDataResult::Location> GetPtsSceneRunningDataResult::getAgentLocation()const
{
	return agentLocation_;
}

long GetPtsSceneRunningDataResult::getBeginTime()const
{
	return beginTime_;
}

long GetPtsSceneRunningDataResult::getSeg90Rt()const
{
	return seg90Rt_;
}

std::string GetPtsSceneRunningDataResult::getResponseBps()const
{
	return responseBps_;
}

int GetPtsSceneRunningDataResult::getTotalAgents()const
{
	return totalAgents_;
}

std::string GetPtsSceneRunningDataResult::getCode()const
{
	return code_;
}

bool GetPtsSceneRunningDataResult::getSuccess()const
{
	return success_;
}

long GetPtsSceneRunningDataResult::getVum()const
{
	return vum_;
}

std::vector<GetPtsSceneRunningDataResult::ChainMonitorData> GetPtsSceneRunningDataResult::getChainMonitorDataList()const
{
	return chainMonitorDataList_;
}

long GetPtsSceneRunningDataResult::getAverageRt()const
{
	return averageRt_;
}

std::string GetPtsSceneRunningDataResult::getRequestBps()const
{
	return requestBps_;
}

long GetPtsSceneRunningDataResult::getFailedBusinessCount()const
{
	return failedBusinessCount_;
}

int GetPtsSceneRunningDataResult::getConcurrency()const
{
	return concurrency_;
}

int GetPtsSceneRunningDataResult::getHttpStatusCode()const
{
	return httpStatusCode_;
}

int GetPtsSceneRunningDataResult::getTotalRealQps()const
{
	return totalRealQps_;
}

long GetPtsSceneRunningDataResult::getFailedRequestCount()const
{
	return failedRequestCount_;
}

int GetPtsSceneRunningDataResult::getTpsLimit()const
{
	return tpsLimit_;
}

int GetPtsSceneRunningDataResult::getAliveAgents()const
{
	return aliveAgents_;
}

