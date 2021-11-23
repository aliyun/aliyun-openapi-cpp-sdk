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

#ifndef ALIBABACLOUD_ONS_MODEL_ONSTRACEGETRESULTRESULT_H_
#define ALIBABACLOUD_ONS_MODEL_ONSTRACEGETRESULTRESULT_H_

#include <string>
#include <vector>
#include <utility>
#include <alibabacloud/core/ServiceResult.h>
#include <alibabacloud/ons/OnsExport.h>

namespace AlibabaCloud
{
	namespace Ons
	{
		namespace Model
		{
			class ALIBABACLOUD_ONS_EXPORT OnsTraceGetResultResult : public ServiceResult
			{
			public:
				struct TraceData
				{
					struct TraceMapDo
					{
						struct SubMapDo
						{
							struct SubClientInfoDo
							{
								std::string status;
								int costTime;
								std::string clientHost;
								long subTime;
								std::string subGroupName;
								int reconsumeTimes;
							};
							int failCount;
							std::string subGroupName;
							int successCount;
							std::vector<SubMapDo::SubClientInfoDo> clientList;
						};
						std::string status;
						int costTime;
						std::string msgKey;
						std::vector<TraceMapDo::SubMapDo> subList;
						std::string tag;
						std::string bornHost;
						long pubTime;
						std::string topic;
						std::string pubGroupName;
						std::string msgId;
					};
					std::string status;
					std::string instanceId;
					std::string userId;
					std::string msgKey;
					long createTime;
					std::string queryId;
					long updateTime;
					std::vector<TraceMapDo> traceList;
					std::string topic;
					std::string msgId;
				};


				OnsTraceGetResultResult();
				explicit OnsTraceGetResultResult(const std::string &payload);
				~OnsTraceGetResultResult();
				TraceData getTraceData()const;
				std::string getHelpUrl()const;

			protected:
				void parse(const std::string &payload);
			private:
				TraceData traceData_;
				std::string helpUrl_;

			};
		}
	}
}
#endif // !ALIBABACLOUD_ONS_MODEL_ONSTRACEGETRESULTRESULT_H_