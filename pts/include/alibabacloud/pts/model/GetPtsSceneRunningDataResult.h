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

#ifndef ALIBABACLOUD_PTS_MODEL_GETPTSSCENERUNNINGDATARESULT_H_
#define ALIBABACLOUD_PTS_MODEL_GETPTSSCENERUNNINGDATARESULT_H_

#include <string>
#include <vector>
#include <utility>
#include <alibabacloud/core/ServiceResult.h>
#include <alibabacloud/pts/PTSExport.h>

namespace AlibabaCloud
{
	namespace PTS
	{
		namespace Model
		{
			class ALIBABACLOUD_PTS_EXPORT GetPtsSceneRunningDataResult : public ServiceResult
			{
			public:
				struct Location
				{
					std::string isp;
					std::string region;
					int count;
					std::string province;
				};
				struct ChainMonitorData
				{
					struct CheckPointResult
					{
						long failedBusinessCount;
						float failedBusinessQps;
						float succeedBusinessQps;
						long succeedBusinessCount;
					};
					CheckPointResult checkPointResult;
					std::string apiName;
					long timePoint;
					float qps2XX;
					int maxRt;
					int configQps;
					long count2XX;
					int averageRt;
					float concurrency;
					float failedQps;
					float realQps;
					long nodeId;
					long failedCount;
					int minRt;
					std::string apiId;
				};


				GetPtsSceneRunningDataResult();
				explicit GetPtsSceneRunningDataResult(const std::string &payload);
				~GetPtsSceneRunningDataResult();
				int getStatus()const;
				long getTotalRequestCount()const;
				bool getHasReport()const;
				int getConcurrencyLimit()const;
				std::string getMessage()const;
				std::vector<Location> getAgentLocation()const;
				long getBeginTime()const;
				long getSeg90Rt()const;
				std::string getResponseBps()const;
				int getTotalAgents()const;
				std::string getCode()const;
				bool getSuccess()const;
				long getVum()const;
				std::vector<ChainMonitorData> getChainMonitorDataList()const;
				long getAverageRt()const;
				std::string getRequestBps()const;
				long getFailedBusinessCount()const;
				int getConcurrency()const;
				int getHttpStatusCode()const;
				int getTotalRealQps()const;
				long getFailedRequestCount()const;
				int getTpsLimit()const;
				int getAliveAgents()const;

			protected:
				void parse(const std::string &payload);
			private:
				int status_;
				long totalRequestCount_;
				bool hasReport_;
				int concurrencyLimit_;
				std::string message_;
				std::vector<Location> agentLocation_;
				long beginTime_;
				long seg90Rt_;
				std::string responseBps_;
				int totalAgents_;
				std::string code_;
				bool success_;
				long vum_;
				std::vector<ChainMonitorData> chainMonitorDataList_;
				long averageRt_;
				std::string requestBps_;
				long failedBusinessCount_;
				int concurrency_;
				int httpStatusCode_;
				int totalRealQps_;
				long failedRequestCount_;
				int tpsLimit_;
				int aliveAgents_;

			};
		}
	}
}
#endif // !ALIBABACLOUD_PTS_MODEL_GETPTSSCENERUNNINGDATARESULT_H_